`timescale 1ns / 1ps

module ADC_read(
input MCLK,SCK,LRCLK,SD,
output reg data_valid=1,
output reg [63:0]data_trans);

assign WS=LRCLK;


/* generate WSD and WSP Signal from SDK and WS */
reg WSD,WSDD;
always@(posedge SCK)	WSD<=WS;
always@(posedge SCK)	WSDD<=WSD;
assign WSP=WSD^WSDD;

/* generate EN signal for data registers */
reg [23:0]EN=0;
always@(posedge SCK or posedge WSP)	begin
	if(WSP)	EN<=24'h800000;
	else	EN<=EN>>1;
end

/* receive data from SD signal MSB first */
reg [23:0]data_temp=24'h000000;
always@(posedge SCK)	begin
	case (EN)
		24'h800000:	data_temp[23]<=SD;
		24'h400000:	data_temp[22]<=SD;
		24'h200000:	data_temp[21]<=SD;
		24'h100000:	data_temp[20]<=SD;
		24'h080000:	data_temp[19]<=SD;
		24'h040000:	data_temp[18]<=SD;
		24'h020000:	data_temp[17]<=SD;
		24'h010000:	data_temp[16]<=SD;
		24'h008000:	data_temp[15]<=SD;
		24'h004000:	data_temp[14]<=SD;
		24'h002000:	data_temp[13]<=SD;
		24'h001000:	data_temp[12]<=SD;
		24'h000800:	data_temp[11]<=SD;
		24'h000400:	data_temp[10]<=SD;
		24'h000200:	data_temp[9]<=SD;
		24'h000100:	data_temp[8]<=SD;
		24'h000080:	data_temp[7]<=SD;
		24'h000040:	data_temp[6]<=SD;
		24'h000020:	data_temp[5]<=SD;
		24'h000010:	data_temp[4]<=SD;
		24'h000008:	data_temp[3]<=SD;
		24'h000004:	data_temp[2]<=SD;
		24'h000002:	data_temp[1]<=SD;
		24'h000001:	begin
							data_temp[0]<=SD;
							data_valid<=1'b1;
						end
		default:	begin	
							data_temp<=data_temp;//24'h000000;
							data_valid<=1'b0;
					end
	endcase
end

/* recognizing right and left data */
reg [31:0] data_left=0,data_right=0;

always@(posedge SCK)	begin
	/* concatenate mic NO. befor its data */
	if(data_valid)	begin
	if(WS)	data_left<={8'h01,data_temp};
	if(!WS)	data_right<={8'h00,data_temp};
	data_trans<={data_right,data_left};
	end
end	
	 

endmodule
