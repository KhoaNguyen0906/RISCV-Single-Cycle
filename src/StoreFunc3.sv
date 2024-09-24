/* verilator lint_off EOFNEWLINE */
/* verilator lint_off UNUSED */
/* verilator lint_off CASEINCOMPLETE */
module StoreFunc3(
	input logic [31:0] data2,
	input logic [2:0] imm_store,
	output logic [31:0] rs2_data
);
always @(*)
begin
	case(imm_store)
	// SB
		3'b000: rs2_data = {{24{data2[31]}},data2[7:0]}; 
	// SH
		3'b001: rs2_data = {{16{data2[31]}},data2[15:0]} ;
	endcase
end
endmodule
