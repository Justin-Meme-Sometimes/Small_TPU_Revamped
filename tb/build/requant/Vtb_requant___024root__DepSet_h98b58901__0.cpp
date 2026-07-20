// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_requant.h for the primary calling header

#include "Vtb_requant__pch.h"
#include "Vtb_requant___024root.h"

VlCoroutine Vtb_requant___024root___eval_initial__TOP__Vtiming__0(Vtb_requant___024root* vlSelf);
VlCoroutine Vtb_requant___024root___eval_initial__TOP__Vtiming__1(Vtb_requant___024root* vlSelf);

void Vtb_requant___024root___eval_initial(Vtb_requant___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_requant__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_requant___024root___eval_initial\n"); );
    // Body
    Vtb_requant___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_requant___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_requant__DOT__clk__0 
        = vlSelf->tb_requant__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__tb_requant__DOT__rst_n__0 
        = vlSelf->tb_requant__DOT__rst_n;
}

VL_INLINE_OPT VlCoroutine Vtb_requant___024root___eval_initial__TOP__Vtiming__0(Vtb_requant___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_requant__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_requant___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    std::string __Vtask_tb_requant__DOT__check__1__name;
    CData/*0:0*/ __Vtask_tb_requant__DOT__check__1__cond;
    __Vtask_tb_requant__DOT__check__1__cond = 0;
    std::string __Vtask_tb_requant__DOT__check__2__name;
    CData/*0:0*/ __Vtask_tb_requant__DOT__check__2__cond;
    __Vtask_tb_requant__DOT__check__2__cond = 0;
    std::string __Vtask_tb_requant__DOT__check__5__name;
    CData/*0:0*/ __Vtask_tb_requant__DOT__check__5__cond;
    __Vtask_tb_requant__DOT__check__5__cond = 0;
    std::string __Vtask_tb_requant__DOT__check__6__name;
    CData/*0:0*/ __Vtask_tb_requant__DOT__check__6__cond;
    __Vtask_tb_requant__DOT__check__6__cond = 0;
    std::string __Vtask_tb_requant__DOT__check__8__name;
    CData/*0:0*/ __Vtask_tb_requant__DOT__check__8__cond;
    __Vtask_tb_requant__DOT__check__8__cond = 0;
    std::string __Vtask_tb_requant__DOT__check__10__name;
    CData/*0:0*/ __Vtask_tb_requant__DOT__check__10__cond;
    __Vtask_tb_requant__DOT__check__10__cond = 0;
    std::string __Vtask_tb_requant__DOT__check__12__name;
    CData/*0:0*/ __Vtask_tb_requant__DOT__check__12__cond;
    __Vtask_tb_requant__DOT__check__12__cond = 0;
    std::string __Vtask_tb_requant__DOT__check__13__name;
    CData/*0:0*/ __Vtask_tb_requant__DOT__check__13__cond;
    __Vtask_tb_requant__DOT__check__13__cond = 0;
    // Body
    vlSelf->tb_requant__DOT__rst_n = 0U;
    vlSelf->tb_requant__DOT__valid = 0U;
    vlSelf->tb_requant__DOT__drain_state = 0U;
    vlSelf->tb_requant__DOT__accum_state = 0U;
    vlSelf->tb_requant__DOT__ins[0U] = 0U;
    vlSelf->tb_requant__DOT__ins[1U] = 0U;
    vlSelf->tb_requant__DOT__ins[2U] = 0U;
    vlSelf->tb_requant__DOT__ins[3U] = 0U;
    vlSelf->tb_requant__DOT__con = 0U;
    co_await vlSelf->__VtrigSched_h71ed53e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_requant.clk)", 
                                                       "tb/tb_requant.sv", 
                                                       50);
    co_await vlSelf->__VtrigSched_h71ed53e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_requant.clk)", 
                                                       "tb/tb_requant.sv", 
                                                       50);
    vlSelf->tb_requant__DOT__rst_n = 1U;
    co_await vlSelf->__VtrigSched_h71ed53e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_requant.clk)", 
                                                       "tb/tb_requant.sv", 
                                                       52);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_requant.sv", 
                                       52);
    VL_WRITEF("==== requant ====\n");
    __Vtask_tb_requant__DOT__check__1__cond = (0U == vlSelf->tb_requant__DOT____Vcellout__dut__out);
    __Vtask_tb_requant__DOT__check__1__name = std::string{"reset: out all zero"};
    vlSelf->tb_requant__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_requant__DOT__checks);
    if (__Vtask_tb_requant__DOT__check__1__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_requant__DOT__check__1__name));
    } else {
        vlSelf->tb_requant__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_requant__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_requant__DOT__check__1__name));
    }
    __Vtask_tb_requant__DOT__check__2__cond = (1U & 
                                               (~ (IData)(vlSelf->tb_requant__DOT__out_valid)));
    __Vtask_tb_requant__DOT__check__2__name = std::string{"reset: out_valid low"};
    vlSelf->tb_requant__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_requant__DOT__checks);
    if (__Vtask_tb_requant__DOT__check__2__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_requant__DOT__check__2__name));
    } else {
        vlSelf->tb_requant__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_requant__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_requant__DOT__check__2__name));
    }
    vlSelf->tb_requant__DOT__valid = 1U;
    vlSelf->tb_requant__DOT__drain_state = 1U;
    vlSelf->tb_requant__DOT__con = 1U;
    vlSelf->tb_requant__DOT__ins[0U] = 5U;
    vlSelf->tb_requant__DOT__ins[1U] = 0xc8U;
    vlSelf->tb_requant__DOT__ins[2U] = 0xfffffffbU;
    vlSelf->tb_requant__DOT__ins[3U] = 0U;
    co_await vlSelf->__VtrigSched_h71ed53e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_requant.clk)", 
                                                       "tb/tb_requant.sv", 
                                                       56);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_requant.sv", 
                                       56);
    co_await vlSelf->__VtrigSched_h71ed53e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_requant.clk)", 
                                                       "tb/tb_requant.sv", 
                                                       56);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_requant.sv", 
                                       56);
    __Vtask_tb_requant__DOT__check__5__cond = (1U & 
                                               (~ (IData)(
                                                          (0x80808080U 
                                                           == vlSelf->tb_requant__DOT____Vcellout__dut__out))));
    __Vtask_tb_requant__DOT__check__5__name = std::string{"BUG: first active cycle should NOT saturate every lane to -128 (unsigned huge-number comparison, not per-lane)"};
    vlSelf->tb_requant__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_requant__DOT__checks);
    if (__Vtask_tb_requant__DOT__check__5__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_requant__DOT__check__5__name));
    } else {
        vlSelf->tb_requant__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_requant__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_requant__DOT__check__5__name));
    }
    VL_WRITEF("out[0] = %0#\nout[1] = %0#\nout[2] = %0#\nout[3] = %0#\n",
              8,(0xffU & vlSelf->tb_requant__DOT____Vcellout__dut__out),
              8,(0xffU & (vlSelf->tb_requant__DOT____Vcellout__dut__out 
                          >> 8U)),8,(0xffU & (vlSelf->tb_requant__DOT____Vcellout__dut__out 
                                              >> 0x10U)),
              8,(vlSelf->tb_requant__DOT____Vcellout__dut__out 
                 >> 0x18U));
    __Vtask_tb_requant__DOT__check__6__cond = vlSelf->tb_requant__DOT__out_valid;
    __Vtask_tb_requant__DOT__check__6__name = std::string{"out_valid asserted"};
    vlSelf->tb_requant__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_requant__DOT__checks);
    if (__Vtask_tb_requant__DOT__check__6__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_requant__DOT__check__6__name));
    } else {
        vlSelf->tb_requant__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_requant__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_requant__DOT__check__6__name));
    }
    co_await vlSelf->__VtrigSched_h71ed53e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_requant.clk)", 
                                                       "tb/tb_requant.sv", 
                                                       56);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_requant.sv", 
                                       56);
    __Vtask_tb_requant__DOT__check__8__cond = (1U & 
                                               (~ (IData)(
                                                          (0x7f7f7f7fU 
                                                           == vlSelf->tb_requant__DOT____Vcellout__dut__out))));
    __Vtask_tb_requant__DOT__check__8__name = std::string{"BUG: second active cycle should NOT have every lane stuck at 127"};
    vlSelf->tb_requant__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_requant__DOT__checks);
    if (__Vtask_tb_requant__DOT__check__8__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_requant__DOT__check__8__name));
    } else {
        vlSelf->tb_requant__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_requant__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_requant__DOT__check__8__name));
    }
    vlSelf->tb_requant__DOT__con = 2U;
    vlSelf->tb_requant__DOT__ins[0U] = 0x190U;
    co_await vlSelf->__VtrigSched_h71ed53e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_requant.clk)", 
                                                       "tb/tb_requant.sv", 
                                                       56);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_requant.sv", 
                                       56);
    __Vtask_tb_requant__DOT__check__10__cond = (1U 
                                                & (~ (IData)(
                                                             (0x7f7f7f7fU 
                                                              == vlSelf->tb_requant__DOT____Vcellout__dut__out))));
    __Vtask_tb_requant__DOT__check__10__name = std::string{"BUG: changing con/ins should have an effect, not stay stuck at 127"};
    vlSelf->tb_requant__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_requant__DOT__checks);
    if (__Vtask_tb_requant__DOT__check__10__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_requant__DOT__check__10__name));
    } else {
        vlSelf->tb_requant__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_requant__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_requant__DOT__check__10__name));
    }
    vlSelf->tb_requant__DOT__valid = 0U;
    co_await vlSelf->__VtrigSched_h71ed53e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_requant.clk)", 
                                                       "tb/tb_requant.sv", 
                                                       56);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_requant.sv", 
                                       56);
    __Vtask_tb_requant__DOT__check__12__cond = (1U 
                                                & (~ (IData)(vlSelf->tb_requant__DOT__out_valid)));
    __Vtask_tb_requant__DOT__check__12__name = std::string{"valid=0: out_valid drops"};
    vlSelf->tb_requant__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_requant__DOT__checks);
    if (__Vtask_tb_requant__DOT__check__12__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_requant__DOT__check__12__name));
    } else {
        vlSelf->tb_requant__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_requant__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_requant__DOT__check__12__name));
    }
    __Vtask_tb_requant__DOT__check__13__cond = (IData)(
                                                       (0U 
                                                        == vlSelf->tb_requant__DOT____Vcellout__dut__out));
    __Vtask_tb_requant__DOT__check__13__name = std::string{"valid=0: out is cleared to zero"};
    vlSelf->tb_requant__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_requant__DOT__checks);
    if (__Vtask_tb_requant__DOT__check__13__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_requant__DOT__check__13__name));
    } else {
        vlSelf->tb_requant__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_requant__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_requant__DOT__check__13__name));
    }
    VL_WRITEF("out[0] = %0#\nout[1] = %0#\nout[2] = %0#\nout[3] = %0#\n==== SUMMARY ====\nrequant: %0d/%0d checks passed\n",
              8,(0xffU & vlSelf->tb_requant__DOT____Vcellout__dut__out),
              8,(0xffU & (vlSelf->tb_requant__DOT____Vcellout__dut__out 
                          >> 8U)),8,(0xffU & (vlSelf->tb_requant__DOT____Vcellout__dut__out 
                                              >> 0x10U)),
              8,(vlSelf->tb_requant__DOT____Vcellout__dut__out 
                 >> 0x18U),32,(vlSelf->tb_requant__DOT__checks 
                               - vlSelf->tb_requant__DOT__errors),
              32,vlSelf->tb_requant__DOT__checks);
    VL_FINISH_MT("tb/tb_requant.sv", 109, "");
}

