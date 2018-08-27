`define IQMSB 7

module iqmod_tb;

	reg reset = 0;
	initial begin
		$dumpvars;

		clock = 1;
		
		in_i = 0;
		in_q = 127;

		#400 $finish;
	end

	reg clock = 0;
	always #1 clock = !clock;
	
	reg  [7:0] in_i;
	reg  [7:0] in_q;
	wire [9:0] out_dac;


	iqmod myiqmod (out_dac,in_i,in_q,clock);

endmodule
