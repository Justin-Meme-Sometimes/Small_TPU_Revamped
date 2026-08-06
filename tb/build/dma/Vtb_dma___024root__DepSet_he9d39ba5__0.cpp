// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_dma.h for the primary calling header

#include "Vtb_dma__pch.h"
#include "Vtb_dma___024root.h"

VlCoroutine Vtb_dma___024root___eval_initial__TOP__Vtiming__0(Vtb_dma___024root* vlSelf);
VlCoroutine Vtb_dma___024root___eval_initial__TOP__Vtiming__1(Vtb_dma___024root* vlSelf);

void Vtb_dma___024root___eval_initial(Vtb_dma___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dma___024root___eval_initial\n"); );
    // Body
    Vtb_dma___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_dma___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_dma__DOT__clk__0 
        = vlSelf->tb_dma__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__tb_dma__DOT__rst_n__0 
        = vlSelf->tb_dma__DOT__rst_n;
}

VL_INLINE_OPT VlCoroutine Vtb_dma___024root___eval_initial__TOP__Vtiming__0(Vtb_dma___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dma___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    std::string __Vtask_tb_dma__DOT__check__2__name;
    CData/*0:0*/ __Vtask_tb_dma__DOT__check__2__cond;
    __Vtask_tb_dma__DOT__check__2__cond = 0;
    std::string __Vtask_tb_dma__DOT__check__3__name;
    CData/*0:0*/ __Vtask_tb_dma__DOT__check__3__cond;
    __Vtask_tb_dma__DOT__check__3__cond = 0;
    std::string __Vtask_tb_dma__DOT__check__4__name;
    CData/*0:0*/ __Vtask_tb_dma__DOT__check__4__cond;
    __Vtask_tb_dma__DOT__check__4__cond = 0;
    std::string __Vtask_tb_dma__DOT__check__5__name;
    CData/*0:0*/ __Vtask_tb_dma__DOT__check__5__cond;
    __Vtask_tb_dma__DOT__check__5__cond = 0;
    std::string __Vtask_tb_dma__DOT__check__6__name;
    CData/*0:0*/ __Vtask_tb_dma__DOT__check__6__cond;
    __Vtask_tb_dma__DOT__check__6__cond = 0;
    std::string __Vtask_tb_dma__DOT__check__7__name;
    CData/*0:0*/ __Vtask_tb_dma__DOT__check__7__cond;
    __Vtask_tb_dma__DOT__check__7__cond = 0;
    std::string __Vtask_tb_dma__DOT__check__8__name;
    CData/*0:0*/ __Vtask_tb_dma__DOT__check__8__cond;
    __Vtask_tb_dma__DOT__check__8__cond = 0;
    std::string __Vtask_tb_dma__DOT__check__9__name;
    CData/*0:0*/ __Vtask_tb_dma__DOT__check__9__cond;
    __Vtask_tb_dma__DOT__check__9__cond = 0;
    IData/*31:0*/ __Vtask_tb_dma__DOT__run_full_load_test__10__unnamedblk1__DOT__i;
    __Vtask_tb_dma__DOT__run_full_load_test__10__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_dma__DOT__run_full_load_test__10__unnamedblk4__DOT__i;
    __Vtask_tb_dma__DOT__run_full_load_test__10__unnamedblk4__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_dma__DOT__run_full_load_test__10__drained;
    __Vtask_tb_dma__DOT__run_full_load_test__10__drained = 0;
    CData/*0:0*/ __Vtask_tb_dma__DOT__run_full_load_test__10__bias_seen;
    __Vtask_tb_dma__DOT__run_full_load_test__10__bias_seen = 0;
    CData/*0:0*/ __Vtask_tb_dma__DOT__run_full_load_test__10__act_seen;
    __Vtask_tb_dma__DOT__run_full_load_test__10__act_seen = 0;
    CData/*0:0*/ __Vtask_tb_dma__DOT__run_full_load_test__10__weight_order_ok;
    __Vtask_tb_dma__DOT__run_full_load_test__10__weight_order_ok = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_dma__DOT__run_full_load_test__10__bias_captured;
    VL_ZERO_W(128, __Vtask_tb_dma__DOT__run_full_load_test__10__bias_captured);
    VlWide<4>/*127:0*/ __Vtask_tb_dma__DOT__run_full_load_test__10__act_captured;
    VL_ZERO_W(128, __Vtask_tb_dma__DOT__run_full_load_test__10__act_captured);
    VlWide<4>/*127:0*/ __Vtask_tb_dma__DOT__run_full_load_test__10__bytes_expected;
    VL_ZERO_W(128, __Vtask_tb_dma__DOT__run_full_load_test__10__bytes_expected);
    VlWide<4>/*127:0*/ __Vtask_tb_dma__DOT__run_full_load_test__10__bias_words_expected;
    VL_ZERO_W(128, __Vtask_tb_dma__DOT__run_full_load_test__10__bias_words_expected);
    VlWide<4>/*127:0*/ __Vtask_tb_dma__DOT__run_full_load_test__10__act_nibbles_expected;
    VL_ZERO_W(128, __Vtask_tb_dma__DOT__run_full_load_test__10__act_nibbles_expected);
    IData/*31:0*/ __Vtask_tb_dma__DOT__load_and_drain_weights__12__drained;
    __Vtask_tb_dma__DOT__load_and_drain_weights__12__drained = 0;
    IData/*31:0*/ __Vtask_tb_dma__DOT__load_and_drain_weights__12__idx;
    __Vtask_tb_dma__DOT__load_and_drain_weights__12__idx = 0;
    IData/*31:0*/ __Vtask_tb_dma__DOT__load_and_drain_weights__12__safety;
    __Vtask_tb_dma__DOT__load_and_drain_weights__12__safety = 0;
    std::string __Vtask_tb_dma__DOT__check__13__name;
    CData/*0:0*/ __Vtask_tb_dma__DOT__check__13__cond;
    __Vtask_tb_dma__DOT__check__13__cond = 0;
    std::string __Vtask_tb_dma__DOT__check__14__name;
    CData/*0:0*/ __Vtask_tb_dma__DOT__check__14__cond;
    __Vtask_tb_dma__DOT__check__14__cond = 0;
    std::string __Vtask_tb_dma__DOT__check__15__name;
    CData/*0:0*/ __Vtask_tb_dma__DOT__check__15__cond;
    __Vtask_tb_dma__DOT__check__15__cond = 0;
    std::string __Vtask_tb_dma__DOT__check__16__name;
    CData/*0:0*/ __Vtask_tb_dma__DOT__check__16__cond;
    __Vtask_tb_dma__DOT__check__16__cond = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_dma__DOT__load_bias__17__captured;
    VL_ZERO_W(128, __Vtask_tb_dma__DOT__load_bias__17__captured);
    CData/*0:0*/ __Vtask_tb_dma__DOT__load_bias__17__seen;
    __Vtask_tb_dma__DOT__load_bias__17__seen = 0;
    IData/*31:0*/ __Vtask_tb_dma__DOT__load_bias__17__safety;
    __Vtask_tb_dma__DOT__load_bias__17__safety = 0;
    std::string __Vtask_tb_dma__DOT__check__18__name;
    CData/*0:0*/ __Vtask_tb_dma__DOT__check__18__cond;
    __Vtask_tb_dma__DOT__check__18__cond = 0;
    std::string __Vtask_tb_dma__DOT__check__19__name;
    CData/*0:0*/ __Vtask_tb_dma__DOT__check__19__cond;
    __Vtask_tb_dma__DOT__check__19__cond = 0;
    std::string __Vtask_tb_dma__DOT__check__20__name;
    CData/*0:0*/ __Vtask_tb_dma__DOT__check__20__cond;
    __Vtask_tb_dma__DOT__check__20__cond = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_dma__DOT__load_activations__21__captured;
    VL_ZERO_W(128, __Vtask_tb_dma__DOT__load_activations__21__captured);
    CData/*0:0*/ __Vtask_tb_dma__DOT__load_activations__21__seen;
    __Vtask_tb_dma__DOT__load_activations__21__seen = 0;
    IData/*31:0*/ __Vtask_tb_dma__DOT__load_activations__21__safety;
    __Vtask_tb_dma__DOT__load_activations__21__safety = 0;
    std::string __Vtask_tb_dma__DOT__check__22__name;
    CData/*0:0*/ __Vtask_tb_dma__DOT__check__22__cond;
    __Vtask_tb_dma__DOT__check__22__cond = 0;
    std::string __Vtask_tb_dma__DOT__check__23__name;
    CData/*0:0*/ __Vtask_tb_dma__DOT__check__23__cond;
    __Vtask_tb_dma__DOT__check__23__cond = 0;
    std::string __Vtask_tb_dma__DOT__check__24__name;
    CData/*0:0*/ __Vtask_tb_dma__DOT__check__24__cond;
    __Vtask_tb_dma__DOT__check__24__cond = 0;
    IData/*31:0*/ __Vtask_tb_dma__DOT__run_result_readback_test__25__unnamedblk7__DOT__i;
    __Vtask_tb_dma__DOT__run_result_readback_test__25__unnamedblk7__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_dma__DOT__run_result_readback_test__25__unnamedblk9__DOT__i;
    __Vtask_tb_dma__DOT__run_result_readback_test__25__unnamedblk9__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx;
    __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx = 0;
    IData/*31:0*/ __Vtask_tb_dma__DOT__run_result_readback_test__25__rc_idx;
    __Vtask_tb_dma__DOT__run_result_readback_test__25__rc_idx = 0;
    IData/*31:0*/ __Vtask_tb_dma__DOT__run_result_readback_test__25__safety;
    __Vtask_tb_dma__DOT__run_result_readback_test__25__safety = 0;
    CData/*0:0*/ __Vtask_tb_dma__DOT__run_result_readback_test__25__result_order_ok;
    __Vtask_tb_dma__DOT__run_result_readback_test__25__result_order_ok = 0;
    std::string __Vtask_tb_dma__DOT__check__27__name;
    CData/*0:0*/ __Vtask_tb_dma__DOT__check__27__cond;
    __Vtask_tb_dma__DOT__check__27__cond = 0;
    std::string __Vtask_tb_dma__DOT__check__28__name;
    CData/*0:0*/ __Vtask_tb_dma__DOT__check__28__cond;
    __Vtask_tb_dma__DOT__check__28__cond = 0;
    std::string __Vtask_tb_dma__DOT__check__29__name;
    CData/*0:0*/ __Vtask_tb_dma__DOT__check__29__cond;
    __Vtask_tb_dma__DOT__check__29__cond = 0;
    std::string __Vtask_tb_dma__DOT__check__30__name;
    CData/*0:0*/ __Vtask_tb_dma__DOT__check__30__cond;
    __Vtask_tb_dma__DOT__check__30__cond = 0;
    std::string __Vtask_tb_dma__DOT__check__31__name;
    CData/*0:0*/ __Vtask_tb_dma__DOT__check__31__cond;
    __Vtask_tb_dma__DOT__check__31__cond = 0;
    std::string __Vtask_tb_dma__DOT__check__32__name;
    CData/*0:0*/ __Vtask_tb_dma__DOT__check__32__cond;
    __Vtask_tb_dma__DOT__check__32__cond = 0;
    // Body
    vlSelf->tb_dma__DOT__rst_n = 0U;
    vlSelf->tb_dma__DOT__u_in = 0U;
    vlSelf->tb_dma__DOT__bias_fsm_start = 0U;
    vlSelf->tb_dma__DOT__activation_fsm_start = 0U;
    vlSelf->tb_dma__DOT__weight_fsm_start = 0U;
    vlSelf->tb_dma__DOT__bank = 0U;
    vlSelf->tb_dma__DOT__computed_bank_in = 0U;
    vlSelf->tb_dma__DOT__computed_bank_in_valid = 0U;
    vlSelf->tb_dma__DOT__result_we = 0U;
    vlSelf->tb_dma__DOT__start_read_fsm = 0U;
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       96);
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       96);
    vlSelf->tb_dma__DOT__rst_n = 1U;
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       98);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       98);
    VL_WRITEF("==== DMA: reset ====\n");
    __Vtask_tb_dma__DOT__check__2__cond = (1U & (~ (IData)(vlSelf->tb_dma__DOT__weight_bank_out_valid)));
    __Vtask_tb_dma__DOT__check__2__name = std::string{"reset: weight_bank_out_valid low"};
    vlSelf->tb_dma__DOT__checks = ((IData)(1U) + vlSelf->tb_dma__DOT__checks);
    if (__Vtask_tb_dma__DOT__check__2__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_dma__DOT__check__2__name));
    } else {
        vlSelf->tb_dma__DOT__errors = ((IData)(1U) 
                                       + vlSelf->tb_dma__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_dma__DOT__check__2__name));
    }
    __Vtask_tb_dma__DOT__check__3__cond = (1U & (~ 
                                                 ((~ (IData)(vlSelf->tb_dma__DOT__dut__DOT__act_full_prev)) 
                                                  & (0x10U 
                                                     == (IData)(vlSelf->tb_dma__DOT__dut__DOT__act_buf__DOT__wr_ptr)))));
    __Vtask_tb_dma__DOT__check__3__name = std::string{"reset: activation_bank_out_valid low"};
    vlSelf->tb_dma__DOT__checks = ((IData)(1U) + vlSelf->tb_dma__DOT__checks);
    if (__Vtask_tb_dma__DOT__check__3__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_dma__DOT__check__3__name));
    } else {
        vlSelf->tb_dma__DOT__errors = ((IData)(1U) 
                                       + vlSelf->tb_dma__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_dma__DOT__check__3__name));
    }
    __Vtask_tb_dma__DOT__check__4__cond = (1U & (~ 
                                                 ((~ (IData)(vlSelf->tb_dma__DOT__dut__DOT__bias_full_prev)) 
                                                  & (0x10U 
                                                     == (IData)(vlSelf->tb_dma__DOT__dut__DOT__bias_buf__DOT__wr_ptr)))));
    __Vtask_tb_dma__DOT__check__4__name = std::string{"reset: bias_bank_out_valid low"};
    vlSelf->tb_dma__DOT__checks = ((IData)(1U) + vlSelf->tb_dma__DOT__checks);
    if (__Vtask_tb_dma__DOT__check__4__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_dma__DOT__check__4__name));
    } else {
        vlSelf->tb_dma__DOT__errors = ((IData)(1U) 
                                       + vlSelf->tb_dma__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_dma__DOT__check__4__name));
    }
    __Vtask_tb_dma__DOT__check__5__cond = (0U == (IData)(vlSelf->tb_dma__DOT__dut__DOT__w_fsm__DOT__current_state));
    __Vtask_tb_dma__DOT__check__5__name = std::string{"reset: weight FSM in IDLE"};
    vlSelf->tb_dma__DOT__checks = ((IData)(1U) + vlSelf->tb_dma__DOT__checks);
    if (__Vtask_tb_dma__DOT__check__5__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_dma__DOT__check__5__name));
    } else {
        vlSelf->tb_dma__DOT__errors = ((IData)(1U) 
                                       + vlSelf->tb_dma__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_dma__DOT__check__5__name));
    }
    __Vtask_tb_dma__DOT__check__6__cond = (0U == (IData)(vlSelf->tb_dma__DOT__dut__DOT__b_fsm__DOT__current_state));
    __Vtask_tb_dma__DOT__check__6__name = std::string{"reset: bias FSM in IDLE"};
    vlSelf->tb_dma__DOT__checks = ((IData)(1U) + vlSelf->tb_dma__DOT__checks);
    if (__Vtask_tb_dma__DOT__check__6__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_dma__DOT__check__6__name));
    } else {
        vlSelf->tb_dma__DOT__errors = ((IData)(1U) 
                                       + vlSelf->tb_dma__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_dma__DOT__check__6__name));
    }
    __Vtask_tb_dma__DOT__check__7__cond = (0U == (IData)(vlSelf->tb_dma__DOT__dut__DOT__a_fsm__DOT__current_state));
    __Vtask_tb_dma__DOT__check__7__name = std::string{"reset: activation FSM in IDLE"};
    vlSelf->tb_dma__DOT__checks = ((IData)(1U) + vlSelf->tb_dma__DOT__checks);
    if (__Vtask_tb_dma__DOT__check__7__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_dma__DOT__check__7__name));
    } else {
        vlSelf->tb_dma__DOT__errors = ((IData)(1U) 
                                       + vlSelf->tb_dma__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_dma__DOT__check__7__name));
    }
    __Vtask_tb_dma__DOT__check__8__cond = (0U == (IData)(vlSelf->tb_dma__DOT__dut__DOT__r_fsm__DOT__current_state));
    __Vtask_tb_dma__DOT__check__8__name = std::string{"reset: read FSM in IDLE"};
    vlSelf->tb_dma__DOT__checks = ((IData)(1U) + vlSelf->tb_dma__DOT__checks);
    if (__Vtask_tb_dma__DOT__check__8__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_dma__DOT__check__8__name));
    } else {
        vlSelf->tb_dma__DOT__errors = ((IData)(1U) 
                                       + vlSelf->tb_dma__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_dma__DOT__check__8__name));
    }
    __Vtask_tb_dma__DOT__check__9__cond = vlSelf->tb_dma__DOT__dut__DOT__weight_empty;
    __Vtask_tb_dma__DOT__check__9__name = std::string{"reset: weight buffer empty"};
    vlSelf->tb_dma__DOT__checks = ((IData)(1U) + vlSelf->tb_dma__DOT__checks);
    if (__Vtask_tb_dma__DOT__check__9__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_dma__DOT__check__9__name));
    } else {
        vlSelf->tb_dma__DOT__errors = ((IData)(1U) 
                                       + vlSelf->tb_dma__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_dma__DOT__check__9__name));
    }
    VL_WRITEF("DMA reset: %0d/%0d checks passed\n\n",
              32,(vlSelf->tb_dma__DOT__checks - vlSelf->tb_dma__DOT__errors),
              32,vlSelf->tb_dma__DOT__checks);
    vlSelf->tb_dma__DOT__rst_n = 0U;
    vlSelf->tb_dma__DOT__u_in = 0U;
    vlSelf->tb_dma__DOT__bias_fsm_start = 0U;
    vlSelf->tb_dma__DOT__activation_fsm_start = 0U;
    vlSelf->tb_dma__DOT__weight_fsm_start = 0U;
    vlSelf->tb_dma__DOT__bank = 0U;
    vlSelf->tb_dma__DOT__computed_bank_in = 0U;
    vlSelf->tb_dma__DOT__computed_bank_in_valid = 0U;
    vlSelf->tb_dma__DOT__result_we = 0U;
    vlSelf->tb_dma__DOT__start_read_fsm = 0U;
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       96);
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       96);
    vlSelf->tb_dma__DOT__rst_n = 1U;
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       98);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       98);
    VL_WRITEF("==== DMA: full load/drain with dummy data ====\n");
    __Vtask_tb_dma__DOT__run_full_load_test__10__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x100U, __Vtask_tb_dma__DOT__run_full_load_test__10__unnamedblk1__DOT__i)) {
        vlSelf->tb_dma__DOT__weight_data[(0xffU & __Vtask_tb_dma__DOT__run_full_load_test__10__unnamedblk1__DOT__i)] 
            = (0xffU & __Vtask_tb_dma__DOT__run_full_load_test__10__unnamedblk1__DOT__i);
        __Vtask_tb_dma__DOT__run_full_load_test__10__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_tb_dma__DOT__run_full_load_test__10__unnamedblk1__DOT__i);
    }
    vlSelf->tb_dma__DOT__bias_data[0U] = 0xa0U;
    vlSelf->tb_dma__DOT__bias_data[1U] = 0xa1U;
    vlSelf->tb_dma__DOT__bias_data[2U] = 0xa2U;
    vlSelf->tb_dma__DOT__bias_data[3U] = 0xa3U;
    vlSelf->tb_dma__DOT__bias_data[4U] = 0xa4U;
    vlSelf->tb_dma__DOT__bias_data[5U] = 0xa5U;
    vlSelf->tb_dma__DOT__bias_data[6U] = 0xa6U;
    vlSelf->tb_dma__DOT__bias_data[7U] = 0xa7U;
    vlSelf->tb_dma__DOT__bias_data[8U] = 0xa8U;
    vlSelf->tb_dma__DOT__bias_data[9U] = 0xa9U;
    vlSelf->tb_dma__DOT__bias_data[0xaU] = 0xaaU;
    vlSelf->tb_dma__DOT__bias_data[0xbU] = 0xabU;
    vlSelf->tb_dma__DOT__bias_data[0xcU] = 0xacU;
    vlSelf->tb_dma__DOT__bias_data[0xdU] = 0xadU;
    vlSelf->tb_dma__DOT__bias_data[0xeU] = 0xaeU;
    vlSelf->tb_dma__DOT__bias_data[0xfU] = 0xafU;
    vlSelf->tb_dma__DOT__act_data[0U] = 0xb0U;
    vlSelf->tb_dma__DOT__act_data[1U] = 0xb1U;
    vlSelf->tb_dma__DOT__act_data[2U] = 0xb2U;
    vlSelf->tb_dma__DOT__act_data[3U] = 0xb3U;
    vlSelf->tb_dma__DOT__act_data[4U] = 0xb4U;
    vlSelf->tb_dma__DOT__act_data[5U] = 0xb5U;
    vlSelf->tb_dma__DOT__act_data[6U] = 0xb6U;
    vlSelf->tb_dma__DOT__act_data[7U] = 0xb7U;
    vlSelf->tb_dma__DOT__act_data[8U] = 0xb8U;
    vlSelf->tb_dma__DOT__act_data[9U] = 0xb9U;
    vlSelf->tb_dma__DOT__act_data[0xaU] = 0xbaU;
    vlSelf->tb_dma__DOT__act_data[0xbU] = 0xbbU;
    vlSelf->tb_dma__DOT__act_data[0xcU] = 0xbcU;
    vlSelf->tb_dma__DOT__act_data[0xdU] = 0xbdU;
    vlSelf->tb_dma__DOT__act_data[0xeU] = 0xbeU;
    vlSelf->tb_dma__DOT__act_data[0xfU] = 0xbfU;
    vlSelf->tb_dma__DOT__bank = 1U;
    vlSelf->tb_dma__DOT__weight_fsm_start = 1U;
    vlSelf->tb_dma__DOT__u_in = vlSelf->tb_dma__DOT__weight_data
        [0U];
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       129);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       129);
    vlSelf->tb_dma__DOT__weight_fsm_start = 0U;
    __Vtask_tb_dma__DOT__load_and_drain_weights__12__drained = 0U;
    __Vtask_tb_dma__DOT__load_and_drain_weights__12__idx = 0U;
    while (VL_GTS_III(32, 0x100U, __Vtask_tb_dma__DOT__load_and_drain_weights__12__idx)) {
        vlSelf->tb_dma__DOT__u_in = vlSelf->tb_dma__DOT__weight_data
            [(0xffU & __Vtask_tb_dma__DOT__load_and_drain_weights__12__idx)];
        if (((IData)(vlSelf->tb_dma__DOT__weight_bank_out_valid) 
             & VL_GTS_III(32, 0x100U, __Vtask_tb_dma__DOT__load_and_drain_weights__12__drained))) {
            vlSelf->tb_dma__DOT__weight_captured[(0xffU 
                                                  & __Vtask_tb_dma__DOT__load_and_drain_weights__12__drained)] 
                = (0xffU & vlSelf->tb_dma__DOT__weight_bank_out);
            vlSelf->tb_dma__DOT__weight_captured[(0xffU 
                                                  & ((IData)(1U) 
                                                     + __Vtask_tb_dma__DOT__load_and_drain_weights__12__drained))] 
                = (0xffU & (vlSelf->tb_dma__DOT__weight_bank_out 
                            >> 8U));
            vlSelf->tb_dma__DOT__weight_captured[(0xffU 
                                                  & ((IData)(2U) 
                                                     + __Vtask_tb_dma__DOT__load_and_drain_weights__12__drained))] 
                = (0xffU & (vlSelf->tb_dma__DOT__weight_bank_out 
                            >> 0x10U));
            vlSelf->tb_dma__DOT__weight_captured[(0xffU 
                                                  & ((IData)(3U) 
                                                     + __Vtask_tb_dma__DOT__load_and_drain_weights__12__drained))] 
                = (vlSelf->tb_dma__DOT__weight_bank_out 
                   >> 0x18U);
            __Vtask_tb_dma__DOT__load_and_drain_weights__12__drained 
                = ((IData)(4U) + __Vtask_tb_dma__DOT__load_and_drain_weights__12__drained);
        }
        co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_dma.clk)", 
                                                           "tb/tb_dma.sv", 
                                                           142);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_dma.sv", 
                                           142);
        __Vtask_tb_dma__DOT__load_and_drain_weights__12__idx 
            = ((IData)(1U) + __Vtask_tb_dma__DOT__load_and_drain_weights__12__idx);
    }
    vlSelf->tb_dma__DOT__bank = 0U;
    __Vtask_tb_dma__DOT__load_and_drain_weights__12__safety = 0U;
    while ((VL_GTS_III(32, 0x100U, __Vtask_tb_dma__DOT__load_and_drain_weights__12__drained) 
            & VL_GTS_III(32, 0xc8U, __Vtask_tb_dma__DOT__load_and_drain_weights__12__safety))) {
        if (vlSelf->tb_dma__DOT__weight_bank_out_valid) {
            vlSelf->tb_dma__DOT__weight_captured[(0xffU 
                                                  & __Vtask_tb_dma__DOT__load_and_drain_weights__12__drained)] 
                = (0xffU & vlSelf->tb_dma__DOT__weight_bank_out);
            vlSelf->tb_dma__DOT__weight_captured[(0xffU 
                                                  & ((IData)(1U) 
                                                     + __Vtask_tb_dma__DOT__load_and_drain_weights__12__drained))] 
                = (0xffU & (vlSelf->tb_dma__DOT__weight_bank_out 
                            >> 8U));
            vlSelf->tb_dma__DOT__weight_captured[(0xffU 
                                                  & ((IData)(2U) 
                                                     + __Vtask_tb_dma__DOT__load_and_drain_weights__12__drained))] 
                = (0xffU & (vlSelf->tb_dma__DOT__weight_bank_out 
                            >> 0x10U));
            vlSelf->tb_dma__DOT__weight_captured[(0xffU 
                                                  & ((IData)(3U) 
                                                     + __Vtask_tb_dma__DOT__load_and_drain_weights__12__drained))] 
                = (vlSelf->tb_dma__DOT__weight_bank_out 
                   >> 0x18U);
            __Vtask_tb_dma__DOT__load_and_drain_weights__12__drained 
                = ((IData)(4U) + __Vtask_tb_dma__DOT__load_and_drain_weights__12__drained);
        }
        co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_dma.clk)", 
                                                           "tb/tb_dma.sv", 
                                                           155);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_dma.sv", 
                                           155);
        __Vtask_tb_dma__DOT__load_and_drain_weights__12__safety 
            = ((IData)(1U) + __Vtask_tb_dma__DOT__load_and_drain_weights__12__safety);
    }
    __Vtask_tb_dma__DOT__run_full_load_test__10__drained 
        = __Vtask_tb_dma__DOT__load_and_drain_weights__12__drained;
    __Vtask_tb_dma__DOT__check__13__cond = (0x100U 
                                            == __Vtask_tb_dma__DOT__run_full_load_test__10__drained);
    __Vtask_tb_dma__DOT__check__13__name = std::string{"all 256 weight bytes streamed out via weight_bank_out before timing out"};
    vlSelf->tb_dma__DOT__checks = ((IData)(1U) + vlSelf->tb_dma__DOT__checks);
    if (__Vtask_tb_dma__DOT__check__13__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_dma__DOT__check__13__name));
    } else {
        vlSelf->tb_dma__DOT__errors = ((IData)(1U) 
                                       + vlSelf->tb_dma__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_dma__DOT__check__13__name));
    }
    __Vtask_tb_dma__DOT__run_full_load_test__10__weight_order_ok = 1U;
    __Vtask_tb_dma__DOT__run_full_load_test__10__unnamedblk4__DOT__i = 0U;
    while (VL_GTS_III(32, 0x100U, __Vtask_tb_dma__DOT__run_full_load_test__10__unnamedblk4__DOT__i)) {
        if ((vlSelf->tb_dma__DOT__weight_captured[(0xffU 
                                                   & __Vtask_tb_dma__DOT__run_full_load_test__10__unnamedblk4__DOT__i)] 
             != vlSelf->tb_dma__DOT__weight_data[(0xffU 
                                                  & __Vtask_tb_dma__DOT__run_full_load_test__10__unnamedblk4__DOT__i)])) {
            __Vtask_tb_dma__DOT__run_full_load_test__10__weight_order_ok = 0U;
        }
        __Vtask_tb_dma__DOT__run_full_load_test__10__unnamedblk4__DOT__i 
            = ((IData)(1U) + __Vtask_tb_dma__DOT__run_full_load_test__10__unnamedblk4__DOT__i);
    }
    __Vtask_tb_dma__DOT__check__14__cond = __Vtask_tb_dma__DOT__run_full_load_test__10__weight_order_ok;
    __Vtask_tb_dma__DOT__check__14__name = std::string{"weight_bank_out replayed all 256 bytes in FIFO order"};
    vlSelf->tb_dma__DOT__checks = ((IData)(1U) + vlSelf->tb_dma__DOT__checks);
    if (__Vtask_tb_dma__DOT__check__14__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_dma__DOT__check__14__name));
    } else {
        vlSelf->tb_dma__DOT__errors = ((IData)(1U) 
                                       + vlSelf->tb_dma__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_dma__DOT__check__14__name));
    }
    __Vtask_tb_dma__DOT__check__15__cond = (0U == (IData)(vlSelf->tb_dma__DOT__dut__DOT__w_fsm__DOT__current_state));
    __Vtask_tb_dma__DOT__check__15__name = std::string{"weight FSM returned to IDLE"};
    vlSelf->tb_dma__DOT__checks = ((IData)(1U) + vlSelf->tb_dma__DOT__checks);
    if (__Vtask_tb_dma__DOT__check__15__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_dma__DOT__check__15__name));
    } else {
        vlSelf->tb_dma__DOT__errors = ((IData)(1U) 
                                       + vlSelf->tb_dma__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_dma__DOT__check__15__name));
    }
    __Vtask_tb_dma__DOT__check__16__cond = vlSelf->tb_dma__DOT__dut__DOT__weight_empty;
    __Vtask_tb_dma__DOT__check__16__name = std::string{"weight buffer fully drained (empty)"};
    vlSelf->tb_dma__DOT__checks = ((IData)(1U) + vlSelf->tb_dma__DOT__checks);
    if (__Vtask_tb_dma__DOT__check__16__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_dma__DOT__check__16__name));
    } else {
        vlSelf->tb_dma__DOT__errors = ((IData)(1U) 
                                       + vlSelf->tb_dma__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_dma__DOT__check__16__name));
    }
    vlSelf->tb_dma__DOT__bank = 2U;
    vlSelf->tb_dma__DOT__bias_fsm_start = 1U;
    vlSelf->tb_dma__DOT__u_in = vlSelf->tb_dma__DOT__bias_data
        [0U];
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       170);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       170);
    vlSelf->tb_dma__DOT__bias_fsm_start = 0U;
    vlSelf->tb_dma__DOT__u_in = vlSelf->tb_dma__DOT__bias_data
        [0U];
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       175);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       175);
    vlSelf->tb_dma__DOT__u_in = vlSelf->tb_dma__DOT__bias_data
        [1U];
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       175);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       175);
    vlSelf->tb_dma__DOT__u_in = vlSelf->tb_dma__DOT__bias_data
        [2U];
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       175);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       175);
    vlSelf->tb_dma__DOT__u_in = vlSelf->tb_dma__DOT__bias_data
        [3U];
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       175);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       175);
    vlSelf->tb_dma__DOT__u_in = vlSelf->tb_dma__DOT__bias_data
        [4U];
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       175);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       175);
    vlSelf->tb_dma__DOT__u_in = vlSelf->tb_dma__DOT__bias_data
        [5U];
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       175);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       175);
    vlSelf->tb_dma__DOT__u_in = vlSelf->tb_dma__DOT__bias_data
        [6U];
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       175);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       175);
    vlSelf->tb_dma__DOT__u_in = vlSelf->tb_dma__DOT__bias_data
        [7U];
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       175);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       175);
    vlSelf->tb_dma__DOT__u_in = vlSelf->tb_dma__DOT__bias_data
        [8U];
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       175);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       175);
    vlSelf->tb_dma__DOT__u_in = vlSelf->tb_dma__DOT__bias_data
        [9U];
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       175);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       175);
    vlSelf->tb_dma__DOT__u_in = vlSelf->tb_dma__DOT__bias_data
        [0xaU];
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       175);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       175);
    vlSelf->tb_dma__DOT__u_in = vlSelf->tb_dma__DOT__bias_data
        [0xbU];
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       175);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       175);
    vlSelf->tb_dma__DOT__u_in = vlSelf->tb_dma__DOT__bias_data
        [0xcU];
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       175);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       175);
    vlSelf->tb_dma__DOT__u_in = vlSelf->tb_dma__DOT__bias_data
        [0xdU];
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       175);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       175);
    vlSelf->tb_dma__DOT__u_in = vlSelf->tb_dma__DOT__bias_data
        [0xeU];
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       175);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       175);
    vlSelf->tb_dma__DOT__u_in = vlSelf->tb_dma__DOT__bias_data
        [0xfU];
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       175);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       175);
    vlSelf->tb_dma__DOT__bank = 0U;
    __Vtask_tb_dma__DOT__load_bias__17__seen = 0U;
    __Vtask_tb_dma__DOT__load_bias__17__safety = 0U;
    while (((~ (IData)(__Vtask_tb_dma__DOT__load_bias__17__seen)) 
            & VL_GTS_III(32, 0x14U, __Vtask_tb_dma__DOT__load_bias__17__safety))) {
        if (((~ (IData)(vlSelf->tb_dma__DOT__dut__DOT__bias_full_prev)) 
             & (0x10U == (IData)(vlSelf->tb_dma__DOT__dut__DOT__bias_buf__DOT__wr_ptr)))) {
            __Vtask_tb_dma__DOT__load_bias__17__captured[0U] 
                = vlSelf->tb_dma__DOT__dut__DOT__bias_buf__DOT__buff[0U];
            __Vtask_tb_dma__DOT__load_bias__17__captured[1U] 
                = vlSelf->tb_dma__DOT__dut__DOT__bias_buf__DOT__buff[1U];
            __Vtask_tb_dma__DOT__load_bias__17__captured[2U] 
                = vlSelf->tb_dma__DOT__dut__DOT__bias_buf__DOT__buff[2U];
            __Vtask_tb_dma__DOT__load_bias__17__captured[3U] 
                = vlSelf->tb_dma__DOT__dut__DOT__bias_buf__DOT__buff[3U];
            __Vtask_tb_dma__DOT__load_bias__17__seen = 1U;
        }
        co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_dma.clk)", 
                                                           "tb/tb_dma.sv", 
                                                           186);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_dma.sv", 
                                           186);
        __Vtask_tb_dma__DOT__load_bias__17__safety 
            = ((IData)(1U) + __Vtask_tb_dma__DOT__load_bias__17__safety);
    }
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       193);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       193);
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       193);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       193);
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       193);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       193);
    __Vtask_tb_dma__DOT__run_full_load_test__10__bias_captured[0U] 
        = __Vtask_tb_dma__DOT__load_bias__17__captured[0U];
    __Vtask_tb_dma__DOT__run_full_load_test__10__bias_captured[1U] 
        = __Vtask_tb_dma__DOT__load_bias__17__captured[1U];
    __Vtask_tb_dma__DOT__run_full_load_test__10__bias_captured[2U] 
        = __Vtask_tb_dma__DOT__load_bias__17__captured[2U];
    __Vtask_tb_dma__DOT__run_full_load_test__10__bias_captured[3U] 
        = __Vtask_tb_dma__DOT__load_bias__17__captured[3U];
    __Vtask_tb_dma__DOT__run_full_load_test__10__bias_seen 
        = __Vtask_tb_dma__DOT__load_bias__17__seen;
    __Vtask_tb_dma__DOT__check__18__cond = __Vtask_tb_dma__DOT__run_full_load_test__10__bias_seen;
    __Vtask_tb_dma__DOT__check__18__name = std::string{"bias_bank_out_valid pulsed once with a full tile"};
    vlSelf->tb_dma__DOT__checks = ((IData)(1U) + vlSelf->tb_dma__DOT__checks);
    if (__Vtask_tb_dma__DOT__check__18__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_dma__DOT__check__18__name));
    } else {
        vlSelf->tb_dma__DOT__errors = ((IData)(1U) 
                                       + vlSelf->tb_dma__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_dma__DOT__check__18__name));
    }
    __Vtask_tb_dma__DOT__run_full_load_test__10__bytes_expected[0U] 
        = ((0xff000000U & __Vtask_tb_dma__DOT__run_full_load_test__10__bytes_expected[0U]) 
           | ((vlSelf->tb_dma__DOT__bias_data[2U] << 0x10U) 
              | ((vlSelf->tb_dma__DOT__bias_data[1U] 
                  << 8U) | vlSelf->tb_dma__DOT__bias_data
                 [0U])));
    __Vtask_tb_dma__DOT__run_full_load_test__10__bytes_expected[0U] 
        = ((0xffffffU & __Vtask_tb_dma__DOT__run_full_load_test__10__bytes_expected[0U]) 
           | (vlSelf->tb_dma__DOT__bias_data[3U] << 0x18U));
    __Vtask_tb_dma__DOT__run_full_load_test__10__bytes_expected[1U] 
        = ((0xffff0000U & __Vtask_tb_dma__DOT__run_full_load_test__10__bytes_expected[1U]) 
           | (0xffffffU & ((0xffff00U & (vlSelf->tb_dma__DOT__bias_data
                                         [5U] << 8U)) 
                           | ((0xffffffU & vlSelf->tb_dma__DOT__bias_data
                               [4U]) | (vlSelf->tb_dma__DOT__bias_data
                                        [3U] >> 8U)))));
    __Vtask_tb_dma__DOT__run_full_load_test__10__bytes_expected[1U] 
        = ((0xffffU & __Vtask_tb_dma__DOT__run_full_load_test__10__bytes_expected[1U]) 
           | (0xffff0000U & ((vlSelf->tb_dma__DOT__bias_data
                              [7U] << 0x18U) | (vlSelf->tb_dma__DOT__bias_data
                                                [6U] 
                                                << 0x10U))));
    __Vtask_tb_dma__DOT__run_full_load_test__10__bytes_expected[2U] 
        = ((0xffffff00U & __Vtask_tb_dma__DOT__run_full_load_test__10__bytes_expected[2U]) 
           | (0xffffU & ((0xffffU & vlSelf->tb_dma__DOT__bias_data
                          [8U]) | ((0xffffU & (vlSelf->tb_dma__DOT__bias_data
                                               [7U] 
                                               >> 8U)) 
                                   | (vlSelf->tb_dma__DOT__bias_data
                                      [6U] >> 0x10U)))));
    __Vtask_tb_dma__DOT__run_full_load_test__10__bytes_expected[2U] 
        = ((0xffU & __Vtask_tb_dma__DOT__run_full_load_test__10__bytes_expected[2U]) 
           | (0xffffff00U & ((vlSelf->tb_dma__DOT__bias_data
                              [0xbU] << 0x18U) | ((
                                                   vlSelf->tb_dma__DOT__bias_data
                                                   [0xaU] 
                                                   << 0x10U) 
                                                  | (vlSelf->tb_dma__DOT__bias_data
                                                     [9U] 
                                                     << 8U)))));
    __Vtask_tb_dma__DOT__run_full_load_test__10__bytes_expected[3U] 
        = ((0xff000000U & __Vtask_tb_dma__DOT__run_full_load_test__10__bytes_expected[3U]) 
           | ((vlSelf->tb_dma__DOT__bias_data[0xeU] 
               << 0x10U) | ((vlSelf->tb_dma__DOT__bias_data
                             [0xdU] << 8U) | vlSelf->tb_dma__DOT__bias_data
                            [0xcU])));
    __Vtask_tb_dma__DOT__run_full_load_test__10__bytes_expected[3U] 
        = ((0xffffffU & __Vtask_tb_dma__DOT__run_full_load_test__10__bytes_expected[3U]) 
           | (vlSelf->tb_dma__DOT__bias_data[0xfU] 
              << 0x18U));
    __Vtask_tb_dma__DOT__run_full_load_test__10__bias_words_expected[0U] 
        = __Vtask_tb_dma__DOT__run_full_load_test__10__bytes_expected[0U];
    __Vtask_tb_dma__DOT__run_full_load_test__10__bias_words_expected[1U] 
        = __Vtask_tb_dma__DOT__run_full_load_test__10__bytes_expected[1U];
    __Vtask_tb_dma__DOT__run_full_load_test__10__bias_words_expected[2U] 
        = __Vtask_tb_dma__DOT__run_full_load_test__10__bytes_expected[2U];
    __Vtask_tb_dma__DOT__run_full_load_test__10__bias_words_expected[3U] 
        = __Vtask_tb_dma__DOT__run_full_load_test__10__bytes_expected[3U];
    __Vtask_tb_dma__DOT__check__19__cond = (0U == (
                                                   (((__Vtask_tb_dma__DOT__run_full_load_test__10__bias_captured[0U] 
                                                      ^ 
                                                      __Vtask_tb_dma__DOT__run_full_load_test__10__bias_words_expected[0U]) 
                                                     | (__Vtask_tb_dma__DOT__run_full_load_test__10__bias_captured[1U] 
                                                        ^ 
                                                        __Vtask_tb_dma__DOT__run_full_load_test__10__bias_words_expected[1U])) 
                                                    | (__Vtask_tb_dma__DOT__run_full_load_test__10__bias_captured[2U] 
                                                       ^ 
                                                       __Vtask_tb_dma__DOT__run_full_load_test__10__bias_words_expected[2U])) 
                                                   | (__Vtask_tb_dma__DOT__run_full_load_test__10__bias_captured[3U] 
                                                      ^ 
                                                      __Vtask_tb_dma__DOT__run_full_load_test__10__bias_words_expected[3U])));
    __Vtask_tb_dma__DOT__check__19__name = std::string{"bias_bank_out reflects the 16 loaded bytes"};
    vlSelf->tb_dma__DOT__checks = ((IData)(1U) + vlSelf->tb_dma__DOT__checks);
    if (__Vtask_tb_dma__DOT__check__19__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_dma__DOT__check__19__name));
    } else {
        vlSelf->tb_dma__DOT__errors = ((IData)(1U) 
                                       + vlSelf->tb_dma__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_dma__DOT__check__19__name));
    }
    __Vtask_tb_dma__DOT__check__20__cond = (0U == (IData)(vlSelf->tb_dma__DOT__dut__DOT__b_fsm__DOT__current_state));
    __Vtask_tb_dma__DOT__check__20__name = std::string{"bias FSM returned to IDLE"};
    vlSelf->tb_dma__DOT__checks = ((IData)(1U) + vlSelf->tb_dma__DOT__checks);
    if (__Vtask_tb_dma__DOT__check__20__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_dma__DOT__check__20__name));
    } else {
        vlSelf->tb_dma__DOT__errors = ((IData)(1U) 
                                       + vlSelf->tb_dma__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_dma__DOT__check__20__name));
    }
    vlSelf->tb_dma__DOT__bank = 3U;
    vlSelf->tb_dma__DOT__activation_fsm_start = 1U;
    vlSelf->tb_dma__DOT__u_in = vlSelf->tb_dma__DOT__act_data
        [0U];
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       203);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       203);
    vlSelf->tb_dma__DOT__activation_fsm_start = 0U;
    vlSelf->tb_dma__DOT__u_in = vlSelf->tb_dma__DOT__act_data
        [0U];
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       208);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       208);
    vlSelf->tb_dma__DOT__u_in = vlSelf->tb_dma__DOT__act_data
        [1U];
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       208);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       208);
    vlSelf->tb_dma__DOT__u_in = vlSelf->tb_dma__DOT__act_data
        [2U];
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       208);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       208);
    vlSelf->tb_dma__DOT__u_in = vlSelf->tb_dma__DOT__act_data
        [3U];
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       208);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       208);
    vlSelf->tb_dma__DOT__u_in = vlSelf->tb_dma__DOT__act_data
        [4U];
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       208);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       208);
    vlSelf->tb_dma__DOT__u_in = vlSelf->tb_dma__DOT__act_data
        [5U];
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       208);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       208);
    vlSelf->tb_dma__DOT__u_in = vlSelf->tb_dma__DOT__act_data
        [6U];
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       208);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       208);
    vlSelf->tb_dma__DOT__u_in = vlSelf->tb_dma__DOT__act_data
        [7U];
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       208);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       208);
    vlSelf->tb_dma__DOT__u_in = vlSelf->tb_dma__DOT__act_data
        [8U];
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       208);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       208);
    vlSelf->tb_dma__DOT__u_in = vlSelf->tb_dma__DOT__act_data
        [9U];
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       208);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       208);
    vlSelf->tb_dma__DOT__u_in = vlSelf->tb_dma__DOT__act_data
        [0xaU];
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       208);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       208);
    vlSelf->tb_dma__DOT__u_in = vlSelf->tb_dma__DOT__act_data
        [0xbU];
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       208);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       208);
    vlSelf->tb_dma__DOT__u_in = vlSelf->tb_dma__DOT__act_data
        [0xcU];
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       208);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       208);
    vlSelf->tb_dma__DOT__u_in = vlSelf->tb_dma__DOT__act_data
        [0xdU];
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       208);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       208);
    vlSelf->tb_dma__DOT__u_in = vlSelf->tb_dma__DOT__act_data
        [0xeU];
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       208);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       208);
    vlSelf->tb_dma__DOT__u_in = vlSelf->tb_dma__DOT__act_data
        [0xfU];
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       208);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       208);
    vlSelf->tb_dma__DOT__bank = 0U;
    __Vtask_tb_dma__DOT__load_activations__21__seen = 0U;
    __Vtask_tb_dma__DOT__load_activations__21__safety = 0U;
    while (((~ (IData)(__Vtask_tb_dma__DOT__load_activations__21__seen)) 
            & VL_GTS_III(32, 0x14U, __Vtask_tb_dma__DOT__load_activations__21__safety))) {
        if (((~ (IData)(vlSelf->tb_dma__DOT__dut__DOT__act_full_prev)) 
             & (0x10U == (IData)(vlSelf->tb_dma__DOT__dut__DOT__act_buf__DOT__wr_ptr)))) {
            __Vtask_tb_dma__DOT__load_activations__21__captured[0U] 
                = vlSelf->tb_dma__DOT__dut__DOT__act_buf__DOT__buff[0U];
            __Vtask_tb_dma__DOT__load_activations__21__captured[1U] 
                = vlSelf->tb_dma__DOT__dut__DOT__act_buf__DOT__buff[1U];
            __Vtask_tb_dma__DOT__load_activations__21__captured[2U] 
                = vlSelf->tb_dma__DOT__dut__DOT__act_buf__DOT__buff[2U];
            __Vtask_tb_dma__DOT__load_activations__21__captured[3U] 
                = vlSelf->tb_dma__DOT__dut__DOT__act_buf__DOT__buff[3U];
            __Vtask_tb_dma__DOT__load_activations__21__seen = 1U;
        }
        co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_dma.clk)", 
                                                           "tb/tb_dma.sv", 
                                                           219);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_dma.sv", 
                                           219);
        __Vtask_tb_dma__DOT__load_activations__21__safety 
            = ((IData)(1U) + __Vtask_tb_dma__DOT__load_activations__21__safety);
    }
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       225);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       225);
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       225);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       225);
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       225);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       225);
    __Vtask_tb_dma__DOT__run_full_load_test__10__act_captured[0U] 
        = __Vtask_tb_dma__DOT__load_activations__21__captured[0U];
    __Vtask_tb_dma__DOT__run_full_load_test__10__act_captured[1U] 
        = __Vtask_tb_dma__DOT__load_activations__21__captured[1U];
    __Vtask_tb_dma__DOT__run_full_load_test__10__act_captured[2U] 
        = __Vtask_tb_dma__DOT__load_activations__21__captured[2U];
    __Vtask_tb_dma__DOT__run_full_load_test__10__act_captured[3U] 
        = __Vtask_tb_dma__DOT__load_activations__21__captured[3U];
    __Vtask_tb_dma__DOT__run_full_load_test__10__act_seen 
        = __Vtask_tb_dma__DOT__load_activations__21__seen;
    __Vtask_tb_dma__DOT__check__22__cond = __Vtask_tb_dma__DOT__run_full_load_test__10__act_seen;
    __Vtask_tb_dma__DOT__check__22__name = std::string{"activation_bank_out_valid pulsed once with a full tile"};
    vlSelf->tb_dma__DOT__checks = ((IData)(1U) + vlSelf->tb_dma__DOT__checks);
    if (__Vtask_tb_dma__DOT__check__22__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_dma__DOT__check__22__name));
    } else {
        vlSelf->tb_dma__DOT__errors = ((IData)(1U) 
                                       + vlSelf->tb_dma__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_dma__DOT__check__22__name));
    }
    __Vtask_tb_dma__DOT__run_full_load_test__10__bytes_expected[0U] 
        = ((0xff000000U & __Vtask_tb_dma__DOT__run_full_load_test__10__bytes_expected[0U]) 
           | ((vlSelf->tb_dma__DOT__act_data[2U] << 0x10U) 
              | ((vlSelf->tb_dma__DOT__act_data[1U] 
                  << 8U) | vlSelf->tb_dma__DOT__act_data
                 [0U])));
    __Vtask_tb_dma__DOT__run_full_load_test__10__bytes_expected[0U] 
        = ((0xffffffU & __Vtask_tb_dma__DOT__run_full_load_test__10__bytes_expected[0U]) 
           | (vlSelf->tb_dma__DOT__act_data[3U] << 0x18U));
    __Vtask_tb_dma__DOT__run_full_load_test__10__bytes_expected[1U] 
        = ((0xffff0000U & __Vtask_tb_dma__DOT__run_full_load_test__10__bytes_expected[1U]) 
           | (0xffffffU & ((0xffff00U & (vlSelf->tb_dma__DOT__act_data
                                         [5U] << 8U)) 
                           | ((0xffffffU & vlSelf->tb_dma__DOT__act_data
                               [4U]) | (vlSelf->tb_dma__DOT__act_data
                                        [3U] >> 8U)))));
    __Vtask_tb_dma__DOT__run_full_load_test__10__bytes_expected[1U] 
        = ((0xffffU & __Vtask_tb_dma__DOT__run_full_load_test__10__bytes_expected[1U]) 
           | (0xffff0000U & ((vlSelf->tb_dma__DOT__act_data
                              [7U] << 0x18U) | (vlSelf->tb_dma__DOT__act_data
                                                [6U] 
                                                << 0x10U))));
    __Vtask_tb_dma__DOT__run_full_load_test__10__bytes_expected[2U] 
        = ((0xffffff00U & __Vtask_tb_dma__DOT__run_full_load_test__10__bytes_expected[2U]) 
           | (0xffffU & ((0xffffU & vlSelf->tb_dma__DOT__act_data
                          [8U]) | ((0xffffU & (vlSelf->tb_dma__DOT__act_data
                                               [7U] 
                                               >> 8U)) 
                                   | (vlSelf->tb_dma__DOT__act_data
                                      [6U] >> 0x10U)))));
    __Vtask_tb_dma__DOT__run_full_load_test__10__bytes_expected[2U] 
        = ((0xffU & __Vtask_tb_dma__DOT__run_full_load_test__10__bytes_expected[2U]) 
           | (0xffffff00U & ((vlSelf->tb_dma__DOT__act_data
                              [0xbU] << 0x18U) | ((
                                                   vlSelf->tb_dma__DOT__act_data
                                                   [0xaU] 
                                                   << 0x10U) 
                                                  | (vlSelf->tb_dma__DOT__act_data
                                                     [9U] 
                                                     << 8U)))));
    __Vtask_tb_dma__DOT__run_full_load_test__10__bytes_expected[3U] 
        = ((0xff000000U & __Vtask_tb_dma__DOT__run_full_load_test__10__bytes_expected[3U]) 
           | ((vlSelf->tb_dma__DOT__act_data[0xeU] 
               << 0x10U) | ((vlSelf->tb_dma__DOT__act_data
                             [0xdU] << 8U) | vlSelf->tb_dma__DOT__act_data
                            [0xcU])));
    __Vtask_tb_dma__DOT__run_full_load_test__10__bytes_expected[3U] 
        = ((0xffffffU & __Vtask_tb_dma__DOT__run_full_load_test__10__bytes_expected[3U]) 
           | (vlSelf->tb_dma__DOT__act_data[0xfU] << 0x18U));
    __Vtask_tb_dma__DOT__run_full_load_test__10__act_nibbles_expected[0U] 
        = __Vtask_tb_dma__DOT__run_full_load_test__10__bytes_expected[0U];
    __Vtask_tb_dma__DOT__run_full_load_test__10__act_nibbles_expected[1U] 
        = __Vtask_tb_dma__DOT__run_full_load_test__10__bytes_expected[1U];
    __Vtask_tb_dma__DOT__run_full_load_test__10__act_nibbles_expected[2U] 
        = __Vtask_tb_dma__DOT__run_full_load_test__10__bytes_expected[2U];
    __Vtask_tb_dma__DOT__run_full_load_test__10__act_nibbles_expected[3U] 
        = __Vtask_tb_dma__DOT__run_full_load_test__10__bytes_expected[3U];
    __Vtask_tb_dma__DOT__check__23__cond = (0U == (
                                                   (((__Vtask_tb_dma__DOT__run_full_load_test__10__act_captured[0U] 
                                                      ^ 
                                                      __Vtask_tb_dma__DOT__run_full_load_test__10__act_nibbles_expected[0U]) 
                                                     | (__Vtask_tb_dma__DOT__run_full_load_test__10__act_captured[1U] 
                                                        ^ 
                                                        __Vtask_tb_dma__DOT__run_full_load_test__10__act_nibbles_expected[1U])) 
                                                    | (__Vtask_tb_dma__DOT__run_full_load_test__10__act_captured[2U] 
                                                       ^ 
                                                       __Vtask_tb_dma__DOT__run_full_load_test__10__act_nibbles_expected[2U])) 
                                                   | (__Vtask_tb_dma__DOT__run_full_load_test__10__act_captured[3U] 
                                                      ^ 
                                                      __Vtask_tb_dma__DOT__run_full_load_test__10__act_nibbles_expected[3U])));
    __Vtask_tb_dma__DOT__check__23__name = std::string{"activation_bank_out reflects the 16 loaded bytes"};
    vlSelf->tb_dma__DOT__checks = ((IData)(1U) + vlSelf->tb_dma__DOT__checks);
    if (__Vtask_tb_dma__DOT__check__23__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_dma__DOT__check__23__name));
    } else {
        vlSelf->tb_dma__DOT__errors = ((IData)(1U) 
                                       + vlSelf->tb_dma__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_dma__DOT__check__23__name));
    }
    __Vtask_tb_dma__DOT__check__24__cond = (0U == (IData)(vlSelf->tb_dma__DOT__dut__DOT__a_fsm__DOT__current_state));
    __Vtask_tb_dma__DOT__check__24__name = std::string{"activation FSM returned to IDLE"};
    vlSelf->tb_dma__DOT__checks = ((IData)(1U) + vlSelf->tb_dma__DOT__checks);
    if (__Vtask_tb_dma__DOT__check__24__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_dma__DOT__check__24__name));
    } else {
        vlSelf->tb_dma__DOT__errors = ((IData)(1U) 
                                       + vlSelf->tb_dma__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_dma__DOT__check__24__name));
    }
    VL_WRITEF("DMA full load/drain: %0d/%0d checks passed\n\n",
              32,(vlSelf->tb_dma__DOT__checks - vlSelf->tb_dma__DOT__errors),
              32,vlSelf->tb_dma__DOT__checks);
    vlSelf->tb_dma__DOT__rst_n = 0U;
    vlSelf->tb_dma__DOT__u_in = 0U;
    vlSelf->tb_dma__DOT__bias_fsm_start = 0U;
    vlSelf->tb_dma__DOT__activation_fsm_start = 0U;
    vlSelf->tb_dma__DOT__weight_fsm_start = 0U;
    vlSelf->tb_dma__DOT__bank = 0U;
    vlSelf->tb_dma__DOT__computed_bank_in = 0U;
    vlSelf->tb_dma__DOT__computed_bank_in_valid = 0U;
    vlSelf->tb_dma__DOT__result_we = 0U;
    vlSelf->tb_dma__DOT__start_read_fsm = 0U;
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       96);
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       96);
    vlSelf->tb_dma__DOT__rst_n = 1U;
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       98);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       98);
    VL_WRITEF("==== DMA: result write-in / read-out ====\n");
    __Vtask_tb_dma__DOT__run_result_readback_test__25__unnamedblk7__DOT__i = 0U;
    while (VL_GTS_III(32, 0x100U, __Vtask_tb_dma__DOT__run_result_readback_test__25__unnamedblk7__DOT__i)) {
        vlSelf->tb_dma__DOT__result_data[(0xffU & __Vtask_tb_dma__DOT__run_result_readback_test__25__unnamedblk7__DOT__i)] 
            = (0xffU & ((IData)(0xc0U) + __Vtask_tb_dma__DOT__run_result_readback_test__25__unnamedblk7__DOT__i));
        __Vtask_tb_dma__DOT__run_result_readback_test__25__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vtask_tb_dma__DOT__run_result_readback_test__25__unnamedblk7__DOT__i);
    }
    __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx = 0U;
    vlSelf->tb_dma__DOT__result_we = 1U;
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffff00U 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | vlSelf->tb_dma__DOT__result_data
                                             [(0xffU 
                                               & __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx)]);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffff00ffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(1U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 8U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xff00ffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(2U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x10U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(3U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x18U));
    vlSelf->tb_dma__DOT__computed_bank_in_valid = 1U;
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       306);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       306);
    __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx 
        = ((IData)(4U) + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffff00U 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | vlSelf->tb_dma__DOT__result_data
                                             [(0xffU 
                                               & __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx)]);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffff00ffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(1U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 8U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xff00ffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(2U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x10U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(3U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x18U));
    vlSelf->tb_dma__DOT__computed_bank_in_valid = 1U;
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       306);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       306);
    __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx 
        = ((IData)(4U) + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffff00U 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | vlSelf->tb_dma__DOT__result_data
                                             [(0xffU 
                                               & __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx)]);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffff00ffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(1U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 8U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xff00ffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(2U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x10U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(3U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x18U));
    vlSelf->tb_dma__DOT__computed_bank_in_valid = 1U;
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       306);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       306);
    __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx 
        = ((IData)(4U) + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffff00U 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | vlSelf->tb_dma__DOT__result_data
                                             [(0xffU 
                                               & __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx)]);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffff00ffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(1U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 8U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xff00ffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(2U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x10U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(3U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x18U));
    vlSelf->tb_dma__DOT__computed_bank_in_valid = 1U;
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       306);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       306);
    __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx 
        = ((IData)(4U) + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffff00U 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | vlSelf->tb_dma__DOT__result_data
                                             [(0xffU 
                                               & __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx)]);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffff00ffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(1U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 8U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xff00ffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(2U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x10U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(3U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x18U));
    vlSelf->tb_dma__DOT__computed_bank_in_valid = 1U;
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       306);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       306);
    __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx 
        = ((IData)(4U) + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffff00U 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | vlSelf->tb_dma__DOT__result_data
                                             [(0xffU 
                                               & __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx)]);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffff00ffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(1U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 8U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xff00ffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(2U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x10U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(3U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x18U));
    vlSelf->tb_dma__DOT__computed_bank_in_valid = 1U;
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       306);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       306);
    __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx 
        = ((IData)(4U) + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffff00U 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | vlSelf->tb_dma__DOT__result_data
                                             [(0xffU 
                                               & __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx)]);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffff00ffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(1U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 8U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xff00ffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(2U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x10U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(3U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x18U));
    vlSelf->tb_dma__DOT__computed_bank_in_valid = 1U;
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       306);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       306);
    __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx 
        = ((IData)(4U) + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffff00U 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | vlSelf->tb_dma__DOT__result_data
                                             [(0xffU 
                                               & __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx)]);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffff00ffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(1U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 8U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xff00ffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(2U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x10U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(3U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x18U));
    vlSelf->tb_dma__DOT__computed_bank_in_valid = 1U;
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       306);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       306);
    __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx 
        = ((IData)(4U) + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffff00U 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | vlSelf->tb_dma__DOT__result_data
                                             [(0xffU 
                                               & __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx)]);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffff00ffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(1U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 8U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xff00ffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(2U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x10U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(3U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x18U));
    vlSelf->tb_dma__DOT__computed_bank_in_valid = 1U;
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       306);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       306);
    __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx 
        = ((IData)(4U) + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffff00U 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | vlSelf->tb_dma__DOT__result_data
                                             [(0xffU 
                                               & __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx)]);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffff00ffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(1U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 8U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xff00ffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(2U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x10U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(3U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x18U));
    vlSelf->tb_dma__DOT__computed_bank_in_valid = 1U;
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       306);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       306);
    __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx 
        = ((IData)(4U) + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffff00U 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | vlSelf->tb_dma__DOT__result_data
                                             [(0xffU 
                                               & __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx)]);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffff00ffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(1U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 8U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xff00ffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(2U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x10U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(3U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x18U));
    vlSelf->tb_dma__DOT__computed_bank_in_valid = 1U;
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       306);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       306);
    __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx 
        = ((IData)(4U) + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffff00U 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | vlSelf->tb_dma__DOT__result_data
                                             [(0xffU 
                                               & __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx)]);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffff00ffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(1U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 8U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xff00ffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(2U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x10U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(3U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x18U));
    vlSelf->tb_dma__DOT__computed_bank_in_valid = 1U;
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       306);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       306);
    __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx 
        = ((IData)(4U) + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffff00U 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | vlSelf->tb_dma__DOT__result_data
                                             [(0xffU 
                                               & __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx)]);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffff00ffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(1U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 8U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xff00ffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(2U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x10U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(3U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x18U));
    vlSelf->tb_dma__DOT__computed_bank_in_valid = 1U;
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       306);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       306);
    __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx 
        = ((IData)(4U) + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffff00U 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | vlSelf->tb_dma__DOT__result_data
                                             [(0xffU 
                                               & __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx)]);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffff00ffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(1U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 8U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xff00ffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(2U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x10U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(3U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x18U));
    vlSelf->tb_dma__DOT__computed_bank_in_valid = 1U;
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       306);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       306);
    __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx 
        = ((IData)(4U) + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffff00U 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | vlSelf->tb_dma__DOT__result_data
                                             [(0xffU 
                                               & __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx)]);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffff00ffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(1U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 8U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xff00ffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(2U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x10U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(3U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x18U));
    vlSelf->tb_dma__DOT__computed_bank_in_valid = 1U;
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       306);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       306);
    __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx 
        = ((IData)(4U) + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffff00U 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | vlSelf->tb_dma__DOT__result_data
                                             [(0xffU 
                                               & __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx)]);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffff00ffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(1U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 8U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xff00ffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(2U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x10U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(3U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x18U));
    vlSelf->tb_dma__DOT__computed_bank_in_valid = 1U;
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       306);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       306);
    __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx 
        = ((IData)(4U) + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffff00U 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | vlSelf->tb_dma__DOT__result_data
                                             [(0xffU 
                                               & __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx)]);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffff00ffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(1U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 8U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xff00ffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(2U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x10U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(3U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x18U));
    vlSelf->tb_dma__DOT__computed_bank_in_valid = 1U;
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       306);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       306);
    __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx 
        = ((IData)(4U) + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffff00U 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | vlSelf->tb_dma__DOT__result_data
                                             [(0xffU 
                                               & __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx)]);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffff00ffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(1U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 8U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xff00ffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(2U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x10U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(3U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x18U));
    vlSelf->tb_dma__DOT__computed_bank_in_valid = 1U;
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       306);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       306);
    __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx 
        = ((IData)(4U) + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffff00U 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | vlSelf->tb_dma__DOT__result_data
                                             [(0xffU 
                                               & __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx)]);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffff00ffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(1U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 8U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xff00ffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(2U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x10U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(3U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x18U));
    vlSelf->tb_dma__DOT__computed_bank_in_valid = 1U;
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       306);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       306);
    __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx 
        = ((IData)(4U) + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffff00U 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | vlSelf->tb_dma__DOT__result_data
                                             [(0xffU 
                                               & __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx)]);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffff00ffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(1U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 8U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xff00ffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(2U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x10U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(3U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x18U));
    vlSelf->tb_dma__DOT__computed_bank_in_valid = 1U;
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       306);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       306);
    __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx 
        = ((IData)(4U) + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffff00U 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | vlSelf->tb_dma__DOT__result_data
                                             [(0xffU 
                                               & __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx)]);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffff00ffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(1U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 8U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xff00ffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(2U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x10U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(3U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x18U));
    vlSelf->tb_dma__DOT__computed_bank_in_valid = 1U;
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       306);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       306);
    __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx 
        = ((IData)(4U) + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffff00U 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | vlSelf->tb_dma__DOT__result_data
                                             [(0xffU 
                                               & __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx)]);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffff00ffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(1U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 8U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xff00ffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(2U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x10U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(3U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x18U));
    vlSelf->tb_dma__DOT__computed_bank_in_valid = 1U;
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       306);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       306);
    __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx 
        = ((IData)(4U) + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffff00U 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | vlSelf->tb_dma__DOT__result_data
                                             [(0xffU 
                                               & __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx)]);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffff00ffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(1U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 8U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xff00ffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(2U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x10U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(3U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x18U));
    vlSelf->tb_dma__DOT__computed_bank_in_valid = 1U;
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       306);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       306);
    __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx 
        = ((IData)(4U) + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffff00U 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | vlSelf->tb_dma__DOT__result_data
                                             [(0xffU 
                                               & __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx)]);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffff00ffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(1U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 8U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xff00ffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(2U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x10U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(3U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x18U));
    vlSelf->tb_dma__DOT__computed_bank_in_valid = 1U;
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       306);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       306);
    __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx 
        = ((IData)(4U) + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffff00U 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | vlSelf->tb_dma__DOT__result_data
                                             [(0xffU 
                                               & __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx)]);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffff00ffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(1U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 8U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xff00ffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(2U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x10U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(3U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x18U));
    vlSelf->tb_dma__DOT__computed_bank_in_valid = 1U;
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       306);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       306);
    __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx 
        = ((IData)(4U) + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffff00U 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | vlSelf->tb_dma__DOT__result_data
                                             [(0xffU 
                                               & __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx)]);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffff00ffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(1U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 8U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xff00ffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(2U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x10U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(3U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x18U));
    vlSelf->tb_dma__DOT__computed_bank_in_valid = 1U;
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       306);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       306);
    __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx 
        = ((IData)(4U) + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffff00U 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | vlSelf->tb_dma__DOT__result_data
                                             [(0xffU 
                                               & __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx)]);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffff00ffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(1U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 8U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xff00ffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(2U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x10U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(3U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x18U));
    vlSelf->tb_dma__DOT__computed_bank_in_valid = 1U;
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       306);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       306);
    __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx 
        = ((IData)(4U) + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffff00U 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | vlSelf->tb_dma__DOT__result_data
                                             [(0xffU 
                                               & __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx)]);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffff00ffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(1U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 8U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xff00ffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(2U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x10U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(3U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x18U));
    vlSelf->tb_dma__DOT__computed_bank_in_valid = 1U;
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       306);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       306);
    __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx 
        = ((IData)(4U) + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffff00U 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | vlSelf->tb_dma__DOT__result_data
                                             [(0xffU 
                                               & __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx)]);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffff00ffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(1U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 8U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xff00ffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(2U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x10U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(3U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x18U));
    vlSelf->tb_dma__DOT__computed_bank_in_valid = 1U;
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       306);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       306);
    __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx 
        = ((IData)(4U) + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffff00U 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | vlSelf->tb_dma__DOT__result_data
                                             [(0xffU 
                                               & __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx)]);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffff00ffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(1U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 8U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xff00ffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(2U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x10U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(3U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x18U));
    vlSelf->tb_dma__DOT__computed_bank_in_valid = 1U;
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       306);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       306);
    __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx 
        = ((IData)(4U) + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffff00U 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | vlSelf->tb_dma__DOT__result_data
                                             [(0xffU 
                                               & __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx)]);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffff00ffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(1U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 8U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xff00ffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(2U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x10U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(3U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x18U));
    vlSelf->tb_dma__DOT__computed_bank_in_valid = 1U;
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       306);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       306);
    __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx 
        = ((IData)(4U) + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffff00U 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | vlSelf->tb_dma__DOT__result_data
                                             [(0xffU 
                                               & __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx)]);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffff00ffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(1U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 8U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xff00ffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(2U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x10U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(3U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x18U));
    vlSelf->tb_dma__DOT__computed_bank_in_valid = 1U;
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       306);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       306);
    __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx 
        = ((IData)(4U) + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffff00U 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | vlSelf->tb_dma__DOT__result_data
                                             [(0xffU 
                                               & __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx)]);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffff00ffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(1U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 8U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xff00ffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(2U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x10U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(3U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x18U));
    vlSelf->tb_dma__DOT__computed_bank_in_valid = 1U;
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       306);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       306);
    __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx 
        = ((IData)(4U) + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffff00U 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | vlSelf->tb_dma__DOT__result_data
                                             [(0xffU 
                                               & __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx)]);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffff00ffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(1U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 8U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xff00ffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(2U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x10U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(3U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x18U));
    vlSelf->tb_dma__DOT__computed_bank_in_valid = 1U;
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       306);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       306);
    __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx 
        = ((IData)(4U) + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffff00U 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | vlSelf->tb_dma__DOT__result_data
                                             [(0xffU 
                                               & __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx)]);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffff00ffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(1U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 8U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xff00ffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(2U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x10U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(3U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x18U));
    vlSelf->tb_dma__DOT__computed_bank_in_valid = 1U;
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       306);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       306);
    __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx 
        = ((IData)(4U) + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffff00U 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | vlSelf->tb_dma__DOT__result_data
                                             [(0xffU 
                                               & __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx)]);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffff00ffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(1U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 8U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xff00ffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(2U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x10U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(3U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x18U));
    vlSelf->tb_dma__DOT__computed_bank_in_valid = 1U;
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       306);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       306);
    __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx 
        = ((IData)(4U) + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffff00U 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | vlSelf->tb_dma__DOT__result_data
                                             [(0xffU 
                                               & __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx)]);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffff00ffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(1U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 8U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xff00ffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(2U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x10U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(3U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x18U));
    vlSelf->tb_dma__DOT__computed_bank_in_valid = 1U;
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       306);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       306);
    __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx 
        = ((IData)(4U) + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffff00U 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | vlSelf->tb_dma__DOT__result_data
                                             [(0xffU 
                                               & __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx)]);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffff00ffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(1U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 8U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xff00ffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(2U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x10U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(3U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x18U));
    vlSelf->tb_dma__DOT__computed_bank_in_valid = 1U;
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       306);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       306);
    __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx 
        = ((IData)(4U) + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffff00U 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | vlSelf->tb_dma__DOT__result_data
                                             [(0xffU 
                                               & __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx)]);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffff00ffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(1U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 8U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xff00ffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(2U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x10U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(3U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x18U));
    vlSelf->tb_dma__DOT__computed_bank_in_valid = 1U;
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       306);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       306);
    __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx 
        = ((IData)(4U) + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffff00U 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | vlSelf->tb_dma__DOT__result_data
                                             [(0xffU 
                                               & __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx)]);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffff00ffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(1U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 8U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xff00ffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(2U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x10U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(3U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x18U));
    vlSelf->tb_dma__DOT__computed_bank_in_valid = 1U;
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       306);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       306);
    __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx 
        = ((IData)(4U) + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffff00U 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | vlSelf->tb_dma__DOT__result_data
                                             [(0xffU 
                                               & __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx)]);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffff00ffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(1U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 8U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xff00ffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(2U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x10U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(3U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x18U));
    vlSelf->tb_dma__DOT__computed_bank_in_valid = 1U;
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       306);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       306);
    __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx 
        = ((IData)(4U) + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffff00U 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | vlSelf->tb_dma__DOT__result_data
                                             [(0xffU 
                                               & __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx)]);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffff00ffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(1U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 8U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xff00ffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(2U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x10U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(3U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x18U));
    vlSelf->tb_dma__DOT__computed_bank_in_valid = 1U;
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       306);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       306);
    __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx 
        = ((IData)(4U) + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffff00U 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | vlSelf->tb_dma__DOT__result_data
                                             [(0xffU 
                                               & __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx)]);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffff00ffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(1U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 8U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xff00ffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(2U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x10U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(3U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x18U));
    vlSelf->tb_dma__DOT__computed_bank_in_valid = 1U;
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       306);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       306);
    __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx 
        = ((IData)(4U) + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffff00U 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | vlSelf->tb_dma__DOT__result_data
                                             [(0xffU 
                                               & __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx)]);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffff00ffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(1U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 8U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xff00ffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(2U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x10U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(3U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x18U));
    vlSelf->tb_dma__DOT__computed_bank_in_valid = 1U;
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       306);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       306);
    __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx 
        = ((IData)(4U) + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffff00U 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | vlSelf->tb_dma__DOT__result_data
                                             [(0xffU 
                                               & __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx)]);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffff00ffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(1U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 8U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xff00ffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(2U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x10U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(3U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x18U));
    vlSelf->tb_dma__DOT__computed_bank_in_valid = 1U;
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       306);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       306);
    __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx 
        = ((IData)(4U) + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffff00U 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | vlSelf->tb_dma__DOT__result_data
                                             [(0xffU 
                                               & __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx)]);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffff00ffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(1U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 8U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xff00ffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(2U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x10U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(3U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x18U));
    vlSelf->tb_dma__DOT__computed_bank_in_valid = 1U;
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       306);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       306);
    __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx 
        = ((IData)(4U) + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffff00U 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | vlSelf->tb_dma__DOT__result_data
                                             [(0xffU 
                                               & __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx)]);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffff00ffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(1U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 8U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xff00ffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(2U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x10U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(3U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x18U));
    vlSelf->tb_dma__DOT__computed_bank_in_valid = 1U;
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       306);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       306);
    __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx 
        = ((IData)(4U) + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffff00U 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | vlSelf->tb_dma__DOT__result_data
                                             [(0xffU 
                                               & __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx)]);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffff00ffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(1U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 8U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xff00ffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(2U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x10U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(3U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x18U));
    vlSelf->tb_dma__DOT__computed_bank_in_valid = 1U;
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       306);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       306);
    __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx 
        = ((IData)(4U) + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffff00U 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | vlSelf->tb_dma__DOT__result_data
                                             [(0xffU 
                                               & __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx)]);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffff00ffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(1U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 8U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xff00ffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(2U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x10U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(3U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x18U));
    vlSelf->tb_dma__DOT__computed_bank_in_valid = 1U;
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       306);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       306);
    __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx 
        = ((IData)(4U) + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffff00U 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | vlSelf->tb_dma__DOT__result_data
                                             [(0xffU 
                                               & __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx)]);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffff00ffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(1U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 8U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xff00ffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(2U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x10U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(3U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x18U));
    vlSelf->tb_dma__DOT__computed_bank_in_valid = 1U;
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       306);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       306);
    __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx 
        = ((IData)(4U) + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffff00U 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | vlSelf->tb_dma__DOT__result_data
                                             [(0xffU 
                                               & __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx)]);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffff00ffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(1U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 8U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xff00ffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(2U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x10U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(3U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x18U));
    vlSelf->tb_dma__DOT__computed_bank_in_valid = 1U;
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       306);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       306);
    __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx 
        = ((IData)(4U) + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffff00U 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | vlSelf->tb_dma__DOT__result_data
                                             [(0xffU 
                                               & __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx)]);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffff00ffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(1U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 8U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xff00ffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(2U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x10U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(3U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x18U));
    vlSelf->tb_dma__DOT__computed_bank_in_valid = 1U;
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       306);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       306);
    __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx 
        = ((IData)(4U) + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffff00U 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | vlSelf->tb_dma__DOT__result_data
                                             [(0xffU 
                                               & __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx)]);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffff00ffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(1U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 8U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xff00ffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(2U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x10U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(3U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x18U));
    vlSelf->tb_dma__DOT__computed_bank_in_valid = 1U;
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       306);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       306);
    __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx 
        = ((IData)(4U) + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffff00U 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | vlSelf->tb_dma__DOT__result_data
                                             [(0xffU 
                                               & __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx)]);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffff00ffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(1U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 8U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xff00ffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(2U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x10U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(3U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x18U));
    vlSelf->tb_dma__DOT__computed_bank_in_valid = 1U;
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       306);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       306);
    __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx 
        = ((IData)(4U) + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffff00U 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | vlSelf->tb_dma__DOT__result_data
                                             [(0xffU 
                                               & __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx)]);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffff00ffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(1U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 8U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xff00ffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(2U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x10U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(3U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x18U));
    vlSelf->tb_dma__DOT__computed_bank_in_valid = 1U;
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       306);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       306);
    __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx 
        = ((IData)(4U) + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffff00U 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | vlSelf->tb_dma__DOT__result_data
                                             [(0xffU 
                                               & __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx)]);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffff00ffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(1U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 8U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xff00ffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(2U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x10U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(3U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x18U));
    vlSelf->tb_dma__DOT__computed_bank_in_valid = 1U;
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       306);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       306);
    __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx 
        = ((IData)(4U) + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffff00U 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | vlSelf->tb_dma__DOT__result_data
                                             [(0xffU 
                                               & __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx)]);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffff00ffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(1U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 8U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xff00ffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(2U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x10U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(3U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x18U));
    vlSelf->tb_dma__DOT__computed_bank_in_valid = 1U;
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       306);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       306);
    __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx 
        = ((IData)(4U) + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffff00U 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | vlSelf->tb_dma__DOT__result_data
                                             [(0xffU 
                                               & __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx)]);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffff00ffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(1U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 8U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xff00ffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(2U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x10U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(3U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x18U));
    vlSelf->tb_dma__DOT__computed_bank_in_valid = 1U;
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       306);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       306);
    __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx 
        = ((IData)(4U) + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffff00U 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | vlSelf->tb_dma__DOT__result_data
                                             [(0xffU 
                                               & __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx)]);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffff00ffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(1U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 8U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xff00ffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(2U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x10U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(3U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x18U));
    vlSelf->tb_dma__DOT__computed_bank_in_valid = 1U;
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       306);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       306);
    __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx 
        = ((IData)(4U) + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffff00U 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | vlSelf->tb_dma__DOT__result_data
                                             [(0xffU 
                                               & __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx)]);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffff00ffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(1U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 8U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xff00ffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(2U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x10U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(3U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x18U));
    vlSelf->tb_dma__DOT__computed_bank_in_valid = 1U;
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       306);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       306);
    __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx 
        = ((IData)(4U) + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffff00U 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | vlSelf->tb_dma__DOT__result_data
                                             [(0xffU 
                                               & __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx)]);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffff00ffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(1U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 8U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xff00ffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(2U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x10U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(3U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x18U));
    vlSelf->tb_dma__DOT__computed_bank_in_valid = 1U;
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       306);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       306);
    __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx 
        = ((IData)(4U) + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffff00U 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | vlSelf->tb_dma__DOT__result_data
                                             [(0xffU 
                                               & __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx)]);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffff00ffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(1U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 8U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xff00ffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(2U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x10U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(3U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x18U));
    vlSelf->tb_dma__DOT__computed_bank_in_valid = 1U;
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       306);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       306);
    __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx 
        = ((IData)(4U) + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffff00U 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | vlSelf->tb_dma__DOT__result_data
                                             [(0xffU 
                                               & __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx)]);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffff00ffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(1U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 8U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xff00ffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(2U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x10U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(3U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x18U));
    vlSelf->tb_dma__DOT__computed_bank_in_valid = 1U;
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       306);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       306);
    __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx 
        = ((IData)(4U) + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffff00U 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | vlSelf->tb_dma__DOT__result_data
                                             [(0xffU 
                                               & __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx)]);
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffff00ffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(1U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 8U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xff00ffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(2U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x10U));
    vlSelf->tb_dma__DOT__computed_bank_in = ((0xffffffU 
                                              & vlSelf->tb_dma__DOT__computed_bank_in) 
                                             | (vlSelf->tb_dma__DOT__result_data
                                                [(0xffU 
                                                  & ((IData)(3U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx))] 
                                                << 0x18U));
    vlSelf->tb_dma__DOT__computed_bank_in_valid = 1U;
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       306);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       306);
    __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx 
        = ((IData)(4U) + __Vtask_tb_dma__DOT__run_result_readback_test__25__w_idx);
    vlSelf->tb_dma__DOT__computed_bank_in_valid = 0U;
    vlSelf->tb_dma__DOT__result_we = 0U;
    __Vtask_tb_dma__DOT__check__27__cond = (0x100U 
                                            == (IData)(vlSelf->tb_dma__DOT__dut__DOT__result_buf__DOT__wr_ptr));
    __Vtask_tb_dma__DOT__check__27__name = std::string{"all 256 result bytes written into result_buf (64 groups of 4)"};
    vlSelf->tb_dma__DOT__checks = ((IData)(1U) + vlSelf->tb_dma__DOT__checks);
    if (__Vtask_tb_dma__DOT__check__27__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_dma__DOT__check__27__name));
    } else {
        vlSelf->tb_dma__DOT__errors = ((IData)(1U) 
                                       + vlSelf->tb_dma__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_dma__DOT__check__27__name));
    }
    __Vtask_tb_dma__DOT__check__28__cond = (0x100U 
                                            == (IData)(vlSelf->tb_dma__DOT__dut__DOT__result_buf__DOT__wr_ptr));
    __Vtask_tb_dma__DOT__check__28__name = std::string{"result_full asserted once the full 256 bytes are written"};
    vlSelf->tb_dma__DOT__checks = ((IData)(1U) + vlSelf->tb_dma__DOT__checks);
    if (__Vtask_tb_dma__DOT__check__28__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_dma__DOT__check__28__name));
    } else {
        vlSelf->tb_dma__DOT__errors = ((IData)(1U) 
                                       + vlSelf->tb_dma__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_dma__DOT__check__28__name));
    }
    __Vtask_tb_dma__DOT__run_result_readback_test__25__rc_idx = 0U;
    __Vtask_tb_dma__DOT__run_result_readback_test__25__safety = 0U;
    vlSelf->tb_dma__DOT__start_read_fsm = 1U;
    co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_dma.clk)", 
                                                       "tb/tb_dma.sv", 
                                                       318);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_dma.sv", 
                                       318);
    vlSelf->tb_dma__DOT__start_read_fsm = 0U;
    while ((VL_GTS_III(32, 0x100U, __Vtask_tb_dma__DOT__run_result_readback_test__25__rc_idx) 
            & VL_GTS_III(32, 0x12cU, __Vtask_tb_dma__DOT__run_result_readback_test__25__safety))) {
        if (vlSelf->tb_dma__DOT__dut__DOT__result_re_valid) {
            vlSelf->tb_dma__DOT__result_captured[(0xffU 
                                                  & __Vtask_tb_dma__DOT__run_result_readback_test__25__rc_idx)] 
                = (0xffU & vlSelf->tb_dma__DOT__dut__DOT__result_re_out);
            vlSelf->tb_dma__DOT__result_captured[(0xffU 
                                                  & ((IData)(1U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__rc_idx))] 
                = (0xffU & (vlSelf->tb_dma__DOT__dut__DOT__result_re_out 
                            >> 8U));
            vlSelf->tb_dma__DOT__result_captured[(0xffU 
                                                  & ((IData)(2U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__rc_idx))] 
                = (0xffU & (vlSelf->tb_dma__DOT__dut__DOT__result_re_out 
                            >> 0x10U));
            vlSelf->tb_dma__DOT__result_captured[(0xffU 
                                                  & ((IData)(3U) 
                                                     + __Vtask_tb_dma__DOT__run_result_readback_test__25__rc_idx))] 
                = (vlSelf->tb_dma__DOT__dut__DOT__result_re_out 
                   >> 0x18U);
            __Vtask_tb_dma__DOT__run_result_readback_test__25__rc_idx 
                = ((IData)(4U) + __Vtask_tb_dma__DOT__run_result_readback_test__25__rc_idx);
        }
        co_await vlSelf->__VtrigSched_h7a6a0639__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_dma.clk)", 
                                                           "tb/tb_dma.sv", 
                                                           329);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_dma.sv", 
                                           329);
        __Vtask_tb_dma__DOT__run_result_readback_test__25__safety 
            = ((IData)(1U) + __Vtask_tb_dma__DOT__run_result_readback_test__25__safety);
    }
    __Vtask_tb_dma__DOT__check__29__cond = (0x100U 
                                            == __Vtask_tb_dma__DOT__run_result_readback_test__25__rc_idx);
    __Vtask_tb_dma__DOT__check__29__name = std::string{"all 256 result bytes streamed back out via result_re_out before timing out"};
    vlSelf->tb_dma__DOT__checks = ((IData)(1U) + vlSelf->tb_dma__DOT__checks);
    if (__Vtask_tb_dma__DOT__check__29__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_dma__DOT__check__29__name));
    } else {
        vlSelf->tb_dma__DOT__errors = ((IData)(1U) 
                                       + vlSelf->tb_dma__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_dma__DOT__check__29__name));
    }
    __Vtask_tb_dma__DOT__run_result_readback_test__25__result_order_ok = 1U;
    __Vtask_tb_dma__DOT__run_result_readback_test__25__unnamedblk9__DOT__i = 0U;
    while (VL_GTS_III(32, 0x100U, __Vtask_tb_dma__DOT__run_result_readback_test__25__unnamedblk9__DOT__i)) {
        if ((vlSelf->tb_dma__DOT__result_captured[(0xffU 
                                                   & __Vtask_tb_dma__DOT__run_result_readback_test__25__unnamedblk9__DOT__i)] 
             != vlSelf->tb_dma__DOT__result_data[(0xffU 
                                                  & __Vtask_tb_dma__DOT__run_result_readback_test__25__unnamedblk9__DOT__i)])) {
            __Vtask_tb_dma__DOT__run_result_readback_test__25__result_order_ok = 0U;
        }
        __Vtask_tb_dma__DOT__run_result_readback_test__25__unnamedblk9__DOT__i 
            = ((IData)(1U) + __Vtask_tb_dma__DOT__run_result_readback_test__25__unnamedblk9__DOT__i);
    }
    __Vtask_tb_dma__DOT__check__30__cond = __Vtask_tb_dma__DOT__run_result_readback_test__25__result_order_ok;
    __Vtask_tb_dma__DOT__check__30__name = std::string{"read-back replayed all 256 result bytes in FIFO order"};
    vlSelf->tb_dma__DOT__checks = ((IData)(1U) + vlSelf->tb_dma__DOT__checks);
    if (__Vtask_tb_dma__DOT__check__30__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_dma__DOT__check__30__name));
    } else {
        vlSelf->tb_dma__DOT__errors = ((IData)(1U) 
                                       + vlSelf->tb_dma__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_dma__DOT__check__30__name));
    }
    __Vtask_tb_dma__DOT__check__31__cond = (0U == (IData)(vlSelf->tb_dma__DOT__dut__DOT__r_fsm__DOT__current_state));
    __Vtask_tb_dma__DOT__check__31__name = std::string{"read FSM returned to IDLE once computed_in_max was reached"};
    vlSelf->tb_dma__DOT__checks = ((IData)(1U) + vlSelf->tb_dma__DOT__checks);
    if (__Vtask_tb_dma__DOT__check__31__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_dma__DOT__check__31__name));
    } else {
        vlSelf->tb_dma__DOT__errors = ((IData)(1U) 
                                       + vlSelf->tb_dma__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_dma__DOT__check__31__name));
    }
    __Vtask_tb_dma__DOT__check__32__cond = vlSelf->tb_dma__DOT__dut__DOT__result_empty;
    __Vtask_tb_dma__DOT__check__32__name = std::string{"result buffer fully drained (empty) after readback"};
    vlSelf->tb_dma__DOT__checks = ((IData)(1U) + vlSelf->tb_dma__DOT__checks);
    if (__Vtask_tb_dma__DOT__check__32__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_dma__DOT__check__32__name));
    } else {
        vlSelf->tb_dma__DOT__errors = ((IData)(1U) 
                                       + vlSelf->tb_dma__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_dma__DOT__check__32__name));
    }
    VL_WRITEF("DMA result write-in/read-out: %0d/%0d checks passed\n\n==== SUMMARY ====\ntotal: %0d/%0d checks passed\n",
              32,(vlSelf->tb_dma__DOT__checks - vlSelf->tb_dma__DOT__errors),
              32,vlSelf->tb_dma__DOT__checks,32,(vlSelf->tb_dma__DOT__checks 
                                                 - vlSelf->tb_dma__DOT__errors),
              32,vlSelf->tb_dma__DOT__checks);
    VL_FINISH_MT("tb/tb_dma.sv", 354, "");
}

