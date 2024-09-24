// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___initial__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__0\n"); );
    // Body
    VL_READMEM_N(true, 32, 2048, 0, std::string{"imem.mem"}
                 ,  &(vlSelf->top__DOT__design1__DOT__imem__DOT__memory)
                 , 0, ~0ULL);
    vlSelf->top__DOT__design1__DOT__lsu__DOT____Vxrand_h96fd10a2__0 
        = VL_RAND_RESET_I(32);
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
}

void Vtop___024root___combo__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->io_sw_i = VL_RAND_RESET_I(32);
    vlSelf->io_lcd_o = VL_RAND_RESET_I(32);
    vlSelf->io_ledg_o = VL_RAND_RESET_I(32);
    vlSelf->io_ledr_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex0_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex1_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex2_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex3_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex4_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex5_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex6_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex7_o = VL_RAND_RESET_I(32);
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->rst_ni = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__design1__DOT__nxtpc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__design1__DOT__pc_ins = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__design1__DOT__ins = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__design1__DOT__data_1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__design1__DOT__data_2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__design1__DOT__immgen_mux = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__design1__DOT__opa = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__design1__DOT__opb = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__design1__DOT__aludata = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__design1__DOT__brless = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__design1__DOT__brequal = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__design1__DOT__rd_wren = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__design1__DOT__brunsigned = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__design1__DOT__alu_opcode = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__design1__DOT__br_select = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__design1__DOT__op_a_sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__design1__DOT__op_b_sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__design1__DOT__imm_sel = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__design1__DOT__imm_sto = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__design1__DOT__dataW = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__design1__DOT__wb_sel = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__design1__DOT__rs2_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__design1__DOT__ld_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__design1__DOT__mem_wren = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__design1__DOT__wb_data = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<2048; ++__Vi0) {
        vlSelf->top__DOT__design1__DOT__imem__DOT__memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__design1__DOT__regfile__DOT__register[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__design1__DOT__regfile__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->top__DOT__design1__DOT__lsu__DOT____Vxrand_h96fd10a2__0 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<1536; ++__Vi0) {
        vlSelf->top__DOT__design1__DOT__lsu__DOT__dmem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__design1__DOT__lsu__DOT__i = 0;
    vlSelf->top__DOT__design1__DOT__lsu__DOT____Vlvbound_h5cc24e09__0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__design1__DOT__lsu__DOT____Vlvbound_h8560297b__0 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