VL_INLINE_OPT VlCoroutine Vtb_requant___024root___eval_initial__TOP__Vtiming__1(Vtb_requant___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_requant__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_requant___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "tb/tb_requant.sv", 
                                           35);
        vlSelf->tb_requant__DOT__clk = (1U & (~ (IData)(vlSelf->tb_requant__DOT__clk)));
    }
}

void Vtb_requant___024root___eval_act(Vtb_requant___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_requant__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_requant___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtb_requant___024root___nba_sequent__TOP__0(Vtb_requant___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_requant__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_requant___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->tb_requant__DOT__out_valid = ((IData)(vlSelf->tb_requant__DOT__rst_n) 
                                          && (((IData)(vlSelf->tb_requant__DOT__valid) 
                                               & ((IData)(vlSelf->tb_requant__DOT__drain_state) 
                                                  | (IData)(vlSelf->tb_requant__DOT__accum_state))) 
                                              && (IData)(vlSelf->tb_requant__DOT__valid)));
    vlSelf->tb_requant__DOT____Vcellout__dut__out = 
        ((0xffffff00U & vlSelf->tb_requant__DOT____Vcellout__dut__out) 
         | ((IData)(vlSelf->tb_requant__DOT__rst_n)
             ? (((IData)(vlSelf->tb_requant__DOT__valid) 
                 & ((IData)(vlSelf->tb_requant__DOT__drain_state) 
                    | (IData)(vlSelf->tb_requant__DOT__accum_state)))
                 ? (VL_LTS_III(32, 0x7fU, VL_EXTENDS_II(32,4, 
                                                        (0xfU 
                                                         & vlSelf->tb_requant__DOT__dut__DOT__shift_buffer[0U])))
                     ? 0x7fU : (VL_GTS_III(32, 0xffffff80U, 
                                           VL_EXTENDS_II(32,4, 
                                                         (0xfU 
                                                          & vlSelf->tb_requant__DOT__dut__DOT__shift_buffer[0U])))
                                 ? 0x80U : (0xffU & 
                                            VL_EXTENDS_II(8,4, 
                                                          (0xfU 
                                                           & vlSelf->tb_requant__DOT__dut__DOT__shift_buffer[0U])))))
                 : 0U) : 0U));
    vlSelf->tb_requant__DOT____Vcellout__dut__out = 
        ((0xffff00ffU & vlSelf->tb_requant__DOT____Vcellout__dut__out) 
         | (((IData)(vlSelf->tb_requant__DOT__rst_n)
              ? (((IData)(vlSelf->tb_requant__DOT__valid) 
                  & ((IData)(vlSelf->tb_requant__DOT__drain_state) 
                     | (IData)(vlSelf->tb_requant__DOT__accum_state)))
                  ? (VL_LTS_III(32, 0x7fU, VL_EXTENDS_II(32,4, 
                                                         (0xfU 
                                                          & (vlSelf->tb_requant__DOT__dut__DOT__shift_buffer[0U] 
                                                             >> 4U))))
                      ? 0x7fU : (VL_GTS_III(32, 0xffffff80U, 
                                            VL_EXTENDS_II(32,4, 
                                                          (0xfU 
                                                           & (vlSelf->tb_requant__DOT__dut__DOT__shift_buffer[0U] 
                                                              >> 4U))))
                                  ? 0x80U : (0xffU 
                                             & VL_EXTENDS_II(8,4, 
                                                             (0xfU 
                                                              & (vlSelf->tb_requant__DOT__dut__DOT__shift_buffer[0U] 
                                                                 >> 4U))))))
                  : 0U) : 0U) << 8U));
    vlSelf->tb_requant__DOT____Vcellout__dut__out = 
        ((0xff00ffffU & vlSelf->tb_requant__DOT____Vcellout__dut__out) 
         | (((IData)(vlSelf->tb_requant__DOT__rst_n)
              ? (((IData)(vlSelf->tb_requant__DOT__valid) 
                  & ((IData)(vlSelf->tb_requant__DOT__drain_state) 
                     | (IData)(vlSelf->tb_requant__DOT__accum_state)))
                  ? (VL_LTS_III(32, 0x7fU, VL_EXTENDS_II(32,4, 
                                                         (0xfU 
                                                          & (vlSelf->tb_requant__DOT__dut__DOT__shift_buffer[0U] 
                                                             >> 8U))))
                      ? 0x7fU : (VL_GTS_III(32, 0xffffff80U, 
                                            VL_EXTENDS_II(32,4, 
                                                          (0xfU 
                                                           & (vlSelf->tb_requant__DOT__dut__DOT__shift_buffer[0U] 
                                                              >> 8U))))
                                  ? 0x80U : (0xffU 
                                             & VL_EXTENDS_II(8,4, 
                                                             (0xfU 
                                                              & (vlSelf->tb_requant__DOT__dut__DOT__shift_buffer[0U] 
                                                                 >> 8U))))))
                  : 0U) : 0U) << 0x10U));
    vlSelf->tb_requant__DOT____Vcellout__dut__out = 
        ((0xffffffU & vlSelf->tb_requant__DOT____Vcellout__dut__out) 
         | (((IData)(vlSelf->tb_requant__DOT__rst_n)
              ? (((IData)(vlSelf->tb_requant__DOT__valid) 
                  & ((IData)(vlSelf->tb_requant__DOT__drain_state) 
                     | (IData)(vlSelf->tb_requant__DOT__accum_state)))
                  ? (VL_LTS_III(32, 0x7fU, VL_EXTENDS_II(32,4, 
                                                         (0xfU 
                                                          & (vlSelf->tb_requant__DOT__dut__DOT__shift_buffer[0U] 
                                                             >> 0xcU))))
                      ? 0x7fU : (VL_GTS_III(32, 0xffffff80U, 
                                            VL_EXTENDS_II(32,4, 
                                                          (0xfU 
                                                           & (vlSelf->tb_requant__DOT__dut__DOT__shift_buffer[0U] 
                                                              >> 0xcU))))
                                  ? 0x80U : (0xffU 
                                             & VL_EXTENDS_II(8,4, 
                                                             (0xfU 
                                                              & (vlSelf->tb_requant__DOT__dut__DOT__shift_buffer[0U] 
                                                                 >> 0xcU))))))
                  : 0U) : 0U) << 0x18U));
    vlSelf->tb_requant__DOT__dut__DOT__shift_buffer[0U] 
        = ((0xfffffff0U & vlSelf->tb_requant__DOT__dut__DOT__shift_buffer[0U]) 
           | ((IData)(vlSelf->tb_requant__DOT__rst_n)
               ? (((IData)(vlSelf->tb_requant__DOT__valid) 
                   & ((IData)(vlSelf->tb_requant__DOT__drain_state) 
                      | (IData)(vlSelf->tb_requant__DOT__accum_state)))
                   ? (0xfU & VL_SHIFTR_III(4,32,32, 
                                           vlSelf->tb_requant__DOT__ins[0U], vlSelf->tb_requant__DOT__con))
                   : 0U) : 0U));
    vlSelf->tb_requant__DOT__dut__DOT__shift_buffer[0U] 
        = ((0xffffff0fU & vlSelf->tb_requant__DOT__dut__DOT__shift_buffer[0U]) 
           | (((IData)(vlSelf->tb_requant__DOT__rst_n)
                ? (((IData)(vlSelf->tb_requant__DOT__valid) 
                    & ((IData)(vlSelf->tb_requant__DOT__drain_state) 
                       | (IData)(vlSelf->tb_requant__DOT__accum_state)))
                    ? (0xfU & VL_SHIFTR_III(4,32,32, 
                                            vlSelf->tb_requant__DOT__ins[1U], vlSelf->tb_requant__DOT__con))
                    : 0U) : 0U) << 4U));
    vlSelf->tb_requant__DOT__dut__DOT__shift_buffer[0U] 
        = ((0xfffff0ffU & vlSelf->tb_requant__DOT__dut__DOT__shift_buffer[0U]) 
           | (((IData)(vlSelf->tb_requant__DOT__rst_n)
                ? (((IData)(vlSelf->tb_requant__DOT__valid) 
                    & ((IData)(vlSelf->tb_requant__DOT__drain_state) 
                       | (IData)(vlSelf->tb_requant__DOT__accum_state)))
                    ? (0xfU & VL_SHIFTR_III(4,32,32, 
                                            vlSelf->tb_requant__DOT__ins[2U], vlSelf->tb_requant__DOT__con))
                    : 0U) : 0U) << 8U));
    vlSelf->tb_requant__DOT__dut__DOT__shift_buffer[0U] 
        = ((0xffff0fffU & vlSelf->tb_requant__DOT__dut__DOT__shift_buffer[0U]) 
           | (((IData)(vlSelf->tb_requant__DOT__rst_n)
                ? (((IData)(vlSelf->tb_requant__DOT__valid) 
                    & ((IData)(vlSelf->tb_requant__DOT__drain_state) 
                       | (IData)(vlSelf->tb_requant__DOT__accum_state)))
                    ? (0xfU & VL_SHIFTR_III(4,32,32, 
                                            vlSelf->tb_requant__DOT__ins[3U], vlSelf->tb_requant__DOT__con))
                    : 0U) : 0U) << 0xcU));
}

void Vtb_requant___024root___eval_nba(Vtb_requant___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_requant__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_requant___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_requant___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vtb_requant___024root___timing_resume(Vtb_requant___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_requant__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_requant___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h71ed53e8__0.resume("@(posedge tb_requant.clk)");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_requant___024root___timing_commit(Vtb_requant___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_requant__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_requant___024root___timing_commit\n"); );
    // Body
    if ((! (2ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h71ed53e8__0.commit("@(posedge tb_requant.clk)");
    }
}

void Vtb_requant___024root___eval_triggers__act(Vtb_requant___024root* vlSelf);

bool Vtb_requant___024root___eval_phase__act(Vtb_requant___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_requant__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_requant___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_requant___024root___eval_triggers__act(vlSelf);
    Vtb_requant___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_requant___024root___timing_resume(vlSelf);
        Vtb_requant___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_requant___024root___eval_phase__nba(Vtb_requant___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_requant__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_requant___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_requant___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_requant___024root___dump_triggers__nba(Vtb_requant___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_requant___024root___dump_triggers__act(Vtb_requant___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_requant___024root___eval(Vtb_requant___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_requant__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_requant___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_requant___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/tb_requant.sv", 19, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_requant___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/tb_requant.sv", 19, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_requant___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_requant___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_requant___024root___eval_debug_assertions(Vtb_requant___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_requant__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_requant___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
