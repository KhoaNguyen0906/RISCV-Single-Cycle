// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(((IData)(4U) + vlSelf->top__DOT__design1__DOT__pc_ins)),32);
        bufp->chgIData(oldp+1,(vlSelf->top__DOT__design1__DOT__pc_ins),32);
        bufp->chgIData(oldp+2,(vlSelf->top__DOT__design1__DOT__ld_data),32);
        bufp->chgSData(oldp+3,((0x7ffU & vlSelf->top__DOT__design1__DOT__pc_ins)),11);
        bufp->chgIData(oldp+4,(vlSelf->top__DOT__design1__DOT__lsu__DOT__i),32);
        bufp->chgIData(oldp+5,(vlSelf->top__DOT__design1__DOT__regfile__DOT__register[0]),32);
        bufp->chgIData(oldp+6,(vlSelf->top__DOT__design1__DOT__regfile__DOT__register[1]),32);
        bufp->chgIData(oldp+7,(vlSelf->top__DOT__design1__DOT__regfile__DOT__register[2]),32);
        bufp->chgIData(oldp+8,(vlSelf->top__DOT__design1__DOT__regfile__DOT__register[3]),32);
        bufp->chgIData(oldp+9,(vlSelf->top__DOT__design1__DOT__regfile__DOT__register[4]),32);
        bufp->chgIData(oldp+10,(vlSelf->top__DOT__design1__DOT__regfile__DOT__register[5]),32);
        bufp->chgIData(oldp+11,(vlSelf->top__DOT__design1__DOT__regfile__DOT__register[6]),32);
        bufp->chgIData(oldp+12,(vlSelf->top__DOT__design1__DOT__regfile__DOT__register[7]),32);
        bufp->chgIData(oldp+13,(vlSelf->top__DOT__design1__DOT__regfile__DOT__register[8]),32);
        bufp->chgIData(oldp+14,(vlSelf->top__DOT__design1__DOT__regfile__DOT__register[9]),32);
        bufp->chgIData(oldp+15,(vlSelf->top__DOT__design1__DOT__regfile__DOT__register[10]),32);
        bufp->chgIData(oldp+16,(vlSelf->top__DOT__design1__DOT__regfile__DOT__register[11]),32);
        bufp->chgIData(oldp+17,(vlSelf->top__DOT__design1__DOT__regfile__DOT__register[12]),32);
        bufp->chgIData(oldp+18,(vlSelf->top__DOT__design1__DOT__regfile__DOT__register[13]),32);
        bufp->chgIData(oldp+19,(vlSelf->top__DOT__design1__DOT__regfile__DOT__register[14]),32);
        bufp->chgIData(oldp+20,(vlSelf->top__DOT__design1__DOT__regfile__DOT__register[15]),32);
        bufp->chgIData(oldp+21,(vlSelf->top__DOT__design1__DOT__regfile__DOT__register[16]),32);
        bufp->chgIData(oldp+22,(vlSelf->top__DOT__design1__DOT__regfile__DOT__register[17]),32);
        bufp->chgIData(oldp+23,(vlSelf->top__DOT__design1__DOT__regfile__DOT__register[18]),32);
        bufp->chgIData(oldp+24,(vlSelf->top__DOT__design1__DOT__regfile__DOT__register[19]),32);
        bufp->chgIData(oldp+25,(vlSelf->top__DOT__design1__DOT__regfile__DOT__register[20]),32);
        bufp->chgIData(oldp+26,(vlSelf->top__DOT__design1__DOT__regfile__DOT__register[21]),32);
        bufp->chgIData(oldp+27,(vlSelf->top__DOT__design1__DOT__regfile__DOT__register[22]),32);
        bufp->chgIData(oldp+28,(vlSelf->top__DOT__design1__DOT__regfile__DOT__register[23]),32);
        bufp->chgIData(oldp+29,(vlSelf->top__DOT__design1__DOT__regfile__DOT__register[24]),32);
        bufp->chgIData(oldp+30,(vlSelf->top__DOT__design1__DOT__regfile__DOT__register[25]),32);
        bufp->chgIData(oldp+31,(vlSelf->top__DOT__design1__DOT__regfile__DOT__register[26]),32);
        bufp->chgIData(oldp+32,(vlSelf->top__DOT__design1__DOT__regfile__DOT__register[27]),32);
        bufp->chgIData(oldp+33,(vlSelf->top__DOT__design1__DOT__regfile__DOT__register[28]),32);
        bufp->chgIData(oldp+34,(vlSelf->top__DOT__design1__DOT__regfile__DOT__register[29]),32);
        bufp->chgIData(oldp+35,(vlSelf->top__DOT__design1__DOT__regfile__DOT__register[30]),32);
        bufp->chgIData(oldp+36,(vlSelf->top__DOT__design1__DOT__regfile__DOT__register[31]),32);
        bufp->chgIData(oldp+37,(vlSelf->top__DOT__design1__DOT__regfile__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+38,(vlSelf->top__DOT__design1__DOT__ins),32);
        bufp->chgIData(oldp+39,(vlSelf->top__DOT__design1__DOT__data_1),32);
        bufp->chgIData(oldp+40,(vlSelf->top__DOT__design1__DOT__data_2),32);
        bufp->chgIData(oldp+41,(vlSelf->top__DOT__design1__DOT__immgen_mux),32);
        bufp->chgIData(oldp+42,(vlSelf->top__DOT__design1__DOT__opa),32);
        bufp->chgIData(oldp+43,(vlSelf->top__DOT__design1__DOT__opb),32);
        bufp->chgIData(oldp+44,(vlSelf->top__DOT__design1__DOT__aludata),32);
        bufp->chgBit(oldp+45,(vlSelf->top__DOT__design1__DOT__brless));
        bufp->chgBit(oldp+46,(vlSelf->top__DOT__design1__DOT__brequal));
        bufp->chgBit(oldp+47,(vlSelf->top__DOT__design1__DOT__rd_wren));
        bufp->chgBit(oldp+48,(vlSelf->top__DOT__design1__DOT__brunsigned));
        bufp->chgCData(oldp+49,(vlSelf->top__DOT__design1__DOT__alu_opcode),4);
        bufp->chgBit(oldp+50,(vlSelf->top__DOT__design1__DOT__br_select));
        bufp->chgBit(oldp+51,(vlSelf->top__DOT__design1__DOT__op_a_sel));
        bufp->chgBit(oldp+52,(vlSelf->top__DOT__design1__DOT__op_b_sel));
        bufp->chgCData(oldp+53,(vlSelf->top__DOT__design1__DOT__imm_sel),3);
        bufp->chgCData(oldp+54,(vlSelf->top__DOT__design1__DOT__imm_sto),3);
        bufp->chgIData(oldp+55,(vlSelf->top__DOT__design1__DOT__dataW),32);
        bufp->chgCData(oldp+56,(vlSelf->top__DOT__design1__DOT__wb_sel),2);
        bufp->chgIData(oldp+57,(vlSelf->top__DOT__design1__DOT__rs2_data),32);
        bufp->chgBit(oldp+58,(vlSelf->top__DOT__design1__DOT__mem_wren));
        bufp->chgIData(oldp+59,(vlSelf->top__DOT__design1__DOT__wb_data),32);
        bufp->chgCData(oldp+60,((0x7fU & vlSelf->top__DOT__design1__DOT__ins)),7);
        bufp->chgCData(oldp+61,((7U & (vlSelf->top__DOT__design1__DOT__ins 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+62,((0x1fU & (vlSelf->top__DOT__design1__DOT__ins 
                                          >> 2U))),5);
        bufp->chgSData(oldp+63,((0x7ffU & vlSelf->top__DOT__design1__DOT__aludata)),11);
        bufp->chgCData(oldp+64,((0x1fU & (vlSelf->top__DOT__design1__DOT__ins 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+65,((0x1fU & (vlSelf->top__DOT__design1__DOT__ins 
                                          >> 7U))),5);
        bufp->chgCData(oldp+66,((0x1fU & (vlSelf->top__DOT__design1__DOT__ins 
                                          >> 0x14U))),5);
    }
    bufp->chgIData(oldp+67,(vlSelf->io_sw_i),32);
    bufp->chgIData(oldp+68,(vlSelf->io_lcd_o),32);
    bufp->chgIData(oldp+69,(vlSelf->io_ledg_o),32);
    bufp->chgIData(oldp+70,(vlSelf->io_ledr_o),32);
    bufp->chgIData(oldp+71,(vlSelf->io_hex0_o),32);
    bufp->chgIData(oldp+72,(vlSelf->io_hex1_o),32);
    bufp->chgIData(oldp+73,(vlSelf->io_hex2_o),32);
    bufp->chgIData(oldp+74,(vlSelf->io_hex3_o),32);
    bufp->chgIData(oldp+75,(vlSelf->io_hex4_o),32);
    bufp->chgIData(oldp+76,(vlSelf->io_hex5_o),32);
    bufp->chgIData(oldp+77,(vlSelf->io_hex6_o),32);
    bufp->chgIData(oldp+78,(vlSelf->io_hex7_o),32);
    bufp->chgBit(oldp+79,(vlSelf->clk_i));
    bufp->chgBit(oldp+80,(vlSelf->rst_ni));
    bufp->chgIData(oldp+81,(((IData)(vlSelf->top__DOT__design1__DOT__br_select)
                              ? vlSelf->top__DOT__design1__DOT__aludata
                              : ((IData)(4U) + vlSelf->top__DOT__design1__DOT__pc_ins))),32);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
