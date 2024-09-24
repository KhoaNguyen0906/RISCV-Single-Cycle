/* verilator lint_off EOFNEWLINE */
/* verilator lint_off VARHIDDEN */
module pc(
	input logic [31:0] nxt_pc,
	output logic [31:0] pc_o,
	input clk,
	input rst
);
always @(posedge clk)
begin 
	if (rst)
	begin	
		pc_o <= 32'b00000000;
	end
	else
	begin
		 pc_o <= nxt_pc;
	end
end
endmodule

		