VL_INLINE_OPT VlCoroutine Vtb_dma___024root___eval_initial__TOP__Vtiming__1(Vtb_dma___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dma___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "tb/tb_dma.sv", 
                                           42);
        vlSelf->tb_dma__DOT__clk = (1U & (~ (IData)(vlSelf->tb_dma__DOT__clk)));
    }
}

VL_INLINE_OPT void Vtb_dma___024root___act_comb__TOP__0(Vtb_dma___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dma___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->tb_dma__DOT__dut__DOT__weight_we_in = (0xffffff00U 
                                                   & vlSelf->tb_dma__DOT__dut__DOT__weight_we_in);
    vlSelf->tb_dma__DOT__dut__DOT__bias_we_in = (0xffffff00U 
                                                 & vlSelf->tb_dma__DOT__dut__DOT__bias_we_in);
    vlSelf->tb_dma__DOT__dut__DOT__act_we_in = (0xffffff00U 
                                                & vlSelf->tb_dma__DOT__dut__DOT__act_we_in);
    if ((1U & (~ (IData)(vlSelf->tb_dma__DOT__dut__DOT__any_busy)))) {
        if ((1U == (IData)(vlSelf->tb_dma__DOT__bank))) {
            vlSelf->tb_dma__DOT__dut__DOT__weight_we_in 
                = ((0xffffff00U & vlSelf->tb_dma__DOT__dut__DOT__weight_we_in) 
                   | (IData)(vlSelf->tb_dma__DOT__u_in));
        }
        if ((1U != (IData)(vlSelf->tb_dma__DOT__bank))) {
            if ((2U == (IData)(vlSelf->tb_dma__DOT__bank))) {
                vlSelf->tb_dma__DOT__dut__DOT__bias_we_in 
                    = ((0xffffff00U & vlSelf->tb_dma__DOT__dut__DOT__bias_we_in) 
                       | (IData)(vlSelf->tb_dma__DOT__u_in));
            }
            if ((2U != (IData)(vlSelf->tb_dma__DOT__bank))) {
                if ((3U == (IData)(vlSelf->tb_dma__DOT__bank))) {
                    vlSelf->tb_dma__DOT__dut__DOT__act_we_in 
                        = ((0xffffff00U & vlSelf->tb_dma__DOT__dut__DOT__act_we_in) 
                           | (IData)(vlSelf->tb_dma__DOT__u_in));
                }
            }
        }
    }
    vlSelf->tb_dma__DOT__dut__DOT__weight_clr = 0U;
    vlSelf->tb_dma__DOT__dut__DOT__r_fsm__DOT__next_state 
        = vlSelf->tb_dma__DOT__dut__DOT__r_fsm__DOT__current_state;
    if ((0U == (IData)(vlSelf->tb_dma__DOT__dut__DOT__r_fsm__DOT__current_state))) {
        vlSelf->tb_dma__DOT__dut__DOT__r_fsm__DOT__next_state 
            = ((IData)(vlSelf->tb_dma__DOT__start_read_fsm)
                ? 1U : 0U);
    } else if ((1U == (IData)(vlSelf->tb_dma__DOT__dut__DOT__r_fsm__DOT__current_state))) {
        vlSelf->tb_dma__DOT__dut__DOT__r_fsm__DOT__next_state 
            = ((0x40U == (IData)(vlSelf->tb_dma__DOT__dut__DOT__read_count))
                ? 0U : 1U);
    }
    vlSelf->tb_dma__DOT__dut__DOT__w_fsm__DOT__next_state 
        = vlSelf->tb_dma__DOT__dut__DOT__w_fsm__DOT__current_state;
    if ((0U == (IData)(vlSelf->tb_dma__DOT__dut__DOT__w_fsm__DOT__current_state))) {
        if (((IData)(vlSelf->tb_dma__DOT__weight_fsm_start) 
             & (~ (IData)(vlSelf->tb_dma__DOT__dut__DOT__any_busy)))) {
            vlSelf->tb_dma__DOT__dut__DOT__weight_clr = 1U;
            vlSelf->tb_dma__DOT__dut__DOT__w_fsm__DOT__next_state = 1U;
        } else {
            vlSelf->tb_dma__DOT__dut__DOT__w_fsm__DOT__next_state = 0U;
        }
    } else if ((1U == (IData)(vlSelf->tb_dma__DOT__dut__DOT__w_fsm__DOT__current_state))) {
        vlSelf->tb_dma__DOT__dut__DOT__w_fsm__DOT__next_state 
            = ((0x100U == (IData)(vlSelf->tb_dma__DOT__dut__DOT__weight_buf__DOT__wr_ptr))
                ? 2U : 1U);
    } else if ((2U == (IData)(vlSelf->tb_dma__DOT__dut__DOT__w_fsm__DOT__current_state))) {
        vlSelf->tb_dma__DOT__dut__DOT__w_fsm__DOT__next_state = 0U;
    }
    vlSelf->tb_dma__DOT__dut__DOT__b_fsm__DOT__next_state 
        = vlSelf->tb_dma__DOT__dut__DOT__b_fsm__DOT__current_state;
    if ((0U == (IData)(vlSelf->tb_dma__DOT__dut__DOT__b_fsm__DOT__current_state))) {
        vlSelf->tb_dma__DOT__dut__DOT__b_fsm__DOT__next_state 
            = (((IData)(vlSelf->tb_dma__DOT__bias_fsm_start) 
                & (~ (IData)(vlSelf->tb_dma__DOT__dut__DOT__b_fsm__DOT__any_busy)))
                ? 1U : 0U);
    } else if ((1U == (IData)(vlSelf->tb_dma__DOT__dut__DOT__b_fsm__DOT__current_state))) {
        vlSelf->tb_dma__DOT__dut__DOT__b_fsm__DOT__next_state 
            = ((0x10U == (IData)(vlSelf->tb_dma__DOT__dut__DOT__bias_buf__DOT__wr_ptr))
                ? 2U : 1U);
    } else if ((2U == (IData)(vlSelf->tb_dma__DOT__dut__DOT__b_fsm__DOT__current_state))) {
        vlSelf->tb_dma__DOT__dut__DOT__b_fsm__DOT__next_state = 0U;
    }
    vlSelf->tb_dma__DOT__dut__DOT__a_fsm__DOT__next_state 
        = vlSelf->tb_dma__DOT__dut__DOT__a_fsm__DOT__current_state;
    if ((0U == (IData)(vlSelf->tb_dma__DOT__dut__DOT__a_fsm__DOT__current_state))) {
        vlSelf->tb_dma__DOT__dut__DOT__a_fsm__DOT__next_state 
            = (((IData)(vlSelf->tb_dma__DOT__activation_fsm_start) 
                & (~ (IData)(vlSelf->tb_dma__DOT__dut__DOT__a_fsm__DOT__any_busy)))
                ? 1U : 0U);
    } else if ((1U == (IData)(vlSelf->tb_dma__DOT__dut__DOT__a_fsm__DOT__current_state))) {
        vlSelf->tb_dma__DOT__dut__DOT__a_fsm__DOT__next_state 
            = ((0x10U == (IData)(vlSelf->tb_dma__DOT__dut__DOT__act_buf__DOT__wr_ptr))
                ? 2U : 1U);
    } else if ((2U == (IData)(vlSelf->tb_dma__DOT__dut__DOT__a_fsm__DOT__current_state))) {
        vlSelf->tb_dma__DOT__dut__DOT__a_fsm__DOT__next_state = 0U;
    }
}

