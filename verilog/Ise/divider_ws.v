`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:06:27 09/11/2016 
// Design Name: 
// Module Name:    divider_ws 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module divider_ws(
input clk_sck,
output reg clk_ws=0
    );
reg [4:0]cnt=0;

always@(negedge clk_sck)	begin
	if(cnt==5'b00000)	clk_ws<=~clk_ws;
	cnt<=cnt+1;
end


endmodule
