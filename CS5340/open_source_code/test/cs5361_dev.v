module cs5361_dev (
	lrck,			// out: left/right clock
	sclk,			// out: serial clock
	sdata,		// out: serial data
	ovfl_,		// out: overflow
	mclk,			// in : master clock
	rst_,			// in : reset
	m_s_,			// in : master/slave mode select
	mdiv,			// in : mclk div 
	hpf_,			// in : high pass enable
	//i2s_lj_,	// in : i2s or lj select
	m0,				// in : mode select 0
	m1				// in : mode select 1
);

output lrck;
output sclk;
output sdata;
output ovfl_;

input mclk;
input rst_;
input m_s_;
input mdiv;
input hpf_;
//input i2s_lj;
input m0;
input m1;

reg [23:0] 	leftval;
reg [23:0] 	rightval;
reg [23:0] 	shifter;
reg [7:0]		clkdiv;

reg sdata;
reg ovfl_;

assign lrck=clkdiv[7];   // divide by 256
assign sclk=clkdiv[1];   // divide by 4 

initial begin
	leftval=0;
	rightval=0;
	clkdiv=0;

	sdata=0;
	ovfl_=1;
end


always @(negedge mclk)  
	if (0==rst_) 
		clkdiv=0;
	else  
		clkdiv=clkdiv+1;
	
always @(negedge sclk) begin
	sdata=shifter[23];
	shifter=shifter<<1;
end

always @(posedge lrck) begin
	shifter=leftval;
	leftval=leftval+1;
end

always @(negedge lrck) begin
	shifter=rightval;
	rightval=rightval-1;
end

endmodule
