// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_relu_buffer.h for the primary calling header

#include "Vtb_relu_buffer__pch.h"
#include "Vtb_relu_buffer___024root.h"

VlCoroutine Vtb_relu_buffer___024root___eval_initial__TOP__Vtiming__0(Vtb_relu_buffer___024root* vlSelf);
VlCoroutine Vtb_relu_buffer___024root___eval_initial__TOP__Vtiming__1(Vtb_relu_buffer___024root* vlSelf);

void Vtb_relu_buffer___024root___eval_initial(Vtb_relu_buffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_relu_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_relu_buffer___024root___eval_initial\n"); );
    // Body
    Vtb_relu_buffer___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_relu_buffer___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_relu_buffer__DOT__clk__0 
        = vlSelf->tb_relu_buffer__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__tb_relu_buffer__DOT__rst_n__0 
        = vlSelf->tb_relu_buffer__DOT__rst_n;
}

VL_INLINE_OPT VlCoroutine Vtb_relu_buffer___024root___eval_initial__TOP__Vtiming__0(Vtb_relu_buffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_relu_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_relu_buffer___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    std::string __Vtask_tb_relu_buffer__DOT__check__1__name;
    CData/*0:0*/ __Vtask_tb_relu_buffer__DOT__check__1__cond;
    __Vtask_tb_relu_buffer__DOT__check__1__cond = 0;
    std::string __Vtask_tb_relu_buffer__DOT__check__2__name;
    CData/*0:0*/ __Vtask_tb_relu_buffer__DOT__check__2__cond;
    __Vtask_tb_relu_buffer__DOT__check__2__cond = 0;
    std::string __Vtask_tb_relu_buffer__DOT__check__4__name;
    CData/*0:0*/ __Vtask_tb_relu_buffer__DOT__check__4__cond;
    __Vtask_tb_relu_buffer__DOT__check__4__cond = 0;
    std::string __Vtask_tb_relu_buffer__DOT__check__5__name;
    CData/*0:0*/ __Vtask_tb_relu_buffer__DOT__check__5__cond;
    __Vtask_tb_relu_buffer__DOT__check__5__cond = 0;
    std::string __Vtask_tb_relu_buffer__DOT__check__6__name;
    CData/*0:0*/ __Vtask_tb_relu_buffer__DOT__check__6__cond;
    __Vtask_tb_relu_buffer__DOT__check__6__cond = 0;
    std::string __Vtask_tb_relu_buffer__DOT__check__7__name;
    CData/*0:0*/ __Vtask_tb_relu_buffer__DOT__check__7__cond;
    __Vtask_tb_relu_buffer__DOT__check__7__cond = 0;
    std::string __Vtask_tb_relu_buffer__DOT__check__8__name;
    CData/*0:0*/ __Vtask_tb_relu_buffer__DOT__check__8__cond;
    __Vtask_tb_relu_buffer__DOT__check__8__cond = 0;
    std::string __Vtask_tb_relu_buffer__DOT__check__10__name;
    CData/*0:0*/ __Vtask_tb_relu_buffer__DOT__check__10__cond;
    __Vtask_tb_relu_buffer__DOT__check__10__cond = 0;
    std::string __Vtask_tb_relu_buffer__DOT__check__11__name;
    CData/*0:0*/ __Vtask_tb_relu_buffer__DOT__check__11__cond;
    __Vtask_tb_relu_buffer__DOT__check__11__cond = 0;
    std::string __Vtask_tb_relu_buffer__DOT__check__12__name;
    CData/*0:0*/ __Vtask_tb_relu_buffer__DOT__check__12__cond;
    __Vtask_tb_relu_buffer__DOT__check__12__cond = 0;
    std::string __Vtask_tb_relu_buffer__DOT__check__13__name;
    CData/*0:0*/ __Vtask_tb_relu_buffer__DOT__check__13__cond;
    __Vtask_tb_relu_buffer__DOT__check__13__cond = 0;
    std::string __Vtask_tb_relu_buffer__DOT__check__14__name;
    CData/*0:0*/ __Vtask_tb_relu_buffer__DOT__check__14__cond;
    __Vtask_tb_relu_buffer__DOT__check__14__cond = 0;
    std::string __Vtask_tb_relu_buffer__DOT__check__16__name;
    CData/*0:0*/ __Vtask_tb_relu_buffer__DOT__check__16__cond;
    __Vtask_tb_relu_buffer__DOT__check__16__cond = 0;
    std::string __Vtask_tb_relu_buffer__DOT__check__17__name;
    CData/*0:0*/ __Vtask_tb_relu_buffer__DOT__check__17__cond;
    __Vtask_tb_relu_buffer__DOT__check__17__cond = 0;
    std::string __Vtask_tb_relu_buffer__DOT__check__19__name;
    CData/*0:0*/ __Vtask_tb_relu_buffer__DOT__check__19__cond;
    __Vtask_tb_relu_buffer__DOT__check__19__cond = 0;
    std::string __Vtask_tb_relu_buffer__DOT__check__20__name;
    CData/*0:0*/ __Vtask_tb_relu_buffer__DOT__check__20__cond;
    __Vtask_tb_relu_buffer__DOT__check__20__cond = 0;
    std::string __Vtask_tb_relu_buffer__DOT__check__21__name;
    CData/*0:0*/ __Vtask_tb_relu_buffer__DOT__check__21__cond;
    __Vtask_tb_relu_buffer__DOT__check__21__cond = 0;
    // Body
    vlSelf->tb_relu_buffer__DOT__rst_n = 0U;
    vlSelf->tb_relu_buffer__DOT__drain_state = 0U;
    vlSelf->tb_relu_buffer__DOT__accum_state = 0U;
    vlSelf->tb_relu_buffer__DOT__valid = 0U;
    vlSelf->tb_relu_buffer__DOT__ins[0U] = 0U;
    vlSelf->tb_relu_buffer__DOT__ins[1U] = 0U;
    vlSelf->tb_relu_buffer__DOT__ins[2U] = 0U;
    vlSelf->tb_relu_buffer__DOT__ins[3U] = 0U;
    co_await vlSelf->__VtrigSched_hacf8ceba__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_relu_buffer.clk)", 
                                                       "tb/tb_relu_buffer.sv", 
                                                       44);
    co_await vlSelf->__VtrigSched_hacf8ceba__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_relu_buffer.clk)", 
                                                       "tb/tb_relu_buffer.sv", 
                                                       44);
    vlSelf->tb_relu_buffer__DOT__rst_n = 1U;
    co_await vlSelf->__VtrigSched_hacf8ceba__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_relu_buffer.clk)", 
                                                       "tb/tb_relu_buffer.sv", 
                                                       46);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_relu_buffer.sv", 
                                       46);
    VL_WRITEF("==== relu_buffer ====\n");
    __Vtask_tb_relu_buffer__DOT__check__1__cond = (0U 
                                                   == 
                                                   (0xffffU 
                                                    & vlSelf->tb_relu_buffer__DOT__out[0U]));
    __Vtask_tb_relu_buffer__DOT__check__1__name = std::string{"reset: out[3:0] all zero"};
    vlSelf->tb_relu_buffer__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_relu_buffer__DOT__checks);
    if (__Vtask_tb_relu_buffer__DOT__check__1__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_relu_buffer__DOT__check__1__name));
    } else {
        vlSelf->tb_relu_buffer__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_relu_buffer__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_relu_buffer__DOT__check__1__name));
    }
    __Vtask_tb_relu_buffer__DOT__check__2__cond = (1U 
                                                   & (~ (IData)(vlSelf->tb_relu_buffer__DOT__out_valid)));
    __Vtask_tb_relu_buffer__DOT__check__2__name = std::string{"reset: out_valid low"};
    vlSelf->tb_relu_buffer__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_relu_buffer__DOT__checks);
    if (__Vtask_tb_relu_buffer__DOT__check__2__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_relu_buffer__DOT__check__2__name));
    } else {
        vlSelf->tb_relu_buffer__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_relu_buffer__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_relu_buffer__DOT__check__2__name));
    }
    vlSelf->tb_relu_buffer__DOT__drain_state = 1U;
    vlSelf->tb_relu_buffer__DOT__valid = 1U;
    vlSelf->tb_relu_buffer__DOT__ins[0U] = (0xf0d5U 
                                            | (0xffff0000U 
                                               & vlSelf->tb_relu_buffer__DOT__ins[0U]));
    co_await vlSelf->__VtrigSched_hacf8ceba__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_relu_buffer.clk)", 
                                                       "tb/tb_relu_buffer.sv", 
                                                       50);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_relu_buffer.sv", 
                                       50);
    __Vtask_tb_relu_buffer__DOT__check__4__cond = (5U 
                                                   == 
                                                   (0xfU 
                                                    & vlSelf->tb_relu_buffer__DOT__out[0U]));
    __Vtask_tb_relu_buffer__DOT__check__4__name = std::string{"drain: out[0]=5 (positive passes through)"};
    vlSelf->tb_relu_buffer__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_relu_buffer__DOT__checks);
    if (__Vtask_tb_relu_buffer__DOT__check__4__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_relu_buffer__DOT__check__4__name));
    } else {
        vlSelf->tb_relu_buffer__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_relu_buffer__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_relu_buffer__DOT__check__4__name));
    }
    __Vtask_tb_relu_buffer__DOT__check__5__cond = (0U 
                                                   == 
                                                   (0xfU 
                                                    & (vlSelf->tb_relu_buffer__DOT__out[0U] 
                                                       >> 4U)));
    __Vtask_tb_relu_buffer__DOT__check__5__name = std::string{"drain: out[1]=0 (negative relu'd)"};
    vlSelf->tb_relu_buffer__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_relu_buffer__DOT__checks);
    if (__Vtask_tb_relu_buffer__DOT__check__5__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_relu_buffer__DOT__check__5__name));
    } else {
        vlSelf->tb_relu_buffer__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_relu_buffer__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_relu_buffer__DOT__check__5__name));
    }
    __Vtask_tb_relu_buffer__DOT__check__6__cond = (0U 
                                                   == 
                                                   (0xfU 
                                                    & (vlSelf->tb_relu_buffer__DOT__out[0U] 
                                                       >> 8U)));
    __Vtask_tb_relu_buffer__DOT__check__6__name = std::string{"drain: out[2]=0 (zero passes through)"};
    vlSelf->tb_relu_buffer__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_relu_buffer__DOT__checks);
    if (__Vtask_tb_relu_buffer__DOT__check__6__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_relu_buffer__DOT__check__6__name));
    } else {
        vlSelf->tb_relu_buffer__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_relu_buffer__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_relu_buffer__DOT__check__6__name));
    }
    __Vtask_tb_relu_buffer__DOT__check__7__cond = (0U 
                                                   == 
                                                   (0xfU 
                                                    & (vlSelf->tb_relu_buffer__DOT__out[0U] 
                                                       >> 0xcU)));
    __Vtask_tb_relu_buffer__DOT__check__7__name = std::string{"drain: out[3]=0 (negative relu'd)"};
    vlSelf->tb_relu_buffer__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_relu_buffer__DOT__checks);
    if (__Vtask_tb_relu_buffer__DOT__check__7__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_relu_buffer__DOT__check__7__name));
    } else {
        vlSelf->tb_relu_buffer__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_relu_buffer__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_relu_buffer__DOT__check__7__name));
    }
    __Vtask_tb_relu_buffer__DOT__check__8__cond = vlSelf->tb_relu_buffer__DOT__out_valid;
    __Vtask_tb_relu_buffer__DOT__check__8__name = std::string{"drain: out_valid asserted"};
    vlSelf->tb_relu_buffer__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_relu_buffer__DOT__checks);
    if (__Vtask_tb_relu_buffer__DOT__check__8__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_relu_buffer__DOT__check__8__name));
    } else {
        vlSelf->tb_relu_buffer__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_relu_buffer__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_relu_buffer__DOT__check__8__name));
    }
    vlSelf->tb_relu_buffer__DOT__drain_state = 0U;
    vlSelf->tb_relu_buffer__DOT__accum_state = 1U;
    vlSelf->tb_relu_buffer__DOT__ins[0U] = (0xe278U 
                                            | (0xffff0000U 
                                               & vlSelf->tb_relu_buffer__DOT__ins[0U]));
    co_await vlSelf->__VtrigSched_hacf8ceba__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_relu_buffer.clk)", 
                                                       "tb/tb_relu_buffer.sv", 
                                                       50);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_relu_buffer.sv", 
                                       50);
    __Vtask_tb_relu_buffer__DOT__check__10__cond = 
        (0U == (0xfU & vlSelf->tb_relu_buffer__DOT__out[0U]));
    __Vtask_tb_relu_buffer__DOT__check__10__name = 
        std::string{"accum: out[0]=0 (min negative relu'd)"};
    vlSelf->tb_relu_buffer__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_relu_buffer__DOT__checks);
    if (__Vtask_tb_relu_buffer__DOT__check__10__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_relu_buffer__DOT__check__10__name));
    } else {
        vlSelf->tb_relu_buffer__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_relu_buffer__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_relu_buffer__DOT__check__10__name));
    }
    __Vtask_tb_relu_buffer__DOT__check__11__cond = 
        (7U == (0xfU & (vlSelf->tb_relu_buffer__DOT__out[0U] 
                        >> 4U)));
    __Vtask_tb_relu_buffer__DOT__check__11__name = 
        std::string{"accum: out[1]=7 (max positive passes through)"};
    vlSelf->tb_relu_buffer__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_relu_buffer__DOT__checks);
    if (__Vtask_tb_relu_buffer__DOT__check__11__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_relu_buffer__DOT__check__11__name));
    } else {
        vlSelf->tb_relu_buffer__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_relu_buffer__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_relu_buffer__DOT__check__11__name));
    }
    __Vtask_tb_relu_buffer__DOT__check__12__cond = 
        (2U == (0xfU & (vlSelf->tb_relu_buffer__DOT__out[0U] 
                        >> 8U)));
    __Vtask_tb_relu_buffer__DOT__check__12__name = 
        std::string{"accum: out[2]=2"};
    vlSelf->tb_relu_buffer__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_relu_buffer__DOT__checks);
    if (__Vtask_tb_relu_buffer__DOT__check__12__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_relu_buffer__DOT__check__12__name));
    } else {
        vlSelf->tb_relu_buffer__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_relu_buffer__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_relu_buffer__DOT__check__12__name));
    }
    __Vtask_tb_relu_buffer__DOT__check__13__cond = 
        (0U == (0xfU & (vlSelf->tb_relu_buffer__DOT__out[0U] 
                        >> 0xcU)));
    __Vtask_tb_relu_buffer__DOT__check__13__name = 
        std::string{"accum: out[3]=0 (negative relu'd)"};
    vlSelf->tb_relu_buffer__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_relu_buffer__DOT__checks);
    if (__Vtask_tb_relu_buffer__DOT__check__13__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_relu_buffer__DOT__check__13__name));
    } else {
        vlSelf->tb_relu_buffer__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_relu_buffer__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_relu_buffer__DOT__check__13__name));
    }
    __Vtask_tb_relu_buffer__DOT__check__14__cond = vlSelf->tb_relu_buffer__DOT__out_valid;
    __Vtask_tb_relu_buffer__DOT__check__14__name = 
        std::string{"accum: out_valid asserted"};
    vlSelf->tb_relu_buffer__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_relu_buffer__DOT__checks);
    if (__Vtask_tb_relu_buffer__DOT__check__14__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_relu_buffer__DOT__check__14__name));
    } else {
        vlSelf->tb_relu_buffer__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_relu_buffer__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_relu_buffer__DOT__check__14__name));
    }
    vlSelf->tb_relu_buffer__DOT__accum_state = 0U;
    vlSelf->tb_relu_buffer__DOT__drain_state = 1U;
    vlSelf->tb_relu_buffer__DOT__valid = 0U;
    vlSelf->tb_relu_buffer__DOT__ins[0U] = (0x6666U 
                                            | (0xffff0000U 
                                               & vlSelf->tb_relu_buffer__DOT__ins[0U]));
    co_await vlSelf->__VtrigSched_hacf8ceba__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_relu_buffer.clk)", 
                                                       "tb/tb_relu_buffer.sv", 
                                                       50);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_relu_buffer.sv", 
                                       50);
    __Vtask_tb_relu_buffer__DOT__check__16__cond = 
        (0U == (0xffffU & vlSelf->tb_relu_buffer__DOT__out[0U]));
    __Vtask_tb_relu_buffer__DOT__check__16__name = 
        std::string{"valid=0: out forced to 0 despite drain_state"};
    vlSelf->tb_relu_buffer__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_relu_buffer__DOT__checks);
    if (__Vtask_tb_relu_buffer__DOT__check__16__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_relu_buffer__DOT__check__16__name));
    } else {
        vlSelf->tb_relu_buffer__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_relu_buffer__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_relu_buffer__DOT__check__16__name));
    }
    __Vtask_tb_relu_buffer__DOT__check__17__cond = 
        (1U & (~ (IData)(vlSelf->tb_relu_buffer__DOT__out_valid)));
    __Vtask_tb_relu_buffer__DOT__check__17__name = 
        std::string{"valid=0: out_valid low"};
    vlSelf->tb_relu_buffer__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_relu_buffer__DOT__checks);
    if (__Vtask_tb_relu_buffer__DOT__check__17__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_relu_buffer__DOT__check__17__name));
    } else {
        vlSelf->tb_relu_buffer__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_relu_buffer__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_relu_buffer__DOT__check__17__name));
    }
    vlSelf->tb_relu_buffer__DOT__drain_state = 0U;
    vlSelf->tb_relu_buffer__DOT__accum_state = 0U;
    vlSelf->tb_relu_buffer__DOT__valid = 1U;
    vlSelf->tb_relu_buffer__DOT__ins[0U] = (6U | (0xfffffff0U 
                                                  & vlSelf->tb_relu_buffer__DOT__ins[0U]));
    co_await vlSelf->__VtrigSched_hacf8ceba__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_relu_buffer.clk)", 
                                                       "tb/tb_relu_buffer.sv", 
                                                       50);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_relu_buffer.sv", 
                                       50);
    __Vtask_tb_relu_buffer__DOT__check__19__cond = 
        (0U == (0xffffU & vlSelf->tb_relu_buffer__DOT__out[0U]));
    __Vtask_tb_relu_buffer__DOT__check__19__name = 
        std::string{"neither state active: out forced to 0"};
    vlSelf->tb_relu_buffer__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_relu_buffer__DOT__checks);
    if (__Vtask_tb_relu_buffer__DOT__check__19__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_relu_buffer__DOT__check__19__name));
    } else {
        vlSelf->tb_relu_buffer__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_relu_buffer__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_relu_buffer__DOT__check__19__name));
    }
    __Vtask_tb_relu_buffer__DOT__check__20__cond = 
        (1U & (~ (IData)(vlSelf->tb_relu_buffer__DOT__out_valid)));
    __Vtask_tb_relu_buffer__DOT__check__20__name = 
        std::string{"neither state active: out_valid low"};
    vlSelf->tb_relu_buffer__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_relu_buffer__DOT__checks);
    if (__Vtask_tb_relu_buffer__DOT__check__20__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_relu_buffer__DOT__check__20__name));
    } else {
        vlSelf->tb_relu_buffer__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_relu_buffer__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_relu_buffer__DOT__check__20__name));
    }
    __Vtask_tb_relu_buffer__DOT__check__21__cond = 
        (0U == (((((vlSelf->tb_relu_buffer__DOT__out[1U] 
                    << 0x10U) | (vlSelf->tb_relu_buffer__DOT__out[0U] 
                                 >> 0x10U)) | ((vlSelf->tb_relu_buffer__DOT__out[2U] 
                                                << 0x10U) 
                                               | (vlSelf->tb_relu_buffer__DOT__out[1U] 
                                                  >> 0x10U))) 
                 | ((vlSelf->tb_relu_buffer__DOT__out[3U] 
                     << 0x10U) | (vlSelf->tb_relu_buffer__DOT__out[2U] 
                                  >> 0x10U))) | (vlSelf->tb_relu_buffer__DOT__out[3U] 
                                                 >> 0x10U)));
    __Vtask_tb_relu_buffer__DOT__check__21__name = 
        std::string{"out[4..31] permanently 0 (never assigned by the RTL)"};
    vlSelf->tb_relu_buffer__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_relu_buffer__DOT__checks);
    if (__Vtask_tb_relu_buffer__DOT__check__21__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_relu_buffer__DOT__check__21__name));
    } else {
        vlSelf->tb_relu_buffer__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_relu_buffer__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_relu_buffer__DOT__check__21__name));
    }
    VL_WRITEF("==== SUMMARY ====\nrelu_buffer: %0d/%0d checks passed\n",
              32,(vlSelf->tb_relu_buffer__DOT__checks 
                  - vlSelf->tb_relu_buffer__DOT__errors),
              32,vlSelf->tb_relu_buffer__DOT__checks);
    VL_FINISH_MT("tb/tb_relu_buffer.sv", 106, "");
}

