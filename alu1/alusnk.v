`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:49:56 10/13/2021 
// Design Name: 
// Module Name:    alusnk 
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
module alusnk(A,B,sel,out
    );
input [3:0]A,B;
input [2:0]sel;
output reg out;
always @(A,B)
    begin
        case(sel)
        4'b0000:out = A + B ; 
        4'b0001: out = A - B ;
        4'b0010: out = ~(A^ B);
        4'b0011: out = ~(A&B);
        4'b0100: out = A & B;
        4'b0101:out = A | B;
        4'b0110:out = A ^ B;
        4'b0111:out = ~(A | B);
          
          
        endcase
    end

endmodule
