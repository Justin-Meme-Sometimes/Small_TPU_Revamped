// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_array.h for the primary calling header

#include "Vtb_array__pch.h"
#include "Vtb_array___024root.h"

VlCoroutine Vtb_array___024root___eval_initial__TOP__Vtiming__0(Vtb_array___024root* vlSelf);
VlCoroutine Vtb_array___024root___eval_initial__TOP__Vtiming__1(Vtb_array___024root* vlSelf);

void Vtb_array___024root___eval_initial(Vtb_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_array___024root___eval_initial\n"); );
    // Body
    Vtb_array___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_array___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_array__DOT__clk__0 
        = vlSelf->tb_array__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__tb_array__DOT__h_rst_n__0 
        = vlSelf->tb_array__DOT__h_rst_n;
    vlSelf->__Vtrigprevexpr___TOP__tb_array__DOT__v_rst_n__0 
        = vlSelf->tb_array__DOT__v_rst_n;
    vlSelf->__Vtrigprevexpr___TOP__tb_array__DOT__arr_rst_n__0 
        = vlSelf->tb_array__DOT__arr_rst_n;
}

VL_INLINE_OPT VlCoroutine Vtb_array___024root___eval_initial__TOP__Vtiming__0(Vtb_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_array___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    std::string __Vtask_tb_array__DOT__check__2__name;
    CData/*0:0*/ __Vtask_tb_array__DOT__check__2__cond;
    __Vtask_tb_array__DOT__check__2__cond = 0;
    std::string __Vtask_tb_array__DOT__check__3__name;
    CData/*0:0*/ __Vtask_tb_array__DOT__check__3__cond;
    __Vtask_tb_array__DOT__check__3__cond = 0;
    std::string __Vtask_tb_array__DOT__check__4__name;
    CData/*0:0*/ __Vtask_tb_array__DOT__check__4__cond;
    __Vtask_tb_array__DOT__check__4__cond = 0;
    std::string __Vtask_tb_array__DOT__check__5__name;
    CData/*0:0*/ __Vtask_tb_array__DOT__check__5__cond;
    __Vtask_tb_array__DOT__check__5__cond = 0;
    std::string __Vtask_tb_array__DOT__check__6__name;
    CData/*0:0*/ __Vtask_tb_array__DOT__check__6__cond;
    __Vtask_tb_array__DOT__check__6__cond = 0;
    std::string __Vtask_tb_array__DOT__check__7__name;
    CData/*0:0*/ __Vtask_tb_array__DOT__check__7__cond;
    __Vtask_tb_array__DOT__check__7__cond = 0;
    std::string __Vtask_tb_array__DOT__check__8__name;
    CData/*0:0*/ __Vtask_tb_array__DOT__check__8__cond;
    __Vtask_tb_array__DOT__check__8__cond = 0;
    std::string __Vtask_tb_array__DOT__check__11__name;
    CData/*0:0*/ __Vtask_tb_array__DOT__check__11__cond;
    __Vtask_tb_array__DOT__check__11__cond = 0;
    std::string __Vtask_tb_array__DOT__check__12__name;
    CData/*0:0*/ __Vtask_tb_array__DOT__check__12__cond;
    __Vtask_tb_array__DOT__check__12__cond = 0;
    std::string __Vtask_tb_array__DOT__check__13__name;
    CData/*0:0*/ __Vtask_tb_array__DOT__check__13__cond;
    __Vtask_tb_array__DOT__check__13__cond = 0;
    std::string __Vtask_tb_array__DOT__check__14__name;
    CData/*0:0*/ __Vtask_tb_array__DOT__check__14__cond;
    __Vtask_tb_array__DOT__check__14__cond = 0;
    std::string __Vtask_tb_array__DOT__check__15__name;
    CData/*0:0*/ __Vtask_tb_array__DOT__check__15__cond;
    __Vtask_tb_array__DOT__check__15__cond = 0;
    std::string __Vtask_tb_array__DOT__check__16__name;
    CData/*0:0*/ __Vtask_tb_array__DOT__check__16__cond;
    __Vtask_tb_array__DOT__check__16__cond = 0;
    std::string __Vtask_tb_array__DOT__check__17__name;
    CData/*0:0*/ __Vtask_tb_array__DOT__check__17__cond;
    __Vtask_tb_array__DOT__check__17__cond = 0;
    std::string __Vtask_tb_array__DOT__check__20__name;
    CData/*0:0*/ __Vtask_tb_array__DOT__check__20__cond;
    __Vtask_tb_array__DOT__check__20__cond = 0;
    std::string __Vtask_tb_array__DOT__check__21__name;
    CData/*0:0*/ __Vtask_tb_array__DOT__check__21__cond;
    __Vtask_tb_array__DOT__check__21__cond = 0;
    std::string __Vtask_tb_array__DOT__check__23__name;
    CData/*0:0*/ __Vtask_tb_array__DOT__check__23__cond;
    __Vtask_tb_array__DOT__check__23__cond = 0;
    std::string __Vtask_tb_array__DOT__check__25__name;
    CData/*0:0*/ __Vtask_tb_array__DOT__check__25__cond;
    __Vtask_tb_array__DOT__check__25__cond = 0;
    std::string __Vtask_tb_array__DOT__check__27__name;
    CData/*0:0*/ __Vtask_tb_array__DOT__check__27__cond;
    __Vtask_tb_array__DOT__check__27__cond = 0;
    std::string __Vtask_tb_array__DOT__check__30__name;
    CData/*0:0*/ __Vtask_tb_array__DOT__check__30__cond;
    __Vtask_tb_array__DOT__check__30__cond = 0;
    std::string __Vtask_tb_array__DOT__check__33__name;
    CData/*0:0*/ __Vtask_tb_array__DOT__check__33__cond;
    __Vtask_tb_array__DOT__check__33__cond = 0;
    std::string __Vtask_tb_array__DOT__check__35__name;
    CData/*0:0*/ __Vtask_tb_array__DOT__check__35__cond;
    __Vtask_tb_array__DOT__check__35__cond = 0;
    // Body
    vlSelf->tb_array__DOT__h_rst_n = 0U;
    vlSelf->tb_array__DOT__h_start = 0U;
    vlSelf->tb_array__DOT__h_tile_done = 0U;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       38);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       38);
    vlSelf->tb_array__DOT__h_rst_n = 1U;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       40);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       45);
    VL_WRITEF("==== horizontal_en_fsm ====\n");
    __Vtask_tb_array__DOT__check__2__cond = (0U == 
                                             (((IData)(vlSelf->tb_array__DOT__h_en_3) 
                                               << 3U) 
                                              | (((IData)(vlSelf->tb_array__DOT__h_en_2) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->tb_array__DOT__h_en_1) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->tb_array__DOT__h_en_0)))));
    __Vtask_tb_array__DOT__check__2__name = std::string{"idle: all en low"};
    vlSelf->tb_array__DOT__checks = ((IData)(1U) + vlSelf->tb_array__DOT__checks);
    if (__Vtask_tb_array__DOT__check__2__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_array__DOT__check__2__name));
    } else {
        vlSelf->tb_array__DOT__errors = ((IData)(1U) 
                                         + vlSelf->tb_array__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_array__DOT__check__2__name));
    }
    vlSelf->tb_array__DOT__h_start = 1U;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       50);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       50);
    vlSelf->tb_array__DOT__h_start = 0U;
    __Vtask_tb_array__DOT__check__3__cond = (1U == 
                                             (((IData)(vlSelf->tb_array__DOT__h_en_3) 
                                               << 3U) 
                                              | (((IData)(vlSelf->tb_array__DOT__h_en_2) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->tb_array__DOT__h_en_1) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->tb_array__DOT__h_en_0)))));
    __Vtask_tb_array__DOT__check__3__name = std::string{"S0: en_0 only"};
    vlSelf->tb_array__DOT__checks = ((IData)(1U) + vlSelf->tb_array__DOT__checks);
    if (__Vtask_tb_array__DOT__check__3__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_array__DOT__check__3__name));
    } else {
        vlSelf->tb_array__DOT__errors = ((IData)(1U) 
                                         + vlSelf->tb_array__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_array__DOT__check__3__name));
    }
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       53);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       53);
    __Vtask_tb_array__DOT__check__4__cond = (3U == 
                                             (((IData)(vlSelf->tb_array__DOT__h_en_3) 
                                               << 3U) 
                                              | (((IData)(vlSelf->tb_array__DOT__h_en_2) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->tb_array__DOT__h_en_1) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->tb_array__DOT__h_en_0)))));
    __Vtask_tb_array__DOT__check__4__name = std::string{"S1: en_1,en_0"};
    vlSelf->tb_array__DOT__checks = ((IData)(1U) + vlSelf->tb_array__DOT__checks);
    if (__Vtask_tb_array__DOT__check__4__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_array__DOT__check__4__name));
    } else {
        vlSelf->tb_array__DOT__errors = ((IData)(1U) 
                                         + vlSelf->tb_array__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_array__DOT__check__4__name));
    }
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       56);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       56);
    __Vtask_tb_array__DOT__check__5__cond = (7U == 
                                             (((IData)(vlSelf->tb_array__DOT__h_en_3) 
                                               << 3U) 
                                              | (((IData)(vlSelf->tb_array__DOT__h_en_2) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->tb_array__DOT__h_en_1) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->tb_array__DOT__h_en_0)))));
    __Vtask_tb_array__DOT__check__5__name = std::string{"S2: en_2,en_1,en_0"};
    vlSelf->tb_array__DOT__checks = ((IData)(1U) + vlSelf->tb_array__DOT__checks);
    if (__Vtask_tb_array__DOT__check__5__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_array__DOT__check__5__name));
    } else {
        vlSelf->tb_array__DOT__errors = ((IData)(1U) 
                                         + vlSelf->tb_array__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_array__DOT__check__5__name));
    }
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       59);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       59);
    __Vtask_tb_array__DOT__check__6__cond = (0xfU == 
                                             (((IData)(vlSelf->tb_array__DOT__h_en_3) 
                                               << 3U) 
                                              | (((IData)(vlSelf->tb_array__DOT__h_en_2) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->tb_array__DOT__h_en_1) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->tb_array__DOT__h_en_0)))));
    __Vtask_tb_array__DOT__check__6__name = std::string{"S3: all four columns enabled"};
    vlSelf->tb_array__DOT__checks = ((IData)(1U) + vlSelf->tb_array__DOT__checks);
    if (__Vtask_tb_array__DOT__check__6__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_array__DOT__check__6__name));
    } else {
        vlSelf->tb_array__DOT__errors = ((IData)(1U) 
                                         + vlSelf->tb_array__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_array__DOT__check__6__name));
    }
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       62);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       62);
    __Vtask_tb_array__DOT__check__7__cond = (0xfU == 
                                             (((IData)(vlSelf->tb_array__DOT__h_en_3) 
                                               << 3U) 
                                              | (((IData)(vlSelf->tb_array__DOT__h_en_2) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->tb_array__DOT__h_en_1) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->tb_array__DOT__h_en_0)))));
    __Vtask_tb_array__DOT__check__7__name = std::string{"S3 holds while tile_done low"};
    vlSelf->tb_array__DOT__checks = ((IData)(1U) + vlSelf->tb_array__DOT__checks);
    if (__Vtask_tb_array__DOT__check__7__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_array__DOT__check__7__name));
    } else {
        vlSelf->tb_array__DOT__errors = ((IData)(1U) 
                                         + vlSelf->tb_array__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_array__DOT__check__7__name));
    }
    vlSelf->tb_array__DOT__h_tile_done = 1U;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       69);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       69);
    vlSelf->tb_array__DOT__h_tile_done = 0U;
    __Vtask_tb_array__DOT__check__8__cond = (0U == 
                                             (((IData)(vlSelf->tb_array__DOT__h_en_3) 
                                               << 3U) 
                                              | (((IData)(vlSelf->tb_array__DOT__h_en_2) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->tb_array__DOT__h_en_1) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->tb_array__DOT__h_en_0)))));
    __Vtask_tb_array__DOT__check__8__name = std::string{"tile_done took effect: back in IDLE, all en low"};
    vlSelf->tb_array__DOT__checks = ((IData)(1U) + vlSelf->tb_array__DOT__checks);
    if (__Vtask_tb_array__DOT__check__8__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_array__DOT__check__8__name));
    } else {
        vlSelf->tb_array__DOT__errors = ((IData)(1U) 
                                         + vlSelf->tb_array__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_array__DOT__check__8__name));
    }
    VL_WRITEF("horizontal_en_fsm done\n\n");
    vlSelf->tb_array__DOT__v_rst_n = 0U;
    vlSelf->tb_array__DOT__v_start = 0U;
    vlSelf->tb_array__DOT__v_tile_done = 0U;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       91);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       91);
    vlSelf->tb_array__DOT__v_rst_n = 1U;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       93);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       98);
    VL_WRITEF("==== vertical_en_fsm ====\n");
    __Vtask_tb_array__DOT__check__11__cond = (0U == 
                                              (((IData)(vlSelf->tb_array__DOT__v_en_3) 
                                                << 3U) 
                                               | (((IData)(vlSelf->tb_array__DOT__v_en_2) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->tb_array__DOT__v_en_1) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->tb_array__DOT__v_en_0)))));
    __Vtask_tb_array__DOT__check__11__name = std::string{"idle: all en low"};
    vlSelf->tb_array__DOT__checks = ((IData)(1U) + vlSelf->tb_array__DOT__checks);
    if (__Vtask_tb_array__DOT__check__11__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_array__DOT__check__11__name));
    } else {
        vlSelf->tb_array__DOT__errors = ((IData)(1U) 
                                         + vlSelf->tb_array__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_array__DOT__check__11__name));
    }
    vlSelf->tb_array__DOT__v_start = 1U;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       103);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       103);
    vlSelf->tb_array__DOT__v_start = 0U;
    __Vtask_tb_array__DOT__check__12__cond = (0U == 
                                              (((IData)(vlSelf->tb_array__DOT__v_en_3) 
                                                << 3U) 
                                               | (((IData)(vlSelf->tb_array__DOT__v_en_2) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->tb_array__DOT__v_en_1) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->tb_array__DOT__v_en_0)))));
    __Vtask_tb_array__DOT__check__12__name = std::string{"S0: all en low (en_0 never asserts)"};
    vlSelf->tb_array__DOT__checks = ((IData)(1U) + vlSelf->tb_array__DOT__checks);
    if (__Vtask_tb_array__DOT__check__12__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_array__DOT__check__12__name));
    } else {
        vlSelf->tb_array__DOT__errors = ((IData)(1U) 
                                         + vlSelf->tb_array__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_array__DOT__check__12__name));
    }
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       106);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       106);
    __Vtask_tb_array__DOT__check__13__cond = (2U == 
                                              (((IData)(vlSelf->tb_array__DOT__v_en_3) 
                                                << 3U) 
                                               | (((IData)(vlSelf->tb_array__DOT__v_en_2) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->tb_array__DOT__v_en_1) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->tb_array__DOT__v_en_0)))));
    __Vtask_tb_array__DOT__check__13__name = std::string{"S1: en_1 only (single-cycle pulse)"};
    vlSelf->tb_array__DOT__checks = ((IData)(1U) + vlSelf->tb_array__DOT__checks);
    if (__Vtask_tb_array__DOT__check__13__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_array__DOT__check__13__name));
    } else {
        vlSelf->tb_array__DOT__errors = ((IData)(1U) 
                                         + vlSelf->tb_array__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_array__DOT__check__13__name));
    }
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       109);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       109);
    __Vtask_tb_array__DOT__check__14__cond = (4U == 
                                              (((IData)(vlSelf->tb_array__DOT__v_en_3) 
                                                << 3U) 
                                               | (((IData)(vlSelf->tb_array__DOT__v_en_2) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->tb_array__DOT__v_en_1) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->tb_array__DOT__v_en_0)))));
    __Vtask_tb_array__DOT__check__14__name = std::string{"S2: en_2 only (en_1 already deasserted)"};
    vlSelf->tb_array__DOT__checks = ((IData)(1U) + vlSelf->tb_array__DOT__checks);
    if (__Vtask_tb_array__DOT__check__14__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_array__DOT__check__14__name));
    } else {
        vlSelf->tb_array__DOT__errors = ((IData)(1U) 
                                         + vlSelf->tb_array__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_array__DOT__check__14__name));
    }
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       112);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       112);
    __Vtask_tb_array__DOT__check__15__cond = (8U == 
                                              (((IData)(vlSelf->tb_array__DOT__v_en_3) 
                                                << 3U) 
                                               | (((IData)(vlSelf->tb_array__DOT__v_en_2) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->tb_array__DOT__v_en_1) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->tb_array__DOT__v_en_0)))));
    __Vtask_tb_array__DOT__check__15__name = std::string{"S3: en_3 only, tile_done low so holds"};
    vlSelf->tb_array__DOT__checks = ((IData)(1U) + vlSelf->tb_array__DOT__checks);
    if (__Vtask_tb_array__DOT__check__15__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_array__DOT__check__15__name));
    } else {
        vlSelf->tb_array__DOT__errors = ((IData)(1U) 
                                         + vlSelf->tb_array__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_array__DOT__check__15__name));
    }
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       115);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       115);
    __Vtask_tb_array__DOT__check__16__cond = (8U == 
                                              (((IData)(vlSelf->tb_array__DOT__v_en_3) 
                                                << 3U) 
                                               | (((IData)(vlSelf->tb_array__DOT__v_en_2) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->tb_array__DOT__v_en_1) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->tb_array__DOT__v_en_0)))));
    __Vtask_tb_array__DOT__check__16__name = std::string{"S3 still holds en_3 (tile_done low)"};
    vlSelf->tb_array__DOT__checks = ((IData)(1U) + vlSelf->tb_array__DOT__checks);
    if (__Vtask_tb_array__DOT__check__16__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_array__DOT__check__16__name));
    } else {
        vlSelf->tb_array__DOT__errors = ((IData)(1U) 
                                         + vlSelf->tb_array__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_array__DOT__check__16__name));
    }
    vlSelf->tb_array__DOT__v_tile_done = 1U;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       122);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       122);
    vlSelf->tb_array__DOT__v_tile_done = 0U;
    __Vtask_tb_array__DOT__check__17__cond = (0U == 
                                              (((IData)(vlSelf->tb_array__DOT__v_en_3) 
                                                << 3U) 
                                               | (((IData)(vlSelf->tb_array__DOT__v_en_2) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->tb_array__DOT__v_en_1) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->tb_array__DOT__v_en_0)))));
    __Vtask_tb_array__DOT__check__17__name = std::string{"tile_done took effect: back in IDLE, all en low"};
    vlSelf->tb_array__DOT__checks = ((IData)(1U) + vlSelf->tb_array__DOT__checks);
    if (__Vtask_tb_array__DOT__check__17__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_array__DOT__check__17__name));
    } else {
        vlSelf->tb_array__DOT__errors = ((IData)(1U) 
                                         + vlSelf->tb_array__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_array__DOT__check__17__name));
    }
    VL_WRITEF("vertical_en_fsm done\n\n");
    vlSelf->tb_array__DOT__arr_rst_n = 0U;
    vlSelf->tb_array__DOT__arr_preload = 0U;
    vlSelf->tb_array__DOT__arr_compute_start = 0U;
    vlSelf->tb_array__DOT__arr_clr = 0U;
    vlSelf->tb_array__DOT__arr_tile_done = 0U;
    vlSelf->tb_array__DOT__arr_drain = 0U;
    vlSelf->tb_array__DOT__arr_weight = 0U;
    vlSelf->tb_array__DOT__arr_activation = 0U;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       177);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       177);
    vlSelf->tb_array__DOT__arr_rst_n = 1U;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       179);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       179);
    VL_WRITEF("==== PE_array ====\n");
    __Vtask_tb_array__DOT__check__20__cond = (0U == 
                                              ((((IData)(
                                                         (((QData)((IData)(
                                                                           (vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[6U] 
                                                                            >> 0x10U))) 
                                                           << 0x21U) 
                                                          | (QData)((IData)(
                                                                            (0xffffU 
                                                                             & vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[6U]))))) 
                                                 | (IData)(
                                                           ((((QData)((IData)(
                                                                              (vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[6U] 
                                                                               >> 0x10U))) 
                                                              << 0x21U) 
                                                             | (QData)((IData)(
                                                                               (0xffffU 
                                                                                & vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[6U])))) 
                                                            >> 0x20U))) 
                                                | (0x3fffcU 
                                                   & (vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[7U] 
                                                      << 2U))) 
                                               | (0x7fff8U 
                                                  & (vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[7U] 
                                                     >> 0xdU))));
    __Vtask_tb_array__DOT__check__20__name = std::string{"reset: product_array all zero"};
    vlSelf->tb_array__DOT__checks = ((IData)(1U) + vlSelf->tb_array__DOT__checks);
    if (__Vtask_tb_array__DOT__check__20__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_array__DOT__check__20__name));
    } else {
        vlSelf->tb_array__DOT__errors = ((IData)(1U) 
                                         + vlSelf->tb_array__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_array__DOT__check__20__name));
    }
    __Vtask_tb_array__DOT__check__21__cond = (1U & 
                                              (~ (IData)(vlSelf->tb_array__DOT__arr_output_valid)));
    __Vtask_tb_array__DOT__check__21__name = std::string{"reset: output_valid low"};
    vlSelf->tb_array__DOT__checks = ((IData)(1U) + vlSelf->tb_array__DOT__checks);
    if (__Vtask_tb_array__DOT__check__21__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_array__DOT__check__21__name));
    } else {
        vlSelf->tb_array__DOT__errors = ((IData)(1U) 
                                         + vlSelf->tb_array__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_array__DOT__check__21__name));
    }
    vlSelf->tb_array__DOT__arr_drain = 1U;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       183);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       183);
    __Vtask_tb_array__DOT__check__23__cond = vlSelf->tb_array__DOT__arr_output_valid;
    __Vtask_tb_array__DOT__check__23__name = std::string{"output_valid mirrors drain_state (comb assign)"};
    vlSelf->tb_array__DOT__checks = ((IData)(1U) + vlSelf->tb_array__DOT__checks);
    if (__Vtask_tb_array__DOT__check__23__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_array__DOT__check__23__name));
    } else {
        vlSelf->tb_array__DOT__errors = ((IData)(1U) 
                                         + vlSelf->tb_array__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_array__DOT__check__23__name));
    }
    vlSelf->tb_array__DOT__arr_drain = 0U;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       183);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       183);
    __Vtask_tb_array__DOT__check__25__cond = (1U & 
                                              (~ (IData)(vlSelf->tb_array__DOT__arr_output_valid)));
    __Vtask_tb_array__DOT__check__25__name = std::string{"output_valid drops when drain_state drops"};
    vlSelf->tb_array__DOT__checks = ((IData)(1U) + vlSelf->tb_array__DOT__checks);
    if (__Vtask_tb_array__DOT__check__25__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_array__DOT__check__25__name));
    } else {
        vlSelf->tb_array__DOT__errors = ((IData)(1U) 
                                         + vlSelf->tb_array__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_array__DOT__check__25__name));
    }
    vlSelf->tb_array__DOT__arr_preload = 1U;
    vlSelf->tb_array__DOT__arr_weight = 0x2020202U;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       183);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       183);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       183);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       183);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       183);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       183);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       183);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       183);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       183);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       183);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       183);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       183);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       183);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       183);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       183);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       183);
    vlSelf->tb_array__DOT__arr_preload = 0U;
    __Vtask_tb_array__DOT__check__27__cond = (0U == 
                                              ((((2U 
                                                  ^ (IData)(
                                                            (((QData)((IData)(
                                                                              (vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[6U] 
                                                                               >> 0x10U))) 
                                                              << 0x21U) 
                                                             | (QData)((IData)(
                                                                               (0xffffU 
                                                                                & vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[6U])))))) 
                                                 | (4U 
                                                    ^ (IData)(
                                                              ((((QData)((IData)(
                                                                                (vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[6U] 
                                                                                >> 0x10U))) 
                                                                 << 0x21U) 
                                                                | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[6U])))) 
                                                               >> 0x20U)))) 
                                                | (8U 
                                                   ^ 
                                                   (0x3fffcU 
                                                    & (vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[7U] 
                                                       << 2U)))) 
                                               | (0x10U 
                                                  ^ 
                                                  (0x7fff8U 
                                                   & (vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[7U] 
                                                      >> 0xdU)))));
    __Vtask_tb_array__DOT__check__27__name = std::string{"preload propagated weight to product_array's row (row 3) via down_out"};
    vlSelf->tb_array__DOT__checks = ((IData)(1U) + vlSelf->tb_array__DOT__checks);
    if (__Vtask_tb_array__DOT__check__27__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_array__DOT__check__27__name));
    } else {
        vlSelf->tb_array__DOT__errors = ((IData)(1U) 
                                         + vlSelf->tb_array__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_array__DOT__check__27__name));
    }
    vlSelf->tb_array__DOT__arr_compute_start = 1U;
    vlSelf->tb_array__DOT__arr_activation = 0x3030303U;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       183);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       183);
    vlSelf->tb_array__DOT__arr_compute_start = 0U;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       183);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       183);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       183);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       183);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       183);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       183);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       183);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       183);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       183);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       183);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       183);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       183);
    __Vtask_tb_array__DOT__check__30__cond = (0U == 
                                              ((((2U 
                                                  ^ (IData)(
                                                            (((QData)((IData)(
                                                                              (vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[6U] 
                                                                               >> 0x10U))) 
                                                              << 0x21U) 
                                                             | (QData)((IData)(
                                                                               (0xffffU 
                                                                                & vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[6U])))))) 
                                                 | (4U 
                                                    ^ (IData)(
                                                              ((((QData)((IData)(
                                                                                (vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[6U] 
                                                                                >> 0x10U))) 
                                                                 << 0x21U) 
                                                                | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[6U])))) 
                                                               >> 0x20U)))) 
                                                | (8U 
                                                   ^ 
                                                   (0x3fffcU 
                                                    & (vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[7U] 
                                                       << 2U)))) 
                                               | (0x10U 
                                                  ^ 
                                                  (0x7fff8U 
                                                   & (vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[7U] 
                                                      >> 0xdU)))));
    __Vtask_tb_array__DOT__check__30__name = std::string{"product_array unchanged by compute (down_out untouched by compute_en)"};
    vlSelf->tb_array__DOT__checks = ((IData)(1U) + vlSelf->tb_array__DOT__checks);
    if (__Vtask_tb_array__DOT__check__30__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_array__DOT__check__30__name));
    } else {
        vlSelf->tb_array__DOT__errors = ((IData)(1U) 
                                         + vlSelf->tb_array__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_array__DOT__check__30__name));
    }
    vlSelf->tb_array__DOT__arr_drain = 1U;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       183);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       183);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       183);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       183);
    __Vtask_tb_array__DOT__check__33__cond = (0U != 
                                              ((((2U 
                                                  ^ (IData)(
                                                            (((QData)((IData)(
                                                                              (vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[6U] 
                                                                               >> 0x10U))) 
                                                              << 0x21U) 
                                                             | (QData)((IData)(
                                                                               (0xffffU 
                                                                                & vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[6U])))))) 
                                                 | (4U 
                                                    ^ (IData)(
                                                              ((((QData)((IData)(
                                                                                (vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[6U] 
                                                                                >> 0x10U))) 
                                                                 << 0x21U) 
                                                                | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[6U])))) 
                                                               >> 0x20U)))) 
                                                | (8U 
                                                   ^ 
                                                   (0x3fffcU 
                                                    & (vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[7U] 
                                                       << 2U)))) 
                                               | (0x10U 
                                                  ^ 
                                                  (0x7fff8U 
                                                   & (vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[7U] 
                                                      >> 0xdU)))));
    __Vtask_tb_array__DOT__check__33__name = std::string{"GAP: drain_state should win while h_en is still high (compute_en currently has priority in PE.sv) - product_array should not stay frozen"};
    vlSelf->tb_array__DOT__checks = ((IData)(1U) + vlSelf->tb_array__DOT__checks);
    if (__Vtask_tb_array__DOT__check__33__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_array__DOT__check__33__name));
    } else {
        vlSelf->tb_array__DOT__errors = ((IData)(1U) 
                                         + vlSelf->tb_array__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_array__DOT__check__33__name));
    }
    vlSelf->tb_array__DOT__arr_tile_done = 1U;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       183);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       183);
    vlSelf->tb_array__DOT__arr_tile_done = 0U;
    __Vtask_tb_array__DOT__check__35__cond = (0U != 
                                              ((((2U 
                                                  ^ (IData)(
                                                            (((QData)((IData)(
                                                                              (vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[6U] 
                                                                               >> 0x10U))) 
                                                              << 0x21U) 
                                                             | (QData)((IData)(
                                                                               (0xffffU 
                                                                                & vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[6U])))))) 
                                                 | (4U 
                                                    ^ (IData)(
                                                              ((((QData)((IData)(
                                                                                (vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[6U] 
                                                                                >> 0x10U))) 
                                                                 << 0x21U) 
                                                                | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[6U])))) 
                                                               >> 0x20U)))) 
                                                | (8U 
                                                   ^ 
                                                   (0x3fffcU 
                                                    & (vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[7U] 
                                                       << 2U)))) 
                                               | (0x10U 
                                                  ^ 
                                                  (0x7fff8U 
                                                   & (vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[7U] 
                                                      >> 0xdU)))));
    __Vtask_tb_array__DOT__check__35__name = std::string{"GAP: tile_done should not clear accum_reg while h_en is still high leaving nothing to drain - product_array should not still be the stale preload value"};
    vlSelf->tb_array__DOT__checks = ((IData)(1U) + vlSelf->tb_array__DOT__checks);
    if (__Vtask_tb_array__DOT__check__35__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_array__DOT__check__35__name));
    } else {
        vlSelf->tb_array__DOT__errors = ((IData)(1U) 
                                         + vlSelf->tb_array__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_array__DOT__check__35__name));
    }
    vlSelf->tb_array__DOT__arr_drain = 0U;
    VL_WRITEF("PE_array done\n\n==== SUMMARY ====\ntotal: %0d/%0d checks passed\n",
              32,(vlSelf->tb_array__DOT__checks - vlSelf->tb_array__DOT__errors),
              32,vlSelf->tb_array__DOT__checks);
    VL_FINISH_MT("tb/tb_array.sv", 251, "");
}

