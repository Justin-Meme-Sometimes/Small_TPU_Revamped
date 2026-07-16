// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_pe.h for the primary calling header

#include "Vtb_pe__pch.h"
#include "Vtb_pe___024root.h"

VlCoroutine Vtb_pe___024root___eval_initial__TOP__Vtiming__0(Vtb_pe___024root* vlSelf);
VlCoroutine Vtb_pe___024root___eval_initial__TOP__Vtiming__1(Vtb_pe___024root* vlSelf);

void Vtb_pe___024root___eval_initial(Vtb_pe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pe___024root___eval_initial\n"); );
    // Body
    Vtb_pe___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_pe___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_pe__DOT__clk__0 
        = vlSelf->tb_pe__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__tb_pe__DOT__rst_n__0 
        = vlSelf->tb_pe__DOT__rst_n;
}

VL_INLINE_OPT VlCoroutine Vtb_pe___024root___eval_initial__TOP__Vtiming__0(Vtb_pe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pe___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    std::string __Vtask_tb_pe__DOT__check__3__name;
    CData/*0:0*/ __Vtask_tb_pe__DOT__check__3__cond;
    __Vtask_tb_pe__DOT__check__3__cond = 0;
    std::string __Vtask_tb_pe__DOT__check__5__name;
    CData/*0:0*/ __Vtask_tb_pe__DOT__check__5__cond;
    __Vtask_tb_pe__DOT__check__5__cond = 0;
    std::string __Vtask_tb_pe__DOT__check__7__name;
    CData/*0:0*/ __Vtask_tb_pe__DOT__check__7__cond;
    __Vtask_tb_pe__DOT__check__7__cond = 0;
    std::string __Vtask_tb_pe__DOT__check__9__name;
    CData/*0:0*/ __Vtask_tb_pe__DOT__check__9__cond;
    __Vtask_tb_pe__DOT__check__9__cond = 0;
    std::string __Vtask_tb_pe__DOT__check__12__name;
    CData/*0:0*/ __Vtask_tb_pe__DOT__check__12__cond;
    __Vtask_tb_pe__DOT__check__12__cond = 0;
    std::string __Vtask_tb_pe__DOT__check__15__name;
    CData/*0:0*/ __Vtask_tb_pe__DOT__check__15__cond;
    __Vtask_tb_pe__DOT__check__15__cond = 0;
    std::string __Vtask_tb_pe__DOT__check__19__name;
    CData/*0:0*/ __Vtask_tb_pe__DOT__check__19__cond;
    __Vtask_tb_pe__DOT__check__19__cond = 0;
    std::string __Vtask_tb_pe__DOT__check__21__name;
    CData/*0:0*/ __Vtask_tb_pe__DOT__check__21__cond;
    __Vtask_tb_pe__DOT__check__21__cond = 0;
    std::string __Vtask_tb_pe__DOT__check__23__name;
    CData/*0:0*/ __Vtask_tb_pe__DOT__check__23__cond;
    __Vtask_tb_pe__DOT__check__23__cond = 0;
    std::string __Vtask_tb_pe__DOT__check__25__name;
    CData/*0:0*/ __Vtask_tb_pe__DOT__check__25__cond;
    __Vtask_tb_pe__DOT__check__25__cond = 0;
    std::string __Vtask_tb_pe__DOT__check__27__name;
    CData/*0:0*/ __Vtask_tb_pe__DOT__check__27__cond;
    __Vtask_tb_pe__DOT__check__27__cond = 0;
    std::string __Vtask_tb_pe__DOT__check__29__name;
    CData/*0:0*/ __Vtask_tb_pe__DOT__check__29__cond;
    __Vtask_tb_pe__DOT__check__29__cond = 0;
    std::string __Vtask_tb_pe__DOT__check__31__name;
    CData/*0:0*/ __Vtask_tb_pe__DOT__check__31__cond;
    __Vtask_tb_pe__DOT__check__31__cond = 0;
    // Body
    vlSelf->tb_pe__DOT__rst_n = 0U;
    vlSelf->tb_pe__DOT__preload = 0U;
    vlSelf->tb_pe__DOT__compute_en = 0U;
    vlSelf->tb_pe__DOT__drain = 0U;
    vlSelf->tb_pe__DOT__clr = 0U;
    vlSelf->tb_pe__DOT__tile_done = 0U;
    vlSelf->tb_pe__DOT__a = 0U;
    vlSelf->tb_pe__DOT__b = 0U;
    vlSelf->tb_pe__DOT__accum_in = 0U;
    vlSelf->tb_pe__DOT__accum_in_valid = 0U;
    co_await vlSelf->__VtrigSched_hf2c5e7e1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_pe.clk)", 
                                                       "tb/tb_pe.sv", 
                                                       66);
    co_await vlSelf->__VtrigSched_hf2c5e7e1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_pe.clk)", 
                                                       "tb/tb_pe.sv", 
                                                       66);
    vlSelf->tb_pe__DOT__rst_n = 1U;
    co_await vlSelf->__VtrigSched_hf2c5e7e1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_pe.clk)", 
                                                       "tb/tb_pe.sv", 
                                                       68);
    vlSelf->tb_pe__DOT__preload = 1U;
    vlSelf->tb_pe__DOT__b = 0xffU;
    co_await vlSelf->__VtrigSched_hf2c5e7e1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_pe.clk)", 
                                                       "tb/tb_pe.sv", 
                                                       74);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_pe.sv", 
                                       75);
    VL_WRITEF("==== preload chain ====\n");
    vlSelf->tb_pe__DOT__b = 0x11U;
    co_await vlSelf->__VtrigSched_hf2c5e7e1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_pe.clk)", 
                                                       "tb/tb_pe.sv", 
                                                       74);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_pe.sv", 
                                       75);
    __Vtask_tb_pe__DOT__check__3__cond = (0xffU == vlSelf->tb_pe__DOT__down_out);
    __Vtask_tb_pe__DOT__check__3__name = std::string{"preload#1: down_out reflects previous b (0xFF, from warm-up)"};
    vlSelf->tb_pe__DOT__checks = ((IData)(1U) + vlSelf->tb_pe__DOT__checks);
    if (__Vtask_tb_pe__DOT__check__3__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_pe__DOT__check__3__name));
    } else {
        vlSelf->tb_pe__DOT__errors = ((IData)(1U) + vlSelf->tb_pe__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_pe__DOT__check__3__name));
    }
    vlSelf->tb_pe__DOT__b = 0x22U;
    co_await vlSelf->__VtrigSched_hf2c5e7e1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_pe.clk)", 
                                                       "tb/tb_pe.sv", 
                                                       74);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_pe.sv", 
                                       75);
    __Vtask_tb_pe__DOT__check__5__cond = (0x11U == vlSelf->tb_pe__DOT__down_out);
    __Vtask_tb_pe__DOT__check__5__name = std::string{"preload#2: down_out reflects previous b (0x11)"};
    vlSelf->tb_pe__DOT__checks = ((IData)(1U) + vlSelf->tb_pe__DOT__checks);
    if (__Vtask_tb_pe__DOT__check__5__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_pe__DOT__check__5__name));
    } else {
        vlSelf->tb_pe__DOT__errors = ((IData)(1U) + vlSelf->tb_pe__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_pe__DOT__check__5__name));
    }
    vlSelf->tb_pe__DOT__b = 0x33U;
    co_await vlSelf->__VtrigSched_hf2c5e7e1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_pe.clk)", 
                                                       "tb/tb_pe.sv", 
                                                       74);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_pe.sv", 
                                       75);
    __Vtask_tb_pe__DOT__check__7__cond = (0x22U == vlSelf->tb_pe__DOT__down_out);
    __Vtask_tb_pe__DOT__check__7__name = std::string{"preload#3: down_out reflects previous b (0x22)"};
    vlSelf->tb_pe__DOT__checks = ((IData)(1U) + vlSelf->tb_pe__DOT__checks);
    if (__Vtask_tb_pe__DOT__check__7__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_pe__DOT__check__7__name));
    } else {
        vlSelf->tb_pe__DOT__errors = ((IData)(1U) + vlSelf->tb_pe__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_pe__DOT__check__7__name));
    }
    vlSelf->tb_pe__DOT__preload = 0U;
    co_await vlSelf->__VtrigSched_hf2c5e7e1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_pe.clk)", 
                                                       "tb/tb_pe.sv", 
                                                       74);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_pe.sv", 
                                       75);
    __Vtask_tb_pe__DOT__check__9__cond = (0x22U == vlSelf->tb_pe__DOT__down_out);
    __Vtask_tb_pe__DOT__check__9__name = std::string{"after preload stops: down_out holds (0x33 not yet latched out)"};
    vlSelf->tb_pe__DOT__checks = ((IData)(1U) + vlSelf->tb_pe__DOT__checks);
    if (__Vtask_tb_pe__DOT__check__9__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_pe__DOT__check__9__name));
    } else {
        vlSelf->tb_pe__DOT__errors = ((IData)(1U) + vlSelf->tb_pe__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_pe__DOT__check__9__name));
    }
    VL_WRITEF("==== clr / tile_done semantics ====\n");
    vlSelf->tb_pe__DOT__clr = 1U;
    co_await vlSelf->__VtrigSched_hf2c5e7e1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_pe.clk)", 
                                                       "tb/tb_pe.sv", 
                                                       74);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_pe.sv", 
                                       75);
    vlSelf->tb_pe__DOT__clr = 0U;
    vlSelf->tb_pe__DOT__preload = 1U;
    vlSelf->tb_pe__DOT__b = 0xabU;
    co_await vlSelf->__VtrigSched_hf2c5e7e1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_pe.clk)", 
                                                       "tb/tb_pe.sv", 
                                                       74);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_pe.sv", 
                                       75);
    vlSelf->tb_pe__DOT__preload = 0U;
    __Vtask_tb_pe__DOT__check__12__cond = (0x33U == vlSelf->tb_pe__DOT__down_out);
    __Vtask_tb_pe__DOT__check__12__name = std::string{"clr alone leaves b_reg untouched (still 0x33)"};
    vlSelf->tb_pe__DOT__checks = ((IData)(1U) + vlSelf->tb_pe__DOT__checks);
    if (__Vtask_tb_pe__DOT__check__12__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_pe__DOT__check__12__name));
    } else {
        vlSelf->tb_pe__DOT__errors = ((IData)(1U) + vlSelf->tb_pe__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_pe__DOT__check__12__name));
    }
    vlSelf->tb_pe__DOT__tile_done = 1U;
    co_await vlSelf->__VtrigSched_hf2c5e7e1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_pe.clk)", 
                                                       "tb/tb_pe.sv", 
                                                       74);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_pe.sv", 
                                       75);
    vlSelf->tb_pe__DOT__tile_done = 0U;
    vlSelf->tb_pe__DOT__preload = 1U;
    vlSelf->tb_pe__DOT__b = 0xcdU;
    co_await vlSelf->__VtrigSched_hf2c5e7e1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_pe.clk)", 
                                                       "tb/tb_pe.sv", 
                                                       74);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_pe.sv", 
                                       75);
    vlSelf->tb_pe__DOT__preload = 0U;
    __Vtask_tb_pe__DOT__check__15__cond = (0U == vlSelf->tb_pe__DOT__down_out);
    __Vtask_tb_pe__DOT__check__15__name = std::string{"tile_done clears b_reg to 0"};
    vlSelf->tb_pe__DOT__checks = ((IData)(1U) + vlSelf->tb_pe__DOT__checks);
    if (__Vtask_tb_pe__DOT__check__15__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_pe__DOT__check__15__name));
    } else {
        vlSelf->tb_pe__DOT__errors = ((IData)(1U) + vlSelf->tb_pe__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_pe__DOT__check__15__name));
    }
    VL_WRITEF("==== compute + drain MAC pipeline ====\n");
    vlSelf->tb_pe__DOT__rst_n = 0U;
    vlSelf->tb_pe__DOT__preload = 0U;
    vlSelf->tb_pe__DOT__compute_en = 0U;
    vlSelf->tb_pe__DOT__drain = 0U;
    vlSelf->tb_pe__DOT__clr = 0U;
    vlSelf->tb_pe__DOT__tile_done = 0U;
    vlSelf->tb_pe__DOT__a = 0U;
    vlSelf->tb_pe__DOT__b = 0U;
    vlSelf->tb_pe__DOT__accum_in = 0U;
    vlSelf->tb_pe__DOT__accum_in_valid = 0U;
    co_await vlSelf->__VtrigSched_hf2c5e7e1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_pe.clk)", 
                                                       "tb/tb_pe.sv", 
                                                       66);
    co_await vlSelf->__VtrigSched_hf2c5e7e1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_pe.clk)", 
                                                       "tb/tb_pe.sv", 
                                                       66);
    vlSelf->tb_pe__DOT__rst_n = 1U;
    co_await vlSelf->__VtrigSched_hf2c5e7e1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_pe.clk)", 
                                                       "tb/tb_pe.sv", 
                                                       68);
    vlSelf->tb_pe__DOT__preload = 1U;
    vlSelf->tb_pe__DOT__b = 2U;
    co_await vlSelf->__VtrigSched_hf2c5e7e1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_pe.clk)", 
                                                       "tb/tb_pe.sv", 
                                                       74);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_pe.sv", 
                                       75);
    vlSelf->tb_pe__DOT__preload = 0U;
    vlSelf->tb_pe__DOT__compute_en = 1U;
    vlSelf->tb_pe__DOT__a = 1U;
    co_await vlSelf->__VtrigSched_hf2c5e7e1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_pe.clk)", 
                                                       "tb/tb_pe.sv", 
                                                       74);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_pe.sv", 
                                       75);
    __Vtask_tb_pe__DOT__check__19__cond = (0U == (IData)(vlSelf->tb_pe__DOT__right_out));
    __Vtask_tb_pe__DOT__check__19__name = std::string{"compute cyc0: right_out == 0 (a_reg was reset)"};
    vlSelf->tb_pe__DOT__checks = ((IData)(1U) + vlSelf->tb_pe__DOT__checks);
    if (__Vtask_tb_pe__DOT__check__19__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_pe__DOT__check__19__name));
    } else {
        vlSelf->tb_pe__DOT__errors = ((IData)(1U) + vlSelf->tb_pe__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_pe__DOT__check__19__name));
    }
    vlSelf->tb_pe__DOT__a = 2U;
    co_await vlSelf->__VtrigSched_hf2c5e7e1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_pe.clk)", 
                                                       "tb/tb_pe.sv", 
                                                       74);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_pe.sv", 
                                       75);
    __Vtask_tb_pe__DOT__check__21__cond = (1U == (IData)(vlSelf->tb_pe__DOT__right_out));
    __Vtask_tb_pe__DOT__check__21__name = std::string{"compute cyc1: right_out == 1"};
    vlSelf->tb_pe__DOT__checks = ((IData)(1U) + vlSelf->tb_pe__DOT__checks);
    if (__Vtask_tb_pe__DOT__check__21__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_pe__DOT__check__21__name));
    } else {
        vlSelf->tb_pe__DOT__errors = ((IData)(1U) + vlSelf->tb_pe__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_pe__DOT__check__21__name));
    }
    vlSelf->tb_pe__DOT__a = 3U;
    co_await vlSelf->__VtrigSched_hf2c5e7e1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_pe.clk)", 
                                                       "tb/tb_pe.sv", 
                                                       74);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_pe.sv", 
                                       75);
    __Vtask_tb_pe__DOT__check__23__cond = (2U == (IData)(vlSelf->tb_pe__DOT__right_out));
    __Vtask_tb_pe__DOT__check__23__name = std::string{"compute cyc2: right_out == 2"};
    vlSelf->tb_pe__DOT__checks = ((IData)(1U) + vlSelf->tb_pe__DOT__checks);
    if (__Vtask_tb_pe__DOT__check__23__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_pe__DOT__check__23__name));
    } else {
        vlSelf->tb_pe__DOT__errors = ((IData)(1U) + vlSelf->tb_pe__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_pe__DOT__check__23__name));
    }
    vlSelf->tb_pe__DOT__a = 4U;
    co_await vlSelf->__VtrigSched_hf2c5e7e1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_pe.clk)", 
                                                       "tb/tb_pe.sv", 
                                                       74);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_pe.sv", 
                                       75);
    __Vtask_tb_pe__DOT__check__25__cond = (3U == (IData)(vlSelf->tb_pe__DOT__right_out));
    __Vtask_tb_pe__DOT__check__25__name = std::string{"compute cyc3: right_out == 3"};
    vlSelf->tb_pe__DOT__checks = ((IData)(1U) + vlSelf->tb_pe__DOT__checks);
    if (__Vtask_tb_pe__DOT__check__25__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_pe__DOT__check__25__name));
    } else {
        vlSelf->tb_pe__DOT__errors = ((IData)(1U) + vlSelf->tb_pe__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_pe__DOT__check__25__name));
    }
    vlSelf->tb_pe__DOT__compute_en = 0U;
    vlSelf->tb_pe__DOT__drain = 1U;
    vlSelf->tb_pe__DOT__accum_in_valid = 0U;
    co_await vlSelf->__VtrigSched_hf2c5e7e1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_pe.clk)", 
                                                       "tb/tb_pe.sv", 
                                                       74);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_pe.sv", 
                                       75);
    __Vtask_tb_pe__DOT__check__27__cond = (8U == vlSelf->tb_pe__DOT__down_out);
    __Vtask_tb_pe__DOT__check__27__name = std::string{"drain: accum_reg (=8) surfaces on down_out"};
    vlSelf->tb_pe__DOT__checks = ((IData)(1U) + vlSelf->tb_pe__DOT__checks);
    if (__Vtask_tb_pe__DOT__check__27__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_pe__DOT__check__27__name));
    } else {
        vlSelf->tb_pe__DOT__errors = ((IData)(1U) + vlSelf->tb_pe__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_pe__DOT__check__27__name));
    }
    vlSelf->tb_pe__DOT__drain = 0U;
    VL_WRITEF("==== drain accum_in load ====\n");
    vlSelf->tb_pe__DOT__drain = 1U;
    vlSelf->tb_pe__DOT__accum_in_valid = 1U;
    vlSelf->tb_pe__DOT__accum_in = 0x64U;
    co_await vlSelf->__VtrigSched_hf2c5e7e1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_pe.clk)", 
                                                       "tb/tb_pe.sv", 
                                                       74);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_pe.sv", 
                                       75);
    __Vtask_tb_pe__DOT__check__29__cond = (8U == vlSelf->tb_pe__DOT__down_out);
    __Vtask_tb_pe__DOT__check__29__name = std::string{"drain+accum_in_valid: down_out does not update this cycle"};
    vlSelf->tb_pe__DOT__checks = ((IData)(1U) + vlSelf->tb_pe__DOT__checks);
    if (__Vtask_tb_pe__DOT__check__29__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_pe__DOT__check__29__name));
    } else {
        vlSelf->tb_pe__DOT__errors = ((IData)(1U) + vlSelf->tb_pe__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_pe__DOT__check__29__name));
    }
    vlSelf->tb_pe__DOT__accum_in_valid = 0U;
    co_await vlSelf->__VtrigSched_hf2c5e7e1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_pe.clk)", 
                                                       "tb/tb_pe.sv", 
                                                       74);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_pe.sv", 
                                       75);
    __Vtask_tb_pe__DOT__check__31__cond = (0x64U == vlSelf->tb_pe__DOT__down_out);
    __Vtask_tb_pe__DOT__check__31__name = std::string{"next plain drain cycle: down_out reflects loaded accum_in (100)"};
    vlSelf->tb_pe__DOT__checks = ((IData)(1U) + vlSelf->tb_pe__DOT__checks);
    if (__Vtask_tb_pe__DOT__check__31__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_pe__DOT__check__31__name));
    } else {
        vlSelf->tb_pe__DOT__errors = ((IData)(1U) + vlSelf->tb_pe__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_pe__DOT__check__31__name));
    }
    vlSelf->tb_pe__DOT__drain = 0U;
    VL_WRITEF("==== SUMMARY ====\nPE: %0d/%0d checks passed\n",
              32,(vlSelf->tb_pe__DOT__checks - vlSelf->tb_pe__DOT__errors),
              32,vlSelf->tb_pe__DOT__checks);
    VL_FINISH_MT("tb/tb_pe.sv", 165, "");
}

