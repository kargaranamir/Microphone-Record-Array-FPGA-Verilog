`timescale 1ns / 1ps

module fifo_testbench;

	// Inputs
	reg clk_pll=0;
	always	#5 clk_pll<=~clk_pll;
	reg wr_clk=0;
	always	#11337.87 wr_clk<=~wr_clk;
	reg [63:0] fifo_din;
	reg ftdi_full=1'b0;

	// Outputs
	wire ftdi_wr_en;
	wire [7:0] ftdi_data;

	// Instantiate the Unit Under Test (UUT)
	data_to_byte uut (
		.clk_pll(clk_pll), 
		.wr_clk(wr_clk), 
		.fifo_din(fifo_din), 
		.ftdi_full(ftdi_full), 
		.ftdi_wr_en(ftdi_wr_en), 
		.ftdi_data(ftdi_data)
	);

reg [63:0] temp=64'haffaaffaaffaaffa;
always@(posedge wr_clk)	begin
	fifo_din<=temp;
	temp<=temp+1;
end

      
endmodule

