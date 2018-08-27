`timescale 1 ns / 100 ps

module cs5361_tb;

	initial begin
		$dumpvars;

		clock=1;
		#10 reset=1;
		#3000 $finish;
	end

	reg clock;
	reg reset=0;
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

	wire [7:0] adcval;
	wire adcstrobe;

	cs5361_dev adcdev0 ( 
		.lrck(lrck),
		.sclk(sclk),
		.sdata(sdata),
		.ovfl_(ovfl_),
		.mclk(clock),
		.rst_(reset),
		.m_s_(masterslave),
		.mdiv(masterdiv),
		.hpf_(highpass),
		.m0(mode0),
		.m1(mode1)
	);

	cs5361 adc0 (
		.adcval(adcval),
		.adcstrobe(adcstrobe),
		.lrck(lrck),
		.sclk(sclk),
		.sdata(sdata),
		.rst_(reset)
	);

endmodule