VL_INLINE_OPT VlCoroutine Vtb_relu_buffer___024root___eval_initial__TOP__Vtiming__1(Vtb_relu_buffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_relu_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_relu_buffer___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "tb/tb_relu_buffer.sv", 
                                           29);
        vlSelf->tb_relu_buffer__DOT__clk = (1U & (~ (IData)(vlSelf->tb_relu_buffer__DOT__clk)));
    }
}

void Vtb_relu_buffer___024root___eval_act(Vtb_relu_buffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_relu_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_relu_buffer___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtb_relu_buffer___024root___nba_sequent__TOP__0(Vtb_relu_buffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_relu_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_relu_buffer___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->tb_relu_buffer__DOT__out_valid = ((IData)(vlSelf->tb_relu_buffer__DOT__rst_n) 
                                              && ((IData)(vlSelf->tb_relu_buffer__DOT__valid) 
                                                  & ((IData)(vlSelf->tb_relu_buffer__DOT__drain_state) 
                                                     | (IData)(vlSelf->tb_relu_buffer__DOT__accum_state))));
    vlSelf->tb_relu_buffer__DOT__out[0U] = ((0xfffffff0U 
                                             & vlSelf->tb_relu_buffer__DOT__out[0U]) 
                                            | ((IData)(vlSelf->tb_relu_buffer__DOT__rst_n)
                                                ? (
                                                   ((IData)(vlSelf->tb_relu_buffer__DOT__valid) 
                                                    & ((IData)(vlSelf->tb_relu_buffer__DOT__drain_state) 
                                                       | (IData)(vlSelf->tb_relu_buffer__DOT__accum_state)))
                                                    ? 
                                                   (VL_GTS_III(32, 0U, 
                                                               VL_EXTENDS_II(32,4, 
                                                                             (0xfU 
                                                                              & vlSelf->tb_relu_buffer__DOT__ins[0U])))
                                                     ? 0U
                                                     : 
                                                    (0xfU 
                                                     & VL_EXTENDS_II(32,4, 
                                                                     (0xfU 
                                                                      & vlSelf->tb_relu_buffer__DOT__ins[0U]))))
                                                    : 0U)
                                                : 0U));
    vlSelf->tb_relu_buffer__DOT__out[0U] = ((0xffffff0fU 
                                             & vlSelf->tb_relu_buffer__DOT__out[0U]) 
                                            | (((IData)(vlSelf->tb_relu_buffer__DOT__rst_n)
                                                 ? 
                                                (((IData)(vlSelf->tb_relu_buffer__DOT__valid) 
                                                  & ((IData)(vlSelf->tb_relu_buffer__DOT__drain_state) 
                                                     | (IData)(vlSelf->tb_relu_buffer__DOT__accum_state)))
                                                  ? 
                                                 (VL_GTS_III(32, 0U, 
                                                             VL_EXTENDS_II(32,4, 
                                                                           (0xfU 
                                                                            & (vlSelf->tb_relu_buffer__DOT__ins[0U] 
                                                                               >> 4U))))
                                                   ? 0U
                                                   : 
                                                  (0xfU 
                                                   & VL_EXTENDS_II(32,4, 
                                                                   (0xfU 
                                                                    & (vlSelf->tb_relu_buffer__DOT__ins[0U] 
                                                                       >> 4U)))))
                                                  : 0U)
                                                 : 0U) 
                                               << 4U));
    vlSelf->tb_relu_buffer__DOT__out[0U] = ((0xfffff0ffU 
                                             & vlSelf->tb_relu_buffer__DOT__out[0U]) 
                                            | (((IData)(vlSelf->tb_relu_buffer__DOT__rst_n)
                                                 ? 
                                                (((IData)(vlSelf->tb_relu_buffer__DOT__valid) 
                                                  & ((IData)(vlSelf->tb_relu_buffer__DOT__drain_state) 
                                                     | (IData)(vlSelf->tb_relu_buffer__DOT__accum_state)))
                                                  ? 
                                                 (VL_GTS_III(32, 0U, 
                                                             VL_EXTENDS_II(32,4, 
                                                                           (0xfU 
                                                                            & (vlSelf->tb_relu_buffer__DOT__ins[0U] 
                                                                               >> 8U))))
                                                   ? 0U
                                                   : 
                                                  (0xfU 
                                                   & VL_EXTENDS_II(32,4, 
                                                                   (0xfU 
                                                                    & (vlSelf->tb_relu_buffer__DOT__ins[0U] 
                                                                       >> 8U)))))
                                                  : 0U)
                                                 : 0U) 
                                               << 8U));
    vlSelf->tb_relu_buffer__DOT__out[0U] = ((0xffff0fffU 
                                             & vlSelf->tb_relu_buffer__DOT__out[0U]) 
                                            | (((IData)(vlSelf->tb_relu_buffer__DOT__rst_n)
                                                 ? 
                                                (((IData)(vlSelf->tb_relu_buffer__DOT__valid) 
                                                  & ((IData)(vlSelf->tb_relu_buffer__DOT__drain_state) 
                                                     | (IData)(vlSelf->tb_relu_buffer__DOT__accum_state)))
                                                  ? 
                                                 (VL_GTS_III(32, 0U, 
                                                             VL_EXTENDS_II(32,4, 
                                                                           (0xfU 
                                                                            & (vlSelf->tb_relu_buffer__DOT__ins[0U] 
                                                                               >> 0xcU))))
                                                   ? 0U
                                                   : 
                                                  (0xfU 
                                                   & VL_EXTENDS_II(32,4, 
                                                                   (0xfU 
                                                                    & (vlSelf->tb_relu_buffer__DOT__ins[0U] 
                                                                       >> 0xcU)))))
                                                  : 0U)
                                                 : 0U) 
                                               << 0xcU));
}

void Vtb_relu_buffer___024root___eval_nba(Vtb_relu_buffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_relu_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_relu_buffer___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_relu_buffer___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vtb_relu_buffer___024root___timing_resume(Vtb_relu_buffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_relu_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_relu_buffer___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hacf8ceba__0.resume("@(posedge tb_relu_buffer.clk)");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_relu_buffer___024root___timing_commit(Vtb_relu_buffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_relu_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_relu_buffer___024root___timing_commit\n"); );
    // Body
    if ((! (2ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hacf8ceba__0.commit("@(posedge tb_relu_buffer.clk)");
    }
}

void Vtb_relu_buffer___024root___eval_triggers__act(Vtb_relu_buffer___024root* vlSelf);

bool Vtb_relu_buffer___024root___eval_phase__act(Vtb_relu_buffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_relu_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_relu_buffer___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_relu_buffer___024root___eval_triggers__act(vlSelf);
    Vtb_relu_buffer___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_relu_buffer___024root___timing_resume(vlSelf);
        Vtb_relu_buffer___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_relu_buffer___024root___eval_phase__nba(Vtb_relu_buffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_relu_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_relu_buffer___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_relu_buffer___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_relu_buffer___024root___dump_triggers__nba(Vtb_relu_buffer___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_relu_buffer___024root___dump_triggers__act(Vtb_relu_buffer___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_relu_buffer___024root___eval(Vtb_relu_buffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_relu_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_relu_buffer___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_relu_buffer___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/tb_relu_buffer.sv", 13, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_relu_buffer___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/tb_relu_buffer.sv", 13, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_relu_buffer___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_relu_buffer___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_relu_buffer___024root___eval_debug_assertions(Vtb_relu_buffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_relu_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_relu_buffer___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
