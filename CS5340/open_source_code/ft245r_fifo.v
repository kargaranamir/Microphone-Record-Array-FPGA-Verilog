// - on strobe from adc, nab value into tx buffer

`define S_IDLE        1
`define S_WRITEWAIT   2
`define S_WRITEFINISH 3
`define S_READ        4

module ft245r_fifo (
	rd_,			// out: read strobe (latches the value on the ft)
	wr,				// out: write strobe
	reset_,		// out: reset to other modules
	usbdata,	// inout: the data bus from the ft245r
	txe_,   	// in: tx enable (when high, dont write)
	rxf_,			// in: read ready (when high, dont read)
	adcdata,	// in: data byte from adc
	adcstrobe,// in: strobe from adc
	clk     	// in
);

output rd_;
output wr;
output reset_;

inout [7:0] usbdata;

input txe_;
input rxf_;
input [7:0] adcdata;
input adcstrobe;
input clk;

reg [7:0] usbout;
reg [2:0] state=0;
reg [7:0] txbuf=0;
reg [7:0] rxbuf=0;
reg havetx=0;
reg haverx=0;
reg [3:0] delay=0;
reg lastadcstrobe;

reg rd_=1;
reg wr =0;
reg usbdir=0;
reg reset_;
reg run=1;

// usbdata is high impedence unless usbdir is asserted
assign usbdata=(usbdir)?usbout:8'bZ;

// the TX action needs a wait state since WR must fall while data is still valid,
// but RX doesnt require it as long as we sample usbdata prior to resetting rd_
always @(negedge clk) begin
	if (lastadcstrobe&&(!adcstrobe)) begin // TODO: make this clean
		txbuf=adcdata;
 		havetx=1;
	end
	lastadcstrobe=adcstrobe;

	if (delay>0) delay=delay-4'd1; // quartus is really bizarre about constants.
	else case(state)
		0: begin
			reset_=1;

			if (havetx&&(!txe_)) begin
				havetx<=0;
				usbout<=txbuf;
				wr<=1;
				usbdir<=1;
				state<=1;
				delay<=4'd4;
			end
			else if (!rxf_) begin
				rd_<=0;
				delay<=4;
				state<=3;
			end
		end
		1: begin
			wr<=0;
			delay<=4;
			state<=2;
		end
		2: begin
			usbdir<=0;
			state<=0;
		end
		3: begin
			rxbuf<=usbdata;
			run<=~run; 
			haverx<=1;
			reset_<=0; // assert reset on receive, for now
			rd_<=1;
			delay<=4;
			state<=4;
		end
		4: begin
			// stay in reset until rxf_ comes high
			if (rxf_) begin
				if (run) reset_<=1;
				state<=0;
			end
	
			delay<=4;
		end
	endcase
end

endmodule