VL_INLINE_OPT VlCoroutine Vtb_array___024root___eval_initial__TOP__Vtiming__1(Vtb_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_array___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "tb/tb_array.sv", 
                                           21);
        vlSelf->tb_array__DOT__clk = (1U & (~ (IData)(vlSelf->tb_array__DOT__clk)));
    }
}

extern const VlUnpacked<CData/*4:0*/, 128> Vtb_array__ConstPool__TABLE_h73872590_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_array__ConstPool__TABLE_hb598fdfd_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_array__ConstPool__TABLE_h2fe71d6b_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_array__ConstPool__TABLE_h95214b9c_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_array__ConstPool__TABLE_he5d58018_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_array__ConstPool__TABLE_h26d33955_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_array__ConstPool__TABLE_hfc07e341_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_array__ConstPool__TABLE_h25f53c5b_0;

VL_INLINE_OPT void Vtb_array___024root___act_comb__TOP__0(Vtb_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_array___024root___act_comb__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*6:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*6:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    // Body
    vlSelf->tb_array__DOT__arr_output_valid = vlSelf->tb_array__DOT__arr_drain;
    __Vtableidx4 = (((IData)(vlSelf->tb_array__DOT__arr_tile_done) 
                     << 6U) | (((IData)(vlSelf->tb_array__DOT__arr_compute_start) 
                                << 5U) | (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__v_fsm_1__DOT__current_state)));
    vlSelf->tb_array__DOT__arr_dut__DOT__v_fsm_1__DOT__next_state 
        = Vtb_array__ConstPool__TABLE_h73872590_0[__Vtableidx4];
    vlSelf->tb_array__DOT__arr_dut__DOT__v_en_1 = Vtb_array__ConstPool__TABLE_hb598fdfd_0
        [__Vtableidx4];
    vlSelf->tb_array__DOT__arr_dut__DOT__v_en_0 = Vtb_array__ConstPool__TABLE_h2fe71d6b_0
        [__Vtableidx4];
    __Vtableidx1 = (((IData)(vlSelf->tb_array__DOT__h_tile_done) 
                     << 6U) | (((IData)(vlSelf->tb_array__DOT__h_start) 
                                << 5U) | (IData)(vlSelf->tb_array__DOT__h_dut__DOT__current_state)));
    vlSelf->tb_array__DOT__h_dut__DOT__next_state = 
        Vtb_array__ConstPool__TABLE_h73872590_0[__Vtableidx1];
    vlSelf->tb_array__DOT__h_en_3 = Vtb_array__ConstPool__TABLE_h95214b9c_0
        [__Vtableidx1];
    vlSelf->tb_array__DOT__h_en_2 = Vtb_array__ConstPool__TABLE_he5d58018_0
        [__Vtableidx1];
    vlSelf->tb_array__DOT__h_en_1 = Vtb_array__ConstPool__TABLE_h26d33955_0
        [__Vtableidx1];
    vlSelf->tb_array__DOT__h_en_0 = Vtb_array__ConstPool__TABLE_hfc07e341_0
        [__Vtableidx1];
    __Vtableidx2 = (((IData)(vlSelf->tb_array__DOT__v_tile_done) 
                     << 6U) | (((IData)(vlSelf->tb_array__DOT__v_start) 
                                << 5U) | (IData)(vlSelf->tb_array__DOT__v_dut__DOT__current_state)));
    vlSelf->tb_array__DOT__v_dut__DOT__next_state = 
        Vtb_array__ConstPool__TABLE_h73872590_0[__Vtableidx2];
    vlSelf->tb_array__DOT__v_en_3 = Vtb_array__ConstPool__TABLE_h95214b9c_0
        [__Vtableidx2];
    vlSelf->tb_array__DOT__v_en_2 = Vtb_array__ConstPool__TABLE_h25f53c5b_0
        [__Vtableidx2];
    vlSelf->tb_array__DOT__v_en_1 = Vtb_array__ConstPool__TABLE_hb598fdfd_0
        [__Vtableidx2];
    vlSelf->tb_array__DOT__v_en_0 = Vtb_array__ConstPool__TABLE_h2fe71d6b_0
        [__Vtableidx2];
    __Vtableidx3 = (((IData)(vlSelf->tb_array__DOT__arr_tile_done) 
                     << 6U) | (((IData)(vlSelf->tb_array__DOT__arr_compute_start) 
                                << 5U) | (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__e_fsm_1__DOT__current_state)));
    vlSelf->tb_array__DOT__arr_dut__DOT__e_fsm_1__DOT__next_state 
        = Vtb_array__ConstPool__TABLE_h73872590_0[__Vtableidx3];
    vlSelf->tb_array__DOT__arr_dut__DOT__h_en_3 = Vtb_array__ConstPool__TABLE_h95214b9c_0
        [__Vtableidx3];
    vlSelf->tb_array__DOT__arr_dut__DOT__h_en_2 = Vtb_array__ConstPool__TABLE_he5d58018_0
        [__Vtableidx3];
    vlSelf->tb_array__DOT__arr_dut__DOT__h_en_1 = Vtb_array__ConstPool__TABLE_h26d33955_0
        [__Vtableidx3];
    vlSelf->tb_array__DOT__arr_dut__DOT__h_en_0 = Vtb_array__ConstPool__TABLE_hfc07e341_0
        [__Vtableidx3];
}

