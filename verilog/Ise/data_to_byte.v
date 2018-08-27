`timescale 1ns / 1ps

module data_to_byte(clk_pll,wr_clk,fifo_din,ftdi_full,ftdi_wr_en,ftdi_data);
input      	clk_pll;
input      	wr_clk;
input      	[63:0] fifo_din;
input			ftdi_full;
output     	ftdi_wr_en;
output     	[7:0] ftdi_data;

wire        clk_pll;
wire			wr_clk;
wire        [63:0] fifo_din;
wire			ftdi_full;
wire         [7:0] ftdi_data;
reg         ftdi_wr_en;
reg			wr_en,rd_en;
wire			full,empty;

data_fifo data_byte_uut (
  .wr_clk(wr_clk), // input wr_clk
  .rd_clk(clk_pll), // input rd_clk
  .din(fifo_din), // input [63 : 0] din
  .wr_en(wr_en), // input wr_en
  .rd_en(rd_en), // input rd_en
  .dout(ftdi_data), // output [7 : 0] dout
  .full(full), // output full
  .empty(empty) // output empty
);

always@(posedge clk_pll)	begin
	if(full)	wr_en<=1'b0;
	else	wr_en<=1'b1;
	
	if(empty | ftdi_full)	begin
		rd_en<=1'b0;
		ftdi_wr_en<=1'b0;
	end
	else	begin
		rd_en<=1'b1;
		ftdi_wr_en<=1'b1;
	end
end
		
	

endmodule