VL_INLINE_OPT VlCoroutine Vtb_pe___024root___eval_initial__TOP__Vtiming__1(Vtb_pe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pe___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "tb/tb_pe.sv", 
                                           45);
        vlSelf->tb_pe__DOT__clk = (1U & (~ (IData)(vlSelf->tb_pe__DOT__clk)));
    }
}

void Vtb_pe___024root___eval_act(Vtb_pe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pe___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtb_pe___024root___nba_sequent__TOP__0(Vtb_pe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pe___024root___nba_sequent__TOP__0\n"); );
    // Init
    SData/*15:0*/ __Vdly__tb_pe__DOT__dut__DOT__product_reg;
    __Vdly__tb_pe__DOT__dut__DOT__product_reg = 0;
    IData/*31:0*/ __Vdly__tb_pe__DOT__dut__DOT__accum_reg;
    __Vdly__tb_pe__DOT__dut__DOT__accum_reg = 0;
    // Body
    __Vdly__tb_pe__DOT__dut__DOT__accum_reg = vlSelf->tb_pe__DOT__dut__DOT__accum_reg;
    __Vdly__tb_pe__DOT__dut__DOT__product_reg = vlSelf->tb_pe__DOT__dut__DOT__product_reg;
    if (vlSelf->tb_pe__DOT__rst_n) {
        if (((IData)(vlSelf->tb_pe__DOT__clr) | (IData)(vlSelf->tb_pe__DOT__tile_done))) {
            __Vdly__tb_pe__DOT__dut__DOT__product_reg = 0U;
            if ((1U & (~ (IData)(vlSelf->tb_pe__DOT__compute_en)))) {
                __Vdly__tb_pe__DOT__dut__DOT__accum_reg = 0U;
            }
            if (vlSelf->tb_pe__DOT__tile_done) {
                vlSelf->tb_pe__DOT__dut__DOT__b_reg = 0U;
            }
            vlSelf->tb_pe__DOT__dut__DOT__a_reg = 0U;
        } else {
            if (vlSelf->tb_pe__DOT__preload) {
                vlSelf->tb_pe__DOT__down_out = vlSelf->tb_pe__DOT__dut__DOT__b_reg;
                vlSelf->tb_pe__DOT__dut__DOT__b_reg 
                    = vlSelf->tb_pe__DOT__b;
            } else if (vlSelf->tb_pe__DOT__drain) {
                if (vlSelf->tb_pe__DOT__accum_in_valid) {
                    __Vdly__tb_pe__DOT__dut__DOT__accum_reg 
                        = vlSelf->tb_pe__DOT__accum_in;
                } else {
                    vlSelf->tb_pe__DOT__down_out = vlSelf->tb_pe__DOT__dut__DOT__accum_reg;
                }
            } else if (vlSelf->tb_pe__DOT__compute_en) {
                __Vdly__tb_pe__DOT__dut__DOT__product_reg 
                    = (0xffffU & (((IData)(vlSelf->tb_pe__DOT__dut__DOT__a_reg) 
                                   * (IData)(vlSelf->tb_pe__DOT__dut__DOT__b_reg)) 
                                  + (IData)(vlSelf->tb_pe__DOT__dut__DOT__product_reg)));
                __Vdly__tb_pe__DOT__dut__DOT__accum_reg 
                    = (vlSelf->tb_pe__DOT__dut__DOT__accum_reg 
                       + (IData)(vlSelf->tb_pe__DOT__dut__DOT__product_reg));
                vlSelf->tb_pe__DOT__right_out = vlSelf->tb_pe__DOT__dut__DOT__a_reg;
            }
            if ((1U & (~ (IData)(vlSelf->tb_pe__DOT__preload)))) {
                if ((1U & (~ (IData)(vlSelf->tb_pe__DOT__drain)))) {
                    if (vlSelf->tb_pe__DOT__compute_en) {
                        vlSelf->tb_pe__DOT__dut__DOT__a_reg 
                            = vlSelf->tb_pe__DOT__a;
                    }
                }
            }
        }
    } else {
        __Vdly__tb_pe__DOT__dut__DOT__product_reg = 0U;
        __Vdly__tb_pe__DOT__dut__DOT__accum_reg = 0U;
        vlSelf->tb_pe__DOT__dut__DOT__b_reg = 0U;
        vlSelf->tb_pe__DOT__dut__DOT__a_reg = 0U;
    }
    vlSelf->tb_pe__DOT__dut__DOT__product_reg = __Vdly__tb_pe__DOT__dut__DOT__product_reg;
    vlSelf->tb_pe__DOT__dut__DOT__accum_reg = __Vdly__tb_pe__DOT__dut__DOT__accum_reg;
}

void Vtb_pe___024root___eval_nba(Vtb_pe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pe___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_pe___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vtb_pe___024root___timing_resume(Vtb_pe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pe___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hf2c5e7e1__0.resume("@(posedge tb_pe.clk)");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_pe___024root___timing_commit(Vtb_pe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pe___024root___timing_commit\n"); );
    // Body
    if ((! (2ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hf2c5e7e1__0.commit("@(posedge tb_pe.clk)");
    }
}

void Vtb_pe___024root___eval_triggers__act(Vtb_pe___024root* vlSelf);

bool Vtb_pe___024root___eval_phase__act(Vtb_pe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pe___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_pe___024root___eval_triggers__act(vlSelf);
    Vtb_pe___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_pe___024root___timing_resume(vlSelf);
        Vtb_pe___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_pe___024root___eval_phase__nba(Vtb_pe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pe___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_pe___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_pe___024root___dump_triggers__nba(Vtb_pe___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_pe___024root___dump_triggers__act(Vtb_pe___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_pe___024root___eval(Vtb_pe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pe___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_pe___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/tb_pe.sv", 29, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_pe___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/tb_pe.sv", 29, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_pe___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_pe___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_pe___024root___eval_debug_assertions(Vtb_pe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pe___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
