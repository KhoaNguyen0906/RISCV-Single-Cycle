// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vdlyvset__top__DOT__design1__DOT__regfile__DOT__register__v0;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__design1__DOT__regfile__DOT__register__v33;
    IData/*31:0*/ __Vdlyvval__top__DOT__design1__DOT__regfile__DOT__register__v33;
    CData/*0:0*/ __Vdlyvset__top__DOT__design1__DOT__regfile__DOT__register__v33;
    SData/*10:0*/ __Vdlyvdim0__top__DOT__design1__DOT__lsu__DOT__dmem__v0;
    IData/*31:0*/ __Vdlyvval__top__DOT__design1__DOT__lsu__DOT__dmem__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__design1__DOT__lsu__DOT__dmem__v0;
    // Body
    __Vdlyvset__top__DOT__design1__DOT__lsu__DOT__dmem__v0 = 0U;
    __Vdlyvset__top__DOT__design1__DOT__regfile__DOT__register__v0 = 0U;
    __Vdlyvset__top__DOT__design1__DOT__regfile__DOT__register__v33 = 0U;
    if (vlSelf->rst_ni) {
        vlSelf->top__DOT__design1__DOT__regfile__DOT__unnamedblk1__DOT__i = 0x21U;
        vlSelf->top__DOT__design1__DOT__lsu__DOT__i = 0U;
        while (VL_GTS_III(32, 0x600U, vlSelf->top__DOT__design1__DOT__lsu__DOT__i)) {
            vlSelf->top__DOT__design1__DOT__lsu__DOT____Vlvbound_h5cc24e09__0 = 0U;
            if (VL_LIKELY((0x5ffU >= (0x7ffU & vlSelf->top__DOT__design1__DOT__lsu__DOT__i)))) {
                vlSelf->top__DOT__design1__DOT__lsu__DOT__dmem[(0x7ffU 
                                                                & vlSelf->top__DOT__design1__DOT__lsu__DOT__i)] 
                    = vlSelf->top__DOT__design1__DOT__lsu__DOT____Vlvbound_h5cc24e09__0;
            }
            vlSelf->top__DOT__design1__DOT__lsu__DOT__i 
                = ((IData)(1U) + vlSelf->top__DOT__design1__DOT__lsu__DOT__i);
        }
        vlSelf->top__DOT__design1__DOT__pc_ins = 0U;
        __Vdlyvset__top__DOT__design1__DOT__regfile__DOT__register__v0 = 1U;
    } else {
        vlSelf->top__DOT__design1__DOT__pc_ins = vlSelf->top__DOT__design1__DOT__nxtpc;
        if (vlSelf->top__DOT__design1__DOT__rd_wren) {
            __Vdlyvval__top__DOT__design1__DOT__regfile__DOT__register__v33 
                = vlSelf->top__DOT__design1__DOT__dataW;
            __Vdlyvset__top__DOT__design1__DOT__regfile__DOT__register__v33 = 1U;
            __Vdlyvdim0__top__DOT__design1__DOT__regfile__DOT__register__v33 
                = (0x1fU & (vlSelf->top__DOT__design1__DOT__ins 
                            >> 7U));
        }
    }
    if (vlSelf->top__DOT__design1__DOT__mem_wren) {
        vlSelf->top__DOT__design1__DOT__lsu__DOT____Vlvbound_h8560297b__0 
            = vlSelf->top__DOT__design1__DOT__rs2_data;
        if ((0x5ffU >= (0x7ffU & vlSelf->top__DOT__design1__DOT__aludata))) {
            __Vdlyvval__top__DOT__design1__DOT__lsu__DOT__dmem__v0 
                = vlSelf->top__DOT__design1__DOT__lsu__DOT____Vlvbound_h8560297b__0;
            __Vdlyvset__top__DOT__design1__DOT__lsu__DOT__dmem__v0 = 1U;
            __Vdlyvdim0__top__DOT__design1__DOT__lsu__DOT__dmem__v0 
                = (0x7ffU & vlSelf->top__DOT__design1__DOT__aludata);
        }
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__design1__DOT__mem_wren)))) {
        vlSelf->top__DOT__design1__DOT__ld_data = (
                                                   (0x5ffU 
                                                    >= 
                                                    (0x7ffU 
                                                     & vlSelf->top__DOT__design1__DOT__aludata))
                                                    ? 
                                                   vlSelf->top__DOT__design1__DOT__lsu__DOT__dmem
                                                   [
                                                   (0x7ffU 
                                                    & vlSelf->top__DOT__design1__DOT__aludata)]
                                                    : vlSelf->top__DOT__design1__DOT__lsu__DOT____Vxrand_h96fd10a2__0);
    }
    if (__Vdlyvset__top__DOT__design1__DOT__lsu__DOT__dmem__v0) {
        vlSelf->top__DOT__design1__DOT__lsu__DOT__dmem[__Vdlyvdim0__top__DOT__design1__DOT__lsu__DOT__dmem__v0] 
            = __Vdlyvval__top__DOT__design1__DOT__lsu__DOT__dmem__v0;
    }
    if (__Vdlyvset__top__DOT__design1__DOT__regfile__DOT__register__v0) {
        vlSelf->top__DOT__design1__DOT__regfile__DOT__register[0U] = 0U;
        vlSelf->top__DOT__design1__DOT__regfile__DOT__register[1U] = 0U;
        vlSelf->top__DOT__design1__DOT__regfile__DOT__register[2U] = 0U;
        vlSelf->top__DOT__design1__DOT__regfile__DOT__register[3U] = 0U;
        vlSelf->top__DOT__design1__DOT__regfile__DOT__register[4U] = 0U;
        vlSelf->top__DOT__design1__DOT__regfile__DOT__register[5U] = 0U;
        vlSelf->top__DOT__design1__DOT__regfile__DOT__register[6U] = 0U;
        vlSelf->top__DOT__design1__DOT__regfile__DOT__register[7U] = 0U;
        vlSelf->top__DOT__design1__DOT__regfile__DOT__register[8U] = 0U;
        vlSelf->top__DOT__design1__DOT__regfile__DOT__register[9U] = 0U;
        vlSelf->top__DOT__design1__DOT__regfile__DOT__register[0xaU] = 0U;
        vlSelf->top__DOT__design1__DOT__regfile__DOT__register[0xbU] = 0U;
        vlSelf->top__DOT__design1__DOT__regfile__DOT__register[0xcU] = 0U;
        vlSelf->top__DOT__design1__DOT__regfile__DOT__register[0xdU] = 0U;
        vlSelf->top__DOT__design1__DOT__regfile__DOT__register[0xeU] = 0U;
        vlSelf->top__DOT__design1__DOT__regfile__DOT__register[0xfU] = 0U;
        vlSelf->top__DOT__design1__DOT__regfile__DOT__register[0x10U] = 0U;
        vlSelf->top__DOT__design1__DOT__regfile__DOT__register[0x11U] = 0U;
        vlSelf->top__DOT__design1__DOT__regfile__DOT__register[0x12U] = 0U;
        vlSelf->top__DOT__design1__DOT__regfile__DOT__register[0x13U] = 0U;
        vlSelf->top__DOT__design1__DOT__regfile__DOT__register[0x14U] = 0U;
        vlSelf->top__DOT__design1__DOT__regfile__DOT__register[0x15U] = 0U;
        vlSelf->top__DOT__design1__DOT__regfile__DOT__register[0x16U] = 0U;
        vlSelf->top__DOT__design1__DOT__regfile__DOT__register[0x17U] = 0U;
        vlSelf->top__DOT__design1__DOT__regfile__DOT__register[0x18U] = 0U;
        vlSelf->top__DOT__design1__DOT__regfile__DOT__register[0x19U] = 0U;
        vlSelf->top__DOT__design1__DOT__regfile__DOT__register[0x1aU] = 0U;
        vlSelf->top__DOT__design1__DOT__regfile__DOT__register[0x1bU] = 0U;
        vlSelf->top__DOT__design1__DOT__regfile__DOT__register[0x1cU] = 0U;
        vlSelf->top__DOT__design1__DOT__regfile__DOT__register[0x1dU] = 0U;
        vlSelf->top__DOT__design1__DOT__regfile__DOT__register[0x1eU] = 0U;
        vlSelf->top__DOT__design1__DOT__regfile__DOT__register[0x1fU] = 0U;
        vlSelf->top__DOT__design1__DOT__regfile__DOT__register[0U] = 0U;
    }
    if (__Vdlyvset__top__DOT__design1__DOT__regfile__DOT__register__v33) {
        vlSelf->top__DOT__design1__DOT__regfile__DOT__register[__Vdlyvdim0__top__DOT__design1__DOT__regfile__DOT__register__v33] 
            = __Vdlyvval__top__DOT__design1__DOT__regfile__DOT__register__v33;
    }
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__design1__DOT__lsu__DOT__dmem[0x500U] 
        = vlSelf->io_sw_i;
    vlSelf->top__DOT__design1__DOT__ins = ((IData)(vlSelf->rst_ni)
                                            ? vlSelf->top__DOT__design1__DOT__imem__DOT__memory
                                           [(0x7ffU 
                                             & vlSelf->top__DOT__design1__DOT__pc_ins)]
                                            : 0U);
    vlSelf->io_lcd_o = vlSelf->top__DOT__design1__DOT__lsu__DOT__dmem
        [0x4a0U];
    vlSelf->io_ledg_o = vlSelf->top__DOT__design1__DOT__lsu__DOT__dmem
        [0x490U];
    vlSelf->io_ledr_o = vlSelf->top__DOT__design1__DOT__lsu__DOT__dmem
        [0x480U];
    vlSelf->io_hex0_o = vlSelf->top__DOT__design1__DOT__lsu__DOT__dmem
        [0x400U];
    vlSelf->io_hex1_o = vlSelf->top__DOT__design1__DOT__lsu__DOT__dmem
        [0x410U];
    vlSelf->io_hex2_o = vlSelf->top__DOT__design1__DOT__lsu__DOT__dmem
        [0x420U];
    vlSelf->io_hex3_o = vlSelf->top__DOT__design1__DOT__lsu__DOT__dmem
        [0x430U];
    vlSelf->io_hex4_o = vlSelf->top__DOT__design1__DOT__lsu__DOT__dmem
        [0x440U];
    vlSelf->io_hex5_o = vlSelf->top__DOT__design1__DOT__lsu__DOT__dmem
        [0x450U];
    vlSelf->io_hex6_o = vlSelf->top__DOT__design1__DOT__lsu__DOT__dmem
        [0x460U];
    vlSelf->io_hex7_o = vlSelf->top__DOT__design1__DOT__lsu__DOT__dmem
        [0x470U];
    vlSelf->top__DOT__design1__DOT__immgen_mux = ((0x40U 
                                                   & vlSelf->top__DOT__design1__DOT__ins)
                                                   ? 
                                                  ((0x20U 
                                                    & vlSelf->top__DOT__design1__DOT__ins)
                                                    ? 
                                                   ((0x10U 
                                                     & vlSelf->top__DOT__design1__DOT__ins)
                                                     ? 0U
                                                     : 
                                                    ((8U 
                                                      & vlSelf->top__DOT__design1__DOT__ins)
                                                      ? 
                                                     ((4U 
                                                       & vlSelf->top__DOT__design1__DOT__ins)
                                                       ? 
                                                      ((2U 
                                                        & vlSelf->top__DOT__design1__DOT__ins)
                                                        ? 
                                                       ((1U 
                                                         & vlSelf->top__DOT__design1__DOT__ins)
                                                         ? 
                                                        (((- (IData)(
                                                                     (vlSelf->top__DOT__design1__DOT__ins 
                                                                      >> 0x1fU))) 
                                                          << 0x14U) 
                                                         | ((0xff000U 
                                                             & vlSelf->top__DOT__design1__DOT__ins) 
                                                            | ((0x800U 
                                                                & (vlSelf->top__DOT__design1__DOT__ins 
                                                                   >> 9U)) 
                                                               | ((0x7e0U 
                                                                   & (vlSelf->top__DOT__design1__DOT__ins 
                                                                      >> 0x14U)) 
                                                                  | (0x1eU 
                                                                     & (vlSelf->top__DOT__design1__DOT__ins 
                                                                        >> 0x14U))))))
                                                         : 0U)
                                                        : 0U)
                                                       : 0U)
                                                      : 
                                                     ((4U 
                                                       & vlSelf->top__DOT__design1__DOT__ins)
                                                       ? 
                                                      ((2U 
                                                        & vlSelf->top__DOT__design1__DOT__ins)
                                                        ? 
                                                       ((1U 
                                                         & vlSelf->top__DOT__design1__DOT__ins)
                                                         ? 
                                                        (((- (IData)(
                                                                     (vlSelf->top__DOT__design1__DOT__ins 
                                                                      >> 0x1fU))) 
                                                          << 0xbU) 
                                                         | (0x7ffU 
                                                            & (vlSelf->top__DOT__design1__DOT__ins 
                                                               >> 0x14U)))
                                                         : 0U)
                                                        : 0U)
                                                       : 
                                                      ((2U 
                                                        & vlSelf->top__DOT__design1__DOT__ins)
                                                        ? 
                                                       ((1U 
                                                         & vlSelf->top__DOT__design1__DOT__ins)
                                                         ? 
                                                        (((- (IData)(
                                                                     (vlSelf->top__DOT__design1__DOT__ins 
                                                                      >> 0x1fU))) 
                                                          << 0xcU) 
                                                         | ((0x800U 
                                                             & (vlSelf->top__DOT__design1__DOT__ins 
                                                                << 4U)) 
                                                            | ((0x7e0U 
                                                                & (vlSelf->top__DOT__design1__DOT__ins 
                                                                   >> 0x14U)) 
                                                               | (0x1eU 
                                                                  & (vlSelf->top__DOT__design1__DOT__ins 
                                                                     >> 7U)))))
                                                         : 0U)
                                                        : 0U))))
                                                    : 0U)
                                                   : 
                                                  ((0x20U 
                                                    & vlSelf->top__DOT__design1__DOT__ins)
                                                    ? 
                                                   ((0x10U 
                                                     & vlSelf->top__DOT__design1__DOT__ins)
                                                     ? 
                                                    ((8U 
                                                      & vlSelf->top__DOT__design1__DOT__ins)
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & vlSelf->top__DOT__design1__DOT__ins)
                                                       ? 
                                                      ((2U 
                                                        & vlSelf->top__DOT__design1__DOT__ins)
                                                        ? 
                                                       ((1U 
                                                         & vlSelf->top__DOT__design1__DOT__ins)
                                                         ? 
                                                        (0xfffff000U 
                                                         & vlSelf->top__DOT__design1__DOT__ins)
                                                         : 0U)
                                                        : 0U)
                                                       : 0U))
                                                     : 
                                                    ((8U 
                                                      & vlSelf->top__DOT__design1__DOT__ins)
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & vlSelf->top__DOT__design1__DOT__ins)
                                                       ? 0U
                                                       : 
                                                      ((2U 
                                                        & vlSelf->top__DOT__design1__DOT__ins)
                                                        ? 
                                                       ((1U 
                                                         & vlSelf->top__DOT__design1__DOT__ins)
                                                         ? 
                                                        (((- (IData)(
                                                                     (vlSelf->top__DOT__design1__DOT__ins 
                                                                      >> 0x1fU))) 
                                                          << 0xbU) 
                                                         | ((0x7e0U 
                                                             & (vlSelf->top__DOT__design1__DOT__ins 
                                                                >> 0x14U)) 
                                                            | (0x1fU 
                                                               & (vlSelf->top__DOT__design1__DOT__ins 
                                                                  >> 7U))))
                                                         : 0U)
                                                        : 0U))))
                                                    : 
                                                   ((0x10U 
                                                     & vlSelf->top__DOT__design1__DOT__ins)
                                                     ? 
                                                    ((8U 
                                                      & vlSelf->top__DOT__design1__DOT__ins)
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & vlSelf->top__DOT__design1__DOT__ins)
                                                       ? 
                                                      ((2U 
                                                        & vlSelf->top__DOT__design1__DOT__ins)
                                                        ? 
                                                       ((1U 
                                                         & vlSelf->top__DOT__design1__DOT__ins)
                                                         ? 
                                                        (0xfffff000U 
                                                         & vlSelf->top__DOT__design1__DOT__ins)
                                                         : 0U)
                                                        : 0U)
                                                       : 
                                                      ((2U 
                                                        & vlSelf->top__DOT__design1__DOT__ins)
                                                        ? 
                                                       ((1U 
                                                         & vlSelf->top__DOT__design1__DOT__ins)
                                                         ? 
                                                        (((- (IData)(
                                                                     (vlSelf->top__DOT__design1__DOT__ins 
                                                                      >> 0x1fU))) 
                                                          << 0xbU) 
                                                         | (0x7ffU 
                                                            & (vlSelf->top__DOT__design1__DOT__ins 
                                                               >> 0x14U)))
                                                         : 0U)
                                                        : 0U)))
                                                     : 
                                                    ((8U 
                                                      & vlSelf->top__DOT__design1__DOT__ins)
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & vlSelf->top__DOT__design1__DOT__ins)
                                                       ? 0U
                                                       : 
                                                      ((2U 
                                                        & vlSelf->top__DOT__design1__DOT__ins)
                                                        ? 
                                                       ((1U 
                                                         & vlSelf->top__DOT__design1__DOT__ins)
                                                         ? 
                                                        (((- (IData)(
                                                                     (vlSelf->top__DOT__design1__DOT__ins 
                                                                      >> 0x1fU))) 
                                                          << 0xbU) 
                                                         | (0x7ffU 
                                                            & (vlSelf->top__DOT__design1__DOT__ins 
                                                               >> 0x14U)))
                                                         : 0U)
                                                        : 0U))))));
    vlSelf->top__DOT__design1__DOT__data_1 = vlSelf->top__DOT__design1__DOT__regfile__DOT__register
        [(0x1fU & (vlSelf->top__DOT__design1__DOT__ins 
                   >> 0xfU))];
    vlSelf->top__DOT__design1__DOT__data_2 = vlSelf->top__DOT__design1__DOT__regfile__DOT__register
        [(0x1fU & (vlSelf->top__DOT__design1__DOT__ins 
                   >> 0x14U))];
    if (((((((((0x33U == (0x7fU & vlSelf->top__DOT__design1__DOT__ins)) 
               | (0x13U == (0x7fU & vlSelf->top__DOT__design1__DOT__ins))) 
              | (0x23U == (0x7fU & vlSelf->top__DOT__design1__DOT__ins))) 
             | (0x63U == (0x7fU & vlSelf->top__DOT__design1__DOT__ins))) 
            | (0x37U == (0x7fU & vlSelf->top__DOT__design1__DOT__ins))) 
           | (0x6fU == (0x7fU & vlSelf->top__DOT__design1__DOT__ins))) 
          | (3U == (0x7fU & vlSelf->top__DOT__design1__DOT__ins))) 
         | (0x67U == (0x7fU & vlSelf->top__DOT__design1__DOT__ins)))) {
        if ((0x33U == (0x7fU & vlSelf->top__DOT__design1__DOT__ins))) {
            vlSelf->top__DOT__design1__DOT__rd_wren = 1U;
            vlSelf->top__DOT__design1__DOT__mem_wren = 0U;
            vlSelf->top__DOT__design1__DOT__wb_sel = 1U;
            if ((1U & (~ (vlSelf->top__DOT__design1__DOT__ins 
                          >> 0xeU)))) {
                if ((0x2000U & vlSelf->top__DOT__design1__DOT__ins)) {
                    if ((0x1000U & vlSelf->top__DOT__design1__DOT__ins)) {
                        vlSelf->top__DOT__design1__DOT__brunsigned = 1U;
                    }
                }
            }
            vlSelf->top__DOT__design1__DOT__alu_opcode 
                = ((0x4000U & vlSelf->top__DOT__design1__DOT__ins)
                    ? ((0x2000U & vlSelf->top__DOT__design1__DOT__ins)
                        ? ((0x1000U & vlSelf->top__DOT__design1__DOT__ins)
                            ? 6U : 5U) : ((0x1000U 
                                           & vlSelf->top__DOT__design1__DOT__ins)
                                           ? ((0x40000000U 
                                               & vlSelf->top__DOT__design1__DOT__ins)
                                               ? 9U
                                               : 8U)
                                           : 4U)) : 
                   ((0x2000U & vlSelf->top__DOT__design1__DOT__ins)
                     ? ((0x1000U & vlSelf->top__DOT__design1__DOT__ins)
                         ? 3U : 2U) : ((0x1000U & vlSelf->top__DOT__design1__DOT__ins)
                                        ? 7U : ((0x40000000U 
                                                 & vlSelf->top__DOT__design1__DOT__ins)
                                                 ? 1U
                                                 : 0U))));
            vlSelf->top__DOT__design1__DOT__op_a_sel = 0U;
        } else if ((0x13U == (0x7fU & vlSelf->top__DOT__design1__DOT__ins))) {
            vlSelf->top__DOT__design1__DOT__rd_wren = 1U;
            vlSelf->top__DOT__design1__DOT__mem_wren = 0U;
            vlSelf->top__DOT__design1__DOT__wb_sel = 1U;
            if ((1U & (~ (vlSelf->top__DOT__design1__DOT__ins 
                          >> 0xeU)))) {
                if ((0x2000U & vlSelf->top__DOT__design1__DOT__ins)) {
                    if ((0x1000U & vlSelf->top__DOT__design1__DOT__ins)) {
                        vlSelf->top__DOT__design1__DOT__brunsigned = 1U;
                    }
                }
            }
            vlSelf->top__DOT__design1__DOT__alu_opcode 
                = ((0x4000U & vlSelf->top__DOT__design1__DOT__ins)
                    ? ((0x2000U & vlSelf->top__DOT__design1__DOT__ins)
                        ? ((0x1000U & vlSelf->top__DOT__design1__DOT__ins)
                            ? 6U : 5U) : ((0x1000U 
                                           & vlSelf->top__DOT__design1__DOT__ins)
                                           ? ((0x40000000U 
                                               & vlSelf->top__DOT__design1__DOT__ins)
                                               ? 9U
                                               : 8U)
                                           : 4U)) : 
                   ((0x2000U & vlSelf->top__DOT__design1__DOT__ins)
                     ? ((0x1000U & vlSelf->top__DOT__design1__DOT__ins)
                         ? 3U : 2U) : ((0x1000U & vlSelf->top__DOT__design1__DOT__ins)
                                        ? 7U : ((0x40000000U 
                                                 & vlSelf->top__DOT__design1__DOT__ins)
                                                 ? 1U
                                                 : 0U))));
            vlSelf->top__DOT__design1__DOT__op_a_sel = 0U;
        } else {
            if ((0x23U == (0x7fU & vlSelf->top__DOT__design1__DOT__ins))) {
                if ((2U == (7U & (vlSelf->top__DOT__design1__DOT__ins 
                                  >> 0xcU)))) {
                    vlSelf->top__DOT__design1__DOT__rd_wren = 0U;
                    vlSelf->top__DOT__design1__DOT__mem_wren = 1U;
                    vlSelf->top__DOT__design1__DOT__alu_opcode = 0U;
                    vlSelf->top__DOT__design1__DOT__op_a_sel = 0U;
                } else if ((0U == (7U & (vlSelf->top__DOT__design1__DOT__ins 
                                         >> 0xcU)))) {
                    vlSelf->top__DOT__design1__DOT__rd_wren = 0U;
                    vlSelf->top__DOT__design1__DOT__mem_wren = 1U;
                    vlSelf->top__DOT__design1__DOT__alu_opcode = 0U;
                    vlSelf->top__DOT__design1__DOT__op_a_sel = 0U;
                } else if ((1U == (7U & (vlSelf->top__DOT__design1__DOT__ins 
                                         >> 0xcU)))) {
                    vlSelf->top__DOT__design1__DOT__rd_wren = 0U;
                    vlSelf->top__DOT__design1__DOT__mem_wren = 1U;
                    vlSelf->top__DOT__design1__DOT__alu_opcode = 0U;
                    vlSelf->top__DOT__design1__DOT__op_a_sel = 0U;
                }
            } else {
                if ((0x63U == (0x7fU & vlSelf->top__DOT__design1__DOT__ins))) {
                    vlSelf->top__DOT__design1__DOT__rd_wren = 0U;
                    vlSelf->top__DOT__design1__DOT__alu_opcode = 0U;
                    vlSelf->top__DOT__design1__DOT__op_a_sel = 1U;
                } else {
                    if ((0x37U == (0x7fU & vlSelf->top__DOT__design1__DOT__ins))) {
                        vlSelf->top__DOT__design1__DOT__rd_wren = 1U;
                        vlSelf->top__DOT__design1__DOT__alu_opcode = 0xaU;
                    } else if ((0x6fU == (0x7fU & vlSelf->top__DOT__design1__DOT__ins))) {
                        vlSelf->top__DOT__design1__DOT__rd_wren = 1U;
                        vlSelf->top__DOT__design1__DOT__alu_opcode = 0U;
                    } else if ((3U == (0x7fU & vlSelf->top__DOT__design1__DOT__ins))) {
                        if ((2U == (7U & (vlSelf->top__DOT__design1__DOT__ins 
                                          >> 0xcU)))) {
                            vlSelf->top__DOT__design1__DOT__rd_wren = 1U;
                            vlSelf->top__DOT__design1__DOT__alu_opcode = 0U;
                        } else if ((0U == (7U & (vlSelf->top__DOT__design1__DOT__ins 
                                                 >> 0xcU)))) {
                            vlSelf->top__DOT__design1__DOT__rd_wren = 1U;
                            vlSelf->top__DOT__design1__DOT__alu_opcode = 0U;
                        } else if ((1U == (7U & (vlSelf->top__DOT__design1__DOT__ins 
                                                 >> 0xcU)))) {
                            vlSelf->top__DOT__design1__DOT__rd_wren = 1U;
                            vlSelf->top__DOT__design1__DOT__alu_opcode = 0U;
                        } else if ((4U == (7U & (vlSelf->top__DOT__design1__DOT__ins 
                                                 >> 0xcU)))) {
                            vlSelf->top__DOT__design1__DOT__rd_wren = 1U;
                            vlSelf->top__DOT__design1__DOT__alu_opcode = 0U;
                        } else if ((5U == (7U & (vlSelf->top__DOT__design1__DOT__ins 
                                                 >> 0xcU)))) {
                            vlSelf->top__DOT__design1__DOT__rd_wren = 1U;
                            vlSelf->top__DOT__design1__DOT__alu_opcode = 0U;
                        }
                    } else {
                        vlSelf->top__DOT__design1__DOT__rd_wren = 1U;
                        vlSelf->top__DOT__design1__DOT__alu_opcode = 0U;
                    }
                    if ((0x37U != (0x7fU & vlSelf->top__DOT__design1__DOT__ins))) {
                        if ((0x6fU == (0x7fU & vlSelf->top__DOT__design1__DOT__ins))) {
                            vlSelf->top__DOT__design1__DOT__op_a_sel = 1U;
                        } else if ((3U == (0x7fU & vlSelf->top__DOT__design1__DOT__ins))) {
                            if ((2U == (7U & (vlSelf->top__DOT__design1__DOT__ins 
                                              >> 0xcU)))) {
                                vlSelf->top__DOT__design1__DOT__op_a_sel = 0U;
                            } else if ((0U == (7U & 
                                               (vlSelf->top__DOT__design1__DOT__ins 
                                                >> 0xcU)))) {
                                vlSelf->top__DOT__design1__DOT__op_a_sel = 0U;
                            } else if ((1U == (7U & 
                                               (vlSelf->top__DOT__design1__DOT__ins 
                                                >> 0xcU)))) {
                                vlSelf->top__DOT__design1__DOT__op_a_sel = 0U;
                            } else if ((4U == (7U & 
                                               (vlSelf->top__DOT__design1__DOT__ins 
                                                >> 0xcU)))) {
                                vlSelf->top__DOT__design1__DOT__op_a_sel = 0U;
                            } else if ((5U == (7U & 
                                               (vlSelf->top__DOT__design1__DOT__ins 
                                                >> 0xcU)))) {
                                vlSelf->top__DOT__design1__DOT__op_a_sel = 0U;
                            }
                        } else {
                            vlSelf->top__DOT__design1__DOT__op_a_sel = 0U;
                        }
                    }
                }
                if ((0x63U != (0x7fU & vlSelf->top__DOT__design1__DOT__ins))) {
                    if ((0x37U == (0x7fU & vlSelf->top__DOT__design1__DOT__ins))) {
                        vlSelf->top__DOT__design1__DOT__mem_wren = 0U;
                    } else if ((0x6fU != (0x7fU & vlSelf->top__DOT__design1__DOT__ins))) {
                        if ((3U == (0x7fU & vlSelf->top__DOT__design1__DOT__ins))) {
                            if ((2U == (7U & (vlSelf->top__DOT__design1__DOT__ins 
                                              >> 0xcU)))) {
                                vlSelf->top__DOT__design1__DOT__mem_wren = 0U;
                            } else if ((0U == (7U & 
                                               (vlSelf->top__DOT__design1__DOT__ins 
                                                >> 0xcU)))) {
                                vlSelf->top__DOT__design1__DOT__mem_wren = 0U;
                            } else if ((1U == (7U & 
                                               (vlSelf->top__DOT__design1__DOT__ins 
                                                >> 0xcU)))) {
                                vlSelf->top__DOT__design1__DOT__mem_wren = 0U;
                            } else if ((4U == (7U & 
                                               (vlSelf->top__DOT__design1__DOT__ins 
                                                >> 0xcU)))) {
                                vlSelf->top__DOT__design1__DOT__mem_wren = 0U;
                            } else if ((5U == (7U & 
                                               (vlSelf->top__DOT__design1__DOT__ins 
                                                >> 0xcU)))) {
                                vlSelf->top__DOT__design1__DOT__mem_wren = 0U;
                            }
                        } else {
                            vlSelf->top__DOT__design1__DOT__mem_wren = 0U;
                        }
                    }
                }
            }
            if ((0x23U != (0x7fU & vlSelf->top__DOT__design1__DOT__ins))) {
                if ((0x63U != (0x7fU & vlSelf->top__DOT__design1__DOT__ins))) {
                    if ((0x37U == (0x7fU & vlSelf->top__DOT__design1__DOT__ins))) {
                        vlSelf->top__DOT__design1__DOT__wb_sel = 1U;
                    } else if ((0x6fU == (0x7fU & vlSelf->top__DOT__design1__DOT__ins))) {
                        vlSelf->top__DOT__design1__DOT__wb_sel = 2U;
                    } else if ((3U == (0x7fU & vlSelf->top__DOT__design1__DOT__ins))) {
                        if ((2U == (7U & (vlSelf->top__DOT__design1__DOT__ins 
                                          >> 0xcU)))) {
                            vlSelf->top__DOT__design1__DOT__wb_sel = 0U;
                        } else if ((0U == (7U & (vlSelf->top__DOT__design1__DOT__ins 
                                                 >> 0xcU)))) {
                            vlSelf->top__DOT__design1__DOT__wb_sel = 0U;
                        } else if ((1U == (7U & (vlSelf->top__DOT__design1__DOT__ins 
                                                 >> 0xcU)))) {
                            vlSelf->top__DOT__design1__DOT__wb_sel = 0U;
                        } else if ((4U == (7U & (vlSelf->top__DOT__design1__DOT__ins 
                                                 >> 0xcU)))) {
                            vlSelf->top__DOT__design1__DOT__wb_sel = 0U;
                        } else if ((5U == (7U & (vlSelf->top__DOT__design1__DOT__ins 
                                                 >> 0xcU)))) {
                            vlSelf->top__DOT__design1__DOT__wb_sel = 0U;
                        }
                    } else {
                        vlSelf->top__DOT__design1__DOT__wb_sel = 3U;
                    }
                }
                if ((0x63U == (0x7fU & vlSelf->top__DOT__design1__DOT__ins))) {
                    if ((0U != (7U & (vlSelf->top__DOT__design1__DOT__ins 
                                      >> 0xcU)))) {
                        if ((1U != (7U & (vlSelf->top__DOT__design1__DOT__ins 
                                          >> 0xcU)))) {
                            if ((4U != (7U & (vlSelf->top__DOT__design1__DOT__ins 
                                              >> 0xcU)))) {
                                if ((5U != (7U & (vlSelf->top__DOT__design1__DOT__ins 
                                                  >> 0xcU)))) {
                                    if ((6U == (7U 
                                                & (vlSelf->top__DOT__design1__DOT__ins 
                                                   >> 0xcU)))) {
                                        vlSelf->top__DOT__design1__DOT__brunsigned = 1U;
                                    } else if ((7U 
                                                == 
                                                (7U 
                                                 & (vlSelf->top__DOT__design1__DOT__ins 
                                                    >> 0xcU)))) {
                                        vlSelf->top__DOT__design1__DOT__brunsigned = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((0x33U != (0x7fU & vlSelf->top__DOT__design1__DOT__ins))) {
            if ((0x13U != (0x7fU & vlSelf->top__DOT__design1__DOT__ins))) {
                if ((0x23U == (0x7fU & vlSelf->top__DOT__design1__DOT__ins))) {
                    if ((2U != (7U & (vlSelf->top__DOT__design1__DOT__ins 
                                      >> 0xcU)))) {
                        if ((0U == (7U & (vlSelf->top__DOT__design1__DOT__ins 
                                          >> 0xcU)))) {
                            vlSelf->top__DOT__design1__DOT__imm_sto = 0U;
                        } else if ((1U == (7U & (vlSelf->top__DOT__design1__DOT__ins 
                                                 >> 0xcU)))) {
                            vlSelf->top__DOT__design1__DOT__imm_sto = 1U;
                        }
                    }
                }
                if ((0x23U != (0x7fU & vlSelf->top__DOT__design1__DOT__ins))) {
                    if ((0x63U != (0x7fU & vlSelf->top__DOT__design1__DOT__ins))) {
                        if ((0x37U != (0x7fU & vlSelf->top__DOT__design1__DOT__ins))) {
                            if ((0x6fU != (0x7fU & vlSelf->top__DOT__design1__DOT__ins))) {
                                if ((3U == (0x7fU & vlSelf->top__DOT__design1__DOT__ins))) {
                                    if ((2U != (7U 
                                                & (vlSelf->top__DOT__design1__DOT__ins 
                                                   >> 0xcU)))) {
                                        if ((0U == 
                                             (7U & 
                                              (vlSelf->top__DOT__design1__DOT__ins 
                                               >> 0xcU)))) {
                                            vlSelf->top__DOT__design1__DOT__imm_sel = 0U;
                                        } else if (
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->top__DOT__design1__DOT__ins 
                                                        >> 0xcU)))) {
                                            vlSelf->top__DOT__design1__DOT__imm_sel = 1U;
                                        } else if (
                                                   (4U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->top__DOT__design1__DOT__ins 
                                                        >> 0xcU)))) {
                                            vlSelf->top__DOT__design1__DOT__imm_sel = 4U;
                                        } else if (
                                                   (5U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->top__DOT__design1__DOT__ins 
                                                        >> 0xcU)))) {
                                            vlSelf->top__DOT__design1__DOT__imm_sel = 5U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x17U == (0x7fU & vlSelf->top__DOT__design1__DOT__ins))) {
        vlSelf->top__DOT__design1__DOT__rd_wren = 1U;
        vlSelf->top__DOT__design1__DOT__mem_wren = 0U;
        vlSelf->top__DOT__design1__DOT__wb_sel = 1U;
        vlSelf->top__DOT__design1__DOT__alu_opcode = 0U;
        vlSelf->top__DOT__design1__DOT__op_a_sel = 1U;
    }
    vlSelf->top__DOT__design1__DOT__opa = ((IData)(vlSelf->top__DOT__design1__DOT__op_a_sel)
                                            ? vlSelf->top__DOT__design1__DOT__pc_ins
                                            : vlSelf->top__DOT__design1__DOT__data_1);
    if ((0U == (IData)(vlSelf->top__DOT__design1__DOT__imm_sto))) {
        vlSelf->top__DOT__design1__DOT__rs2_data = 
            (((- (IData)((vlSelf->top__DOT__design1__DOT__data_2 
                          >> 0x1fU))) << 8U) | (0xffU 
                                                & vlSelf->top__DOT__design1__DOT__data_2));
    } else if ((1U == (IData)(vlSelf->top__DOT__design1__DOT__imm_sto))) {
        vlSelf->top__DOT__design1__DOT__rs2_data = 
            (((- (IData)((vlSelf->top__DOT__design1__DOT__data_2 
                          >> 0x1fU))) << 0x10U) | (0xffffU 
                                                   & vlSelf->top__DOT__design1__DOT__data_2));
    }
    vlSelf->top__DOT__design1__DOT__brequal = ((0U 
                                                != 
                                                ((vlSelf->top__DOT__design1__DOT__data_1 
                                                  ^ vlSelf->top__DOT__design1__DOT__data_2) 
                                                 >> 0x1fU))
                                                ? 1U
                                                : 0U);
    vlSelf->top__DOT__design1__DOT__brless = (1U & 
                                              ((IData)(vlSelf->top__DOT__design1__DOT__brunsigned)
                                                ? (
                                                   (0U 
                                                    != 
                                                    (((IData)(1U) 
                                                      + 
                                                      (vlSelf->top__DOT__design1__DOT__data_1 
                                                       + 
                                                       (~ vlSelf->top__DOT__design1__DOT__data_2))) 
                                                     >> 0x1fU))
                                                    ? 1U
                                                    : 0U)
                                                : (
                                                   ((0U 
                                                     != 
                                                     (((IData)(1U) 
                                                       + 
                                                       (vlSelf->top__DOT__design1__DOT__data_1 
                                                        + 
                                                        (~ vlSelf->top__DOT__design1__DOT__data_2))) 
                                                      >> 0x1fU)) 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  ((vlSelf->top__DOT__design1__DOT__data_1 
                                                                    ^ vlSelf->top__DOT__design1__DOT__data_2) 
                                                                   >> 0x1fU)))))
                                                    ? 1U
                                                    : 0U)));
    if (((((((((0x33U == (0x7fU & vlSelf->top__DOT__design1__DOT__ins)) 
               | (0x13U == (0x7fU & vlSelf->top__DOT__design1__DOT__ins))) 
              | (0x23U == (0x7fU & vlSelf->top__DOT__design1__DOT__ins))) 
             | (0x63U == (0x7fU & vlSelf->top__DOT__design1__DOT__ins))) 
            | (0x37U == (0x7fU & vlSelf->top__DOT__design1__DOT__ins))) 
           | (0x6fU == (0x7fU & vlSelf->top__DOT__design1__DOT__ins))) 
          | (3U == (0x7fU & vlSelf->top__DOT__design1__DOT__ins))) 
         | (0x67U == (0x7fU & vlSelf->top__DOT__design1__DOT__ins)))) {
        if ((0x33U == (0x7fU & vlSelf->top__DOT__design1__DOT__ins))) {
            vlSelf->top__DOT__design1__DOT__op_b_sel = 0U;
            vlSelf->top__DOT__design1__DOT__br_select = 0U;
        } else if ((0x13U == (0x7fU & vlSelf->top__DOT__design1__DOT__ins))) {
            vlSelf->top__DOT__design1__DOT__op_b_sel = 1U;
            vlSelf->top__DOT__design1__DOT__br_select = 0U;
        } else if ((0x23U == (0x7fU & vlSelf->top__DOT__design1__DOT__ins))) {
            if ((2U == (7U & (vlSelf->top__DOT__design1__DOT__ins 
                              >> 0xcU)))) {
                vlSelf->top__DOT__design1__DOT__op_b_sel = 1U;
                vlSelf->top__DOT__design1__DOT__br_select = 0U;
            } else if ((0U == (7U & (vlSelf->top__DOT__design1__DOT__ins 
                                     >> 0xcU)))) {
                vlSelf->top__DOT__design1__DOT__op_b_sel = 1U;
                vlSelf->top__DOT__design1__DOT__br_select = 0U;
            } else if ((1U == (7U & (vlSelf->top__DOT__design1__DOT__ins 
                                     >> 0xcU)))) {
                vlSelf->top__DOT__design1__DOT__op_b_sel = 1U;
                vlSelf->top__DOT__design1__DOT__br_select = 0U;
            }
        } else if ((0x63U == (0x7fU & vlSelf->top__DOT__design1__DOT__ins))) {
            vlSelf->top__DOT__design1__DOT__op_b_sel = 1U;
            if ((0U == (7U & (vlSelf->top__DOT__design1__DOT__ins 
                              >> 0xcU)))) {
                vlSelf->top__DOT__design1__DOT__br_select 
                    = ((IData)(vlSelf->top__DOT__design1__DOT__brequal)
                        ? 1U : 0U);
            } else if ((1U == (7U & (vlSelf->top__DOT__design1__DOT__ins 
                                     >> 0xcU)))) {
                vlSelf->top__DOT__design1__DOT__br_select 
                    = ((IData)(vlSelf->top__DOT__design1__DOT__brequal)
                        ? 0U : 1U);
            } else if ((4U == (7U & (vlSelf->top__DOT__design1__DOT__ins 
                                     >> 0xcU)))) {
                vlSelf->top__DOT__design1__DOT__br_select 
                    = ((IData)(vlSelf->top__DOT__design1__DOT__brless)
                        ? 1U : 0U);
            } else if ((5U == (7U & (vlSelf->top__DOT__design1__DOT__ins 
                                     >> 0xcU)))) {
                vlSelf->top__DOT__design1__DOT__br_select 
                    = ((IData)(vlSelf->top__DOT__design1__DOT__brless)
                        ? 0U : 1U);
            } else if ((6U == (7U & (vlSelf->top__DOT__design1__DOT__ins 
                                     >> 0xcU)))) {
                vlSelf->top__DOT__design1__DOT__br_select 
                    = ((IData)(vlSelf->top__DOT__design1__DOT__brless)
                        ? 1U : 0U);
            } else if ((7U == (7U & (vlSelf->top__DOT__design1__DOT__ins 
                                     >> 0xcU)))) {
                vlSelf->top__DOT__design1__DOT__br_select 
                    = ((IData)(vlSelf->top__DOT__design1__DOT__brless)
                        ? 0U : 1U);
            }
        } else if ((0x37U == (0x7fU & vlSelf->top__DOT__design1__DOT__ins))) {
            vlSelf->top__DOT__design1__DOT__op_b_sel = 1U;
            vlSelf->top__DOT__design1__DOT__br_select = 0U;
        } else if ((0x6fU == (0x7fU & vlSelf->top__DOT__design1__DOT__ins))) {
            vlSelf->top__DOT__design1__DOT__op_b_sel = 1U;
            vlSelf->top__DOT__design1__DOT__br_select = 1U;
        } else if ((3U == (0x7fU & vlSelf->top__DOT__design1__DOT__ins))) {
            if ((2U == (7U & (vlSelf->top__DOT__design1__DOT__ins 
                              >> 0xcU)))) {
                vlSelf->top__DOT__design1__DOT__op_b_sel = 1U;
                vlSelf->top__DOT__design1__DOT__br_select = 0U;
            } else if ((0U == (7U & (vlSelf->top__DOT__design1__DOT__ins 
                                     >> 0xcU)))) {
                vlSelf->top__DOT__design1__DOT__op_b_sel = 1U;
                vlSelf->top__DOT__design1__DOT__br_select = 0U;
            } else if ((1U == (7U & (vlSelf->top__DOT__design1__DOT__ins 
                                     >> 0xcU)))) {
                vlSelf->top__DOT__design1__DOT__op_b_sel = 1U;
                vlSelf->top__DOT__design1__DOT__br_select = 0U;
            } else if ((4U == (7U & (vlSelf->top__DOT__design1__DOT__ins 
                                     >> 0xcU)))) {
                vlSelf->top__DOT__design1__DOT__op_b_sel = 1U;
                vlSelf->top__DOT__design1__DOT__br_select = 0U;
            } else if ((5U == (7U & (vlSelf->top__DOT__design1__DOT__ins 
                                     >> 0xcU)))) {
                vlSelf->top__DOT__design1__DOT__op_b_sel = 1U;
                vlSelf->top__DOT__design1__DOT__br_select = 0U;
            }
        } else {
            vlSelf->top__DOT__design1__DOT__op_b_sel = 1U;
            vlSelf->top__DOT__design1__DOT__br_select = 1U;
        }
    } else if ((0x17U == (0x7fU & vlSelf->top__DOT__design1__DOT__ins))) {
        vlSelf->top__DOT__design1__DOT__op_b_sel = 1U;
        vlSelf->top__DOT__design1__DOT__br_select = 0U;
    }
    vlSelf->top__DOT__design1__DOT__opb = ((IData)(vlSelf->top__DOT__design1__DOT__op_b_sel)
                                            ? vlSelf->top__DOT__design1__DOT__immgen_mux
                                            : vlSelf->top__DOT__design1__DOT__data_2);
    if (((((((((0U == (IData)(vlSelf->top__DOT__design1__DOT__alu_opcode)) 
               | (1U == (IData)(vlSelf->top__DOT__design1__DOT__alu_opcode))) 
              | (2U == (IData)(vlSelf->top__DOT__design1__DOT__alu_opcode))) 
             | (3U == (IData)(vlSelf->top__DOT__design1__DOT__alu_opcode))) 
            | (4U == (IData)(vlSelf->top__DOT__design1__DOT__alu_opcode))) 
           | (5U == (IData)(vlSelf->top__DOT__design1__DOT__alu_opcode))) 
          | (6U == (IData)(vlSelf->top__DOT__design1__DOT__alu_opcode))) 
         | (7U == (IData)(vlSelf->top__DOT__design1__DOT__alu_opcode)))) {
        vlSelf->top__DOT__design1__DOT__aludata = (
                                                   (0U 
                                                    == (IData)(vlSelf->top__DOT__design1__DOT__alu_opcode))
                                                    ? 
                                                   (vlSelf->top__DOT__design1__DOT__opa 
                                                    + vlSelf->top__DOT__design1__DOT__opb)
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__design1__DOT__alu_opcode))
                                                     ? 
                                                    ((IData)(1U) 
                                                     + 
                                                     (vlSelf->top__DOT__design1__DOT__opa 
                                                      + 
                                                      (~ vlSelf->top__DOT__design1__DOT__opb)))
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__design1__DOT__alu_opcode))
                                                      ? 
                                                     ((0U 
                                                       != 
                                                       (((IData)(1U) 
                                                         + 
                                                         (vlSelf->top__DOT__design1__DOT__opa 
                                                          + 
                                                          (~ vlSelf->top__DOT__design1__DOT__opb))) 
                                                        >> 0x1fU))
                                                       ? 1U
                                                       : 0U)
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelf->top__DOT__design1__DOT__alu_opcode))
                                                       ? 
                                                      (((0U 
                                                         != 
                                                         (((IData)(1U) 
                                                           + 
                                                           (vlSelf->top__DOT__design1__DOT__opa 
                                                            + 
                                                            (~ vlSelf->top__DOT__design1__DOT__opb))) 
                                                          >> 0x1fU)) 
                                                        & (~ 
                                                           ((0U 
                                                             != 
                                                             (vlSelf->top__DOT__design1__DOT__opa 
                                                              >> 0x1fU)) 
                                                            & (0U 
                                                               != 
                                                               (vlSelf->top__DOT__design1__DOT__opb 
                                                                >> 0x1fU)))))
                                                        ? 1U
                                                        : 0U)
                                                       : 
                                                      ((4U 
                                                        == (IData)(vlSelf->top__DOT__design1__DOT__alu_opcode))
                                                        ? 
                                                       (vlSelf->top__DOT__design1__DOT__opa 
                                                        ^ vlSelf->top__DOT__design1__DOT__opb)
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelf->top__DOT__design1__DOT__alu_opcode))
                                                         ? 
                                                        (vlSelf->top__DOT__design1__DOT__opa 
                                                         | vlSelf->top__DOT__design1__DOT__opb)
                                                         : 
                                                        ((6U 
                                                          == (IData)(vlSelf->top__DOT__design1__DOT__alu_opcode))
                                                          ? 
                                                         (vlSelf->top__DOT__design1__DOT__opa 
                                                          & vlSelf->top__DOT__design1__DOT__opb)
                                                          : 
                                                         (vlSelf->top__DOT__design1__DOT__opa 
                                                          << 
                                                          (0x1fU 
                                                           & vlSelf->top__DOT__design1__DOT__opb)))))))));
    } else if ((8U == (IData)(vlSelf->top__DOT__design1__DOT__alu_opcode))) {
        vlSelf->top__DOT__design1__DOT__aludata = (vlSelf->top__DOT__design1__DOT__opa 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->top__DOT__design1__DOT__opb));
    } else if ((9U == (IData)(vlSelf->top__DOT__design1__DOT__alu_opcode))) {
        vlSelf->top__DOT__design1__DOT__aludata = VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__design1__DOT__opa, 
                                                                 (0x1fU 
                                                                  & vlSelf->top__DOT__design1__DOT__opb));
    } else if ((0xaU == (IData)(vlSelf->top__DOT__design1__DOT__alu_opcode))) {
        vlSelf->top__DOT__design1__DOT__aludata = vlSelf->top__DOT__design1__DOT__opb;
    }
    vlSelf->top__DOT__design1__DOT__nxtpc = ((IData)(vlSelf->top__DOT__design1__DOT__br_select)
                                              ? vlSelf->top__DOT__design1__DOT__aludata
                                              : ((IData)(4U) 
                                                 + vlSelf->top__DOT__design1__DOT__pc_ins));
    vlSelf->top__DOT__design1__DOT__wb_data = ((2U 
                                                & (IData)(vlSelf->top__DOT__design1__DOT__wb_sel))
                                                ? ((IData)(4U) 
                                                   + vlSelf->top__DOT__design1__DOT__pc_ins)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->top__DOT__design1__DOT__wb_sel))
                                                    ? vlSelf->top__DOT__design1__DOT__ld_data
                                                    : vlSelf->top__DOT__design1__DOT__aludata));
    if ((0U == (0x1fU & (vlSelf->top__DOT__design1__DOT__ins 
                         >> 2U)))) {
        if ((0U == (IData)(vlSelf->top__DOT__design1__DOT__imm_sel))) {
            vlSelf->top__DOT__design1__DOT__dataW = 
                (((- (IData)((vlSelf->top__DOT__design1__DOT__wb_data 
                              >> 0x1fU))) << 8U) | 
                 (0xffU & vlSelf->top__DOT__design1__DOT__wb_data));
        } else if ((1U == (IData)(vlSelf->top__DOT__design1__DOT__imm_sel))) {
            vlSelf->top__DOT__design1__DOT__dataW = 
                (((- (IData)((vlSelf->top__DOT__design1__DOT__wb_data 
                              >> 0x1fU))) << 0x10U) 
                 | (0xffffU & vlSelf->top__DOT__design1__DOT__wb_data));
        } else if ((4U == (IData)(vlSelf->top__DOT__design1__DOT__imm_sel))) {
            vlSelf->top__DOT__design1__DOT__dataW = 
                (0xffU & vlSelf->top__DOT__design1__DOT__wb_data);
        } else if ((5U == (IData)(vlSelf->top__DOT__design1__DOT__imm_sel))) {
            vlSelf->top__DOT__design1__DOT__dataW = 
                (0xffffU & vlSelf->top__DOT__design1__DOT__wb_data);
        }
    }
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i)))) {
        Vtop___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Vtop___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    // Final
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((vlSelf->rst_ni & 0xfeU))) {
        Verilated::overWidthError("rst_ni");}
}
#endif  // VL_DEBUG
