//-----------------------------------------------------------------------------
// Title       : FT2232H Async FIFO
// Design      : afifo_fifoIf
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------

`ifdef _VCP
`else
`define library(a,b)
`endif


// ---------- Design Unit Header ---------- //
`timescale 1ps / 1ps

module afifo_loopback (clk_24,ft_rxf_n,ft_txe_n,reset_i_n,ft_rd_n,ft_wr_n,ft_data,SD1,CLK_MCLK,CLK_SCK,CLK_WS,validate) ;

// ------------ Port declarations --------- //
input clk_24;
wire clk_24;
input ft_rxf_n;
wire ft_rxf_n;
input ft_txe_n;
wire ft_txe_n;
input reset_i_n;
wire reset_i_n;
output ft_rd_n;
wire ft_rd_n;
output ft_wr_n;
wire ft_wr_n;
inout [7:0] ft_data;
wire [7:0] ft_data;
input SD1;
output CLK_MCLK;
input CLK_SCK,CLK_WS;
output validate;
// ----------- Signal declarations -------- //
wire clk_pll;
wire reset;
wire reset_n;
wire rst_in;
wire rx_empty;
wire rx_rd;
wire tx_full;
wire tx_wr;
wire [7:0] rx_dout;
wire [7:0] tx_data;
wire	CLK_MCLK,CLK_SCK,CLK_WS;
// -------- Component instantiations -------//

pll U3
(
	.CLK_IN1(clk_24),
	.CLK_OUT1(clk_pll),
	.LOCKED(reset_n),
	.RESET(rst_in)
);



assign rst_in = ~(reset_i_n);


assign reset = ~(reset_n);


afifo afifo_i
(
	.clk(clk_pll),
	.data(ft_data),
	.fifo_read_dout(rx_dout),
	.fifo_read_empty(rx_empty),
	.fifo_read_rd_en(1'b0),
	.fifo_write_din(tx_data),
	.fifo_write_full(tx_full),
	.fifo_write_wr_en(tx_wr),
	.rd_n(ft_rd_n),
	.rst(reset),
	.rxf_n(ft_rxf_n),
	.txe_n(ft_txe_n),
	.wr_n(ft_wr_n)
);



//looper looper_i
//(
//	.clk_pll(clk_pll),
//	.reset_n(reset_n),
//	.rx_dout(rx_dout),
//	.rx_empty(rx_empty),
//	.rx_rd(rx_rd),
//	.tx_data(tx_data),
//	.tx_full(tx_full),
//	.tx_wr(tx_wr)
//);
wire CLK_SCK_tmp;
reg CLK_SCK_reg=0;
adc_clk_gen instance_name
(// Clock in ports
 .CLK_IN1(clk_24),      // IN
 // Clock out ports
 .CLK_MCLK(CLK_MCLK),     // OUT
 .CLK_SCK(CLK_SCK_tmp)); // OUT

//always@(posedge CLK_SCK_tmp)	CLK_SCK_reg=~CLK_SCK_reg;
//assign CLK_SCK=CLK_SCK_reg; 
//divider_ws uut00 (
//			.clk_sck(CLK_SCK),
//			.clk_ws(CLK_WS));

wire [63:0]fifo_din;
data_to_byte uut0 (
			.clk_pll(clk_pll),
			.wr_clk(CLK_WS),
			.fifo_din(fifo_din),
			.ftdi_full(tx_full),
			.ftdi_wr_en(tx_wr),
			.ftdi_data(tx_data));

//reg [23:0] temp1=24'h000000,temp2=24'hffffff;

//always@(posedge CLK_WS)	begin
//	fifo_din<={8'h00,temp1,8'h01,temp2};
//	temp1<=temp1+1;
//	temp2<=temp2-1;
//end
assign MCLK=CLK_MCLK;
assign SCK=CLK_SCK;
assign LRCLK=CLK_WS;

//wire fifo_din_wire;
//always@(posedge clk_24)	fifo_din<=fifo_din_wire;			
ADC_read uut1 (
			.MCLK(MCLK),
			.SCK(SCK),
			.LRCLK(LRCLK),
			.SD(SD1),
			.data_valid(validate),
			.data_trans(fifo_din));
			

endmodule 
