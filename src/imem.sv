/* verilator lint_off EOFNEWLINE */
module imem(
	input rst,
	input [10:0] pc,
	output [31:0] inst
);
logic [31:0] memory [2047:0];
assign inst=(rst==1)?memory[pc]:32'b00000000;
initial begin
	$readmemh("imem.mem",memory);
	end
endmodule