void Vtb_array___024root___eval_act(Vtb_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_array___024root___eval_act\n"); );
    // Body
    if ((0x18ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_array___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_array___024root___nba_sequent__TOP__0(Vtb_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_array___024root___nba_sequent__TOP__0\n"); );
    // Init
    SData/*15:0*/ __Vdly__tb_array__DOT__arr_dut__DOT__pe_0_0__DOT__product_reg;
    __Vdly__tb_array__DOT__arr_dut__DOT__pe_0_0__DOT__product_reg = 0;
    IData/*31:0*/ __Vdly__tb_array__DOT__arr_dut__DOT__pe_0_0__DOT__accum_reg;
    __Vdly__tb_array__DOT__arr_dut__DOT__pe_0_0__DOT__accum_reg = 0;
    SData/*15:0*/ __Vdly__tb_array__DOT__arr_dut__DOT__pe_0_1__DOT__product_reg;
    __Vdly__tb_array__DOT__arr_dut__DOT__pe_0_1__DOT__product_reg = 0;
    IData/*31:0*/ __Vdly__tb_array__DOT__arr_dut__DOT__pe_0_1__DOT__accum_reg;
    __Vdly__tb_array__DOT__arr_dut__DOT__pe_0_1__DOT__accum_reg = 0;
    SData/*15:0*/ __Vdly__tb_array__DOT__arr_dut__DOT__pe_0_2__DOT__product_reg;
    __Vdly__tb_array__DOT__arr_dut__DOT__pe_0_2__DOT__product_reg = 0;
    IData/*31:0*/ __Vdly__tb_array__DOT__arr_dut__DOT__pe_0_2__DOT__accum_reg;
    __Vdly__tb_array__DOT__arr_dut__DOT__pe_0_2__DOT__accum_reg = 0;
    SData/*15:0*/ __Vdly__tb_array__DOT__arr_dut__DOT__pe_0_3__DOT__product_reg;
    __Vdly__tb_array__DOT__arr_dut__DOT__pe_0_3__DOT__product_reg = 0;
    IData/*31:0*/ __Vdly__tb_array__DOT__arr_dut__DOT__pe_0_3__DOT__accum_reg;
    __Vdly__tb_array__DOT__arr_dut__DOT__pe_0_3__DOT__accum_reg = 0;
    SData/*15:0*/ __Vdly__tb_array__DOT__arr_dut__DOT__pe_1_0__DOT__product_reg;
    __Vdly__tb_array__DOT__arr_dut__DOT__pe_1_0__DOT__product_reg = 0;
    IData/*31:0*/ __Vdly__tb_array__DOT__arr_dut__DOT__pe_1_0__DOT__accum_reg;
    __Vdly__tb_array__DOT__arr_dut__DOT__pe_1_0__DOT__accum_reg = 0;
    SData/*15:0*/ __Vdly__tb_array__DOT__arr_dut__DOT__pe_1_1__DOT__product_reg;
    __Vdly__tb_array__DOT__arr_dut__DOT__pe_1_1__DOT__product_reg = 0;
    IData/*31:0*/ __Vdly__tb_array__DOT__arr_dut__DOT__pe_1_1__DOT__accum_reg;
    __Vdly__tb_array__DOT__arr_dut__DOT__pe_1_1__DOT__accum_reg = 0;
    SData/*15:0*/ __Vdly__tb_array__DOT__arr_dut__DOT__pe_1_2__DOT__product_reg;
    __Vdly__tb_array__DOT__arr_dut__DOT__pe_1_2__DOT__product_reg = 0;
    IData/*31:0*/ __Vdly__tb_array__DOT__arr_dut__DOT__pe_1_2__DOT__accum_reg;
    __Vdly__tb_array__DOT__arr_dut__DOT__pe_1_2__DOT__accum_reg = 0;
    SData/*15:0*/ __Vdly__tb_array__DOT__arr_dut__DOT__pe_1_3__DOT__product_reg;
    __Vdly__tb_array__DOT__arr_dut__DOT__pe_1_3__DOT__product_reg = 0;
    IData/*31:0*/ __Vdly__tb_array__DOT__arr_dut__DOT__pe_1_3__DOT__accum_reg;
    __Vdly__tb_array__DOT__arr_dut__DOT__pe_1_3__DOT__accum_reg = 0;
    SData/*15:0*/ __Vdly__tb_array__DOT__arr_dut__DOT__pe_2_0__DOT__product_reg;
    __Vdly__tb_array__DOT__arr_dut__DOT__pe_2_0__DOT__product_reg = 0;
    IData/*31:0*/ __Vdly__tb_array__DOT__arr_dut__DOT__pe_2_0__DOT__accum_reg;
    __Vdly__tb_array__DOT__arr_dut__DOT__pe_2_0__DOT__accum_reg = 0;
    SData/*15:0*/ __Vdly__tb_array__DOT__arr_dut__DOT__pe_2_1__DOT__product_reg;
    __Vdly__tb_array__DOT__arr_dut__DOT__pe_2_1__DOT__product_reg = 0;
    IData/*31:0*/ __Vdly__tb_array__DOT__arr_dut__DOT__pe_2_1__DOT__accum_reg;
    __Vdly__tb_array__DOT__arr_dut__DOT__pe_2_1__DOT__accum_reg = 0;
    SData/*15:0*/ __Vdly__tb_array__DOT__arr_dut__DOT__pe_2_2__DOT__product_reg;
    __Vdly__tb_array__DOT__arr_dut__DOT__pe_2_2__DOT__product_reg = 0;
    IData/*31:0*/ __Vdly__tb_array__DOT__arr_dut__DOT__pe_2_2__DOT__accum_reg;
    __Vdly__tb_array__DOT__arr_dut__DOT__pe_2_2__DOT__accum_reg = 0;
    SData/*15:0*/ __Vdly__tb_array__DOT__arr_dut__DOT__pe_2_3__DOT__product_reg;
    __Vdly__tb_array__DOT__arr_dut__DOT__pe_2_3__DOT__product_reg = 0;
    IData/*31:0*/ __Vdly__tb_array__DOT__arr_dut__DOT__pe_2_3__DOT__accum_reg;
    __Vdly__tb_array__DOT__arr_dut__DOT__pe_2_3__DOT__accum_reg = 0;
    SData/*15:0*/ __Vdly__tb_array__DOT__arr_dut__DOT__pe_3_0__DOT__product_reg;
    __Vdly__tb_array__DOT__arr_dut__DOT__pe_3_0__DOT__product_reg = 0;
    IData/*31:0*/ __Vdly__tb_array__DOT__arr_dut__DOT__pe_3_0__DOT__accum_reg;
    __Vdly__tb_array__DOT__arr_dut__DOT__pe_3_0__DOT__accum_reg = 0;
    SData/*15:0*/ __Vdly__tb_array__DOT__arr_dut__DOT__pe_3_1__DOT__product_reg;
    __Vdly__tb_array__DOT__arr_dut__DOT__pe_3_1__DOT__product_reg = 0;
    IData/*31:0*/ __Vdly__tb_array__DOT__arr_dut__DOT__pe_3_1__DOT__accum_reg;
    __Vdly__tb_array__DOT__arr_dut__DOT__pe_3_1__DOT__accum_reg = 0;
    SData/*15:0*/ __Vdly__tb_array__DOT__arr_dut__DOT__pe_3_2__DOT__product_reg;
    __Vdly__tb_array__DOT__arr_dut__DOT__pe_3_2__DOT__product_reg = 0;
    IData/*31:0*/ __Vdly__tb_array__DOT__arr_dut__DOT__pe_3_2__DOT__accum_reg;
    __Vdly__tb_array__DOT__arr_dut__DOT__pe_3_2__DOT__accum_reg = 0;
    SData/*15:0*/ __Vdly__tb_array__DOT__arr_dut__DOT__pe_3_3__DOT__product_reg;
    __Vdly__tb_array__DOT__arr_dut__DOT__pe_3_3__DOT__product_reg = 0;
    IData/*31:0*/ __Vdly__tb_array__DOT__arr_dut__DOT__pe_3_3__DOT__accum_reg;
    __Vdly__tb_array__DOT__arr_dut__DOT__pe_3_3__DOT__accum_reg = 0;
    // Body
    __Vdly__tb_array__DOT__arr_dut__DOT__pe_0_3__DOT__accum_reg 
        = vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_3__DOT__accum_reg;
    __Vdly__tb_array__DOT__arr_dut__DOT__pe_0_3__DOT__product_reg 
        = vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_3__DOT__product_reg;
    __Vdly__tb_array__DOT__arr_dut__DOT__pe_0_2__DOT__accum_reg 
        = vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_2__DOT__accum_reg;
    __Vdly__tb_array__DOT__arr_dut__DOT__pe_0_2__DOT__product_reg 
        = vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_2__DOT__product_reg;
    __Vdly__tb_array__DOT__arr_dut__DOT__pe_0_1__DOT__accum_reg 
        = vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_1__DOT__accum_reg;
    __Vdly__tb_array__DOT__arr_dut__DOT__pe_0_1__DOT__product_reg 
        = vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_1__DOT__product_reg;
    __Vdly__tb_array__DOT__arr_dut__DOT__pe_0_0__DOT__accum_reg 
        = vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_0__DOT__accum_reg;
    __Vdly__tb_array__DOT__arr_dut__DOT__pe_0_0__DOT__product_reg 
        = vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_0__DOT__product_reg;
    __Vdly__tb_array__DOT__arr_dut__DOT__pe_3_3__DOT__accum_reg 
        = vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_3__DOT__accum_reg;
    __Vdly__tb_array__DOT__arr_dut__DOT__pe_3_3__DOT__product_reg 
        = vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_3__DOT__product_reg;
    __Vdly__tb_array__DOT__arr_dut__DOT__pe_3_2__DOT__accum_reg 
        = vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_2__DOT__accum_reg;
    __Vdly__tb_array__DOT__arr_dut__DOT__pe_3_2__DOT__product_reg 
        = vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_2__DOT__product_reg;
    __Vdly__tb_array__DOT__arr_dut__DOT__pe_3_1__DOT__accum_reg 
        = vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_1__DOT__accum_reg;
    __Vdly__tb_array__DOT__arr_dut__DOT__pe_3_1__DOT__product_reg 
        = vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_1__DOT__product_reg;
    __Vdly__tb_array__DOT__arr_dut__DOT__pe_2_3__DOT__accum_reg 
        = vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_3__DOT__accum_reg;
    __Vdly__tb_array__DOT__arr_dut__DOT__pe_2_3__DOT__product_reg 
        = vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_3__DOT__product_reg;
    __Vdly__tb_array__DOT__arr_dut__DOT__pe_2_2__DOT__accum_reg 
        = vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_2__DOT__accum_reg;
    __Vdly__tb_array__DOT__arr_dut__DOT__pe_2_2__DOT__product_reg 
        = vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_2__DOT__product_reg;
    __Vdly__tb_array__DOT__arr_dut__DOT__pe_2_1__DOT__accum_reg 
        = vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_1__DOT__accum_reg;
    __Vdly__tb_array__DOT__arr_dut__DOT__pe_2_1__DOT__product_reg 
        = vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_1__DOT__product_reg;
    __Vdly__tb_array__DOT__arr_dut__DOT__pe_1_3__DOT__accum_reg 
        = vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_3__DOT__accum_reg;
    __Vdly__tb_array__DOT__arr_dut__DOT__pe_1_3__DOT__product_reg 
        = vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_3__DOT__product_reg;
    __Vdly__tb_array__DOT__arr_dut__DOT__pe_1_2__DOT__accum_reg 
        = vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_2__DOT__accum_reg;
    __Vdly__tb_array__DOT__arr_dut__DOT__pe_1_2__DOT__product_reg 
        = vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_2__DOT__product_reg;
    __Vdly__tb_array__DOT__arr_dut__DOT__pe_1_1__DOT__accum_reg 
        = vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_1__DOT__accum_reg;
    __Vdly__tb_array__DOT__arr_dut__DOT__pe_1_1__DOT__product_reg 
        = vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_1__DOT__product_reg;
    __Vdly__tb_array__DOT__arr_dut__DOT__pe_3_0__DOT__accum_reg 
        = vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_0__DOT__accum_reg;
    __Vdly__tb_array__DOT__arr_dut__DOT__pe_3_0__DOT__product_reg 
        = vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_0__DOT__product_reg;
    __Vdly__tb_array__DOT__arr_dut__DOT__pe_2_0__DOT__accum_reg 
        = vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_0__DOT__accum_reg;
    __Vdly__tb_array__DOT__arr_dut__DOT__pe_2_0__DOT__product_reg 
        = vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_0__DOT__product_reg;
    __Vdly__tb_array__DOT__arr_dut__DOT__pe_1_0__DOT__accum_reg 
        = vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_0__DOT__accum_reg;
    __Vdly__tb_array__DOT__arr_dut__DOT__pe_1_0__DOT__product_reg 
        = vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_0__DOT__product_reg;
    if (vlSelf->tb_array__DOT__arr_rst_n) {
        vlSelf->tb_array__DOT__arr_dut__DOT__v_fsm_1__DOT__current_state 
            = vlSelf->tb_array__DOT__arr_dut__DOT__v_fsm_1__DOT__next_state;
        vlSelf->tb_array__DOT__arr_dut__DOT__e_fsm_1__DOT__current_state 
            = vlSelf->tb_array__DOT__arr_dut__DOT__e_fsm_1__DOT__next_state;
        if (((IData)(vlSelf->tb_array__DOT__arr_clr) 
             | (IData)(vlSelf->tb_array__DOT__arr_tile_done))) {
            __Vdly__tb_array__DOT__arr_dut__DOT__pe_0_3__DOT__product_reg = 0U;
            __Vdly__tb_array__DOT__arr_dut__DOT__pe_0_3__DOT__accum_reg = 0U;
            __Vdly__tb_array__DOT__arr_dut__DOT__pe_0_2__DOT__product_reg = 0U;
            __Vdly__tb_array__DOT__arr_dut__DOT__pe_0_2__DOT__accum_reg = 0U;
            __Vdly__tb_array__DOT__arr_dut__DOT__pe_0_1__DOT__product_reg = 0U;
            __Vdly__tb_array__DOT__arr_dut__DOT__pe_0_1__DOT__accum_reg = 0U;
            __Vdly__tb_array__DOT__arr_dut__DOT__pe_0_0__DOT__product_reg = 0U;
            __Vdly__tb_array__DOT__arr_dut__DOT__pe_0_0__DOT__accum_reg = 0U;
            __Vdly__tb_array__DOT__arr_dut__DOT__pe_3_3__DOT__product_reg = 0U;
            __Vdly__tb_array__DOT__arr_dut__DOT__pe_3_3__DOT__accum_reg = 0U;
            __Vdly__tb_array__DOT__arr_dut__DOT__pe_3_2__DOT__product_reg = 0U;
            __Vdly__tb_array__DOT__arr_dut__DOT__pe_3_2__DOT__accum_reg = 0U;
            __Vdly__tb_array__DOT__arr_dut__DOT__pe_3_1__DOT__product_reg = 0U;
            __Vdly__tb_array__DOT__arr_dut__DOT__pe_3_1__DOT__accum_reg = 0U;
            __Vdly__tb_array__DOT__arr_dut__DOT__pe_2_3__DOT__product_reg = 0U;
            __Vdly__tb_array__DOT__arr_dut__DOT__pe_2_3__DOT__accum_reg = 0U;
            __Vdly__tb_array__DOT__arr_dut__DOT__pe_2_2__DOT__product_reg = 0U;
            __Vdly__tb_array__DOT__arr_dut__DOT__pe_2_2__DOT__accum_reg = 0U;
            __Vdly__tb_array__DOT__arr_dut__DOT__pe_2_1__DOT__product_reg = 0U;
            __Vdly__tb_array__DOT__arr_dut__DOT__pe_2_1__DOT__accum_reg = 0U;
            __Vdly__tb_array__DOT__arr_dut__DOT__pe_1_3__DOT__product_reg = 0U;
            __Vdly__tb_array__DOT__arr_dut__DOT__pe_1_3__DOT__accum_reg = 0U;
            __Vdly__tb_array__DOT__arr_dut__DOT__pe_1_2__DOT__product_reg = 0U;
            __Vdly__tb_array__DOT__arr_dut__DOT__pe_1_2__DOT__accum_reg = 0U;
            __Vdly__tb_array__DOT__arr_dut__DOT__pe_1_1__DOT__product_reg = 0U;
            __Vdly__tb_array__DOT__arr_dut__DOT__pe_1_1__DOT__accum_reg = 0U;
            __Vdly__tb_array__DOT__arr_dut__DOT__pe_3_0__DOT__product_reg = 0U;
            __Vdly__tb_array__DOT__arr_dut__DOT__pe_3_0__DOT__accum_reg = 0U;
            __Vdly__tb_array__DOT__arr_dut__DOT__pe_2_0__DOT__product_reg = 0U;
            __Vdly__tb_array__DOT__arr_dut__DOT__pe_2_0__DOT__accum_reg = 0U;
            __Vdly__tb_array__DOT__arr_dut__DOT__pe_1_0__DOT__product_reg = 0U;
            __Vdly__tb_array__DOT__arr_dut__DOT__pe_1_0__DOT__accum_reg = 0U;
            if (vlSelf->tb_array__DOT__arr_tile_done) {
                vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_3__DOT__b_reg = 0U;
                vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_2__DOT__b_reg = 0U;
                vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_1__DOT__b_reg = 0U;
                vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_0__DOT__b_reg = 0U;
                vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_3__DOT__b_reg = 0U;
                vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_2__DOT__b_reg = 0U;
                vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_1__DOT__b_reg = 0U;
                vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_3__DOT__b_reg = 0U;
                vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_2__DOT__b_reg = 0U;
                vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_1__DOT__b_reg = 0U;
                vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_3__DOT__b_reg = 0U;
                vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_2__DOT__b_reg = 0U;
                vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_1__DOT__b_reg = 0U;
                vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_0__DOT__b_reg = 0U;
                vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_0__DOT__b_reg = 0U;
                vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_0__DOT__b_reg = 0U;
            }
            vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_3__DOT__a_reg = 0U;
            vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_2__DOT__a_reg = 0U;
            vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_1__DOT__a_reg = 0U;
            vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_0__DOT__a_reg = 0U;
            vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_3__DOT__a_reg = 0U;
            vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_2__DOT__a_reg = 0U;
            vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_1__DOT__a_reg = 0U;
            vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_3__DOT__a_reg = 0U;
            vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_2__DOT__a_reg = 0U;
            vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_1__DOT__a_reg = 0U;
            vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_3__DOT__a_reg = 0U;
            vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_2__DOT__a_reg = 0U;
            vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_1__DOT__a_reg = 0U;
            vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_0__DOT__a_reg = 0U;
            vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_0__DOT__a_reg = 0U;
            vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_0__DOT__a_reg = 0U;
        } else {
            if (vlSelf->tb_array__DOT__arr_preload) {
                vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_0_3__down_out 
                    = vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_3__DOT__b_reg;
                vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_0_2__down_out 
                    = vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_2__DOT__b_reg;
                vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_0_1__down_out 
                    = vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_1__DOT__b_reg;
                vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_0_0__down_out 
                    = vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_0__DOT__b_reg;
                vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_3_3__down_out 
                    = vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_3__DOT__b_reg;
                vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_3_2__down_out 
                    = vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_2__DOT__b_reg;
                vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_3_1__down_out 
                    = vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_1__DOT__b_reg;
                vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_2_3__down_out 
                    = vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_3__DOT__b_reg;
                vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_2_2__down_out 
                    = vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_2__DOT__b_reg;
                vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_2_1__down_out 
                    = vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_1__DOT__b_reg;
                vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_1_3__down_out 
                    = vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_3__DOT__b_reg;
                vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_1_2__down_out 
                    = vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_2__DOT__b_reg;
                vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_1_1__down_out 
                    = vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_1__DOT__b_reg;
                vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_3_0__down_out 
                    = vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_0__DOT__b_reg;
                vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_2_0__down_out 
                    = vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_0__DOT__b_reg;
                vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_1_0__down_out 
                    = vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_0__DOT__b_reg;
                vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_3__DOT__b_reg 
                    = (vlSelf->tb_array__DOT__arr_weight 
                       >> 0x18U);
                vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_2__DOT__b_reg 
                    = (0xffU & (vlSelf->tb_array__DOT__arr_weight 
                                >> 0x10U));
                vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_1__DOT__b_reg 
                    = (0xffU & (vlSelf->tb_array__DOT__arr_weight 
                                >> 8U));
                vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_0__DOT__b_reg 
                    = (0xffU & vlSelf->tb_array__DOT__arr_weight);
                vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_3__DOT__b_reg 
                    = (0xffU & (vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[5U] 
                                >> 0x10U));
                vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_2__DOT__b_reg 
                    = (0xffU & vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[5U]);
                vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_1__DOT__b_reg 
                    = (0xffU & (vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[4U] 
                                >> 0x10U));
                vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_3__DOT__b_reg 
                    = (0xffU & (vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[3U] 
                                >> 0x10U));
                vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_2__DOT__b_reg 
                    = (0xffU & vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[3U]);
                vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_1__DOT__b_reg 
                    = (0xffU & (vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[2U] 
                                >> 0x10U));
                vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_3__DOT__b_reg 
                    = (0xffU & (vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[1U] 
                                >> 0x10U));
                vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_2__DOT__b_reg 
                    = (0xffU & vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[1U]);
                vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_1__DOT__b_reg 
                    = (0xffU & (vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[0U] 
                                >> 0x10U));
                vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_0__DOT__b_reg 
                    = (0xffU & vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[4U]);
                vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_0__DOT__b_reg 
                    = (0xffU & vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[2U]);
                vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_0__DOT__b_reg 
                    = (0xffU & vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[0U]);
            } else {
                if (vlSelf->tb_array__DOT__arr_dut__DOT__h_en_3) {
                    __Vdly__tb_array__DOT__arr_dut__DOT__pe_0_3__DOT__product_reg 
                        = (0xffffU & (((IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_3__DOT__a_reg) 
                                       * (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_3__DOT__b_reg)) 
                                      + (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_3__DOT__product_reg)));
                    __Vdly__tb_array__DOT__arr_dut__DOT__pe_0_3__DOT__accum_reg 
                        = (vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_3__DOT__accum_reg 
                           + (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_3__DOT__product_reg));
                    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_0_3__right_out 
                        = vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_3__DOT__a_reg;
                    __Vdly__tb_array__DOT__arr_dut__DOT__pe_3_3__DOT__product_reg 
                        = (0xffffU & (((IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_3__DOT__a_reg) 
                                       * (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_3__DOT__b_reg)) 
                                      + (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_3__DOT__product_reg)));
                    __Vdly__tb_array__DOT__arr_dut__DOT__pe_3_3__DOT__accum_reg 
                        = (vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_3__DOT__accum_reg 
                           + (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_3__DOT__product_reg));
                    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_3_3__right_out 
                        = vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_3__DOT__a_reg;
                    __Vdly__tb_array__DOT__arr_dut__DOT__pe_2_3__DOT__product_reg 
                        = (0xffffU & (((IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_3__DOT__a_reg) 
                                       * (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_3__DOT__b_reg)) 
                                      + (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_3__DOT__product_reg)));
                    __Vdly__tb_array__DOT__arr_dut__DOT__pe_2_3__DOT__accum_reg 
                        = (vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_3__DOT__accum_reg 
                           + (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_3__DOT__product_reg));
                    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_2_3__right_out 
                        = vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_3__DOT__a_reg;
                    __Vdly__tb_array__DOT__arr_dut__DOT__pe_1_3__DOT__product_reg 
                        = (0xffffU & (((IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_3__DOT__a_reg) 
                                       * (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_3__DOT__b_reg)) 
                                      + (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_3__DOT__product_reg)));
                    __Vdly__tb_array__DOT__arr_dut__DOT__pe_1_3__DOT__accum_reg 
                        = (vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_3__DOT__accum_reg 
                           + (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_3__DOT__product_reg));
                    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_1_3__right_out 
                        = vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_3__DOT__a_reg;
                } else if (vlSelf->tb_array__DOT__arr_drain) {
                    if (vlSelf->tb_array__DOT__arr_dut__DOT__v_en_0) {
                        __Vdly__tb_array__DOT__arr_dut__DOT__pe_0_3__DOT__accum_reg = 0U;
                    } else {
                        vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_0_3__down_out 
                            = vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_3__DOT__accum_reg;
                    }
                    if (vlSelf->tb_array__DOT__arr_dut__DOT__v_en_1) {
                        __Vdly__tb_array__DOT__arr_dut__DOT__pe_3_3__DOT__accum_reg 
                            = (vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[5U] 
                               >> 0x10U);
                        __Vdly__tb_array__DOT__arr_dut__DOT__pe_2_3__DOT__accum_reg 
                            = (vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[3U] 
                               >> 0x10U);
                        __Vdly__tb_array__DOT__arr_dut__DOT__pe_1_3__DOT__accum_reg 
                            = (vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[1U] 
                               >> 0x10U);
                    } else {
                        vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_3_3__down_out 
                            = vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_3__DOT__accum_reg;
                        vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_2_3__down_out 
                            = vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_3__DOT__accum_reg;
                        vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_1_3__down_out 
                            = vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_3__DOT__accum_reg;
                    }
                }
                if (vlSelf->tb_array__DOT__arr_dut__DOT__h_en_2) {
                    __Vdly__tb_array__DOT__arr_dut__DOT__pe_0_2__DOT__product_reg 
                        = (0xffffU & (((IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_2__DOT__a_reg) 
                                       * (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_2__DOT__b_reg)) 
                                      + (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_2__DOT__product_reg)));
                    __Vdly__tb_array__DOT__arr_dut__DOT__pe_0_2__DOT__accum_reg 
                        = (vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_2__DOT__accum_reg 
                           + (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_2__DOT__product_reg));
                    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_0_2__right_out 
                        = vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_2__DOT__a_reg;
                    __Vdly__tb_array__DOT__arr_dut__DOT__pe_3_2__DOT__product_reg 
                        = (0xffffU & (((IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_2__DOT__a_reg) 
                                       * (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_2__DOT__b_reg)) 
                                      + (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_2__DOT__product_reg)));
                    __Vdly__tb_array__DOT__arr_dut__DOT__pe_3_2__DOT__accum_reg 
                        = (vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_2__DOT__accum_reg 
                           + (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_2__DOT__product_reg));
                    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_3_2__right_out 
                        = vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_2__DOT__a_reg;
                    __Vdly__tb_array__DOT__arr_dut__DOT__pe_2_2__DOT__product_reg 
                        = (0xffffU & (((IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_2__DOT__a_reg) 
                                       * (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_2__DOT__b_reg)) 
                                      + (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_2__DOT__product_reg)));
                    __Vdly__tb_array__DOT__arr_dut__DOT__pe_2_2__DOT__accum_reg 
                        = (vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_2__DOT__accum_reg 
                           + (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_2__DOT__product_reg));
                    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_2_2__right_out 
                        = vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_2__DOT__a_reg;
                    __Vdly__tb_array__DOT__arr_dut__DOT__pe_1_2__DOT__product_reg 
                        = (0xffffU & (((IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_2__DOT__a_reg) 
                                       * (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_2__DOT__b_reg)) 
                                      + (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_2__DOT__product_reg)));
                    __Vdly__tb_array__DOT__arr_dut__DOT__pe_1_2__DOT__accum_reg 
                        = (vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_2__DOT__accum_reg 
                           + (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_2__DOT__product_reg));
                    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_1_2__right_out 
                        = vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_2__DOT__a_reg;
                } else if (vlSelf->tb_array__DOT__arr_drain) {
                    if (vlSelf->tb_array__DOT__arr_dut__DOT__v_en_0) {
                        __Vdly__tb_array__DOT__arr_dut__DOT__pe_0_2__DOT__accum_reg = 0U;
                    } else {
                        vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_0_2__down_out 
                            = vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_2__DOT__accum_reg;
                    }
                    if (vlSelf->tb_array__DOT__arr_dut__DOT__v_en_1) {
                        __Vdly__tb_array__DOT__arr_dut__DOT__pe_3_2__DOT__accum_reg 
                            = (0xffffU & vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[5U]);
                        __Vdly__tb_array__DOT__arr_dut__DOT__pe_2_2__DOT__accum_reg 
                            = (0xffffU & vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[3U]);
                        __Vdly__tb_array__DOT__arr_dut__DOT__pe_1_2__DOT__accum_reg 
                            = (0xffffU & vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[1U]);
                    } else {
                        vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_3_2__down_out 
                            = vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_2__DOT__accum_reg;
                        vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_2_2__down_out 
                            = vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_2__DOT__accum_reg;
                        vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_1_2__down_out 
                            = vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_2__DOT__accum_reg;
                    }
                }
                if (vlSelf->tb_array__DOT__arr_dut__DOT__h_en_1) {
                    __Vdly__tb_array__DOT__arr_dut__DOT__pe_0_1__DOT__product_reg 
                        = (0xffffU & (((IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_1__DOT__a_reg) 
                                       * (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_1__DOT__b_reg)) 
                                      + (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_1__DOT__product_reg)));
                    __Vdly__tb_array__DOT__arr_dut__DOT__pe_0_1__DOT__accum_reg 
                        = (vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_1__DOT__accum_reg 
                           + (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_1__DOT__product_reg));
                    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_0_1__right_out 
                        = vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_1__DOT__a_reg;
                    __Vdly__tb_array__DOT__arr_dut__DOT__pe_3_1__DOT__product_reg 
                        = (0xffffU & (((IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_1__DOT__a_reg) 
                                       * (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_1__DOT__b_reg)) 
                                      + (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_1__DOT__product_reg)));
                    __Vdly__tb_array__DOT__arr_dut__DOT__pe_3_1__DOT__accum_reg 
                        = (vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_1__DOT__accum_reg 
                           + (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_1__DOT__product_reg));
                    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_3_1__right_out 
                        = vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_1__DOT__a_reg;
                    __Vdly__tb_array__DOT__arr_dut__DOT__pe_2_1__DOT__product_reg 
                        = (0xffffU & (((IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_1__DOT__a_reg) 
                                       * (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_1__DOT__b_reg)) 
                                      + (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_1__DOT__product_reg)));
                    __Vdly__tb_array__DOT__arr_dut__DOT__pe_2_1__DOT__accum_reg 
                        = (vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_1__DOT__accum_reg 
                           + (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_1__DOT__product_reg));
                    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_2_1__right_out 
                        = vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_1__DOT__a_reg;
                    __Vdly__tb_array__DOT__arr_dut__DOT__pe_1_1__DOT__product_reg 
                        = (0xffffU & (((IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_1__DOT__a_reg) 
                                       * (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_1__DOT__b_reg)) 
                                      + (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_1__DOT__product_reg)));
                    __Vdly__tb_array__DOT__arr_dut__DOT__pe_1_1__DOT__accum_reg 
                        = (vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_1__DOT__accum_reg 
                           + (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_1__DOT__product_reg));
                    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_1_1__right_out 
                        = vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_1__DOT__a_reg;
                } else if (vlSelf->tb_array__DOT__arr_drain) {
                    if (vlSelf->tb_array__DOT__arr_dut__DOT__v_en_0) {
                        __Vdly__tb_array__DOT__arr_dut__DOT__pe_0_1__DOT__accum_reg = 0U;
                    } else {
                        vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_0_1__down_out 
                            = vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_1__DOT__accum_reg;
                    }
                    if (vlSelf->tb_array__DOT__arr_dut__DOT__v_en_1) {
                        __Vdly__tb_array__DOT__arr_dut__DOT__pe_3_1__DOT__accum_reg 
                            = (vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[4U] 
                               >> 0x10U);
                        __Vdly__tb_array__DOT__arr_dut__DOT__pe_2_1__DOT__accum_reg 
                            = (vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[2U] 
                               >> 0x10U);
                        __Vdly__tb_array__DOT__arr_dut__DOT__pe_1_1__DOT__accum_reg 
                            = (vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[0U] 
                               >> 0x10U);
                    } else {
                        vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_3_1__down_out 
                            = vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_1__DOT__accum_reg;
                        vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_2_1__down_out 
                            = vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_1__DOT__accum_reg;
                        vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_1_1__down_out 
                            = vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_1__DOT__accum_reg;
                    }
                }
                if (vlSelf->tb_array__DOT__arr_dut__DOT__h_en_0) {
                    __Vdly__tb_array__DOT__arr_dut__DOT__pe_0_0__DOT__product_reg 
                        = (0xffffU & (((IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_0__DOT__a_reg) 
                                       * (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_0__DOT__b_reg)) 
                                      + (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_0__DOT__product_reg)));
                    __Vdly__tb_array__DOT__arr_dut__DOT__pe_0_0__DOT__accum_reg 
                        = (vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_0__DOT__accum_reg 
                           + (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_0__DOT__product_reg));
                    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_0_0__right_out 
                        = vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_0__DOT__a_reg;
                    __Vdly__tb_array__DOT__arr_dut__DOT__pe_3_0__DOT__product_reg 
                        = (0xffffU & (((IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_0__DOT__a_reg) 
                                       * (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_0__DOT__b_reg)) 
                                      + (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_0__DOT__product_reg)));
                    __Vdly__tb_array__DOT__arr_dut__DOT__pe_3_0__DOT__accum_reg 
                        = (vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_0__DOT__accum_reg 
                           + (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_0__DOT__product_reg));
                    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_3_0__right_out 
                        = vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_0__DOT__a_reg;
                    __Vdly__tb_array__DOT__arr_dut__DOT__pe_2_0__DOT__product_reg 
                        = (0xffffU & (((IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_0__DOT__a_reg) 
                                       * (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_0__DOT__b_reg)) 
                                      + (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_0__DOT__product_reg)));
                    __Vdly__tb_array__DOT__arr_dut__DOT__pe_2_0__DOT__accum_reg 
                        = (vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_0__DOT__accum_reg 
                           + (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_0__DOT__product_reg));
                    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_2_0__right_out 
                        = vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_0__DOT__a_reg;
                    __Vdly__tb_array__DOT__arr_dut__DOT__pe_1_0__DOT__product_reg 
                        = (0xffffU & (((IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_0__DOT__a_reg) 
                                       * (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_0__DOT__b_reg)) 
                                      + (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_0__DOT__product_reg)));
                    __Vdly__tb_array__DOT__arr_dut__DOT__pe_1_0__DOT__accum_reg 
                        = (vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_0__DOT__accum_reg 
                           + (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_0__DOT__product_reg));
                    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_1_0__right_out 
                        = vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_0__DOT__a_reg;
                } else if (vlSelf->tb_array__DOT__arr_drain) {
                    if (vlSelf->tb_array__DOT__arr_dut__DOT__v_en_0) {
                        __Vdly__tb_array__DOT__arr_dut__DOT__pe_0_0__DOT__accum_reg = 0U;
                    } else {
                        vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_0_0__down_out 
                            = vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_0__DOT__accum_reg;
                    }
                    if (vlSelf->tb_array__DOT__arr_dut__DOT__v_en_1) {
                        __Vdly__tb_array__DOT__arr_dut__DOT__pe_3_0__DOT__accum_reg 
                            = (0xffffU & vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[4U]);
                        __Vdly__tb_array__DOT__arr_dut__DOT__pe_2_0__DOT__accum_reg 
                            = (0xffffU & vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[2U]);
                        __Vdly__tb_array__DOT__arr_dut__DOT__pe_1_0__DOT__accum_reg 
                            = (0xffffU & vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[0U]);
                    } else {
                        vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_3_0__down_out 
                            = vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_0__DOT__accum_reg;
                        vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_2_0__down_out 
                            = vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_0__DOT__accum_reg;
                        vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_1_0__down_out 
                            = vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_0__DOT__accum_reg;
                    }
                }
            }
            if ((1U & (~ (IData)(vlSelf->tb_array__DOT__arr_preload)))) {
                if (vlSelf->tb_array__DOT__arr_dut__DOT__h_en_3) {
                    vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_3__DOT__a_reg 
                        = (0xffU & vlSelf->tb_array__DOT__arr_dut__DOT__pe_right_out[1U]);
                    vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_3__DOT__a_reg 
                        = (0xffU & vlSelf->tb_array__DOT__arr_dut__DOT__pe_right_out[7U]);
                    vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_3__DOT__a_reg 
                        = (0xffU & vlSelf->tb_array__DOT__arr_dut__DOT__pe_right_out[5U]);
                    vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_3__DOT__a_reg 
                        = (0xffU & vlSelf->tb_array__DOT__arr_dut__DOT__pe_right_out[3U]);
                }
                if (vlSelf->tb_array__DOT__arr_dut__DOT__h_en_2) {
                    vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_2__DOT__a_reg 
                        = (0xffU & (vlSelf->tb_array__DOT__arr_dut__DOT__pe_right_out[0U] 
                                    >> 0x10U));
                    vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_2__DOT__a_reg 
                        = (0xffU & (vlSelf->tb_array__DOT__arr_dut__DOT__pe_right_out[6U] 
                                    >> 0x10U));
                    vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_2__DOT__a_reg 
                        = (0xffU & (vlSelf->tb_array__DOT__arr_dut__DOT__pe_right_out[4U] 
                                    >> 0x10U));
                    vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_2__DOT__a_reg 
                        = (0xffU & (vlSelf->tb_array__DOT__arr_dut__DOT__pe_right_out[2U] 
                                    >> 0x10U));
                }
                if (vlSelf->tb_array__DOT__arr_dut__DOT__h_en_1) {
                    vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_1__DOT__a_reg 
                        = (0xffU & vlSelf->tb_array__DOT__arr_dut__DOT__pe_right_out[0U]);
                    vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_1__DOT__a_reg 
                        = (0xffU & vlSelf->tb_array__DOT__arr_dut__DOT__pe_right_out[6U]);
                    vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_1__DOT__a_reg 
                        = (0xffU & vlSelf->tb_array__DOT__arr_dut__DOT__pe_right_out[4U]);
                    vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_1__DOT__a_reg 
                        = (0xffU & vlSelf->tb_array__DOT__arr_dut__DOT__pe_right_out[2U]);
                }
                if (vlSelf->tb_array__DOT__arr_dut__DOT__h_en_0) {
                    vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_0__DOT__a_reg 
                        = (0xffU & vlSelf->tb_array__DOT__arr_dut__DOT__val_act_in);
                    vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_0__DOT__a_reg 
                        = (vlSelf->tb_array__DOT__arr_dut__DOT__val_act_in 
                           >> 0x18U);
                    vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_0__DOT__a_reg 
                        = (0xffU & (vlSelf->tb_array__DOT__arr_dut__DOT__val_act_in 
                                    >> 0x10U));
                    vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_0__DOT__a_reg 
                        = (0xffU & (vlSelf->tb_array__DOT__arr_dut__DOT__val_act_in 
                                    >> 8U));
                }
            }
        }
        vlSelf->tb_array__DOT__arr_dut__DOT__val_act_in 
            = vlSelf->tb_array__DOT__arr_activation;
    } else {
        vlSelf->tb_array__DOT__arr_dut__DOT__v_fsm_1__DOT__current_state = 0U;
        vlSelf->tb_array__DOT__arr_dut__DOT__e_fsm_1__DOT__current_state = 0U;
        __Vdly__tb_array__DOT__arr_dut__DOT__pe_0_3__DOT__product_reg = 0U;
        __Vdly__tb_array__DOT__arr_dut__DOT__pe_0_3__DOT__accum_reg = 0U;
        __Vdly__tb_array__DOT__arr_dut__DOT__pe_0_2__DOT__product_reg = 0U;
        __Vdly__tb_array__DOT__arr_dut__DOT__pe_0_2__DOT__accum_reg = 0U;
        __Vdly__tb_array__DOT__arr_dut__DOT__pe_0_1__DOT__product_reg = 0U;
        __Vdly__tb_array__DOT__arr_dut__DOT__pe_0_1__DOT__accum_reg = 0U;
        __Vdly__tb_array__DOT__arr_dut__DOT__pe_0_0__DOT__product_reg = 0U;
        __Vdly__tb_array__DOT__arr_dut__DOT__pe_0_0__DOT__accum_reg = 0U;
        __Vdly__tb_array__DOT__arr_dut__DOT__pe_3_3__DOT__product_reg = 0U;
        __Vdly__tb_array__DOT__arr_dut__DOT__pe_3_3__DOT__accum_reg = 0U;
        __Vdly__tb_array__DOT__arr_dut__DOT__pe_3_2__DOT__product_reg = 0U;
        __Vdly__tb_array__DOT__arr_dut__DOT__pe_3_2__DOT__accum_reg = 0U;
        __Vdly__tb_array__DOT__arr_dut__DOT__pe_3_1__DOT__product_reg = 0U;
        __Vdly__tb_array__DOT__arr_dut__DOT__pe_3_1__DOT__accum_reg = 0U;
        __Vdly__tb_array__DOT__arr_dut__DOT__pe_2_3__DOT__product_reg = 0U;
        __Vdly__tb_array__DOT__arr_dut__DOT__pe_2_3__DOT__accum_reg = 0U;
        __Vdly__tb_array__DOT__arr_dut__DOT__pe_2_2__DOT__product_reg = 0U;
        __Vdly__tb_array__DOT__arr_dut__DOT__pe_2_2__DOT__accum_reg = 0U;
        __Vdly__tb_array__DOT__arr_dut__DOT__pe_2_1__DOT__product_reg = 0U;
        __Vdly__tb_array__DOT__arr_dut__DOT__pe_2_1__DOT__accum_reg = 0U;
        __Vdly__tb_array__DOT__arr_dut__DOT__pe_1_3__DOT__product_reg = 0U;
        __Vdly__tb_array__DOT__arr_dut__DOT__pe_1_3__DOT__accum_reg = 0U;
        __Vdly__tb_array__DOT__arr_dut__DOT__pe_1_2__DOT__product_reg = 0U;
        __Vdly__tb_array__DOT__arr_dut__DOT__pe_1_2__DOT__accum_reg = 0U;
        __Vdly__tb_array__DOT__arr_dut__DOT__pe_1_1__DOT__product_reg = 0U;
        __Vdly__tb_array__DOT__arr_dut__DOT__pe_1_1__DOT__accum_reg = 0U;
        __Vdly__tb_array__DOT__arr_dut__DOT__pe_3_0__DOT__product_reg = 0U;
        __Vdly__tb_array__DOT__arr_dut__DOT__pe_3_0__DOT__accum_reg = 0U;
        __Vdly__tb_array__DOT__arr_dut__DOT__pe_2_0__DOT__product_reg = 0U;
        __Vdly__tb_array__DOT__arr_dut__DOT__pe_2_0__DOT__accum_reg = 0U;
        __Vdly__tb_array__DOT__arr_dut__DOT__pe_1_0__DOT__product_reg = 0U;
        __Vdly__tb_array__DOT__arr_dut__DOT__pe_1_0__DOT__accum_reg = 0U;
        vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_3__DOT__b_reg = 0U;
        vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_3__DOT__a_reg = 0U;
        vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_2__DOT__b_reg = 0U;
        vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_2__DOT__a_reg = 0U;
        vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_1__DOT__b_reg = 0U;
        vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_1__DOT__a_reg = 0U;
        vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_0__DOT__b_reg = 0U;
        vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_0__DOT__a_reg = 0U;
        vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_3__DOT__b_reg = 0U;
        vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_3__DOT__a_reg = 0U;
        vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_2__DOT__b_reg = 0U;
        vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_2__DOT__a_reg = 0U;
        vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_1__DOT__b_reg = 0U;
        vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_1__DOT__a_reg = 0U;
        vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_3__DOT__b_reg = 0U;
        vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_3__DOT__a_reg = 0U;
        vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_2__DOT__b_reg = 0U;
        vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_2__DOT__a_reg = 0U;
        vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_1__DOT__b_reg = 0U;
        vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_1__DOT__a_reg = 0U;
        vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_3__DOT__b_reg = 0U;
        vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_3__DOT__a_reg = 0U;
        vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_2__DOT__b_reg = 0U;
        vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_2__DOT__a_reg = 0U;
        vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_1__DOT__b_reg = 0U;
        vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_1__DOT__a_reg = 0U;
        vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_0__DOT__b_reg = 0U;
        vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_0__DOT__a_reg = 0U;
        vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_0__DOT__b_reg = 0U;
        vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_0__DOT__a_reg = 0U;
        vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_0__DOT__b_reg = 0U;
        vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_0__DOT__a_reg = 0U;
        vlSelf->tb_array__DOT__arr_dut__DOT__val_act_in = 0U;
    }
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_3__DOT__product_reg 
        = __Vdly__tb_array__DOT__arr_dut__DOT__pe_0_3__DOT__product_reg;
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_3__DOT__accum_reg 
        = __Vdly__tb_array__DOT__arr_dut__DOT__pe_0_3__DOT__accum_reg;
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_2__DOT__product_reg 
        = __Vdly__tb_array__DOT__arr_dut__DOT__pe_0_2__DOT__product_reg;
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_2__DOT__accum_reg 
        = __Vdly__tb_array__DOT__arr_dut__DOT__pe_0_2__DOT__accum_reg;
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_1__DOT__product_reg 
        = __Vdly__tb_array__DOT__arr_dut__DOT__pe_0_1__DOT__product_reg;
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_1__DOT__accum_reg 
        = __Vdly__tb_array__DOT__arr_dut__DOT__pe_0_1__DOT__accum_reg;
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_0__DOT__product_reg 
        = __Vdly__tb_array__DOT__arr_dut__DOT__pe_0_0__DOT__product_reg;
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_0__DOT__accum_reg 
        = __Vdly__tb_array__DOT__arr_dut__DOT__pe_0_0__DOT__accum_reg;
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_3__DOT__product_reg 
        = __Vdly__tb_array__DOT__arr_dut__DOT__pe_3_3__DOT__product_reg;
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_3__DOT__accum_reg 
        = __Vdly__tb_array__DOT__arr_dut__DOT__pe_3_3__DOT__accum_reg;
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_2__DOT__product_reg 
        = __Vdly__tb_array__DOT__arr_dut__DOT__pe_3_2__DOT__product_reg;
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_2__DOT__accum_reg 
        = __Vdly__tb_array__DOT__arr_dut__DOT__pe_3_2__DOT__accum_reg;
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_1__DOT__product_reg 
        = __Vdly__tb_array__DOT__arr_dut__DOT__pe_3_1__DOT__product_reg;
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_1__DOT__accum_reg 
        = __Vdly__tb_array__DOT__arr_dut__DOT__pe_3_1__DOT__accum_reg;
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_3__DOT__product_reg 
        = __Vdly__tb_array__DOT__arr_dut__DOT__pe_2_3__DOT__product_reg;
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_3__DOT__accum_reg 
        = __Vdly__tb_array__DOT__arr_dut__DOT__pe_2_3__DOT__accum_reg;
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_2__DOT__product_reg 
        = __Vdly__tb_array__DOT__arr_dut__DOT__pe_2_2__DOT__product_reg;
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_2__DOT__accum_reg 
        = __Vdly__tb_array__DOT__arr_dut__DOT__pe_2_2__DOT__accum_reg;
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_1__DOT__product_reg 
        = __Vdly__tb_array__DOT__arr_dut__DOT__pe_2_1__DOT__product_reg;
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_1__DOT__accum_reg 
        = __Vdly__tb_array__DOT__arr_dut__DOT__pe_2_1__DOT__accum_reg;
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_3__DOT__product_reg 
        = __Vdly__tb_array__DOT__arr_dut__DOT__pe_1_3__DOT__product_reg;
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_3__DOT__accum_reg 
        = __Vdly__tb_array__DOT__arr_dut__DOT__pe_1_3__DOT__accum_reg;
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_2__DOT__product_reg 
        = __Vdly__tb_array__DOT__arr_dut__DOT__pe_1_2__DOT__product_reg;
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_2__DOT__accum_reg 
        = __Vdly__tb_array__DOT__arr_dut__DOT__pe_1_2__DOT__accum_reg;
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_1__DOT__product_reg 
        = __Vdly__tb_array__DOT__arr_dut__DOT__pe_1_1__DOT__product_reg;
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_1__DOT__accum_reg 
        = __Vdly__tb_array__DOT__arr_dut__DOT__pe_1_1__DOT__accum_reg;
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_0__DOT__product_reg 
        = __Vdly__tb_array__DOT__arr_dut__DOT__pe_3_0__DOT__product_reg;
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_0__DOT__accum_reg 
        = __Vdly__tb_array__DOT__arr_dut__DOT__pe_3_0__DOT__accum_reg;
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_0__DOT__product_reg 
        = __Vdly__tb_array__DOT__arr_dut__DOT__pe_2_0__DOT__product_reg;
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_0__DOT__accum_reg 
        = __Vdly__tb_array__DOT__arr_dut__DOT__pe_2_0__DOT__accum_reg;
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_0__DOT__product_reg 
        = __Vdly__tb_array__DOT__arr_dut__DOT__pe_1_0__DOT__product_reg;
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_0__DOT__accum_reg 
        = __Vdly__tb_array__DOT__arr_dut__DOT__pe_1_0__DOT__accum_reg;
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_right_out[0U] 
        = (IData)((((QData)((IData)(vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_0_3__right_out)) 
                    << 0x30U) | (((QData)((IData)(vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_0_2__right_out)) 
                                  << 0x20U) | (QData)((IData)(
                                                              (((IData)(vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_0_1__right_out) 
                                                                << 0x10U) 
                                                               | (IData)(vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_0_0__right_out)))))));
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_right_out[1U] 
        = (IData)(((((QData)((IData)(vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_0_3__right_out)) 
                     << 0x30U) | (((QData)((IData)(vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_0_2__right_out)) 
                                   << 0x20U) | (QData)((IData)(
                                                               (((IData)(vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_0_1__right_out) 
                                                                 << 0x10U) 
                                                                | (IData)(vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_0_0__right_out)))))) 
                   >> 0x20U));
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_right_out[2U] 
        = (((IData)(vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_1_1__right_out) 
            << 0x10U) | (IData)(vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_1_0__right_out));
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_right_out[3U] 
        = (((IData)(vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_1_3__right_out) 
            << 0x10U) | (IData)(vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_1_2__right_out));
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_right_out[4U] 
        = (((IData)(vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_2_1__right_out) 
            << 0x10U) | (IData)(vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_2_0__right_out));
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_right_out[5U] 
        = (((IData)(vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_2_3__right_out) 
            << 0x10U) | (IData)(vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_2_2__right_out));
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_right_out[6U] 
        = (((IData)(vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_3_1__right_out) 
            << 0x10U) | (IData)(vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_3_0__right_out));
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_right_out[7U] 
        = (((IData)(vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_3_3__right_out) 
            << 0x10U) | (IData)(vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_3_2__right_out));
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[0U] 
        = ((vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_0_1__down_out 
            << 0x10U) | (0xffffU & vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_0_0__down_out));
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[1U] 
        = ((0xffffU & vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_0_2__down_out) 
           | (vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_0_3__down_out 
              << 0x10U));
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[2U] 
        = ((0xffffU & vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_1_0__down_out) 
           | (vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_1_1__down_out 
              << 0x10U));
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[3U] 
        = ((0xffffU & vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_1_2__down_out) 
           | (vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_1_3__down_out 
              << 0x10U));
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[4U] 
        = ((0xffffU & vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_2_0__down_out) 
           | (vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_2_1__down_out 
              << 0x10U));
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[5U] 
        = ((0xffffU & vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_2_2__down_out) 
           | ((IData)((((QData)((IData)(((vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_3_2__down_out 
                                          << 0x10U) 
                                         | (0xffffU 
                                            & vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_3_1__down_out)))) 
                        << 0x20U) | (QData)((IData)(
                                                    ((vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_3_0__down_out 
                                                      << 0x10U) 
                                                     | (0xffffU 
                                                        & vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_2_3__down_out)))))) 
              << 0x10U));
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[6U] 
        = (((IData)((((QData)((IData)(((vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_3_2__down_out 
                                        << 0x10U) | 
                                       (0xffffU & vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_3_1__down_out)))) 
                      << 0x20U) | (QData)((IData)((
                                                   (vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_3_0__down_out 
                                                    << 0x10U) 
                                                   | (0xffffU 
                                                      & vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_2_3__down_out)))))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(
                                                    ((vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_3_2__down_out 
                                                      << 0x10U) 
                                                     | (0xffffU 
                                                        & vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_3_1__down_out)))) 
                                    << 0x20U) | (QData)((IData)(
                                                                ((vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_3_0__down_out 
                                                                  << 0x10U) 
                                                                 | (0xffffU 
                                                                    & vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_2_3__down_out))))) 
                                  >> 0x20U)) << 0x10U));
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[7U] 
        = ((vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_3_3__down_out 
            << 0x10U) | ((IData)(((((QData)((IData)(
                                                    ((vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_3_2__down_out 
                                                      << 0x10U) 
                                                     | (0xffffU 
                                                        & vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_3_1__down_out)))) 
                                    << 0x20U) | (QData)((IData)(
                                                                ((vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_3_0__down_out 
                                                                  << 0x10U) 
                                                                 | (0xffffU 
                                                                    & vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_2_3__down_out))))) 
                                  >> 0x20U)) >> 0x10U));
}

