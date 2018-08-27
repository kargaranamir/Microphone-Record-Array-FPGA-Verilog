`timescale 1ns / 1ps

module data_to_byte_testbench;

	// Inputs
	reg clk_pll=0;
	always	#5 clk_pll<=~clk_pll;
	reg reset_n=1'b1;

	//fifo inputs
	reg wr_clk=0;
	always	#11337.87 wr_clk<=~wr_clk;
	reg [63:0] din;
	reg wr_en=1'b1;
	wire [7:0]dout;
	wire full,empty;
	reg rd_en;
	// Instantiate the Unit Under Test (UUT)
data_fifo your_instance_name (
  .wr_clk(wr_clk), // input wr_clk
  .rd_clk(clk_pll), // input rd_clk
  .din(din), // input [63 : 0] din
  .wr_en(1'b1), // input wr_en
  .rd_en(rd_en), // input rd_en
  .dout(dout), // output [7 : 0] dout
  .full(full), // output full
  .empty(empty) // output empty
);
always@(posedge clk_pll)	begin
	if(full | empty)	rd_en<=1'b0;
	else	rd_en<=1'b1;
end

reg [63:0] temp=64'haffaaffaaffaaffa;
always@(posedge wr_clk)	begin
	din<=temp;
	temp<=temp+1;
end

endmodule

