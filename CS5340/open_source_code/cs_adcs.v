module cs_adcs (
	adc_reset_, // out: adc reset
	adc_mclk,	// out: adc master clock
	adc_m_s_,	// out: adc config
	adc_mdiv,	// out: adc config
	adc_hpf_,	// out: adc config
	adc_lj_,	// out: adc config
	adc_m0,		// out: adc config
	adc_m1,		// out: adc config
	usb_rd_, 	// out: ftdi read strobe
	usb_wr,  	// out: ftdi write strobe
	status,  	// out: status lights
	pll_locked, // out: pll status
	altclk,		// out: test clock
	sysclk,   // in
	adc_lrck, // in: adc channel clock
	adc_sclk, // in: adc serial clock
	adc_sdata,// in: adc serial data
	adc_ovfl_,// in: adc overflow
	usb_bus, 	// inout: from ftdi data
	usb_txe_, // in: ftdi ready to transmit
	usb_rxf_	// in: ftdi ready for read 
);

output adc_reset_;
output adc_mclk;
output adc_m_s_;
output adc_mdiv;
output adc_hpf_;
output adc_lj_;
output adc_m0;
output adc_m1;
output usb_rd_;
output usb_wr;
output [7:0] status;
output pll_locked;
output altclk;

input sysclk;
input adc_lrck;
input adc_sclk;
input adc_sdata;
input adc_ovfl_;
inout [7:0] usb_bus;
input usb_txe_;
input usb_rxf_;

wire adc_reset_;
wire adc_mclk;
reg adc_m_s_=1;
reg adc_mdiv=0;
reg adc_hpf_=0;
reg adc_lj_=0;
reg adc_m0=0;
reg adc_m1=0;
wire usb_rd_;
wire usb_wr;
reg [7:0] status=8'hff;
wire pll_locked;
wire altclk;

wire [7:0] usb_bus;
wire usb_reset_;

reg	pllena=1;
reg pllreset=0;

wire [7:0] adcval;
wire adcstrobe;

wire mclk;

reg [31:0] poweron_reset_ctr=10000000; // 1 sec @ 10 mhz

assign adc_mclk=mclk;
assign adc_reset_=(!poweron_reset_ctr)&usb_reset_;
//assign adc_reset_=(!poweron_reset_ctr); // for testing without ft245r

cs5361 adc0 (
  .adcval(adcval),
  .adcstrobe(adcstrobe),
  .lrck(adc_lrck),
  .sclk(adc_sclk),
  .sdata(adc_sdata),
  .rst_(adc_reset_)
);

ft245r_fifo usb0 (
  .rd_(usb_rd_),
  .wr(usb_wr),
  .reset_(usb_reset_),
  .usbdata(usb_bus),
  .txe_(usb_txe_),
  .rxf_(usb_rxf_),
  .adcstrobe(adcstrobe),
  .adcdata(adcval),
  .clk(mclk)
);

thepll pll0 (
	.areset(pllreset),
	.inclk0(sysclk),
	.pllena(pllena),
	.c0(mclk),
	.c1(altclk),
	.locked(pll_locked)
);

// poweron reset controller
always @(posedge mclk) begin
	if (poweron_reset_ctr) poweron_reset_ctr=poweron_reset_ctr-1;
	else status[0]=0;
end
		
endmodule