void Vtb_dma___024root___eval_act(Vtb_dma___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dma___024root___eval_act\n"); );
    // Body
    if ((6ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_dma___024root___act_comb__TOP__0(vlSelf);
    }
}

extern const VlWide<64>/*2047:0*/ Vtb_dma__ConstPool__CONST_h6be9aa18_0;

VL_INLINE_OPT void Vtb_dma___024root___nba_sequent__TOP__0(Vtb_dma___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dma___024root___nba_sequent__TOP__0\n"); );
    // Init
    SData/*9:0*/ __Vdly__tb_dma__DOT__dut__DOT__weight_buf__DOT__wr_ptr;
    __Vdly__tb_dma__DOT__dut__DOT__weight_buf__DOT__wr_ptr = 0;
    IData/*31:0*/ __Vilp;
    SData/*9:0*/ __Vdly__tb_dma__DOT__dut__DOT__weight_buf__DOT__rd_ptr;
    __Vdly__tb_dma__DOT__dut__DOT__weight_buf__DOT__rd_ptr = 0;
    SData/*9:0*/ __Vdly__tb_dma__DOT__dut__DOT__act_buf__DOT__wr_ptr;
    __Vdly__tb_dma__DOT__dut__DOT__act_buf__DOT__wr_ptr = 0;
    SData/*9:0*/ __Vdly__tb_dma__DOT__dut__DOT__bias_buf__DOT__wr_ptr;
    __Vdly__tb_dma__DOT__dut__DOT__bias_buf__DOT__wr_ptr = 0;
    SData/*9:0*/ __Vdly__tb_dma__DOT__dut__DOT__result_buf__DOT__wr_ptr;
    __Vdly__tb_dma__DOT__dut__DOT__result_buf__DOT__wr_ptr = 0;
    SData/*9:0*/ __Vdly__tb_dma__DOT__dut__DOT__result_buf__DOT__rd_ptr;
    __Vdly__tb_dma__DOT__dut__DOT__result_buf__DOT__rd_ptr = 0;
    SData/*8:0*/ __Vdly__tb_dma__DOT__dut__DOT__read_count;
    __Vdly__tb_dma__DOT__dut__DOT__read_count = 0;
    // Body
    __Vdly__tb_dma__DOT__dut__DOT__result_buf__DOT__wr_ptr 
        = vlSelf->tb_dma__DOT__dut__DOT__result_buf__DOT__wr_ptr;
    __Vdly__tb_dma__DOT__dut__DOT__read_count = vlSelf->tb_dma__DOT__dut__DOT__read_count;
    __Vdly__tb_dma__DOT__dut__DOT__bias_buf__DOT__wr_ptr 
        = vlSelf->tb_dma__DOT__dut__DOT__bias_buf__DOT__wr_ptr;
    __Vdly__tb_dma__DOT__dut__DOT__act_buf__DOT__wr_ptr 
        = vlSelf->tb_dma__DOT__dut__DOT__act_buf__DOT__wr_ptr;
    __Vdly__tb_dma__DOT__dut__DOT__weight_buf__DOT__wr_ptr 
        = vlSelf->tb_dma__DOT__dut__DOT__weight_buf__DOT__wr_ptr;
    __Vdly__tb_dma__DOT__dut__DOT__result_buf__DOT__rd_ptr 
        = vlSelf->tb_dma__DOT__dut__DOT__result_buf__DOT__rd_ptr;
    __Vdly__tb_dma__DOT__dut__DOT__weight_buf__DOT__rd_ptr 
        = vlSelf->tb_dma__DOT__dut__DOT__weight_buf__DOT__rd_ptr;
    if (vlSelf->tb_dma__DOT__rst_n) {
        if (vlSelf->tb_dma__DOT__dut__DOT__clr_counter) {
            __Vdly__tb_dma__DOT__dut__DOT__read_count = 0U;
        } else if (vlSelf->tb_dma__DOT__dut__DOT__en_counter) {
            __Vdly__tb_dma__DOT__dut__DOT__read_count 
                = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->tb_dma__DOT__dut__DOT__read_count)));
        }
        vlSelf->tb_dma__DOT__dut__DOT__a_fsm__DOT__current_state 
            = vlSelf->tb_dma__DOT__dut__DOT__a_fsm__DOT__next_state;
        vlSelf->tb_dma__DOT__dut__DOT__b_fsm__DOT__current_state 
            = vlSelf->tb_dma__DOT__dut__DOT__b_fsm__DOT__next_state;
        vlSelf->tb_dma__DOT__dut__DOT__w_fsm__DOT__current_state 
            = vlSelf->tb_dma__DOT__dut__DOT__w_fsm__DOT__next_state;
        vlSelf->tb_dma__DOT__dut__DOT__r_fsm__DOT__current_state 
            = vlSelf->tb_dma__DOT__dut__DOT__r_fsm__DOT__next_state;
        if (vlSelf->tb_dma__DOT__dut__DOT__result_clr) {
            vlSelf->tb_dma__DOT__dut__DOT__result_re_valid = 0U;
            __Vdly__tb_dma__DOT__dut__DOT__result_buf__DOT__rd_ptr = 0U;
            __Vdly__tb_dma__DOT__dut__DOT__result_buf__DOT__wr_ptr = 0U;
        } else {
            if ((1U & (~ (IData)(vlSelf->tb_dma__DOT__result_we)))) {
                if (vlSelf->tb_dma__DOT__dut__DOT__result_re) {
                    if ((1U & (~ (IData)(vlSelf->tb_dma__DOT__dut__DOT__result_empty)))) {
                        vlSelf->tb_dma__DOT__dut__DOT__result_re_out 
                            = ((0xffffff00U & vlSelf->tb_dma__DOT__dut__DOT__result_re_out) 
                               | (0xffU & (((0U == 
                                             (0x1fU 
                                              & VL_SHIFTL_III(11,32,32, (IData)(vlSelf->tb_dma__DOT__dut__DOT__result_buf__DOT__rd_ptr), 3U)))
                                             ? 0U : 
                                            (vlSelf->tb_dma__DOT__dut__DOT__result_buf__DOT__buff[
                                             (((IData)(7U) 
                                               + (0x7ffU 
                                                  & VL_SHIFTL_III(11,32,32, (IData)(vlSelf->tb_dma__DOT__dut__DOT__result_buf__DOT__rd_ptr), 3U))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(11,32,32, (IData)(vlSelf->tb_dma__DOT__dut__DOT__result_buf__DOT__rd_ptr), 3U))))) 
                                           | (vlSelf->tb_dma__DOT__dut__DOT__result_buf__DOT__buff[
                                              (0x3fU 
                                               & (VL_SHIFTL_III(11,32,32, (IData)(vlSelf->tb_dma__DOT__dut__DOT__result_buf__DOT__rd_ptr), 3U) 
                                                  >> 5U))] 
                                              >> (0x1fU 
                                                  & VL_SHIFTL_III(11,32,32, (IData)(vlSelf->tb_dma__DOT__dut__DOT__result_buf__DOT__rd_ptr), 3U))))));
                        vlSelf->tb_dma__DOT__dut__DOT__result_re_out 
                            = ((0xffff00ffU & vlSelf->tb_dma__DOT__dut__DOT__result_re_out) 
                               | (0xff00U & ((((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, 
                                                                 ((IData)(1U) 
                                                                  + (IData)(vlSelf->tb_dma__DOT__dut__DOT__result_buf__DOT__rd_ptr)), 3U)))
                                                ? 0U
                                                : (
                                                   vlSelf->tb_dma__DOT__dut__DOT__result_buf__DOT__buff[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0x7ffU 
                                                      & VL_SHIFTL_III(11,32,32, 
                                                                      ((IData)(1U) 
                                                                       + (IData)(vlSelf->tb_dma__DOT__dut__DOT__result_buf__DOT__rd_ptr)), 3U))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(11,32,32, 
                                                                     ((IData)(1U) 
                                                                      + (IData)(vlSelf->tb_dma__DOT__dut__DOT__result_buf__DOT__rd_ptr)), 3U))))) 
                                              | (vlSelf->tb_dma__DOT__dut__DOT__result_buf__DOT__buff[
                                                 (0x3fU 
                                                  & (VL_SHIFTL_III(11,32,32, 
                                                                   ((IData)(1U) 
                                                                    + (IData)(vlSelf->tb_dma__DOT__dut__DOT__result_buf__DOT__rd_ptr)), 3U) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(11,32,32, 
                                                                  ((IData)(1U) 
                                                                   + (IData)(vlSelf->tb_dma__DOT__dut__DOT__result_buf__DOT__rd_ptr)), 3U)))) 
                                             << 8U)));
                        vlSelf->tb_dma__DOT__dut__DOT__result_re_out 
                            = ((0xff00ffffU & vlSelf->tb_dma__DOT__dut__DOT__result_re_out) 
                               | (0xff0000U & ((((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(11,32,32, 
                                                                   ((IData)(2U) 
                                                                    + (IData)(vlSelf->tb_dma__DOT__dut__DOT__result_buf__DOT__rd_ptr)), 3U)))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->tb_dma__DOT__dut__DOT__result_buf__DOT__buff[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0x7ffU 
                                                     & VL_SHIFTL_III(11,32,32, 
                                                                     ((IData)(2U) 
                                                                      + (IData)(vlSelf->tb_dma__DOT__dut__DOT__result_buf__DOT__rd_ptr)), 3U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(11,32,32, 
                                                                    ((IData)(2U) 
                                                                     + (IData)(vlSelf->tb_dma__DOT__dut__DOT__result_buf__DOT__rd_ptr)), 3U))))) 
                                                | (vlSelf->tb_dma__DOT__dut__DOT__result_buf__DOT__buff[
                                                   (0x3fU 
                                                    & (VL_SHIFTL_III(11,32,32, 
                                                                     ((IData)(2U) 
                                                                      + (IData)(vlSelf->tb_dma__DOT__dut__DOT__result_buf__DOT__rd_ptr)), 3U) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(11,32,32, 
                                                                    ((IData)(2U) 
                                                                     + (IData)(vlSelf->tb_dma__DOT__dut__DOT__result_buf__DOT__rd_ptr)), 3U)))) 
                                               << 0x10U)));
                        vlSelf->tb_dma__DOT__dut__DOT__result_re_out 
                            = ((0xffffffU & vlSelf->tb_dma__DOT__dut__DOT__result_re_out) 
                               | ((((0U == (0x1fU & 
                                            VL_SHIFTL_III(11,32,32, 
                                                          ((IData)(3U) 
                                                           + (IData)(vlSelf->tb_dma__DOT__dut__DOT__result_buf__DOT__rd_ptr)), 3U)))
                                     ? 0U : (vlSelf->tb_dma__DOT__dut__DOT__result_buf__DOT__buff[
                                             (((IData)(7U) 
                                               + (0x7ffU 
                                                  & VL_SHIFTL_III(11,32,32, 
                                                                  ((IData)(3U) 
                                                                   + (IData)(vlSelf->tb_dma__DOT__dut__DOT__result_buf__DOT__rd_ptr)), 3U))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(11,32,32, 
                                                                  ((IData)(3U) 
                                                                   + (IData)(vlSelf->tb_dma__DOT__dut__DOT__result_buf__DOT__rd_ptr)), 3U))))) 
                                   | (vlSelf->tb_dma__DOT__dut__DOT__result_buf__DOT__buff[
                                      (0x3fU & (VL_SHIFTL_III(11,32,32, 
                                                              ((IData)(3U) 
                                                               + (IData)(vlSelf->tb_dma__DOT__dut__DOT__result_buf__DOT__rd_ptr)), 3U) 
                                                >> 5U))] 
                                      >> (0x1fU & VL_SHIFTL_III(11,32,32, 
                                                                ((IData)(3U) 
                                                                 + (IData)(vlSelf->tb_dma__DOT__dut__DOT__result_buf__DOT__rd_ptr)), 3U)))) 
                                  << 0x18U));
                        __Vdly__tb_dma__DOT__dut__DOT__result_buf__DOT__rd_ptr 
                            = (0x3ffU & ((IData)(4U) 
                                         + (IData)(vlSelf->tb_dma__DOT__dut__DOT__result_buf__DOT__rd_ptr)));
                    }
                }
            }
            if (vlSelf->tb_dma__DOT__result_we) {
                if (((IData)(vlSelf->tb_dma__DOT__computed_bank_in_valid) 
                     & (0x100U != (IData)(vlSelf->tb_dma__DOT__dut__DOT__result_buf__DOT__wr_ptr)))) {
                    vlSelf->tb_dma__DOT__dut__DOT__result_re_valid = 0U;
                }
                if (((IData)(vlSelf->tb_dma__DOT__computed_bank_in_valid) 
                     & (~ (IData)(vlSelf->tb_dma__DOT__dut__DOT__result_full)))) {
                    VL_ASSIGNSEL_WI(2048,8,(0x7ffU 
                                            & VL_SHIFTL_III(11,32,32, (IData)(vlSelf->tb_dma__DOT__dut__DOT__result_buf__DOT__wr_ptr), 3U)), vlSelf->tb_dma__DOT__dut__DOT__result_buf__DOT__buff, 
                                    (0xffU & vlSelf->tb_dma__DOT__computed_bank_in));
                    VL_ASSIGNSEL_WI(2048,8,(0x7ffU 
                                            & VL_SHIFTL_III(11,32,32, 
                                                            ((IData)(1U) 
                                                             + (IData)(vlSelf->tb_dma__DOT__dut__DOT__result_buf__DOT__wr_ptr)), 3U)), vlSelf->tb_dma__DOT__dut__DOT__result_buf__DOT__buff, 
                                    (0xffU & (vlSelf->tb_dma__DOT__computed_bank_in 
                                              >> 8U)));
                    VL_ASSIGNSEL_WI(2048,8,(0x7ffU 
                                            & VL_SHIFTL_III(11,32,32, 
                                                            ((IData)(2U) 
                                                             + (IData)(vlSelf->tb_dma__DOT__dut__DOT__result_buf__DOT__wr_ptr)), 3U)), vlSelf->tb_dma__DOT__dut__DOT__result_buf__DOT__buff, 
                                    (0xffU & (vlSelf->tb_dma__DOT__computed_bank_in 
                                              >> 0x10U)));
                    VL_ASSIGNSEL_WI(2048,8,(0x7ffU 
                                            & VL_SHIFTL_III(11,32,32, 
                                                            ((IData)(3U) 
                                                             + (IData)(vlSelf->tb_dma__DOT__dut__DOT__result_buf__DOT__wr_ptr)), 3U)), vlSelf->tb_dma__DOT__dut__DOT__result_buf__DOT__buff, 
                                    (vlSelf->tb_dma__DOT__computed_bank_in 
                                     >> 0x18U));
                    __Vdly__tb_dma__DOT__dut__DOT__result_buf__DOT__wr_ptr 
                        = (0x3ffU & ((IData)(4U) + (IData)(vlSelf->tb_dma__DOT__dut__DOT__result_buf__DOT__wr_ptr)));
                }
            } else if (vlSelf->tb_dma__DOT__dut__DOT__result_re) {
                vlSelf->tb_dma__DOT__dut__DOT__result_re_valid 
                    = (1U & (~ (IData)(vlSelf->tb_dma__DOT__dut__DOT__result_empty)));
            }
        }
        if (vlSelf->tb_dma__DOT__dut__DOT__bias_clr) {
            __Vdly__tb_dma__DOT__dut__DOT__bias_buf__DOT__wr_ptr = 0U;
        } else if (vlSelf->tb_dma__DOT__dut__DOT__bias_we) {
            if (((~ (IData)(vlSelf->tb_dma__DOT__dut__DOT__bias_full)) 
                 & (IData)(vlSelf->tb_dma__DOT__dut__DOT__bias_we))) {
                VL_ASSIGNSEL_WI(128,8,(0x7fU & VL_SHIFTL_III(7,32,32, (IData)(vlSelf->tb_dma__DOT__dut__DOT__bias_buf__DOT__wr_ptr), 3U)), vlSelf->tb_dma__DOT__dut__DOT__bias_buf__DOT__buff, 
                                (0xffU & vlSelf->tb_dma__DOT__dut__DOT__bias_we_in));
                __Vdly__tb_dma__DOT__dut__DOT__bias_buf__DOT__wr_ptr 
                    = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->tb_dma__DOT__dut__DOT__bias_buf__DOT__wr_ptr)));
            } else if (((IData)(vlSelf->tb_dma__DOT__dut__DOT__bias_we) 
                        & (~ (IData)(vlSelf->tb_dma__DOT__dut__DOT__bias_full)))) {
                VL_ASSIGNSEL_WI(128,8,(0x7fU & VL_SHIFTL_III(7,32,32, (IData)(vlSelf->tb_dma__DOT__dut__DOT__bias_buf__DOT__wr_ptr), 3U)), vlSelf->tb_dma__DOT__dut__DOT__bias_buf__DOT__buff, 
                                (0xffU & vlSelf->tb_dma__DOT__dut__DOT__bias_we_in));
                VL_ASSIGNSEL_WI(128,8,(0x7fU & VL_SHIFTL_III(7,32,32, 
                                                             ((IData)(1U) 
                                                              + (IData)(vlSelf->tb_dma__DOT__dut__DOT__bias_buf__DOT__wr_ptr)), 3U)), vlSelf->tb_dma__DOT__dut__DOT__bias_buf__DOT__buff, 
                                (0xffU & (vlSelf->tb_dma__DOT__dut__DOT__bias_we_in 
                                          >> 8U)));
                VL_ASSIGNSEL_WI(128,8,(0x7fU & VL_SHIFTL_III(7,32,32, 
                                                             ((IData)(2U) 
                                                              + (IData)(vlSelf->tb_dma__DOT__dut__DOT__bias_buf__DOT__wr_ptr)), 3U)), vlSelf->tb_dma__DOT__dut__DOT__bias_buf__DOT__buff, 
                                (0xffU & (vlSelf->tb_dma__DOT__dut__DOT__bias_we_in 
                                          >> 0x10U)));
                VL_ASSIGNSEL_WI(128,8,(0x7fU & VL_SHIFTL_III(7,32,32, 
                                                             ((IData)(3U) 
                                                              + (IData)(vlSelf->tb_dma__DOT__dut__DOT__bias_buf__DOT__wr_ptr)), 3U)), vlSelf->tb_dma__DOT__dut__DOT__bias_buf__DOT__buff, 
                                (vlSelf->tb_dma__DOT__dut__DOT__bias_we_in 
                                 >> 0x18U));
                __Vdly__tb_dma__DOT__dut__DOT__bias_buf__DOT__wr_ptr 
                    = (0x3ffU & ((IData)(4U) + (IData)(vlSelf->tb_dma__DOT__dut__DOT__bias_buf__DOT__wr_ptr)));
            }
        }
        if (vlSelf->tb_dma__DOT__dut__DOT__act_clr) {
            __Vdly__tb_dma__DOT__dut__DOT__act_buf__DOT__wr_ptr = 0U;
        } else if (vlSelf->tb_dma__DOT__dut__DOT__act_we) {
            if (((~ (IData)(vlSelf->tb_dma__DOT__dut__DOT__act_full)) 
                 & (IData)(vlSelf->tb_dma__DOT__dut__DOT__act_we))) {
                VL_ASSIGNSEL_WI(128,8,(0x7fU & VL_SHIFTL_III(7,32,32, (IData)(vlSelf->tb_dma__DOT__dut__DOT__act_buf__DOT__wr_ptr), 3U)), vlSelf->tb_dma__DOT__dut__DOT__act_buf__DOT__buff, 
                                (0xffU & vlSelf->tb_dma__DOT__dut__DOT__act_we_in));
                __Vdly__tb_dma__DOT__dut__DOT__act_buf__DOT__wr_ptr 
                    = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->tb_dma__DOT__dut__DOT__act_buf__DOT__wr_ptr)));
            } else if (((IData)(vlSelf->tb_dma__DOT__dut__DOT__act_we) 
                        & (~ (IData)(vlSelf->tb_dma__DOT__dut__DOT__act_full)))) {
                VL_ASSIGNSEL_WI(128,8,(0x7fU & VL_SHIFTL_III(7,32,32, (IData)(vlSelf->tb_dma__DOT__dut__DOT__act_buf__DOT__wr_ptr), 3U)), vlSelf->tb_dma__DOT__dut__DOT__act_buf__DOT__buff, 
                                (0xffU & vlSelf->tb_dma__DOT__dut__DOT__act_we_in));
                VL_ASSIGNSEL_WI(128,8,(0x7fU & VL_SHIFTL_III(7,32,32, 
                                                             ((IData)(1U) 
                                                              + (IData)(vlSelf->tb_dma__DOT__dut__DOT__act_buf__DOT__wr_ptr)), 3U)), vlSelf->tb_dma__DOT__dut__DOT__act_buf__DOT__buff, 
                                (0xffU & (vlSelf->tb_dma__DOT__dut__DOT__act_we_in 
                                          >> 8U)));
                VL_ASSIGNSEL_WI(128,8,(0x7fU & VL_SHIFTL_III(7,32,32, 
                                                             ((IData)(2U) 
                                                              + (IData)(vlSelf->tb_dma__DOT__dut__DOT__act_buf__DOT__wr_ptr)), 3U)), vlSelf->tb_dma__DOT__dut__DOT__act_buf__DOT__buff, 
                                (0xffU & (vlSelf->tb_dma__DOT__dut__DOT__act_we_in 
                                          >> 0x10U)));
                VL_ASSIGNSEL_WI(128,8,(0x7fU & VL_SHIFTL_III(7,32,32, 
                                                             ((IData)(3U) 
                                                              + (IData)(vlSelf->tb_dma__DOT__dut__DOT__act_buf__DOT__wr_ptr)), 3U)), vlSelf->tb_dma__DOT__dut__DOT__act_buf__DOT__buff, 
                                (vlSelf->tb_dma__DOT__dut__DOT__act_we_in 
                                 >> 0x18U));
                __Vdly__tb_dma__DOT__dut__DOT__act_buf__DOT__wr_ptr 
                    = (0x3ffU & ((IData)(4U) + (IData)(vlSelf->tb_dma__DOT__dut__DOT__act_buf__DOT__wr_ptr)));
            }
        }
        if (vlSelf->tb_dma__DOT__dut__DOT__weight_clr) {
            vlSelf->tb_dma__DOT__weight_bank_out_valid = 0U;
            __Vdly__tb_dma__DOT__dut__DOT__weight_buf__DOT__rd_ptr = 0U;
            __Vdly__tb_dma__DOT__dut__DOT__weight_buf__DOT__wr_ptr = 0U;
        } else {
            if ((1U & (~ (IData)(vlSelf->tb_dma__DOT__dut__DOT__weight_we)))) {
                if (vlSelf->tb_dma__DOT__dut__DOT__weight_re) {
                    if ((1U & (~ (IData)(vlSelf->tb_dma__DOT__dut__DOT__weight_empty)))) {
                        vlSelf->tb_dma__DOT__weight_bank_out 
                            = ((0xffffff00U & vlSelf->tb_dma__DOT__weight_bank_out) 
                               | (0xffU & (((0U == 
                                             (0x1fU 
                                              & VL_SHIFTL_III(11,32,32, (IData)(vlSelf->tb_dma__DOT__dut__DOT__weight_buf__DOT__rd_ptr), 3U)))
                                             ? 0U : 
                                            (vlSelf->tb_dma__DOT__dut__DOT__weight_buf__DOT__buff[
                                             (((IData)(7U) 
                                               + (0x7ffU 
                                                  & VL_SHIFTL_III(11,32,32, (IData)(vlSelf->tb_dma__DOT__dut__DOT__weight_buf__DOT__rd_ptr), 3U))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(11,32,32, (IData)(vlSelf->tb_dma__DOT__dut__DOT__weight_buf__DOT__rd_ptr), 3U))))) 
                                           | (vlSelf->tb_dma__DOT__dut__DOT__weight_buf__DOT__buff[
                                              (0x3fU 
                                               & (VL_SHIFTL_III(11,32,32, (IData)(vlSelf->tb_dma__DOT__dut__DOT__weight_buf__DOT__rd_ptr), 3U) 
                                                  >> 5U))] 
                                              >> (0x1fU 
                                                  & VL_SHIFTL_III(11,32,32, (IData)(vlSelf->tb_dma__DOT__dut__DOT__weight_buf__DOT__rd_ptr), 3U))))));
                        vlSelf->tb_dma__DOT__weight_bank_out 
                            = ((0xffff00ffU & vlSelf->tb_dma__DOT__weight_bank_out) 
                               | (0xff00U & ((((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, 
                                                                 ((IData)(1U) 
                                                                  + (IData)(vlSelf->tb_dma__DOT__dut__DOT__weight_buf__DOT__rd_ptr)), 3U)))
                                                ? 0U
                                                : (
                                                   vlSelf->tb_dma__DOT__dut__DOT__weight_buf__DOT__buff[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0x7ffU 
                                                      & VL_SHIFTL_III(11,32,32, 
                                                                      ((IData)(1U) 
                                                                       + (IData)(vlSelf->tb_dma__DOT__dut__DOT__weight_buf__DOT__rd_ptr)), 3U))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(11,32,32, 
                                                                     ((IData)(1U) 
                                                                      + (IData)(vlSelf->tb_dma__DOT__dut__DOT__weight_buf__DOT__rd_ptr)), 3U))))) 
                                              | (vlSelf->tb_dma__DOT__dut__DOT__weight_buf__DOT__buff[
                                                 (0x3fU 
                                                  & (VL_SHIFTL_III(11,32,32, 
                                                                   ((IData)(1U) 
                                                                    + (IData)(vlSelf->tb_dma__DOT__dut__DOT__weight_buf__DOT__rd_ptr)), 3U) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(11,32,32, 
                                                                  ((IData)(1U) 
                                                                   + (IData)(vlSelf->tb_dma__DOT__dut__DOT__weight_buf__DOT__rd_ptr)), 3U)))) 
                                             << 8U)));
                        vlSelf->tb_dma__DOT__weight_bank_out 
                            = ((0xff00ffffU & vlSelf->tb_dma__DOT__weight_bank_out) 
                               | (0xff0000U & ((((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(11,32,32, 
                                                                   ((IData)(2U) 
                                                                    + (IData)(vlSelf->tb_dma__DOT__dut__DOT__weight_buf__DOT__rd_ptr)), 3U)))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->tb_dma__DOT__dut__DOT__weight_buf__DOT__buff[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0x7ffU 
                                                     & VL_SHIFTL_III(11,32,32, 
                                                                     ((IData)(2U) 
                                                                      + (IData)(vlSelf->tb_dma__DOT__dut__DOT__weight_buf__DOT__rd_ptr)), 3U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(11,32,32, 
                                                                    ((IData)(2U) 
                                                                     + (IData)(vlSelf->tb_dma__DOT__dut__DOT__weight_buf__DOT__rd_ptr)), 3U))))) 
                                                | (vlSelf->tb_dma__DOT__dut__DOT__weight_buf__DOT__buff[
                                                   (0x3fU 
                                                    & (VL_SHIFTL_III(11,32,32, 
                                                                     ((IData)(2U) 
                                                                      + (IData)(vlSelf->tb_dma__DOT__dut__DOT__weight_buf__DOT__rd_ptr)), 3U) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(11,32,32, 
                                                                    ((IData)(2U) 
                                                                     + (IData)(vlSelf->tb_dma__DOT__dut__DOT__weight_buf__DOT__rd_ptr)), 3U)))) 
                                               << 0x10U)));
                        vlSelf->tb_dma__DOT__weight_bank_out 
                            = ((0xffffffU & vlSelf->tb_dma__DOT__weight_bank_out) 
                               | ((((0U == (0x1fU & 
                                            VL_SHIFTL_III(11,32,32, 
                                                          ((IData)(3U) 
                                                           + (IData)(vlSelf->tb_dma__DOT__dut__DOT__weight_buf__DOT__rd_ptr)), 3U)))
                                     ? 0U : (vlSelf->tb_dma__DOT__dut__DOT__weight_buf__DOT__buff[
                                             (((IData)(7U) 
                                               + (0x7ffU 
                                                  & VL_SHIFTL_III(11,32,32, 
                                                                  ((IData)(3U) 
                                                                   + (IData)(vlSelf->tb_dma__DOT__dut__DOT__weight_buf__DOT__rd_ptr)), 3U))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(11,32,32, 
                                                                  ((IData)(3U) 
                                                                   + (IData)(vlSelf->tb_dma__DOT__dut__DOT__weight_buf__DOT__rd_ptr)), 3U))))) 
                                   | (vlSelf->tb_dma__DOT__dut__DOT__weight_buf__DOT__buff[
                                      (0x3fU & (VL_SHIFTL_III(11,32,32, 
                                                              ((IData)(3U) 
                                                               + (IData)(vlSelf->tb_dma__DOT__dut__DOT__weight_buf__DOT__rd_ptr)), 3U) 
                                                >> 5U))] 
                                      >> (0x1fU & VL_SHIFTL_III(11,32,32, 
                                                                ((IData)(3U) 
                                                                 + (IData)(vlSelf->tb_dma__DOT__dut__DOT__weight_buf__DOT__rd_ptr)), 3U)))) 
                                  << 0x18U));
                        __Vdly__tb_dma__DOT__dut__DOT__weight_buf__DOT__rd_ptr 
                            = (0x3ffU & ((IData)(4U) 
                                         + (IData)(vlSelf->tb_dma__DOT__dut__DOT__weight_buf__DOT__rd_ptr)));
                    }
                }
            }
            if (vlSelf->tb_dma__DOT__dut__DOT__weight_we) {
                if (((0x100U != (IData)(vlSelf->tb_dma__DOT__dut__DOT__weight_buf__DOT__wr_ptr)) 
                     & (IData)(vlSelf->tb_dma__DOT__dut__DOT__weight_we))) {
                    vlSelf->tb_dma__DOT__weight_bank_out_valid = 0U;
                } else if (((IData)(vlSelf->tb_dma__DOT__dut__DOT__weight_we) 
                            & (0x100U != (IData)(vlSelf->tb_dma__DOT__dut__DOT__weight_buf__DOT__wr_ptr)))) {
                    vlSelf->tb_dma__DOT__weight_bank_out_valid = 0U;
                }
                if (((~ (IData)(vlSelf->tb_dma__DOT__dut__DOT__weight_full)) 
                     & (IData)(vlSelf->tb_dma__DOT__dut__DOT__weight_we))) {
                    VL_ASSIGNSEL_WI(2048,8,(0x7ffU 
                                            & VL_SHIFTL_III(11,32,32, (IData)(vlSelf->tb_dma__DOT__dut__DOT__weight_buf__DOT__wr_ptr), 3U)), vlSelf->tb_dma__DOT__dut__DOT__weight_buf__DOT__buff, 
                                    (0xffU & vlSelf->tb_dma__DOT__dut__DOT__weight_we_in));
                    __Vdly__tb_dma__DOT__dut__DOT__weight_buf__DOT__wr_ptr 
                        = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->tb_dma__DOT__dut__DOT__weight_buf__DOT__wr_ptr)));
                } else if (((IData)(vlSelf->tb_dma__DOT__dut__DOT__weight_we) 
                            & (~ (IData)(vlSelf->tb_dma__DOT__dut__DOT__weight_full)))) {
                    VL_ASSIGNSEL_WI(2048,8,(0x7ffU 
                                            & VL_SHIFTL_III(11,32,32, (IData)(vlSelf->tb_dma__DOT__dut__DOT__weight_buf__DOT__wr_ptr), 3U)), vlSelf->tb_dma__DOT__dut__DOT__weight_buf__DOT__buff, 
                                    (0xffU & vlSelf->tb_dma__DOT__dut__DOT__weight_we_in));
                    VL_ASSIGNSEL_WI(2048,8,(0x7ffU 
                                            & VL_SHIFTL_III(11,32,32, 
                                                            ((IData)(1U) 
                                                             + (IData)(vlSelf->tb_dma__DOT__dut__DOT__weight_buf__DOT__wr_ptr)), 3U)), vlSelf->tb_dma__DOT__dut__DOT__weight_buf__DOT__buff, 
                                    (0xffU & (vlSelf->tb_dma__DOT__dut__DOT__weight_we_in 
                                              >> 8U)));
                    VL_ASSIGNSEL_WI(2048,8,(0x7ffU 
                                            & VL_SHIFTL_III(11,32,32, 
                                                            ((IData)(2U) 
                                                             + (IData)(vlSelf->tb_dma__DOT__dut__DOT__weight_buf__DOT__wr_ptr)), 3U)), vlSelf->tb_dma__DOT__dut__DOT__weight_buf__DOT__buff, 
                                    (0xffU & (vlSelf->tb_dma__DOT__dut__DOT__weight_we_in 
                                              >> 0x10U)));
                    VL_ASSIGNSEL_WI(2048,8,(0x7ffU 
                                            & VL_SHIFTL_III(11,32,32, 
                                                            ((IData)(3U) 
                                                             + (IData)(vlSelf->tb_dma__DOT__dut__DOT__weight_buf__DOT__wr_ptr)), 3U)), vlSelf->tb_dma__DOT__dut__DOT__weight_buf__DOT__buff, 
                                    (vlSelf->tb_dma__DOT__dut__DOT__weight_we_in 
                                     >> 0x18U));
                    __Vdly__tb_dma__DOT__dut__DOT__weight_buf__DOT__wr_ptr 
                        = (0x3ffU & ((IData)(4U) + (IData)(vlSelf->tb_dma__DOT__dut__DOT__weight_buf__DOT__wr_ptr)));
                }
            } else if (vlSelf->tb_dma__DOT__dut__DOT__weight_re) {
                vlSelf->tb_dma__DOT__weight_bank_out_valid 
                    = (1U & (~ (IData)(vlSelf->tb_dma__DOT__dut__DOT__weight_empty)));
            }
        }
    } else {
        __Vdly__tb_dma__DOT__dut__DOT__read_count = 0U;
        vlSelf->tb_dma__DOT__dut__DOT__a_fsm__DOT__current_state = 0U;
        vlSelf->tb_dma__DOT__dut__DOT__b_fsm__DOT__current_state = 0U;
        vlSelf->tb_dma__DOT__dut__DOT__w_fsm__DOT__current_state = 0U;
        vlSelf->tb_dma__DOT__dut__DOT__r_fsm__DOT__current_state = 0U;
        __Vdly__tb_dma__DOT__dut__DOT__bias_buf__DOT__wr_ptr = 0U;
        vlSelf->tb_dma__DOT__dut__DOT__bias_buf__DOT__buff[0U] = 0U;
        vlSelf->tb_dma__DOT__dut__DOT__bias_buf__DOT__buff[1U] = 0U;
        vlSelf->tb_dma__DOT__dut__DOT__bias_buf__DOT__buff[2U] = 0U;
        vlSelf->tb_dma__DOT__dut__DOT__bias_buf__DOT__buff[3U] = 0U;
        __Vdly__tb_dma__DOT__dut__DOT__act_buf__DOT__wr_ptr = 0U;
        vlSelf->tb_dma__DOT__dut__DOT__act_buf__DOT__buff[0U] = 0U;
        vlSelf->tb_dma__DOT__dut__DOT__act_buf__DOT__buff[1U] = 0U;
        vlSelf->tb_dma__DOT__dut__DOT__act_buf__DOT__buff[2U] = 0U;
        vlSelf->tb_dma__DOT__dut__DOT__act_buf__DOT__buff[3U] = 0U;
        __Vdly__tb_dma__DOT__dut__DOT__result_buf__DOT__rd_ptr = 0U;
        __Vdly__tb_dma__DOT__dut__DOT__weight_buf__DOT__rd_ptr = 0U;
        __Vdly__tb_dma__DOT__dut__DOT__result_buf__DOT__wr_ptr = 0U;
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->tb_dma__DOT__dut__DOT__result_buf__DOT__buff[__Vilp] 
                = Vtb_dma__ConstPool__CONST_h6be9aa18_0[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        __Vdly__tb_dma__DOT__dut__DOT__weight_buf__DOT__wr_ptr = 0U;
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->tb_dma__DOT__dut__DOT__weight_buf__DOT__buff[__Vilp] 
                = Vtb_dma__ConstPool__CONST_h6be9aa18_0[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    vlSelf->tb_dma__DOT__dut__DOT__bias_full_prev = 
        ((IData)(vlSelf->tb_dma__DOT__rst_n) && (0x10U 
                                                 == (IData)(vlSelf->tb_dma__DOT__dut__DOT__bias_buf__DOT__wr_ptr)));
    vlSelf->tb_dma__DOT__dut__DOT__act_full_prev = 
        ((IData)(vlSelf->tb_dma__DOT__rst_n) && (0x10U 
                                                 == (IData)(vlSelf->tb_dma__DOT__dut__DOT__act_buf__DOT__wr_ptr)));
    vlSelf->tb_dma__DOT__dut__DOT__read_count = __Vdly__tb_dma__DOT__dut__DOT__read_count;
    vlSelf->tb_dma__DOT__dut__DOT__bias_buf__DOT__wr_ptr 
        = __Vdly__tb_dma__DOT__dut__DOT__bias_buf__DOT__wr_ptr;
    vlSelf->tb_dma__DOT__dut__DOT__act_buf__DOT__wr_ptr 
        = __Vdly__tb_dma__DOT__dut__DOT__act_buf__DOT__wr_ptr;
    vlSelf->tb_dma__DOT__dut__DOT__result_buf__DOT__rd_ptr 
        = __Vdly__tb_dma__DOT__dut__DOT__result_buf__DOT__rd_ptr;
    vlSelf->tb_dma__DOT__dut__DOT__weight_buf__DOT__rd_ptr 
        = __Vdly__tb_dma__DOT__dut__DOT__weight_buf__DOT__rd_ptr;
    vlSelf->tb_dma__DOT__dut__DOT__act_clr = 0U;
    vlSelf->tb_dma__DOT__dut__DOT__bias_clr = 0U;
    vlSelf->tb_dma__DOT__dut__DOT__en_counter = 0U;
    vlSelf->tb_dma__DOT__dut__DOT__clr_counter = 0U;
    vlSelf->tb_dma__DOT__dut__DOT__result_re = 0U;
    vlSelf->tb_dma__DOT__dut__DOT__bias_full = (0x10U 
                                                == (IData)(vlSelf->tb_dma__DOT__dut__DOT__bias_buf__DOT__wr_ptr));
    vlSelf->tb_dma__DOT__dut__DOT__bias_we = 0U;
    if ((0U != (IData)(vlSelf->tb_dma__DOT__dut__DOT__b_fsm__DOT__current_state))) {
        if ((1U != (IData)(vlSelf->tb_dma__DOT__dut__DOT__b_fsm__DOT__current_state))) {
            if ((2U == (IData)(vlSelf->tb_dma__DOT__dut__DOT__b_fsm__DOT__current_state))) {
                vlSelf->tb_dma__DOT__dut__DOT__bias_clr = 1U;
            }
        }
        if ((1U == (IData)(vlSelf->tb_dma__DOT__dut__DOT__b_fsm__DOT__current_state))) {
            if ((0x10U != (IData)(vlSelf->tb_dma__DOT__dut__DOT__bias_buf__DOT__wr_ptr))) {
                vlSelf->tb_dma__DOT__dut__DOT__bias_we = 1U;
            }
        }
    }
    vlSelf->tb_dma__DOT__dut__DOT__act_full = (0x10U 
                                               == (IData)(vlSelf->tb_dma__DOT__dut__DOT__act_buf__DOT__wr_ptr));
    vlSelf->tb_dma__DOT__dut__DOT__act_we = 0U;
    if ((0U != (IData)(vlSelf->tb_dma__DOT__dut__DOT__a_fsm__DOT__current_state))) {
        if ((1U != (IData)(vlSelf->tb_dma__DOT__dut__DOT__a_fsm__DOT__current_state))) {
            if ((2U == (IData)(vlSelf->tb_dma__DOT__dut__DOT__a_fsm__DOT__current_state))) {
                vlSelf->tb_dma__DOT__dut__DOT__act_clr = 1U;
            }
        }
        if ((1U == (IData)(vlSelf->tb_dma__DOT__dut__DOT__a_fsm__DOT__current_state))) {
            if ((0x10U != (IData)(vlSelf->tb_dma__DOT__dut__DOT__act_buf__DOT__wr_ptr))) {
                vlSelf->tb_dma__DOT__dut__DOT__act_we = 1U;
            }
        }
    }
    vlSelf->tb_dma__DOT__dut__DOT__result_clr = 0U;
    if ((0U != (IData)(vlSelf->tb_dma__DOT__dut__DOT__r_fsm__DOT__current_state))) {
        if ((1U == (IData)(vlSelf->tb_dma__DOT__dut__DOT__r_fsm__DOT__current_state))) {
            vlSelf->tb_dma__DOT__dut__DOT__en_counter = 1U;
            if ((0x40U == (IData)(vlSelf->tb_dma__DOT__dut__DOT__read_count))) {
                vlSelf->tb_dma__DOT__dut__DOT__clr_counter = 1U;
                vlSelf->tb_dma__DOT__dut__DOT__result_clr = 1U;
            }
            if ((0x40U != (IData)(vlSelf->tb_dma__DOT__dut__DOT__read_count))) {
                vlSelf->tb_dma__DOT__dut__DOT__result_re = 1U;
            }
        }
    }
    vlSelf->tb_dma__DOT__dut__DOT__result_buf__DOT__wr_ptr 
        = __Vdly__tb_dma__DOT__dut__DOT__result_buf__DOT__wr_ptr;
    vlSelf->tb_dma__DOT__dut__DOT__weight_buf__DOT__wr_ptr 
        = __Vdly__tb_dma__DOT__dut__DOT__weight_buf__DOT__wr_ptr;
    vlSelf->tb_dma__DOT__dut__DOT__result_full = (0x100U 
                                                  == (IData)(vlSelf->tb_dma__DOT__dut__DOT__result_buf__DOT__wr_ptr));
    vlSelf->tb_dma__DOT__dut__DOT__result_empty = ((IData)(vlSelf->tb_dma__DOT__dut__DOT__result_buf__DOT__rd_ptr) 
                                                   == (IData)(vlSelf->tb_dma__DOT__dut__DOT__result_buf__DOT__wr_ptr));
    vlSelf->tb_dma__DOT__dut__DOT__weight_full = (0x100U 
                                                  == (IData)(vlSelf->tb_dma__DOT__dut__DOT__weight_buf__DOT__wr_ptr));
    vlSelf->tb_dma__DOT__dut__DOT__weight_we = 0U;
    if ((0U != (IData)(vlSelf->tb_dma__DOT__dut__DOT__w_fsm__DOT__current_state))) {
        if ((1U == (IData)(vlSelf->tb_dma__DOT__dut__DOT__w_fsm__DOT__current_state))) {
            if ((0x100U != (IData)(vlSelf->tb_dma__DOT__dut__DOT__weight_buf__DOT__wr_ptr))) {
                vlSelf->tb_dma__DOT__dut__DOT__weight_we = 1U;
            }
        }
    }
    vlSelf->tb_dma__DOT__dut__DOT__weight_empty = ((IData)(vlSelf->tb_dma__DOT__dut__DOT__weight_buf__DOT__rd_ptr) 
                                                   == (IData)(vlSelf->tb_dma__DOT__dut__DOT__weight_buf__DOT__wr_ptr));
    vlSelf->tb_dma__DOT__dut__DOT__weight_re = (1U 
                                                & (~ 
                                                   ((IData)(vlSelf->tb_dma__DOT__dut__DOT__weight_empty) 
                                                    | (IData)(vlSelf->tb_dma__DOT__dut__DOT__weight_we))));
}

VL_INLINE_OPT void Vtb_dma___024root___nba_comb__TOP__0(Vtb_dma___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dma___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->tb_dma__DOT__dut__DOT__r_fsm__DOT__next_state 
        = vlSelf->tb_dma__DOT__dut__DOT__r_fsm__DOT__current_state;
    if ((0U == (IData)(vlSelf->tb_dma__DOT__dut__DOT__r_fsm__DOT__current_state))) {
        vlSelf->tb_dma__DOT__dut__DOT__r_fsm__DOT__next_state 
            = ((IData)(vlSelf->tb_dma__DOT__start_read_fsm)
                ? 1U : 0U);
    } else if ((1U == (IData)(vlSelf->tb_dma__DOT__dut__DOT__r_fsm__DOT__current_state))) {
        vlSelf->tb_dma__DOT__dut__DOT__r_fsm__DOT__next_state 
            = ((0x40U == (IData)(vlSelf->tb_dma__DOT__dut__DOT__read_count))
                ? 0U : 1U);
    }
    vlSelf->tb_dma__DOT__dut__DOT__b_fsm__DOT__next_state 
        = vlSelf->tb_dma__DOT__dut__DOT__b_fsm__DOT__current_state;
    if ((0U == (IData)(vlSelf->tb_dma__DOT__dut__DOT__b_fsm__DOT__current_state))) {
        vlSelf->tb_dma__DOT__dut__DOT__b_fsm__DOT__next_state 
            = (((IData)(vlSelf->tb_dma__DOT__bias_fsm_start) 
                & (~ (IData)(vlSelf->tb_dma__DOT__dut__DOT__b_fsm__DOT__any_busy)))
                ? 1U : 0U);
    } else if ((1U == (IData)(vlSelf->tb_dma__DOT__dut__DOT__b_fsm__DOT__current_state))) {
        vlSelf->tb_dma__DOT__dut__DOT__b_fsm__DOT__next_state 
            = ((0x10U == (IData)(vlSelf->tb_dma__DOT__dut__DOT__bias_buf__DOT__wr_ptr))
                ? 2U : 1U);
    } else if ((2U == (IData)(vlSelf->tb_dma__DOT__dut__DOT__b_fsm__DOT__current_state))) {
        vlSelf->tb_dma__DOT__dut__DOT__b_fsm__DOT__next_state = 0U;
    }
    vlSelf->tb_dma__DOT__dut__DOT__a_fsm__DOT__next_state 
        = vlSelf->tb_dma__DOT__dut__DOT__a_fsm__DOT__current_state;
    if ((0U == (IData)(vlSelf->tb_dma__DOT__dut__DOT__a_fsm__DOT__current_state))) {
        vlSelf->tb_dma__DOT__dut__DOT__a_fsm__DOT__next_state 
            = (((IData)(vlSelf->tb_dma__DOT__activation_fsm_start) 
                & (~ (IData)(vlSelf->tb_dma__DOT__dut__DOT__a_fsm__DOT__any_busy)))
                ? 1U : 0U);
    } else if ((1U == (IData)(vlSelf->tb_dma__DOT__dut__DOT__a_fsm__DOT__current_state))) {
        vlSelf->tb_dma__DOT__dut__DOT__a_fsm__DOT__next_state 
            = ((0x10U == (IData)(vlSelf->tb_dma__DOT__dut__DOT__act_buf__DOT__wr_ptr))
                ? 2U : 1U);
    } else if ((2U == (IData)(vlSelf->tb_dma__DOT__dut__DOT__a_fsm__DOT__current_state))) {
        vlSelf->tb_dma__DOT__dut__DOT__a_fsm__DOT__next_state = 0U;
    }
    vlSelf->tb_dma__DOT__dut__DOT__weight_clr = 0U;
    vlSelf->tb_dma__DOT__dut__DOT__w_fsm__DOT__next_state 
        = vlSelf->tb_dma__DOT__dut__DOT__w_fsm__DOT__current_state;
    if ((0U == (IData)(vlSelf->tb_dma__DOT__dut__DOT__w_fsm__DOT__current_state))) {
        if (((IData)(vlSelf->tb_dma__DOT__weight_fsm_start) 
             & (~ (IData)(vlSelf->tb_dma__DOT__dut__DOT__any_busy)))) {
            vlSelf->tb_dma__DOT__dut__DOT__weight_clr = 1U;
            vlSelf->tb_dma__DOT__dut__DOT__w_fsm__DOT__next_state = 1U;
        } else {
            vlSelf->tb_dma__DOT__dut__DOT__w_fsm__DOT__next_state = 0U;
        }
    } else if ((1U == (IData)(vlSelf->tb_dma__DOT__dut__DOT__w_fsm__DOT__current_state))) {
        vlSelf->tb_dma__DOT__dut__DOT__w_fsm__DOT__next_state 
            = ((0x100U == (IData)(vlSelf->tb_dma__DOT__dut__DOT__weight_buf__DOT__wr_ptr))
                ? 2U : 1U);
    } else if ((2U == (IData)(vlSelf->tb_dma__DOT__dut__DOT__w_fsm__DOT__current_state))) {
        vlSelf->tb_dma__DOT__dut__DOT__w_fsm__DOT__next_state = 0U;
    }
}

VL_INLINE_OPT void Vtb_dma___024root___nba_comb__TOP__1(Vtb_dma___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dma___024root___nba_comb__TOP__1\n"); );
    // Body
    vlSelf->tb_dma__DOT__dut__DOT__bias_we_in = (0xffffff00U 
                                                 & vlSelf->tb_dma__DOT__dut__DOT__bias_we_in);
    vlSelf->tb_dma__DOT__dut__DOT__act_we_in = (0xffffff00U 
                                                & vlSelf->tb_dma__DOT__dut__DOT__act_we_in);
    vlSelf->tb_dma__DOT__dut__DOT__weight_we_in = (0xffffff00U 
                                                   & vlSelf->tb_dma__DOT__dut__DOT__weight_we_in);
    if ((1U & (~ (IData)(vlSelf->tb_dma__DOT__dut__DOT__any_busy)))) {
        if ((1U != (IData)(vlSelf->tb_dma__DOT__bank))) {
            if ((2U == (IData)(vlSelf->tb_dma__DOT__bank))) {
                vlSelf->tb_dma__DOT__dut__DOT__bias_we_in 
                    = ((0xffffff00U & vlSelf->tb_dma__DOT__dut__DOT__bias_we_in) 
                       | (IData)(vlSelf->tb_dma__DOT__u_in));
            }
            if ((2U != (IData)(vlSelf->tb_dma__DOT__bank))) {
                if ((3U == (IData)(vlSelf->tb_dma__DOT__bank))) {
                    vlSelf->tb_dma__DOT__dut__DOT__act_we_in 
                        = ((0xffffff00U & vlSelf->tb_dma__DOT__dut__DOT__act_we_in) 
                           | (IData)(vlSelf->tb_dma__DOT__u_in));
                }
            }
        }
        if ((1U == (IData)(vlSelf->tb_dma__DOT__bank))) {
            vlSelf->tb_dma__DOT__dut__DOT__weight_we_in 
                = ((0xffffff00U & vlSelf->tb_dma__DOT__dut__DOT__weight_we_in) 
                   | (IData)(vlSelf->tb_dma__DOT__u_in));
        }
    }
}

void Vtb_dma___024root___eval_nba(Vtb_dma___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dma___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_dma___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_dma___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((6ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_dma___024root___nba_comb__TOP__1(vlSelf);
    }
}

void Vtb_dma___024root___timing_resume(Vtb_dma___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dma___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h7a6a0639__0.resume("@(posedge tb_dma.clk)");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_dma___024root___timing_commit(Vtb_dma___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dma___024root___timing_commit\n"); );
    // Body
    if ((! (2ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h7a6a0639__0.commit("@(posedge tb_dma.clk)");
    }
}

void Vtb_dma___024root___eval_triggers__act(Vtb_dma___024root* vlSelf);

bool Vtb_dma___024root___eval_phase__act(Vtb_dma___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dma___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_dma___024root___eval_triggers__act(vlSelf);
    Vtb_dma___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_dma___024root___timing_resume(vlSelf);
        Vtb_dma___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_dma___024root___eval_phase__nba(Vtb_dma___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dma___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_dma___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_dma___024root___dump_triggers__nba(Vtb_dma___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_dma___024root___dump_triggers__act(Vtb_dma___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_dma___024root___eval(Vtb_dma___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dma___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_dma___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/tb_dma.sv", 26, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_dma___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/tb_dma.sv", 26, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_dma___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_dma___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_dma___024root___eval_debug_assertions(Vtb_dma___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dma___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
