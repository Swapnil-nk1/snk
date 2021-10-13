`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:26:28 10/13/2021 
// Design Name: 
// Module Name:    modco 
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


module modco(clk,rstn,out
    );
	 parameter N=8;
	 input clk,rstn;
	 output  reg[3:0] out;  
	 always @ (posedge clk) 
  
   begin  
    if (!rstn) begin  
      out <= 0;  
    end
	 
	 else
	 
	 begin  
      if (out == N-1)  
        out <= 0;  
      else  
        out <= out + 1;  
    end  
  end  
endmodule 
