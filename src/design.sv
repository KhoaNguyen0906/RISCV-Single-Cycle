module design(
	input clk,
	input rst,
	input logic [31:0] sw,
	output logic [31:0] io_LCD,
	output logic [31:0] io_ledg,
	output logic [31:0] io_ledr,
	output logic [31:0] io_hex0,
	output logic [31:0] io_hex1,
	output logic [31:0] io_hex2,
	output logic [31:0] io_hex3,
	output logic [31:0] io_hex4,
	output logic [31:0] io_hex5,
	output logic [31:0] io_hex6,
	output logic [31:0] io_hex7,
);


wire [31:0] pc4;
wire [31:0] nxtpc;
wire [31:0] pc_ins;
wire [31:0] ins;
wire [31:0] data_1;
wire [31:0] data_2;
wire [31:0] immgen_mux;
wire [31:0] opa;
wire [31:0] opb;
wire [31:0] aludata;
wire brless;
wire brequal;
wire rd_wren;
wire brunsigned;
wire alu_opcode;
wire br_select;
wire op_a_sel;
wire op_b_sel;
wire [2:0] imm_sel;
wire [2:0] imm_sto;
wire [31:0] dataW;
wire [1:0] wb_sel;
wire [31:0] rs2_data;
wire [31:0] ld_data;
wire mem_wren;
wire [31:0] wb_data;

mux1 mux1(
.alu_data(aludata),
.pc_four(pc4),
.nxt_pc(nxtpc),
.br_sel(br_select)
);


pc pc(
.nxt_pc(nxtpc),
.pc(pc_ins),
.clk(clk),
.rst(rst)
);


imem imem(
.pc(pc_ins),
.inst(ins),
.rst(rst)
);


adder_four adder_four(
.pc(pc_ins),
.pc_four(pc4)
);


regfile regfile(
.dataW(dataW),
.rs1(ins[19:15]),
.rs2(ins[24:20]),
.rd(ins[11:7]),
.RegWEn(rd_wren),
.data1(data_1),
.data2(data_2),
.clk(clk),
.rst(rst)
);


muxa muxa(
.data1(data_1),
.pc(pc_ins),
.op_a_sel(op_a_sel),
.op_a(opa)
);


muxb muxb(
.data2(data_2),
.imm(immgen_mux),
.op_b_sel(op_b_sel),
.op_b(opb)
);


immgen immgen(
.inst(ins),
.imm(immgen_mux)
);


brcomp brcomp(
.data1(data_1),
.data2(data_2),
.br_unsigned(brunsigned),
.br_less(brless),
.br_equal(brequal)
);

ALU ALU(
.op_a(opa),
.op_b(opb),
.alu_data(aludata),
.alu_op(alu_opcode)
);


ConTrolUnit ConTrolUnit(
.inst(ins),
.br_less(brless),
.br_equal(brequal),
.br_sel(br_select),
.RegWen(rd_wren),
.br_unsigned(brunsigned),
.op_a_sel(op_a_sel),
.op_b_sel(op_b_sel),
.alu_op(alu_opcode),
.mem_wren(mem_wren),
.wb_sel(wb_sel),
.imm_select(imm_sel),
.imm_store(imm_sto)
);


function3 function3(
.wb_data(wb_data),
.imm_select(imm_sel),
.rd_data(dataW),
.opcode(ins[6:2])
);


StoreFunc3 StoreFunc3(
.data2(data_2),
.imm_store(imm_sto),
.rs2_data(rs2_data)
);


lsu lsu(
.clk(clk),
.rst(rst),
.addr(aludata),
.st_data(rs2_data),
.data_out(ld_data),
.mem_wren(mem_wren),
.sw(sw),
.io_LCD(io_LCD),
.io_ledg(io_ledg),
.io_ledr(io_ledr),
.io_hex0(io_hex0),
.io_hex1(io_hex1),
.io_hex2(io_hex2),
.io_hex3(io_hex3),
.io_hex4(io_hex4),
.io_hex5(io_hex5),
.io_hex6(io_hex6),
.io_hex7(io_hex7)
);

mux_data mux_data(
.pc_four(pc4),
.data_out(ld_data),
. alu_data(aludata),
.wb_data(wb_data),
.wb_sel(wb_sel)
);