VL_INLINE_OPT void Vtb_array___024root___nba_comb__TOP__0(Vtb_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_array___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->tb_array__DOT__arr_output_valid = vlSelf->tb_array__DOT__arr_drain;
}

VL_INLINE_OPT void Vtb_array___024root___nba_sequent__TOP__1(Vtb_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_array___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->tb_array__DOT__h_dut__DOT__current_state 
        = ((IData)(vlSelf->tb_array__DOT__h_rst_n) ? (IData)(vlSelf->tb_array__DOT__h_dut__DOT__next_state)
            : 0U);
}

VL_INLINE_OPT void Vtb_array___024root___nba_sequent__TOP__2(Vtb_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_array___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->tb_array__DOT__v_dut__DOT__current_state 
        = ((IData)(vlSelf->tb_array__DOT__v_rst_n) ? (IData)(vlSelf->tb_array__DOT__v_dut__DOT__next_state)
            : 0U);
}

VL_INLINE_OPT void Vtb_array___024root___nba_comb__TOP__1(Vtb_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_array___024root___nba_comb__TOP__1\n"); );
    // Init
    CData/*6:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*6:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    // Body
    __Vtableidx4 = (((IData)(vlSelf->tb_array__DOT__arr_tile_done) 
                     << 6U) | (((IData)(vlSelf->tb_array__DOT__arr_compute_start) 
                                << 5U) | (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__v_fsm_1__DOT__current_state)));
    vlSelf->tb_array__DOT__arr_dut__DOT__v_fsm_1__DOT__next_state 
        = Vtb_array__ConstPool__TABLE_h73872590_0[__Vtableidx4];
    vlSelf->tb_array__DOT__arr_dut__DOT__v_en_1 = Vtb_array__ConstPool__TABLE_hb598fdfd_0
        [__Vtableidx4];
    vlSelf->tb_array__DOT__arr_dut__DOT__v_en_0 = Vtb_array__ConstPool__TABLE_h2fe71d6b_0
        [__Vtableidx4];
    __Vtableidx3 = (((IData)(vlSelf->tb_array__DOT__arr_tile_done) 
                     << 6U) | (((IData)(vlSelf->tb_array__DOT__arr_compute_start) 
                                << 5U) | (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__e_fsm_1__DOT__current_state)));
    vlSelf->tb_array__DOT__arr_dut__DOT__e_fsm_1__DOT__next_state 
        = Vtb_array__ConstPool__TABLE_h73872590_0[__Vtableidx3];
    vlSelf->tb_array__DOT__arr_dut__DOT__h_en_3 = Vtb_array__ConstPool__TABLE_h95214b9c_0
        [__Vtableidx3];
    vlSelf->tb_array__DOT__arr_dut__DOT__h_en_2 = Vtb_array__ConstPool__TABLE_he5d58018_0
        [__Vtableidx3];
    vlSelf->tb_array__DOT__arr_dut__DOT__h_en_1 = Vtb_array__ConstPool__TABLE_h26d33955_0
        [__Vtableidx3];
    vlSelf->tb_array__DOT__arr_dut__DOT__h_en_0 = Vtb_array__ConstPool__TABLE_hfc07e341_0
        [__Vtableidx3];
}

VL_INLINE_OPT void Vtb_array___024root___nba_comb__TOP__2(Vtb_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_array___024root___nba_comb__TOP__2\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->tb_array__DOT__h_tile_done) 
                     << 6U) | (((IData)(vlSelf->tb_array__DOT__h_start) 
                                << 5U) | (IData)(vlSelf->tb_array__DOT__h_dut__DOT__current_state)));
    vlSelf->tb_array__DOT__h_dut__DOT__next_state = 
        Vtb_array__ConstPool__TABLE_h73872590_0[__Vtableidx1];
    vlSelf->tb_array__DOT__h_en_3 = Vtb_array__ConstPool__TABLE_h95214b9c_0
        [__Vtableidx1];
    vlSelf->tb_array__DOT__h_en_2 = Vtb_array__ConstPool__TABLE_he5d58018_0
        [__Vtableidx1];
    vlSelf->tb_array__DOT__h_en_1 = Vtb_array__ConstPool__TABLE_h26d33955_0
        [__Vtableidx1];
    vlSelf->tb_array__DOT__h_en_0 = Vtb_array__ConstPool__TABLE_hfc07e341_0
        [__Vtableidx1];
}

VL_INLINE_OPT void Vtb_array___024root___nba_comb__TOP__3(Vtb_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_array___024root___nba_comb__TOP__3\n"); );
    // Init
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    __Vtableidx2 = (((IData)(vlSelf->tb_array__DOT__v_tile_done) 
                     << 6U) | (((IData)(vlSelf->tb_array__DOT__v_start) 
                                << 5U) | (IData)(vlSelf->tb_array__DOT__v_dut__DOT__current_state)));
    vlSelf->tb_array__DOT__v_dut__DOT__next_state = 
        Vtb_array__ConstPool__TABLE_h73872590_0[__Vtableidx2];
    vlSelf->tb_array__DOT__v_en_3 = Vtb_array__ConstPool__TABLE_h95214b9c_0
        [__Vtableidx2];
    vlSelf->tb_array__DOT__v_en_2 = Vtb_array__ConstPool__TABLE_h25f53c5b_0
        [__Vtableidx2];
    vlSelf->tb_array__DOT__v_en_1 = Vtb_array__ConstPool__TABLE_hb598fdfd_0
        [__Vtableidx2];
    vlSelf->tb_array__DOT__v_en_0 = Vtb_array__ConstPool__TABLE_h2fe71d6b_0
        [__Vtableidx2];
}

void Vtb_array___024root___eval_nba(Vtb_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_array___024root___eval_nba\n"); );
    // Body
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_array___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((0x18ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_array___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_array___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_array___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0x1cULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_array___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((0x19ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_array___024root___nba_comb__TOP__2(vlSelf);
    }
    if ((0x1aULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_array___024root___nba_comb__TOP__3(vlSelf);
    }
}

void Vtb_array___024root___timing_resume(Vtb_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_array___024root___timing_resume\n"); );
    // Body
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h25dd34e8__0.resume("@(posedge tb_array.clk)");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_array___024root___timing_commit(Vtb_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_array___024root___timing_commit\n"); );
    // Body
    if ((! (8ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h25dd34e8__0.commit("@(posedge tb_array.clk)");
    }
}

void Vtb_array___024root___eval_triggers__act(Vtb_array___024root* vlSelf);

bool Vtb_array___024root___eval_phase__act(Vtb_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_array___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<5> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_array___024root___eval_triggers__act(vlSelf);
    Vtb_array___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_array___024root___timing_resume(vlSelf);
        Vtb_array___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_array___024root___eval_phase__nba(Vtb_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_array___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_array___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_array___024root___dump_triggers__nba(Vtb_array___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_array___024root___dump_triggers__act(Vtb_array___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_array___024root___eval(Vtb_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_array___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_array___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/tb_array.sv", 5, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_array___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/tb_array.sv", 5, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_array___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_array___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_array___024root___eval_debug_assertions(Vtb_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_array___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
