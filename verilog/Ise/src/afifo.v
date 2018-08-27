`timescale 1ns / 1ps 
module afifo(
		input clk,
		input rst,
		output rd_n,
		output wr_n,
		input rxf_n,
		input txe_n,
		inout [7:0] data,
		
		input  fifo_read_rd_en,
		output [7:0] fifo_read_dout,
		output fifo_read_empty,
		
		input  [7:0] fifo_write_din,
		input  fifo_write_wr_en,
		output fifo_write_full
    );
	 
	 wire [7:0] data_V_i;
	 wire [7:0] data_V_o;
	 wire data_V_o_ap_vld;
	 
	 wire oe_V;
	 
	 assign data = oe_V ? data_V_o : 8'hzz;	 
	 assign data_V_i = data;
	 
	 wire [7:0] inData_din;
	 wire 	   full;
	 wire 		inData_write;
	 
	 wire [7:0] dout;
	 wire 		empty;
	 wire 		outData_read;
		  
afifo_hls afifo_hls_i0 (
    .ap_clk(clk), 
    .ap_rst(rst), 
//    .ap_start(1'b1), 
//    .ap_done(), 
//    .ap_idle(), 
//    .ap_ready(),
	 
    .rd_n_V(rd_n), 
    .wr_n_V(wr_n),
	 
    .rxf_n_V(rxf_n), 
    .txe_n_V(txe_n),
	 
	 .oe_V(oe_V),
//    .oe_V_ap_vld(oe_V_ap_vld),
	 
    .data_V_i(data_V_i), 
    .data_V_o(data_V_o), 
//    .data_V_o_ap_vld(data_V_o_ap_vld),
	 
    .inData_V_data_V_din(inData_din),           //output
    .inData_V_data_V_full_n(!full),			      //input
    .inData_V_data_V_write(inData_write),       //output
	 
    .outData_V_data_V_dout(dout),       			//input
    .outData_V_data_V_empty_n(!empty), 			//input 
    .outData_V_data_V_read(outData_read)			//output
    );
	 
	 //ft to fifo-read
	 fifo fifo_read (
	 .clk(clk), 					// input clk
	 .rst(rst), 					// input rst
	 .din(inData_din), 			// input [7 : 0] din
	 .wr_en(inData_write), 		// input wr_en
	 .rd_en(fifo_read_rd_en), 	// input rd_en
	 .dout(fifo_read_dout), 	// output [7 : 0] dout
	 .full(full), 					// output full
	 .empty(fifo_read_empty) 	// output empty
	  );
	  
	 //ft to fifo-write
	 fifo fifo_write (
	 .clk(clk), 					// input clk
	 .rst(rst), 					// input rst
	 .din(fifo_write_din), 		// input [7 : 0] din
	 .wr_en(fifo_write_wr_en), // input wr_en
	 .rd_en(outData_read), 		// input rd_en
	 .dout(dout), 					// output [7 : 0] dout
	 .full(fifo_write_full), 	// output full
	 .empty(empty) 				// output empty
	  );
	  

endmodule
