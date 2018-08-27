// this module nabs the serial data from the adcs and
// breaks it into 8-bit chunks for the ft245r. alignment
// is by constant size counted from a reset assertion.

module cs5361 (
	adcval,		// out: data to ft245r handler
	adcstrobe,// out: strobe to ft245r handler
	lrck,			// in: left-right from adc
	sclk,			// in: shift clock from adc
	sdata,		// in: serial data from adc
	rst_			// in: reset
);

output [7:0] adcval;
output adcstrobe;

input lrck;
input sclk;
input sdata;
input rst_;

reg [7:0] adcval;
reg adcstrobe;
reg [7:0] shifter;
reg [2:0] counter;
reg run;

initial begin
	shifter=0;
	adcval=0;
	counter=0;
	run=0;
end

// we allow the counter to go as soon as we come out of reset,
// so that 0's are transmitted while we wait for lrck such that
// the rx end can align.
always @(posedge sclk) begin
	if (0==rst_) run=0;
	else begin
		if (lrck) run=1;

		if (0==counter) begin
      adcval=shifter;
      shifter=0;
    end
    else if (1==counter) adcstrobe=1;
    else if (2==counter) adcstrobe=0;
		counter=counter+3'd1;
	
		if (1==run) begin
			shifter=shifter<<1; // shift first 
			shifter[0]=sdata;
		end
	end
end

endmodule 
