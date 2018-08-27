//-----------------------------------------------------------------------------
//
// Title       : 
// Design      : afifo_fifoIf
// Author      : 
// Company     : 
//
//-----------------------------------------------------------------------------
//
// File        : e:\Projects\Posedge\afifo\ahdl\afifo_fifoIF\afifo_fifoIF\afifo_fifoIf\compile\looper.v
// Generated   : 10/29/15 13:31:34
// From        : e:\Projects\Posedge\afifo\ahdl\afifo_fifoIF\afifo_fifoIF\afifo_fifoIf\src\looper.asf
// By          : FSM2VHDL ver. 5.0.7.2
//
//-----------------------------------------------------------------------------
//
// Description : 
//
//-----------------------------------------------------------------------------

`timescale 1ns / 1ps

module looper (clk_pll, reset_n, rx_dout, rx_empty, rx_rd, tx_data, tx_full, tx_wr);
input      	clk_pll;
input      	reset_n;
input      	[7:0] rx_dout;
input      	rx_empty;
input      	tx_full;
output     	rx_rd;
output     	[7:0] tx_data;
output     	tx_wr;

wire        clk_pll;
wire        reset_n;
wire        [7:0] rx_dout;
wire        rx_empty;
reg         rx_rd, next_rx_rd;
reg         [7:0] tx_data, next_tx_data;
wire        tx_full;
reg         tx_wr, next_tx_wr;

// diagram signals declarations
reg  [7:0]data, next_data;

// USER DEFINED ENCODED state machine: Sreg0
// State codes definitions:
`define finalize 2'b10
`define Init 2'b00
`define write_tx_fifo 2'b01

reg [1:0] CurrState_Sreg0;
reg [1:0] NextState_Sreg0;


//--------------------------------------------------------------------
// Machine: Sreg0
//--------------------------------------------------------------------
//----------------------------------
// Next State Logic (combinatorial)
//----------------------------------
always @ (data or rx_dout or rx_empty or rx_rd or tx_data or tx_wr or CurrState_Sreg0)
begin : Sreg0_NextState
	NextState_Sreg0 <= CurrState_Sreg0;
	// Set default values for outputs and signals
	next_tx_wr <= tx_wr;
	next_rx_rd <= rx_rd;
	next_tx_data <= tx_data;
	next_data <= data;
	case (CurrState_Sreg0) // synopsys parallel_case full_case
		`finalize:
		begin
			NextState_Sreg0 <= `Init;
			next_tx_wr <= 0;
		end
		`Init:
		begin
			next_tx_wr <= 0;
			next_rx_rd <= 0;
			next_tx_data <= 8'hzz;
			next_data <= 8'h00;
			if (!rx_empty)	
			begin
				NextState_Sreg0 <= `write_tx_fifo;
				next_rx_rd <= 1;
				next_data <= rx_dout;
			end
		end
		`write_tx_fifo:
		begin
			next_rx_rd <= 0;
			next_tx_wr <= 1;
			next_tx_data <= data;
			NextState_Sreg0 <= `finalize;
		end
	endcase
end

//----------------------------------
// Current State Logic (sequential)
//----------------------------------
always @ (posedge clk_pll)
begin : Sreg0_CurrentState
	if (!reset_n)	
		CurrState_Sreg0 <= `Init;
	else
		CurrState_Sreg0 <= NextState_Sreg0;
end

//----------------------------------
// Registered outputs logic
//----------------------------------
always @ (posedge clk_pll)
begin : Sreg0_RegOutput
	if (!reset_n)	
	begin
		data <= 8'h00;
		tx_wr <= 0;
		rx_rd <= 0;
		tx_data <= 8'hzz;
	end
	else 
	begin
		data <= next_data;
		tx_wr <= next_tx_wr;
		rx_rd <= next_rx_rd;
		tx_data <= next_tx_data;
	end
end

endmodule