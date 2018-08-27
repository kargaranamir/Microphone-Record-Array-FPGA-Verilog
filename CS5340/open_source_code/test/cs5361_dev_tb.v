module cs5361_dev_tb;

	initial begin
		$dumpvars;

		clock=1;
		#3000 $finish;
	end

	reg clock;
	reg reset=1;
	reg masterslave=1;
	reg masterdiv=0;
	reg highpass=0;
	reg i2s_lj_=0;
	reg mode0=0;
	reg mode1=0;

	always #1 clock = !clock;

	wire lrck;
	wire sclk;
	wire sdata;
	wire ovfl_;

	cs5361_dev adc0(lrck,sclk,sdata,ovfl_,clock,reset,masterslave,masterdiv,highpass,mode0,mode1);

endmodule
