// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_activation_buffer.h for the primary calling header

#include "Vtb_activation_buffer__pch.h"
#include "Vtb_activation_buffer___024root.h"

VlCoroutine Vtb_activation_buffer___024root___eval_initial__TOP__Vtiming__0(Vtb_activation_buffer___024root* vlSelf);
VlCoroutine Vtb_activation_buffer___024root___eval_initial__TOP__Vtiming__1(Vtb_activation_buffer___024root* vlSelf);

void Vtb_activation_buffer___024root___eval_initial(Vtb_activation_buffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_activation_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_activation_buffer___024root___eval_initial\n"); );
    // Body
    Vtb_activation_buffer___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_activation_buffer___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_activation_buffer__DOT__clk__0 
        = vlSelf->tb_activation_buffer__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__tb_activation_buffer__DOT__ib_rst_n__0 
        = vlSelf->tb_activation_buffer__DOT__ib_rst_n;
    vlSelf->__Vtrigprevexpr___TOP__tb_activation_buffer__DOT__bf_rst_n__0 
        = vlSelf->tb_activation_buffer__DOT__bf_rst_n;
    vlSelf->__Vtrigprevexpr___TOP__tb_activation_buffer__DOT__act_rst_n__0 
        = vlSelf->tb_activation_buffer__DOT__act_rst_n;
}

VL_INLINE_OPT VlCoroutine Vtb_activation_buffer___024root___eval_initial__TOP__Vtiming__0(Vtb_activation_buffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_activation_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_activation_buffer___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    std::string __Vtask_tb_activation_buffer__DOT__check__2__name;
    CData/*0:0*/ __Vtask_tb_activation_buffer__DOT__check__2__cond;
    __Vtask_tb_activation_buffer__DOT__check__2__cond = 0;
    std::string __Vtask_tb_activation_buffer__DOT__check__3__name;
    CData/*0:0*/ __Vtask_tb_activation_buffer__DOT__check__3__cond;
    __Vtask_tb_activation_buffer__DOT__check__3__cond = 0;
    std::string __Vtask_tb_activation_buffer__DOT__check__5__name;
    CData/*0:0*/ __Vtask_tb_activation_buffer__DOT__check__5__cond;
    __Vtask_tb_activation_buffer__DOT__check__5__cond = 0;
    std::string __Vtask_tb_activation_buffer__DOT__check__7__name;
    CData/*0:0*/ __Vtask_tb_activation_buffer__DOT__check__7__cond;
    __Vtask_tb_activation_buffer__DOT__check__7__cond = 0;
    std::string __Vtask_tb_activation_buffer__DOT__check__8__name;
    CData/*0:0*/ __Vtask_tb_activation_buffer__DOT__check__8__cond;
    __Vtask_tb_activation_buffer__DOT__check__8__cond = 0;
    std::string __Vtask_tb_activation_buffer__DOT__check__9__name;
    CData/*0:0*/ __Vtask_tb_activation_buffer__DOT__check__9__cond;
    __Vtask_tb_activation_buffer__DOT__check__9__cond = 0;
    std::string __Vtask_tb_activation_buffer__DOT__check__10__name;
    CData/*0:0*/ __Vtask_tb_activation_buffer__DOT__check__10__cond;
    __Vtask_tb_activation_buffer__DOT__check__10__cond = 0;
    std::string __Vtask_tb_activation_buffer__DOT__check__11__name;
    CData/*0:0*/ __Vtask_tb_activation_buffer__DOT__check__11__cond;
    __Vtask_tb_activation_buffer__DOT__check__11__cond = 0;
    std::string __Vtask_tb_activation_buffer__DOT__check__12__name;
    CData/*0:0*/ __Vtask_tb_activation_buffer__DOT__check__12__cond;
    __Vtask_tb_activation_buffer__DOT__check__12__cond = 0;
    std::string __Vtask_tb_activation_buffer__DOT__check__14__name;
    CData/*0:0*/ __Vtask_tb_activation_buffer__DOT__check__14__cond;
    __Vtask_tb_activation_buffer__DOT__check__14__cond = 0;
    std::string __Vtask_tb_activation_buffer__DOT__check__16__name;
    CData/*0:0*/ __Vtask_tb_activation_buffer__DOT__check__16__cond;
    __Vtask_tb_activation_buffer__DOT__check__16__cond = 0;
    std::string __Vtask_tb_activation_buffer__DOT__check__19__name;
    CData/*0:0*/ __Vtask_tb_activation_buffer__DOT__check__19__cond;
    __Vtask_tb_activation_buffer__DOT__check__19__cond = 0;
    std::string __Vtask_tb_activation_buffer__DOT__check__21__name;
    CData/*0:0*/ __Vtask_tb_activation_buffer__DOT__check__21__cond;
    __Vtask_tb_activation_buffer__DOT__check__21__cond = 0;
    std::string __Vtask_tb_activation_buffer__DOT__check__23__name;
    CData/*0:0*/ __Vtask_tb_activation_buffer__DOT__check__23__cond;
    __Vtask_tb_activation_buffer__DOT__check__23__cond = 0;
    std::string __Vtask_tb_activation_buffer__DOT__check__25__name;
    CData/*0:0*/ __Vtask_tb_activation_buffer__DOT__check__25__cond;
    __Vtask_tb_activation_buffer__DOT__check__25__cond = 0;
    std::string __Vtask_tb_activation_buffer__DOT__check__27__name;
    CData/*0:0*/ __Vtask_tb_activation_buffer__DOT__check__27__cond;
    __Vtask_tb_activation_buffer__DOT__check__27__cond = 0;
    std::string __Vtask_tb_activation_buffer__DOT__check__29__name;
    CData/*0:0*/ __Vtask_tb_activation_buffer__DOT__check__29__cond;
    __Vtask_tb_activation_buffer__DOT__check__29__cond = 0;
    std::string __Vtask_tb_activation_buffer__DOT__check__30__name;
    CData/*0:0*/ __Vtask_tb_activation_buffer__DOT__check__30__cond;
    __Vtask_tb_activation_buffer__DOT__check__30__cond = 0;
    IData/*31:0*/ __Vtask_tb_activation_buffer__DOT__run_double_buffer_cycle_test__31__unnamedblk2__DOT__switch_count;
    __Vtask_tb_activation_buffer__DOT__run_double_buffer_cycle_test__31__unnamedblk2__DOT__switch_count = 0;
    IData/*31:0*/ __Vtask_tb_activation_buffer__DOT__run_double_buffer_cycle_test__31__unnamedblk2__DOT__safety_cycles;
    __Vtask_tb_activation_buffer__DOT__run_double_buffer_cycle_test__31__unnamedblk2__DOT__safety_cycles = 0;
    CData/*0:0*/ __Vtask_tb_activation_buffer__DOT__run_double_buffer_cycle_test__31__unnamedblk2__DOT__last_bank_a;
    __Vtask_tb_activation_buffer__DOT__run_double_buffer_cycle_test__31__unnamedblk2__DOT__last_bank_a = 0;
    CData/*0:0*/ __Vtask_tb_activation_buffer__DOT__run_double_buffer_cycle_test__31__unnamedblk2__DOT__mutex_violation;
    __Vtask_tb_activation_buffer__DOT__run_double_buffer_cycle_test__31__unnamedblk2__DOT__mutex_violation = 0;
    std::string __Vtask_tb_activation_buffer__DOT__check__32__name;
    CData/*0:0*/ __Vtask_tb_activation_buffer__DOT__check__32__cond;
    __Vtask_tb_activation_buffer__DOT__check__32__cond = 0;
    std::string __Vtask_tb_activation_buffer__DOT__check__33__name;
    CData/*0:0*/ __Vtask_tb_activation_buffer__DOT__check__33__cond;
    __Vtask_tb_activation_buffer__DOT__check__33__cond = 0;
    std::string __Vtask_tb_activation_buffer__DOT__check__34__name;
    CData/*0:0*/ __Vtask_tb_activation_buffer__DOT__check__34__cond;
    __Vtask_tb_activation_buffer__DOT__check__34__cond = 0;
    std::string __Vtask_tb_activation_buffer__DOT__check__35__name;
    CData/*0:0*/ __Vtask_tb_activation_buffer__DOT__check__35__cond;
    __Vtask_tb_activation_buffer__DOT__check__35__cond = 0;
    std::string __Vtask_tb_activation_buffer__DOT__check__36__name;
    CData/*0:0*/ __Vtask_tb_activation_buffer__DOT__check__36__cond;
    __Vtask_tb_activation_buffer__DOT__check__36__cond = 0;
    std::string __Vtask_tb_activation_buffer__DOT__check__37__name;
    CData/*0:0*/ __Vtask_tb_activation_buffer__DOT__check__37__cond;
    __Vtask_tb_activation_buffer__DOT__check__37__cond = 0;
    std::string __Vtask_tb_activation_buffer__DOT__check__38__name;
    CData/*0:0*/ __Vtask_tb_activation_buffer__DOT__check__38__cond;
    __Vtask_tb_activation_buffer__DOT__check__38__cond = 0;
    std::string __Vtask_tb_activation_buffer__DOT__check__39__name;
    CData/*0:0*/ __Vtask_tb_activation_buffer__DOT__check__39__cond;
    __Vtask_tb_activation_buffer__DOT__check__39__cond = 0;
    // Body
    vlSelf->tb_activation_buffer__DOT__ib_rst_n = 0U;
    vlSelf->tb_activation_buffer__DOT__ib_we = 0U;
    vlSelf->tb_activation_buffer__DOT__ib_re = 0U;
    vlSelf->tb_activation_buffer__DOT__ib_clr = 0U;
    vlSelf->tb_activation_buffer__DOT__ib_we_valid = 0U;
    vlSelf->tb_activation_buffer__DOT__ib_we_in[0U] = 0U;
    vlSelf->tb_activation_buffer__DOT__ib_we_in[1U] = 0U;
    vlSelf->tb_activation_buffer__DOT__ib_we_in[2U] = 0U;
    vlSelf->tb_activation_buffer__DOT__ib_we_in[3U] = 0U;
    co_await vlSelf->__VtrigSched_h0c0022ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_activation_buffer.clk)", 
                                                       "tb/tb_activation_buffer.sv", 
                                                       43);
    co_await vlSelf->__VtrigSched_h0c0022ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_activation_buffer.clk)", 
                                                       "tb/tb_activation_buffer.sv", 
                                                       43);
    vlSelf->tb_activation_buffer__DOT__ib_rst_n = 1U;
    co_await vlSelf->__VtrigSched_h0c0022ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_activation_buffer.clk)", 
                                                       "tb/tb_activation_buffer.sv", 
                                                       45);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_activation_buffer.sv", 
                                       45);
    VL_WRITEF("==== i_buffer ====\n");
    __Vtask_tb_activation_buffer__DOT__check__2__cond 
        = (0U == (IData)(vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__curr_count));
    __Vtask_tb_activation_buffer__DOT__check__2__name = 
        std::string{"reset: empty asserted"};
    vlSelf->tb_activation_buffer__DOT__checks = ((IData)(1U) 
                                                 + vlSelf->tb_activation_buffer__DOT__checks);
    if (__Vtask_tb_activation_buffer__DOT__check__2__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_activation_buffer__DOT__check__2__name));
    } else {
        vlSelf->tb_activation_buffer__DOT__errors = 
            ((IData)(1U) + vlSelf->tb_activation_buffer__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_activation_buffer__DOT__check__2__name));
    }
    __Vtask_tb_activation_buffer__DOT__check__3__cond 
        = (0x10U != (IData)(vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__curr_count));
    __Vtask_tb_activation_buffer__DOT__check__3__name = 
        std::string{"reset: full deasserted"};
    vlSelf->tb_activation_buffer__DOT__checks = ((IData)(1U) 
                                                 + vlSelf->tb_activation_buffer__DOT__checks);
    if (__Vtask_tb_activation_buffer__DOT__check__3__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_activation_buffer__DOT__check__3__name));
    } else {
        vlSelf->tb_activation_buffer__DOT__errors = 
            ((IData)(1U) + vlSelf->tb_activation_buffer__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_activation_buffer__DOT__check__3__name));
    }
    vlSelf->tb_activation_buffer__DOT__ib_we = 1U;
    vlSelf->tb_activation_buffer__DOT__ib_we_valid = 1U;
    vlSelf->tb_activation_buffer__DOT__ib_we_in[0U] 
        = (0xdcbaU | (0xffff0000U & vlSelf->tb_activation_buffer__DOT__ib_we_in[0U]));
    co_await vlSelf->__VtrigSched_h0c0022ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_activation_buffer.clk)", 
                                                       "tb/tb_activation_buffer.sv", 
                                                       49);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_activation_buffer.sv", 
                                       49);
    vlSelf->tb_activation_buffer__DOT__ib_we = 0U;
    vlSelf->tb_activation_buffer__DOT__ib_we_valid = 0U;
    __Vtask_tb_activation_buffer__DOT__check__5__cond 
        = (0U != (IData)(vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__curr_count));
    __Vtask_tb_activation_buffer__DOT__check__5__name = 
        std::string{"after one write: not empty"};
    vlSelf->tb_activation_buffer__DOT__checks = ((IData)(1U) 
                                                 + vlSelf->tb_activation_buffer__DOT__checks);
    if (__Vtask_tb_activation_buffer__DOT__check__5__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_activation_buffer__DOT__check__5__name));
    } else {
        vlSelf->tb_activation_buffer__DOT__errors = 
            ((IData)(1U) + vlSelf->tb_activation_buffer__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_activation_buffer__DOT__check__5__name));
    }
    vlSelf->tb_activation_buffer__DOT__ib_re = 1U;
    co_await vlSelf->__VtrigSched_h0c0022ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_activation_buffer.clk)", 
                                                       "tb/tb_activation_buffer.sv", 
                                                       49);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_activation_buffer.sv", 
                                       49);
    vlSelf->tb_activation_buffer__DOT__ib_re = 0U;
    __Vtask_tb_activation_buffer__DOT__check__7__cond 
        = vlSelf->tb_activation_buffer__DOT__ib_re_valid;
    __Vtask_tb_activation_buffer__DOT__check__7__name = 
        std::string{"re_valid asserted after read"};
    vlSelf->tb_activation_buffer__DOT__checks = ((IData)(1U) 
                                                 + vlSelf->tb_activation_buffer__DOT__checks);
    if (__Vtask_tb_activation_buffer__DOT__check__7__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_activation_buffer__DOT__check__7__name));
    } else {
        vlSelf->tb_activation_buffer__DOT__errors = 
            ((IData)(1U) + vlSelf->tb_activation_buffer__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_activation_buffer__DOT__check__7__name));
    }
    __Vtask_tb_activation_buffer__DOT__check__8__cond 
        = (0xaU == (0xfU & vlSelf->tb_activation_buffer__DOT__ib_re_out[0U]));
    __Vtask_tb_activation_buffer__DOT__check__8__name = 
        std::string{"re_out[0] recovers we_in[0] (0xa) - forward FIFO order, no off-by-one"};
    vlSelf->tb_activation_buffer__DOT__checks = ((IData)(1U) 
                                                 + vlSelf->tb_activation_buffer__DOT__checks);
    if (__Vtask_tb_activation_buffer__DOT__check__8__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_activation_buffer__DOT__check__8__name));
    } else {
        vlSelf->tb_activation_buffer__DOT__errors = 
            ((IData)(1U) + vlSelf->tb_activation_buffer__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_activation_buffer__DOT__check__8__name));
    }
    __Vtask_tb_activation_buffer__DOT__check__9__cond 
        = (0xbU == (0xfU & (vlSelf->tb_activation_buffer__DOT__ib_re_out[0U] 
                            >> 4U)));
    __Vtask_tb_activation_buffer__DOT__check__9__name = 
        std::string{"re_out[1] recovers we_in[1] (0xb)"};
    vlSelf->tb_activation_buffer__DOT__checks = ((IData)(1U) 
                                                 + vlSelf->tb_activation_buffer__DOT__checks);
    if (__Vtask_tb_activation_buffer__DOT__check__9__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_activation_buffer__DOT__check__9__name));
    } else {
        vlSelf->tb_activation_buffer__DOT__errors = 
            ((IData)(1U) + vlSelf->tb_activation_buffer__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_activation_buffer__DOT__check__9__name));
    }
    __Vtask_tb_activation_buffer__DOT__check__10__cond 
        = (0xcU == (0xfU & (vlSelf->tb_activation_buffer__DOT__ib_re_out[0U] 
                            >> 8U)));
    __Vtask_tb_activation_buffer__DOT__check__10__name = 
        std::string{"re_out[2] recovers we_in[2] (0xc)"};
    vlSelf->tb_activation_buffer__DOT__checks = ((IData)(1U) 
                                                 + vlSelf->tb_activation_buffer__DOT__checks);
    if (__Vtask_tb_activation_buffer__DOT__check__10__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_activation_buffer__DOT__check__10__name));
    } else {
        vlSelf->tb_activation_buffer__DOT__errors = 
            ((IData)(1U) + vlSelf->tb_activation_buffer__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_activation_buffer__DOT__check__10__name));
    }
    __Vtask_tb_activation_buffer__DOT__check__11__cond 
        = (0xdU == (0xfU & (vlSelf->tb_activation_buffer__DOT__ib_re_out[0U] 
                            >> 0xcU)));
    __Vtask_tb_activation_buffer__DOT__check__11__name = 
        std::string{"re_out[3] recovers we_in[3] (0xd)"};
    vlSelf->tb_activation_buffer__DOT__checks = ((IData)(1U) 
                                                 + vlSelf->tb_activation_buffer__DOT__checks);
    if (__Vtask_tb_activation_buffer__DOT__check__11__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_activation_buffer__DOT__check__11__name));
    } else {
        vlSelf->tb_activation_buffer__DOT__errors = 
            ((IData)(1U) + vlSelf->tb_activation_buffer__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_activation_buffer__DOT__check__11__name));
    }
    __Vtask_tb_activation_buffer__DOT__check__12__cond 
        = (0U == (IData)(vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__curr_count));
    __Vtask_tb_activation_buffer__DOT__check__12__name = 
        std::string{"after read: back to empty"};
    vlSelf->tb_activation_buffer__DOT__checks = ((IData)(1U) 
                                                 + vlSelf->tb_activation_buffer__DOT__checks);
    if (__Vtask_tb_activation_buffer__DOT__check__12__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_activation_buffer__DOT__check__12__name));
    } else {
        vlSelf->tb_activation_buffer__DOT__errors = 
            ((IData)(1U) + vlSelf->tb_activation_buffer__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_activation_buffer__DOT__check__12__name));
    }
    vlSelf->tb_activation_buffer__DOT__ib_we = 1U;
    vlSelf->tb_activation_buffer__DOT__ib_we_valid = 1U;
    vlSelf->tb_activation_buffer__DOT__ib_we_in[0U] 
        = (1U | (0xfffffff0U & vlSelf->tb_activation_buffer__DOT__ib_we_in[0U]));
    co_await vlSelf->__VtrigSched_h0c0022ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_activation_buffer.clk)", 
                                                       "tb/tb_activation_buffer.sv", 
                                                       49);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_activation_buffer.sv", 
                                       49);
    vlSelf->tb_activation_buffer__DOT__ib_we = 0U;
    vlSelf->tb_activation_buffer__DOT__ib_we_valid = 0U;
    __Vtask_tb_activation_buffer__DOT__check__14__cond 
        = (0U != (IData)(vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__curr_count));
    __Vtask_tb_activation_buffer__DOT__check__14__name = 
        std::string{"after another write: not empty"};
    vlSelf->tb_activation_buffer__DOT__checks = ((IData)(1U) 
                                                 + vlSelf->tb_activation_buffer__DOT__checks);
    if (__Vtask_tb_activation_buffer__DOT__check__14__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_activation_buffer__DOT__check__14__name));
    } else {
        vlSelf->tb_activation_buffer__DOT__errors = 
            ((IData)(1U) + vlSelf->tb_activation_buffer__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_activation_buffer__DOT__check__14__name));
    }
    vlSelf->tb_activation_buffer__DOT__ib_clr = 1U;
    co_await vlSelf->__VtrigSched_h0c0022ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_activation_buffer.clk)", 
                                                       "tb/tb_activation_buffer.sv", 
                                                       49);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_activation_buffer.sv", 
                                       49);
    vlSelf->tb_activation_buffer__DOT__ib_clr = 0U;
    __Vtask_tb_activation_buffer__DOT__check__16__cond 
        = (0U == (IData)(vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__curr_count));
    __Vtask_tb_activation_buffer__DOT__check__16__name = 
        std::string{"clr forces empty"};
    vlSelf->tb_activation_buffer__DOT__checks = ((IData)(1U) 
                                                 + vlSelf->tb_activation_buffer__DOT__checks);
    if (__Vtask_tb_activation_buffer__DOT__check__16__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_activation_buffer__DOT__check__16__name));
    } else {
        vlSelf->tb_activation_buffer__DOT__errors = 
            ((IData)(1U) + vlSelf->tb_activation_buffer__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_activation_buffer__DOT__check__16__name));
    }
    VL_WRITEF("i_buffer: %0d/%0d checks passed\n\n",
              32,(vlSelf->tb_activation_buffer__DOT__checks 
                  - vlSelf->tb_activation_buffer__DOT__errors),
              32,vlSelf->tb_activation_buffer__DOT__checks);
    vlSelf->tb_activation_buffer__DOT__bf_rst_n = 0U;
    vlSelf->tb_activation_buffer__DOT__bf_a_or_b = 1U;
    vlSelf->tb_activation_buffer__DOT__bf_start = 0U;
    vlSelf->tb_activation_buffer__DOT__bf_compute_state = 0U;
    vlSelf->tb_activation_buffer__DOT__bf_preload_state = 0U;
    vlSelf->tb_activation_buffer__DOT__bf_drain_state = 0U;
    vlSelf->tb_activation_buffer__DOT__bf_tiles_complete = 0U;
    vlSelf->tb_activation_buffer__DOT__bf_full = 0U;
    vlSelf->tb_activation_buffer__DOT__bf_empty = 1U;
    co_await vlSelf->__VtrigSched_h0c0022ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_activation_buffer.clk)", 
                                                       "tb/tb_activation_buffer.sv", 
                                                       108);
    co_await vlSelf->__VtrigSched_h0c0022ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_activation_buffer.clk)", 
                                                       "tb/tb_activation_buffer.sv", 
                                                       108);
    vlSelf->tb_activation_buffer__DOT__bf_rst_n = 1U;
    co_await vlSelf->__VtrigSched_h0c0022ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_activation_buffer.clk)", 
                                                       "tb/tb_activation_buffer.sv", 
                                                       110);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_activation_buffer.sv", 
                                       110);
    VL_WRITEF("==== bank_fsm (a_or_b=1, i.e. bank A) ====\n");
    __Vtask_tb_activation_buffer__DOT__check__19__cond 
        = (0U == (((IData)(vlSelf->tb_activation_buffer__DOT__bf_we) 
                   << 3U) | (((IData)(vlSelf->tb_activation_buffer__DOT__bf_re) 
                              << 2U) | (((IData)(vlSelf->tb_activation_buffer__DOT__bf_active) 
                                         << 1U) | (IData)(vlSelf->tb_activation_buffer__DOT__bf_clr)))));
    __Vtask_tb_activation_buffer__DOT__check__19__name = 
        std::string{"idle: we/re/active/clr low"};
    vlSelf->tb_activation_buffer__DOT__checks = ((IData)(1U) 
                                                 + vlSelf->tb_activation_buffer__DOT__checks);
    if (__Vtask_tb_activation_buffer__DOT__check__19__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_activation_buffer__DOT__check__19__name));
    } else {
        vlSelf->tb_activation_buffer__DOT__errors = 
            ((IData)(1U) + vlSelf->tb_activation_buffer__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_activation_buffer__DOT__check__19__name));
    }
    vlSelf->tb_activation_buffer__DOT__bf_start = 1U;
    co_await vlSelf->__VtrigSched_h0c0022ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_activation_buffer.clk)", 
                                                       "tb/tb_activation_buffer.sv", 
                                                       114);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_activation_buffer.sv", 
                                       114);
    vlSelf->tb_activation_buffer__DOT__bf_start = 0U;
    __Vtask_tb_activation_buffer__DOT__check__21__cond 
        = ((IData)(vlSelf->tb_activation_buffer__DOT__bf_we) 
           & (IData)(vlSelf->tb_activation_buffer__DOT__bf_first_pass));
    __Vtask_tb_activation_buffer__DOT__check__21__name = 
        std::string{"start (a_or_b=1): moves toward PREFILL, we asserted"};
    vlSelf->tb_activation_buffer__DOT__checks = ((IData)(1U) 
                                                 + vlSelf->tb_activation_buffer__DOT__checks);
    if (__Vtask_tb_activation_buffer__DOT__check__21__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_activation_buffer__DOT__check__21__name));
    } else {
        vlSelf->tb_activation_buffer__DOT__errors = 
            ((IData)(1U) + vlSelf->tb_activation_buffer__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_activation_buffer__DOT__check__21__name));
    }
    vlSelf->tb_activation_buffer__DOT__bf_full = 1U;
    co_await vlSelf->__VtrigSched_h0c0022ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_activation_buffer.clk)", 
                                                       "tb/tb_activation_buffer.sv", 
                                                       114);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_activation_buffer.sv", 
                                       114);
    __Vtask_tb_activation_buffer__DOT__check__23__cond 
        = ((IData)(vlSelf->tb_activation_buffer__DOT__bf_we) 
           & (IData)(vlSelf->tb_activation_buffer__DOT__bf_first_pass));
    __Vtask_tb_activation_buffer__DOT__check__23__name = 
        std::string{"PRELOAD (preload_state=0): stays in PRELOAD, we/first_pass asserted"};
    vlSelf->tb_activation_buffer__DOT__checks = ((IData)(1U) 
                                                 + vlSelf->tb_activation_buffer__DOT__checks);
    if (__Vtask_tb_activation_buffer__DOT__check__23__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_activation_buffer__DOT__check__23__name));
    } else {
        vlSelf->tb_activation_buffer__DOT__errors = 
            ((IData)(1U) + vlSelf->tb_activation_buffer__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_activation_buffer__DOT__check__23__name));
    }
    co_await vlSelf->__VtrigSched_h0c0022ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_activation_buffer.clk)", 
                                                       "tb/tb_activation_buffer.sv", 
                                                       114);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_activation_buffer.sv", 
                                       114);
    __Vtask_tb_activation_buffer__DOT__check__25__cond 
        = ((IData)(vlSelf->tb_activation_buffer__DOT__bf_we) 
           & (IData)(vlSelf->tb_activation_buffer__DOT__bf_first_pass));
    __Vtask_tb_activation_buffer__DOT__check__25__name = 
        std::string{"PRELOAD holds while preload_state stays low"};
    vlSelf->tb_activation_buffer__DOT__checks = ((IData)(1U) 
                                                 + vlSelf->tb_activation_buffer__DOT__checks);
    if (__Vtask_tb_activation_buffer__DOT__check__25__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_activation_buffer__DOT__check__25__name));
    } else {
        vlSelf->tb_activation_buffer__DOT__errors = 
            ((IData)(1U) + vlSelf->tb_activation_buffer__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_activation_buffer__DOT__check__25__name));
    }
    vlSelf->tb_activation_buffer__DOT__bf_preload_state = 1U;
    co_await vlSelf->__VtrigSched_h0c0022ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_activation_buffer.clk)", 
                                                       "tb/tb_activation_buffer.sv", 
                                                       114);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_activation_buffer.sv", 
                                       114);
    __Vtask_tb_activation_buffer__DOT__check__27__cond 
        = (1U & (~ (IData)(vlSelf->tb_activation_buffer__DOT__bf_active)));
    __Vtask_tb_activation_buffer__DOT__check__27__name = 
        std::string{"PRELOAD -> COMPUTE once preload_state is asserted"};
    vlSelf->tb_activation_buffer__DOT__checks = ((IData)(1U) 
                                                 + vlSelf->tb_activation_buffer__DOT__checks);
    if (__Vtask_tb_activation_buffer__DOT__check__27__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_activation_buffer__DOT__check__27__name));
    } else {
        vlSelf->tb_activation_buffer__DOT__errors = 
            ((IData)(1U) + vlSelf->tb_activation_buffer__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_activation_buffer__DOT__check__27__name));
    }
    vlSelf->tb_activation_buffer__DOT__bf_preload_state = 0U;
    VL_WRITEF("bank_fsm: %0d/%0d checks passed\n\n",
              32,(vlSelf->tb_activation_buffer__DOT__checks 
                  - vlSelf->tb_activation_buffer__DOT__errors),
              32,vlSelf->tb_activation_buffer__DOT__checks);
    VL_WRITEF("==== activation_buffer (top-level smoke test) ====\n");
    vlSelf->tb_activation_buffer__DOT__act_rst_n = 0U;
    vlSelf->tb_activation_buffer__DOT__act_start = 0U;
    vlSelf->tb_activation_buffer__DOT__act_compute_state = 0U;
    vlSelf->tb_activation_buffer__DOT__act_preload_state = 0U;
    vlSelf->tb_activation_buffer__DOT__act_drain_state = 0U;
    vlSelf->tb_activation_buffer__DOT__act_tiles_complete = 0U;
    vlSelf->tb_activation_buffer__DOT__act_DMA_in_valid = 0U;
    vlSelf->tb_activation_buffer__DOT__act_DMA_in[0U] = 0U;
    vlSelf->tb_activation_buffer__DOT__act_DMA_in[1U] = 0U;
    vlSelf->tb_activation_buffer__DOT__act_DMA_in[2U] = 0U;
    vlSelf->tb_activation_buffer__DOT__act_DMA_in[3U] = 0U;
    co_await vlSelf->__VtrigSched_h0c0022ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_activation_buffer.clk)", 
                                                       "tb/tb_activation_buffer.sv", 
                                                       172);
    co_await vlSelf->__VtrigSched_h0c0022ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_activation_buffer.clk)", 
                                                       "tb/tb_activation_buffer.sv", 
                                                       172);
    vlSelf->tb_activation_buffer__DOT__act_rst_n = 1U;
    co_await vlSelf->__VtrigSched_h0c0022ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_activation_buffer.clk)", 
                                                       "tb/tb_activation_buffer.sv", 
                                                       174);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_activation_buffer.sv", 
                                       174);
    __Vtask_tb_activation_buffer__DOT__check__29__cond 
        = (1U & (~ (IData)(vlSelf->tb_activation_buffer__DOT__act_output_buf_valid)));
    __Vtask_tb_activation_buffer__DOT__check__29__name = 
        std::string{"reset: output_buf_valid low"};
    vlSelf->tb_activation_buffer__DOT__checks = ((IData)(1U) 
                                                 + vlSelf->tb_activation_buffer__DOT__checks);
    if (__Vtask_tb_activation_buffer__DOT__check__29__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_activation_buffer__DOT__check__29__name));
    } else {
        vlSelf->tb_activation_buffer__DOT__errors = 
            ((IData)(1U) + vlSelf->tb_activation_buffer__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_activation_buffer__DOT__check__29__name));
    }
    __Vtask_tb_activation_buffer__DOT__check__30__cond 
        = (0U == (((vlSelf->tb_activation_buffer__DOT__act_output_buff[0U] 
                    | vlSelf->tb_activation_buffer__DOT__act_output_buff[1U]) 
                   | vlSelf->tb_activation_buffer__DOT__act_output_buff[2U]) 
                  | vlSelf->tb_activation_buffer__DOT__act_output_buff[3U]));
    __Vtask_tb_activation_buffer__DOT__check__30__name = 
        std::string{"reset: output_buff all zero"};
    vlSelf->tb_activation_buffer__DOT__checks = ((IData)(1U) 
                                                 + vlSelf->tb_activation_buffer__DOT__checks);
    if (__Vtask_tb_activation_buffer__DOT__check__30__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_activation_buffer__DOT__check__30__name));
    } else {
        vlSelf->tb_activation_buffer__DOT__errors = 
            ((IData)(1U) + vlSelf->tb_activation_buffer__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_activation_buffer__DOT__check__30__name));
    }
    VL_WRITEF("activation_buffer: %0d/%0d checks passed\n\n",
              32,(vlSelf->tb_activation_buffer__DOT__checks 
                  - vlSelf->tb_activation_buffer__DOT__errors),
              32,vlSelf->tb_activation_buffer__DOT__checks);
    VL_WRITEF("==== activation_buffer: double-buffer cycle ====\n");
    vlSelf->tb_activation_buffer__DOT__act_rst_n = 0U;
    vlSelf->tb_activation_buffer__DOT__act_start = 0U;
    vlSelf->tb_activation_buffer__DOT__act_compute_state = 0U;
    vlSelf->tb_activation_buffer__DOT__act_preload_state = 0U;
    vlSelf->tb_activation_buffer__DOT__act_drain_state = 0U;
    vlSelf->tb_activation_buffer__DOT__act_tiles_complete = 0U;
    vlSelf->tb_activation_buffer__DOT__act_DMA_in_valid = 0U;
    vlSelf->tb_activation_buffer__DOT__act_DMA_in[0U] = 0U;
    vlSelf->tb_activation_buffer__DOT__act_DMA_in[1U] = 0U;
    vlSelf->tb_activation_buffer__DOT__act_DMA_in[2U] = 0U;
    vlSelf->tb_activation_buffer__DOT__act_DMA_in[3U] = 0U;
    co_await vlSelf->__VtrigSched_h0c0022ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_activation_buffer.clk)", 
                                                       "tb/tb_activation_buffer.sv", 
                                                       197);
    co_await vlSelf->__VtrigSched_h0c0022ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_activation_buffer.clk)", 
                                                       "tb/tb_activation_buffer.sv", 
                                                       197);
    vlSelf->tb_activation_buffer__DOT__act_rst_n = 1U;
    co_await vlSelf->__VtrigSched_h0c0022ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_activation_buffer.clk)", 
                                                       "tb/tb_activation_buffer.sv", 
                                                       199);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_activation_buffer.sv", 
                                       199);
    vlSelf->tb_activation_buffer__DOT__act_start = 1U;
    co_await vlSelf->__VtrigSched_h0c0022ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_activation_buffer.clk)", 
                                                       "tb/tb_activation_buffer.sv", 
                                                       202);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_activation_buffer.sv", 
                                       202);
    vlSelf->tb_activation_buffer__DOT__act_start = 0U;
    __Vtask_tb_activation_buffer__DOT__check__32__cond 
        = vlSelf->tb_activation_buffer__DOT__act_dut__DOT__first_pass_a;
    __Vtask_tb_activation_buffer__DOT__check__32__name = 
        std::string{"start: bank A enters its first-pass fill (first_pass_a asserted)"};
    vlSelf->tb_activation_buffer__DOT__checks = ((IData)(1U) 
                                                 + vlSelf->tb_activation_buffer__DOT__checks);
    if (__Vtask_tb_activation_buffer__DOT__check__32__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_activation_buffer__DOT__check__32__name));
    } else {
        vlSelf->tb_activation_buffer__DOT__errors = 
            ((IData)(1U) + vlSelf->tb_activation_buffer__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_activation_buffer__DOT__check__32__name));
    }
    vlSelf->tb_activation_buffer__DOT__act_DMA_in_valid = 1U;
    vlSelf->tb_activation_buffer__DOT__act_DMA_in[0U] 
        = (5U | (0xfffffff0U & vlSelf->tb_activation_buffer__DOT__act_DMA_in[0U]));
    co_await vlSelf->__VtrigSched_h0c0022ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_activation_buffer.clk)", 
                                                       "tb/tb_activation_buffer.sv", 
                                                       212);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_activation_buffer.sv", 
                                       212);
    co_await vlSelf->__VtrigSched_h0c0022ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_activation_buffer.clk)", 
                                                       "tb/tb_activation_buffer.sv", 
                                                       212);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_activation_buffer.sv", 
                                       212);
    co_await vlSelf->__VtrigSched_h0c0022ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_activation_buffer.clk)", 
                                                       "tb/tb_activation_buffer.sv", 
                                                       212);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_activation_buffer.sv", 
                                       212);
    co_await vlSelf->__VtrigSched_h0c0022ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_activation_buffer.clk)", 
                                                       "tb/tb_activation_buffer.sv", 
                                                       212);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_activation_buffer.sv", 
                                       212);
    co_await vlSelf->__VtrigSched_h0c0022ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_activation_buffer.clk)", 
                                                       "tb/tb_activation_buffer.sv", 
                                                       212);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_activation_buffer.sv", 
                                       212);
    co_await vlSelf->__VtrigSched_h0c0022ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_activation_buffer.clk)", 
                                                       "tb/tb_activation_buffer.sv", 
                                                       212);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_activation_buffer.sv", 
                                       212);
    co_await vlSelf->__VtrigSched_h0c0022ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_activation_buffer.clk)", 
                                                       "tb/tb_activation_buffer.sv", 
                                                       212);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_activation_buffer.sv", 
                                       212);
    co_await vlSelf->__VtrigSched_h0c0022ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_activation_buffer.clk)", 
                                                       "tb/tb_activation_buffer.sv", 
                                                       212);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_activation_buffer.sv", 
                                       212);
    vlSelf->tb_activation_buffer__DOT__act_DMA_in_valid = 0U;
    __Vtask_tb_activation_buffer__DOT__check__33__cond 
        = (0x10U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count));
    __Vtask_tb_activation_buffer__DOT__check__33__name = 
        std::string{"A fills to exactly 16 bytes via DMA during first_pass"};
    vlSelf->tb_activation_buffer__DOT__checks = ((IData)(1U) 
                                                 + vlSelf->tb_activation_buffer__DOT__checks);
    if (__Vtask_tb_activation_buffer__DOT__check__33__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_activation_buffer__DOT__check__33__name));
    } else {
        vlSelf->tb_activation_buffer__DOT__errors = 
            ((IData)(1U) + vlSelf->tb_activation_buffer__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_activation_buffer__DOT__check__33__name));
    }
    __Vtask_tb_activation_buffer__DOT__check__34__cond 
        = (0x10U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count));
    __Vtask_tb_activation_buffer__DOT__check__34__name = 
        std::string{"buff_a_full asserted once A is full"};
    vlSelf->tb_activation_buffer__DOT__checks = ((IData)(1U) 
                                                 + vlSelf->tb_activation_buffer__DOT__checks);
    if (__Vtask_tb_activation_buffer__DOT__check__34__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_activation_buffer__DOT__check__34__name));
    } else {
        vlSelf->tb_activation_buffer__DOT__errors = 
            ((IData)(1U) + vlSelf->tb_activation_buffer__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_activation_buffer__DOT__check__34__name));
    }
    vlSelf->tb_activation_buffer__DOT__act_preload_state = 1U;
    vlSelf->tb_activation_buffer__DOT__act_compute_state = 1U;
    vlSelf->tb_activation_buffer__DOT__act_DMA_in_valid = 1U;
    vlSelf->tb_activation_buffer__DOT__act_DMA_in[0U] 
        = (7U | (0xfffffff0U & vlSelf->tb_activation_buffer__DOT__act_DMA_in[0U]));
    co_await vlSelf->__VtrigSched_h0c0022ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_activation_buffer.clk)", 
                                                       "tb/tb_activation_buffer.sv", 
                                                       232);
    co_await vlSelf->__VtrigSched_h0c0022ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_activation_buffer.clk)", 
                                                       "tb/tb_activation_buffer.sv", 
                                                       232);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_activation_buffer.sv", 
                                       233);
    __Vtask_tb_activation_buffer__DOT__check__35__cond 
        = vlSelf->tb_activation_buffer__DOT__act_dut__DOT__buff_a_active;
    __Vtask_tb_activation_buffer__DOT__check__35__name = 
        std::string{"A becomes the active/draining bank once compute_state is asserted"};
    vlSelf->tb_activation_buffer__DOT__checks = ((IData)(1U) 
                                                 + vlSelf->tb_activation_buffer__DOT__checks);
    if (__Vtask_tb_activation_buffer__DOT__check__35__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_activation_buffer__DOT__check__35__name));
    } else {
        vlSelf->tb_activation_buffer__DOT__errors = 
            ((IData)(1U) + vlSelf->tb_activation_buffer__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_activation_buffer__DOT__check__35__name));
    }
    __Vtask_tb_activation_buffer__DOT__check__36__cond 
        = ((IData)(vlSelf->tb_activation_buffer__DOT__act_output_buf_valid) 
           & (5U == (0xfU & vlSelf->tb_activation_buffer__DOT__act_output_buff[0U])));
    __Vtask_tb_activation_buffer__DOT__check__36__name = 
        std::string{"output reflects A's data (0x5) while A is active"};
    vlSelf->tb_activation_buffer__DOT__checks = ((IData)(1U) 
                                                 + vlSelf->tb_activation_buffer__DOT__checks);
    if (__Vtask_tb_activation_buffer__DOT__check__36__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_activation_buffer__DOT__check__36__name));
    } else {
        vlSelf->tb_activation_buffer__DOT__errors = 
            ((IData)(1U) + vlSelf->tb_activation_buffer__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_activation_buffer__DOT__check__36__name));
    }
    co_await vlSelf->__VtrigSched_h0c0022ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_activation_buffer.clk)", 
                                                       "tb/tb_activation_buffer.sv", 
                                                       241);
    co_await vlSelf->__VtrigSched_h0c0022ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_activation_buffer.clk)", 
                                                       "tb/tb_activation_buffer.sv", 
                                                       241);
    co_await vlSelf->__VtrigSched_h0c0022ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_activation_buffer.clk)", 
                                                       "tb/tb_activation_buffer.sv", 
                                                       241);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_activation_buffer.sv", 
                                       242);
    __Vtask_tb_activation_buffer__DOT__check__37__cond 
        = (0x10U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count));
    __Vtask_tb_activation_buffer__DOT__check__37__name = 
        std::string{"B fills to exactly 16 bytes right as A finishes draining (no data loss, no halving)"};
    vlSelf->tb_activation_buffer__DOT__checks = ((IData)(1U) 
                                                 + vlSelf->tb_activation_buffer__DOT__checks);
    if (__Vtask_tb_activation_buffer__DOT__check__37__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_activation_buffer__DOT__check__37__name));
    } else {
        vlSelf->tb_activation_buffer__DOT__errors = 
            ((IData)(1U) + vlSelf->tb_activation_buffer__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_activation_buffer__DOT__check__37__name));
    }
    __Vtask_tb_activation_buffer__DOT__run_double_buffer_cycle_test__31__unnamedblk2__DOT__last_bank_a = 1U;
    __Vtask_tb_activation_buffer__DOT__run_double_buffer_cycle_test__31__unnamedblk2__DOT__switch_count = 0U;
    __Vtask_tb_activation_buffer__DOT__run_double_buffer_cycle_test__31__unnamedblk2__DOT__safety_cycles = 0U;
    __Vtask_tb_activation_buffer__DOT__run_double_buffer_cycle_test__31__unnamedblk2__DOT__mutex_violation = 0U;
    while ((VL_GTS_III(32, 0xcU, __Vtask_tb_activation_buffer__DOT__run_double_buffer_cycle_test__31__unnamedblk2__DOT__switch_count) 
            & VL_GTS_III(32, 0x7d0U, __Vtask_tb_activation_buffer__DOT__run_double_buffer_cycle_test__31__unnamedblk2__DOT__safety_cycles))) {
        co_await vlSelf->__VtrigSched_h0c0022ab__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_activation_buffer.clk)", 
                                                           "tb/tb_activation_buffer.sv", 
                                                           262);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_activation_buffer.sv", 
                                           262);
        __Vtask_tb_activation_buffer__DOT__run_double_buffer_cycle_test__31__unnamedblk2__DOT__safety_cycles 
            = ((IData)(1U) + __Vtask_tb_activation_buffer__DOT__run_double_buffer_cycle_test__31__unnamedblk2__DOT__safety_cycles);
        if (((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__buff_a_active) 
             & (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__buff_b_active))) {
            __Vtask_tb_activation_buffer__DOT__run_double_buffer_cycle_test__31__unnamedblk2__DOT__mutex_violation = 1U;
        }
        if (((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__buff_b_active) 
             & (IData)(__Vtask_tb_activation_buffer__DOT__run_double_buffer_cycle_test__31__unnamedblk2__DOT__last_bank_a))) {
            __Vtask_tb_activation_buffer__DOT__run_double_buffer_cycle_test__31__unnamedblk2__DOT__switch_count 
                = ((IData)(1U) + __Vtask_tb_activation_buffer__DOT__run_double_buffer_cycle_test__31__unnamedblk2__DOT__switch_count);
            __Vtask_tb_activation_buffer__DOT__run_double_buffer_cycle_test__31__unnamedblk2__DOT__last_bank_a = 0U;
        } else if (((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__buff_a_active) 
                    & (~ (IData)(__Vtask_tb_activation_buffer__DOT__run_double_buffer_cycle_test__31__unnamedblk2__DOT__last_bank_a)))) {
            __Vtask_tb_activation_buffer__DOT__run_double_buffer_cycle_test__31__unnamedblk2__DOT__switch_count 
                = ((IData)(1U) + __Vtask_tb_activation_buffer__DOT__run_double_buffer_cycle_test__31__unnamedblk2__DOT__switch_count);
            __Vtask_tb_activation_buffer__DOT__run_double_buffer_cycle_test__31__unnamedblk2__DOT__last_bank_a = 1U;
        }
    }
    __Vtask_tb_activation_buffer__DOT__check__38__cond 
        = VL_LTES_III(32, 0xcU, __Vtask_tb_activation_buffer__DOT__run_double_buffer_cycle_test__31__unnamedblk2__DOT__switch_count);
    __Vtask_tb_activation_buffer__DOT__check__38__name 
        = VL_SFORMATF_NX("observed all 12 requested bank switches within the cycle budget (took %0d cycles)",
                         32,__Vtask_tb_activation_buffer__DOT__run_double_buffer_cycle_test__31__unnamedblk2__DOT__safety_cycles) ;
    vlSelf->tb_activation_buffer__DOT__checks = ((IData)(1U) 
                                                 + vlSelf->tb_activation_buffer__DOT__checks);
    if (__Vtask_tb_activation_buffer__DOT__check__38__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_activation_buffer__DOT__check__38__name));
    } else {
        vlSelf->tb_activation_buffer__DOT__errors = 
            ((IData)(1U) + vlSelf->tb_activation_buffer__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_activation_buffer__DOT__check__38__name));
    }
    __Vtask_tb_activation_buffer__DOT__check__39__cond 
        = (1U & (~ (IData)(__Vtask_tb_activation_buffer__DOT__run_double_buffer_cycle_test__31__unnamedblk2__DOT__mutex_violation)));
    __Vtask_tb_activation_buffer__DOT__check__39__name = 
        std::string{"mutual exclusion (A and B never both active) held across all 12 switches"};
    vlSelf->tb_activation_buffer__DOT__checks = ((IData)(1U) 
                                                 + vlSelf->tb_activation_buffer__DOT__checks);
    if (__Vtask_tb_activation_buffer__DOT__check__39__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_activation_buffer__DOT__check__39__name));
    } else {
        vlSelf->tb_activation_buffer__DOT__errors = 
            ((IData)(1U) + vlSelf->tb_activation_buffer__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_activation_buffer__DOT__check__39__name));
    }
    vlSelf->tb_activation_buffer__DOT__act_DMA_in_valid = 0U;
    vlSelf->tb_activation_buffer__DOT__act_compute_state = 0U;
    VL_WRITEF("activation_buffer double-buffer cycle: %0d/%0d checks passed\n\n==== SUMMARY ====\ntotal: %0d/%0d checks passed\n",
              32,(vlSelf->tb_activation_buffer__DOT__checks 
                  - vlSelf->tb_activation_buffer__DOT__errors),
              32,vlSelf->tb_activation_buffer__DOT__checks,
              32,(vlSelf->tb_activation_buffer__DOT__checks 
                  - vlSelf->tb_activation_buffer__DOT__errors),
              32,vlSelf->tb_activation_buffer__DOT__checks);
    VL_FINISH_MT("tb/tb_activation_buffer.sv", 295, "");
}

VL_INLINE_OPT VlCoroutine Vtb_activation_buffer___024root___eval_initial__TOP__Vtiming__1(Vtb_activation_buffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_activation_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_activation_buffer___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "tb/tb_activation_buffer.sv", 
                                           27);
        vlSelf->tb_activation_buffer__DOT__clk = (1U 
                                                  & (~ (IData)(vlSelf->tb_activation_buffer__DOT__clk)));
    }
}

VL_INLINE_OPT void Vtb_activation_buffer___024root___act_comb__TOP__0(Vtb_activation_buffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_activation_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_activation_buffer___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__we_a = 0U;
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__we_b = 0U;
    vlSelf->tb_activation_buffer__DOT__bf_re = 0U;
    vlSelf->tb_activation_buffer__DOT__bf_first_pass = 0U;
    vlSelf->tb_activation_buffer__DOT__bf_we = 0U;
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_a = 0U;
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_b = 0U;
    vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__next_state 
        = vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state;
    vlSelf->tb_activation_buffer__DOT__bf_active = 0U;
    if (((((((((0U == (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state)) 
               | (1U == (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) 
              | (2U == (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) 
             | (3U == (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) 
            | (4U == (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) 
           | (5U == (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) 
          | (6U == (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) 
         | (7U == (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state)))) {
        if ((0U != (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
            if ((1U != (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
                if ((2U != (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
                    if ((3U == (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
                        if ((((~ (IData)(vlSelf->tb_activation_buffer__DOT__bf_empty)) 
                              & ((IData)(vlSelf->tb_activation_buffer__DOT__bf_compute_state) 
                                 | (IData)(vlSelf->tb_activation_buffer__DOT__bf_drain_state))) 
                             & (~ (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__o_bank_reg)))) {
                            vlSelf->tb_activation_buffer__DOT__bf_re = 1U;
                        }
                    }
                }
            }
        }
        if ((0U == (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
            if (((IData)(vlSelf->tb_activation_buffer__DOT__bf_start) 
                 & (IData)(vlSelf->tb_activation_buffer__DOT__bf_a_or_b))) {
                vlSelf->tb_activation_buffer__DOT__bf_first_pass = 1U;
                vlSelf->tb_activation_buffer__DOT__bf_we = 1U;
                vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__next_state = 1U;
            } else if (((IData)(vlSelf->tb_activation_buffer__DOT__bf_start) 
                        & (~ (IData)(vlSelf->tb_activation_buffer__DOT__bf_a_or_b)))) {
                vlSelf->tb_activation_buffer__DOT__bf_we = 1U;
                vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__next_state = 4U;
            } else {
                vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__next_state = 0U;
            }
        } else if ((1U == (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
            if ((1U & (~ (IData)(vlSelf->tb_activation_buffer__DOT__bf_full)))) {
                vlSelf->tb_activation_buffer__DOT__bf_first_pass = 1U;
                vlSelf->tb_activation_buffer__DOT__bf_we = 1U;
            }
            vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__next_state 
                = ((IData)(vlSelf->tb_activation_buffer__DOT__bf_full)
                    ? 2U : 1U);
        } else if ((2U == (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
            if ((1U & (~ (IData)(vlSelf->tb_activation_buffer__DOT__bf_preload_state)))) {
                vlSelf->tb_activation_buffer__DOT__bf_first_pass = 1U;
                vlSelf->tb_activation_buffer__DOT__bf_we = 1U;
            }
            vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__next_state 
                = ((IData)(vlSelf->tb_activation_buffer__DOT__bf_preload_state)
                    ? 3U : 2U);
        } else {
            if ((3U != (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
                if ((4U != (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
                    if ((5U == (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
                        vlSelf->tb_activation_buffer__DOT__bf_we = 1U;
                    }
                }
            }
            if ((3U == (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
                if ((((~ (IData)(vlSelf->tb_activation_buffer__DOT__bf_empty)) 
                      & ((IData)(vlSelf->tb_activation_buffer__DOT__bf_compute_state) 
                         | (IData)(vlSelf->tb_activation_buffer__DOT__bf_drain_state))) 
                     & (~ (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__o_bank_reg)))) {
                    vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__next_state = 3U;
                    vlSelf->tb_activation_buffer__DOT__bf_active = 1U;
                } else if ((((~ (IData)(vlSelf->tb_activation_buffer__DOT__bf_tiles_complete)) 
                             & (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__o_bank_reg)) 
                            & (~ (IData)(vlSelf->tb_activation_buffer__DOT__bf_active)))) {
                    vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__next_state = 5U;
                } else if (vlSelf->tb_activation_buffer__DOT__bf_tiles_complete) {
                    vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__next_state = 7U;
                }
            } else if ((4U == (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
                vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__next_state 
                    = ((IData)(vlSelf->tb_activation_buffer__DOT__bf_compute_state)
                        ? 5U : 4U);
            } else if ((5U == (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
                if ((((IData)(vlSelf->tb_activation_buffer__DOT__bf_compute_state) 
                      | (IData)(vlSelf->tb_activation_buffer__DOT__bf_drain_state)) 
                     & (IData)(vlSelf->tb_activation_buffer__DOT__bf_full))) {
                    vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__next_state = 6U;
                    vlSelf->tb_activation_buffer__DOT__bf_active = 1U;
                } else if ((1U & (~ (IData)(vlSelf->tb_activation_buffer__DOT__bf_full)))) {
                    vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__next_state = 5U;
                }
            } else if ((6U == (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
                vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__next_state = 3U;
                vlSelf->tb_activation_buffer__DOT__bf_active = 1U;
            } else {
                vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__next_state = 0U;
            }
        }
    }
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__first_pass_a = 0U;
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__next_state 
        = vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state;
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__buff_b_active = 0U;
    if (((((((((0U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state)) 
               | (1U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) 
              | (2U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) 
             | (3U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) 
            | (4U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) 
           | (5U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) 
          | (6U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) 
         | (7U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state)))) {
        if ((0U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
            if (vlSelf->tb_activation_buffer__DOT__act_start) {
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__we_b = 1U;
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__next_state = 4U;
            } else {
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__next_state = 0U;
            }
        } else if ((1U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
            if ((0x10U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count))) {
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__we_b = 1U;
            }
            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__next_state 
                = ((0x10U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count))
                    ? 2U : 1U);
        } else if ((2U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
            if ((1U & (~ (IData)(vlSelf->tb_activation_buffer__DOT__act_preload_state)))) {
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__we_b = 1U;
            }
            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__next_state 
                = ((IData)(vlSelf->tb_activation_buffer__DOT__act_preload_state)
                    ? 3U : 2U);
        } else {
            if ((3U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
                if ((4U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
                    if ((5U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
                        vlSelf->tb_activation_buffer__DOT__act_dut__DOT__we_b = 1U;
                    }
                }
            }
            if ((3U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
                if ((((0U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count)) 
                      & ((IData)(vlSelf->tb_activation_buffer__DOT__act_compute_state) 
                         | (IData)(vlSelf->tb_activation_buffer__DOT__act_drain_state))) 
                     & (~ (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__o_bank_reg)))) {
                    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__next_state = 3U;
                    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__buff_b_active = 1U;
                } else if ((((~ (IData)(vlSelf->tb_activation_buffer__DOT__act_tiles_complete)) 
                             & (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__o_bank_reg)) 
                            & (~ (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__buff_b_active)))) {
                    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__next_state = 5U;
                } else if (vlSelf->tb_activation_buffer__DOT__act_tiles_complete) {
                    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__next_state = 7U;
                }
            } else if ((4U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__next_state 
                    = ((IData)(vlSelf->tb_activation_buffer__DOT__act_compute_state)
                        ? 5U : 4U);
            } else if ((5U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
                if ((((IData)(vlSelf->tb_activation_buffer__DOT__act_compute_state) 
                      | (IData)(vlSelf->tb_activation_buffer__DOT__act_drain_state)) 
                     & (0x10U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count)))) {
                    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__next_state = 6U;
                    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__buff_b_active = 1U;
                } else if ((0x10U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count))) {
                    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__next_state = 5U;
                }
            } else if ((6U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__next_state = 3U;
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__buff_b_active = 1U;
            } else {
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__next_state = 0U;
            }
        }
        if ((0U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
            if ((1U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
                if ((2U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
                    if ((3U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
                        if ((((0U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count)) 
                              & ((IData)(vlSelf->tb_activation_buffer__DOT__act_compute_state) 
                                 | (IData)(vlSelf->tb_activation_buffer__DOT__act_drain_state))) 
                             & (~ (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__o_bank_reg)))) {
                            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_b = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__next_state 
        = vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state;
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__buff_a_active = 0U;
    if (((((((((0U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state)) 
               | (1U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) 
              | (2U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) 
             | (3U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) 
            | (4U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) 
           | (5U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) 
          | (6U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) 
         | (7U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state)))) {
        if ((0U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
            if (vlSelf->tb_activation_buffer__DOT__act_start) {
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__we_a = 1U;
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__first_pass_a = 1U;
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__next_state = 1U;
            } else {
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__next_state = 0U;
            }
        } else if ((1U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
            if ((0x10U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count))) {
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__we_a = 1U;
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__first_pass_a = 1U;
            }
            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__next_state 
                = ((0x10U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count))
                    ? 2U : 1U);
        } else if ((2U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
            if ((1U & (~ (IData)(vlSelf->tb_activation_buffer__DOT__act_preload_state)))) {
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__we_a = 1U;
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__first_pass_a = 1U;
            }
            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__next_state 
                = ((IData)(vlSelf->tb_activation_buffer__DOT__act_preload_state)
                    ? 3U : 2U);
        } else {
            if ((3U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
                if ((4U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
                    if ((5U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
                        vlSelf->tb_activation_buffer__DOT__act_dut__DOT__we_a = 1U;
                    }
                }
            }
            if ((3U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
                if ((((0U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count)) 
                      & ((IData)(vlSelf->tb_activation_buffer__DOT__act_compute_state) 
                         | (IData)(vlSelf->tb_activation_buffer__DOT__act_drain_state))) 
                     & (~ (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__o_bank_reg)))) {
                    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__next_state = 3U;
                    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__buff_a_active = 1U;
                } else if ((((~ (IData)(vlSelf->tb_activation_buffer__DOT__act_tiles_complete)) 
                             & (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__o_bank_reg)) 
                            & (~ (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__buff_a_active)))) {
                    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__next_state = 5U;
                } else if (vlSelf->tb_activation_buffer__DOT__act_tiles_complete) {
                    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__next_state = 7U;
                }
            } else if ((4U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__next_state 
                    = ((IData)(vlSelf->tb_activation_buffer__DOT__act_compute_state)
                        ? 5U : 4U);
            } else if ((5U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
                if ((((IData)(vlSelf->tb_activation_buffer__DOT__act_compute_state) 
                      | (IData)(vlSelf->tb_activation_buffer__DOT__act_drain_state)) 
                     & (0x10U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count)))) {
                    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__next_state = 6U;
                    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__buff_a_active = 1U;
                } else if ((0x10U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count))) {
                    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__next_state = 5U;
                }
            } else if ((6U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__next_state = 3U;
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__buff_a_active = 1U;
            } else {
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__next_state = 0U;
            }
        }
        if ((0U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
            if ((1U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
                if ((2U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
                    if ((3U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
                        if ((((0U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count)) 
                              & ((IData)(vlSelf->tb_activation_buffer__DOT__act_compute_state) 
                                 | (IData)(vlSelf->tb_activation_buffer__DOT__act_drain_state))) 
                             & (~ (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__o_bank_reg)))) {
                            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_a = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__we_valid_b = 0U;
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_b[0U] = 0U;
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_b[1U] = 0U;
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_b[2U] = 0U;
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_b[3U] = 0U;
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__we_valid_a = 0U;
    vlSelf->tb_activation_buffer__DOT__act_output_buf_valid = 0U;
    if (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__first_pass_a) {
        if (vlSelf->tb_activation_buffer__DOT__act_DMA_in_valid) {
            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__we_valid_a = 1U;
        }
        if (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_valid_a) {
            vlSelf->tb_activation_buffer__DOT__act_output_buf_valid = 0U;
        }
    }
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_a[0U] = 0U;
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_a[1U] = 0U;
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_a[2U] = 0U;
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_a[3U] = 0U;
    if ((1U & (~ (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__buff_a_active)))) {
        if (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__buff_b_active) {
            if (vlSelf->tb_activation_buffer__DOT__act_DMA_in_valid) {
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__we_valid_a = 1U;
            }
        }
    }
    if (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__first_pass_a) {
        if (vlSelf->tb_activation_buffer__DOT__act_DMA_in_valid) {
            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_a[0U] 
                = vlSelf->tb_activation_buffer__DOT__act_DMA_in[0U];
            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_a[1U] 
                = vlSelf->tb_activation_buffer__DOT__act_DMA_in[1U];
            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_a[2U] 
                = vlSelf->tb_activation_buffer__DOT__act_DMA_in[2U];
            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_a[3U] 
                = vlSelf->tb_activation_buffer__DOT__act_DMA_in[3U];
        }
    }
    if ((1U & (~ (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__buff_a_active)))) {
        if (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__buff_b_active) {
            if (vlSelf->tb_activation_buffer__DOT__act_DMA_in_valid) {
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_a[0U] 
                    = vlSelf->tb_activation_buffer__DOT__act_DMA_in[0U];
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_a[1U] 
                    = vlSelf->tb_activation_buffer__DOT__act_DMA_in[1U];
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_a[2U] 
                    = vlSelf->tb_activation_buffer__DOT__act_DMA_in[2U];
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_a[3U] 
                    = vlSelf->tb_activation_buffer__DOT__act_DMA_in[3U];
            }
        }
    }
    vlSelf->tb_activation_buffer__DOT__act_output_buff[0U] = 0U;
    vlSelf->tb_activation_buffer__DOT__act_output_buff[1U] = 0U;
    vlSelf->tb_activation_buffer__DOT__act_output_buff[2U] = 0U;
    vlSelf->tb_activation_buffer__DOT__act_output_buff[3U] = 0U;
    if (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__first_pass_a) {
        if (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_valid_a) {
            vlSelf->tb_activation_buffer__DOT__act_output_buff[0U] = 0U;
            vlSelf->tb_activation_buffer__DOT__act_output_buff[1U] = 0U;
            vlSelf->tb_activation_buffer__DOT__act_output_buff[2U] = 0U;
            vlSelf->tb_activation_buffer__DOT__act_output_buff[3U] = 0U;
        }
    }
    if (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__buff_a_active) {
        if (vlSelf->tb_activation_buffer__DOT__act_DMA_in_valid) {
            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__we_valid_b = 1U;
            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_b[0U] 
                = vlSelf->tb_activation_buffer__DOT__act_DMA_in[0U];
            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_b[1U] 
                = vlSelf->tb_activation_buffer__DOT__act_DMA_in[1U];
            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_b[2U] 
                = vlSelf->tb_activation_buffer__DOT__act_DMA_in[2U];
            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_b[3U] 
                = vlSelf->tb_activation_buffer__DOT__act_DMA_in[3U];
        }
        if (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_valid_a) {
            vlSelf->tb_activation_buffer__DOT__act_output_buf_valid 
                = vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_valid_a;
            vlSelf->tb_activation_buffer__DOT__act_output_buff[0U] 
                = vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_out_a[0U];
            vlSelf->tb_activation_buffer__DOT__act_output_buff[1U] 
                = vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_out_a[1U];
            vlSelf->tb_activation_buffer__DOT__act_output_buff[2U] 
                = vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_out_a[2U];
            vlSelf->tb_activation_buffer__DOT__act_output_buff[3U] 
                = vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_out_a[3U];
        }
    } else if (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__buff_b_active) {
        if (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_valid_b) {
            vlSelf->tb_activation_buffer__DOT__act_output_buf_valid 
                = vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_valid_b;
            vlSelf->tb_activation_buffer__DOT__act_output_buff[0U] 
                = vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_out_b[0U];
            vlSelf->tb_activation_buffer__DOT__act_output_buff[1U] 
                = vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_out_b[1U];
            vlSelf->tb_activation_buffer__DOT__act_output_buff[2U] 
                = vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_out_b[2U];
            vlSelf->tb_activation_buffer__DOT__act_output_buff[3U] 
                = vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_out_b[3U];
        }
    }
}

void Vtb_activation_buffer___024root___eval_act(Vtb_activation_buffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_activation_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_activation_buffer___024root___eval_act\n"); );
    // Body
    if ((0x18ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_activation_buffer___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_activation_buffer___024root___nba_sequent__TOP__0(Vtb_activation_buffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_activation_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_activation_buffer___024root___nba_sequent__TOP__0\n"); );
    // Init
    SData/*9:0*/ __Vdly__tb_activation_buffer__DOT__ib_dut__DOT__curr_count;
    __Vdly__tb_activation_buffer__DOT__ib_dut__DOT__curr_count = 0;
    VlWide<4>/*127:0*/ __Vdly__tb_activation_buffer__DOT__ib_dut__DOT__buff;
    VL_ZERO_W(128, __Vdly__tb_activation_buffer__DOT__ib_dut__DOT__buff);
    // Body
    __Vdly__tb_activation_buffer__DOT__ib_dut__DOT__buff[0U] 
        = vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__buff[0U];
    __Vdly__tb_activation_buffer__DOT__ib_dut__DOT__buff[1U] 
        = vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__buff[1U];
    __Vdly__tb_activation_buffer__DOT__ib_dut__DOT__buff[2U] 
        = vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__buff[2U];
    __Vdly__tb_activation_buffer__DOT__ib_dut__DOT__buff[3U] 
        = vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__buff[3U];
    __Vdly__tb_activation_buffer__DOT__ib_dut__DOT__curr_count 
        = vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__curr_count;
    if (vlSelf->tb_activation_buffer__DOT__ib_rst_n) {
        if (vlSelf->tb_activation_buffer__DOT__ib_clr) {
            vlSelf->tb_activation_buffer__DOT__ib_re_valid = 0U;
            __Vdly__tb_activation_buffer__DOT__ib_dut__DOT__curr_count = 0U;
        } else if (vlSelf->tb_activation_buffer__DOT__ib_we) {
            if (((IData)(vlSelf->tb_activation_buffer__DOT__ib_we_valid) 
                 & (0x10U != (IData)(vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__curr_count)))) {
                vlSelf->tb_activation_buffer__DOT__ib_re_valid = 0U;
            }
            if (((IData)(vlSelf->tb_activation_buffer__DOT__ib_we_valid) 
                 & (~ (IData)(vlSelf->tb_activation_buffer__DOT__ib_full)))) {
                VL_ASSIGNSEL_WI(128,8,(0x7fU & VL_SHIFTL_III(7,32,32, (IData)(vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__curr_count), 3U)), __Vdly__tb_activation_buffer__DOT__ib_dut__DOT__buff, 
                                (0xfU & vlSelf->tb_activation_buffer__DOT__ib_we_in[0U]));
                VL_ASSIGNSEL_WI(128,8,(0x7fU & VL_SHIFTL_III(7,32,32, 
                                                             ((IData)(1U) 
                                                              + (IData)(vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__curr_count)), 3U)), __Vdly__tb_activation_buffer__DOT__ib_dut__DOT__buff, 
                                (0xfU & (vlSelf->tb_activation_buffer__DOT__ib_we_in[0U] 
                                         >> 4U)));
                VL_ASSIGNSEL_WI(128,8,(0x7fU & VL_SHIFTL_III(7,32,32, 
                                                             ((IData)(2U) 
                                                              + (IData)(vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__curr_count)), 3U)), __Vdly__tb_activation_buffer__DOT__ib_dut__DOT__buff, 
                                (0xfU & (vlSelf->tb_activation_buffer__DOT__ib_we_in[0U] 
                                         >> 8U)));
                VL_ASSIGNSEL_WI(128,8,(0x7fU & VL_SHIFTL_III(7,32,32, 
                                                             ((IData)(3U) 
                                                              + (IData)(vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__curr_count)), 3U)), __Vdly__tb_activation_buffer__DOT__ib_dut__DOT__buff, 
                                (0xfU & (vlSelf->tb_activation_buffer__DOT__ib_we_in[0U] 
                                         >> 0xcU)));
                __Vdly__tb_activation_buffer__DOT__ib_dut__DOT__curr_count 
                    = (0x3ffU & ((IData)(4U) + (IData)(vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__curr_count)));
            }
        } else if (vlSelf->tb_activation_buffer__DOT__ib_re) {
            vlSelf->tb_activation_buffer__DOT__ib_re_valid 
                = (0U != (IData)(vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__curr_count));
            if ((1U & (~ (IData)(vlSelf->tb_activation_buffer__DOT__ib_empty)))) {
                vlSelf->tb_activation_buffer__DOT__ib_re_out[0U] 
                    = ((0xfffffff0U & vlSelf->tb_activation_buffer__DOT__ib_re_out[0U]) 
                       | (0xfU & (((0U == (0x1fU & 
                                           VL_SHIFTL_III(7,32,32, 
                                                         ((IData)(vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__curr_count) 
                                                          - (IData)(4U)), 3U)))
                                    ? 0U : (vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__buff[
                                            (((IData)(3U) 
                                              + (0x7fU 
                                                 & VL_SHIFTL_III(7,32,32, 
                                                                 ((IData)(vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__curr_count) 
                                                                  - (IData)(4U)), 3U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   ((IData)(vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__curr_count) 
                                                                    - (IData)(4U)), 3U))))) 
                                  | (vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__buff[
                                     (3U & (VL_SHIFTL_III(7,32,32, 
                                                          ((IData)(vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__curr_count) 
                                                           - (IData)(4U)), 3U) 
                                            >> 5U))] 
                                     >> (0x1fU & VL_SHIFTL_III(7,32,32, 
                                                               ((IData)(vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__curr_count) 
                                                                - (IData)(4U)), 3U))))));
                vlSelf->tb_activation_buffer__DOT__ib_re_out[0U] 
                    = ((0xffffff0fU & vlSelf->tb_activation_buffer__DOT__ib_re_out[0U]) 
                       | (0xf0U & ((((0U == (0x1fU 
                                             & VL_SHIFTL_III(7,32,32, 
                                                             ((IData)(vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__curr_count) 
                                                              - (IData)(3U)), 3U)))
                                      ? 0U : (vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__buff[
                                              (((IData)(3U) 
                                                + (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   ((IData)(vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__curr_count) 
                                                                    - (IData)(3U)), 3U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   ((IData)(vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__curr_count) 
                                                                    - (IData)(3U)), 3U))))) 
                                    | (vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__buff[
                                       (3U & (VL_SHIFTL_III(7,32,32, 
                                                            ((IData)(vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__curr_count) 
                                                             - (IData)(3U)), 3U) 
                                              >> 5U))] 
                                       >> (0x1fU & 
                                           VL_SHIFTL_III(7,32,32, 
                                                         ((IData)(vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__curr_count) 
                                                          - (IData)(3U)), 3U)))) 
                                   << 4U)));
                vlSelf->tb_activation_buffer__DOT__ib_re_out[0U] 
                    = ((0xfffff0ffU & vlSelf->tb_activation_buffer__DOT__ib_re_out[0U]) 
                       | (0xf00U & ((((0U == (0x1fU 
                                              & VL_SHIFTL_III(7,32,32, 
                                                              ((IData)(vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__curr_count) 
                                                               - (IData)(2U)), 3U)))
                                       ? 0U : (vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__buff[
                                               (((IData)(3U) 
                                                 + 
                                                 (0x7fU 
                                                  & VL_SHIFTL_III(7,32,32, 
                                                                  ((IData)(vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__curr_count) 
                                                                   - (IData)(2U)), 3U))) 
                                                >> 5U)] 
                                               << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(7,32,32, 
                                                                    ((IData)(vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__curr_count) 
                                                                     - (IData)(2U)), 3U))))) 
                                     | (vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__buff[
                                        (3U & (VL_SHIFTL_III(7,32,32, 
                                                             ((IData)(vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__curr_count) 
                                                              - (IData)(2U)), 3U) 
                                               >> 5U))] 
                                        >> (0x1fU & 
                                            VL_SHIFTL_III(7,32,32, 
                                                          ((IData)(vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__curr_count) 
                                                           - (IData)(2U)), 3U)))) 
                                    << 8U)));
                vlSelf->tb_activation_buffer__DOT__ib_re_out[0U] 
                    = ((0xffff0fffU & vlSelf->tb_activation_buffer__DOT__ib_re_out[0U]) 
                       | (0xf000U & ((((0U == (0x1fU 
                                               & VL_SHIFTL_III(7,32,32, 
                                                               ((IData)(vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__curr_count) 
                                                                - (IData)(1U)), 3U)))
                                        ? 0U : (vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__buff[
                                                (((IData)(3U) 
                                                  + 
                                                  (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   ((IData)(vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__curr_count) 
                                                                    - (IData)(1U)), 3U))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(7,32,32, 
                                                                  ((IData)(vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__curr_count) 
                                                                   - (IData)(1U)), 3U))))) 
                                      | (vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__buff[
                                         (3U & (VL_SHIFTL_III(7,32,32, 
                                                              ((IData)(vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__curr_count) 
                                                               - (IData)(1U)), 3U) 
                                                >> 5U))] 
                                         >> (0x1fU 
                                             & VL_SHIFTL_III(7,32,32, 
                                                             ((IData)(vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__curr_count) 
                                                              - (IData)(1U)), 3U)))) 
                                     << 0xcU)));
                __Vdly__tb_activation_buffer__DOT__ib_dut__DOT__curr_count 
                    = (0x3ffU & ((IData)(vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__curr_count) 
                                 - (IData)(4U)));
            }
        }
    } else {
        __Vdly__tb_activation_buffer__DOT__ib_dut__DOT__curr_count = 0U;
        __Vdly__tb_activation_buffer__DOT__ib_dut__DOT__buff[0U] = 0U;
        __Vdly__tb_activation_buffer__DOT__ib_dut__DOT__buff[1U] = 0U;
        __Vdly__tb_activation_buffer__DOT__ib_dut__DOT__buff[2U] = 0U;
        __Vdly__tb_activation_buffer__DOT__ib_dut__DOT__buff[3U] = 0U;
    }
    vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__buff[0U] 
        = __Vdly__tb_activation_buffer__DOT__ib_dut__DOT__buff[0U];
    vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__buff[1U] 
        = __Vdly__tb_activation_buffer__DOT__ib_dut__DOT__buff[1U];
    vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__buff[2U] 
        = __Vdly__tb_activation_buffer__DOT__ib_dut__DOT__buff[2U];
    vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__buff[3U] 
        = __Vdly__tb_activation_buffer__DOT__ib_dut__DOT__buff[3U];
    vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__curr_count 
        = __Vdly__tb_activation_buffer__DOT__ib_dut__DOT__curr_count;
    vlSelf->tb_activation_buffer__DOT__ib_empty = (0U 
                                                   == (IData)(vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__curr_count));
    vlSelf->tb_activation_buffer__DOT__ib_full = (0x10U 
                                                  == (IData)(vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__curr_count));
}

VL_INLINE_OPT void Vtb_activation_buffer___024root___nba_sequent__TOP__1(Vtb_activation_buffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_activation_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_activation_buffer___024root___nba_sequent__TOP__1\n"); );
    // Init
    SData/*9:0*/ __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count;
    __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count = 0;
    VlWide<4>/*127:0*/ __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__buff;
    VL_ZERO_W(128, __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__buff);
    SData/*9:0*/ __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count;
    __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count = 0;
    VlWide<4>/*127:0*/ __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__buff;
    VL_ZERO_W(128, __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__buff);
    // Body
    __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__buff[0U] 
        = vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__buff[0U];
    __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__buff[1U] 
        = vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__buff[1U];
    __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__buff[2U] 
        = vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__buff[2U];
    __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__buff[3U] 
        = vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__buff[3U];
    __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count 
        = vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count;
    __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__buff[0U] 
        = vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__buff[0U];
    __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__buff[1U] 
        = vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__buff[1U];
    __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__buff[2U] 
        = vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__buff[2U];
    __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__buff[3U] 
        = vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__buff[3U];
    __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count 
        = vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count;
    if (vlSelf->tb_activation_buffer__DOT__act_rst_n) {
        if (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__clr_b) {
            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_valid_b = 0U;
            __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count = 0U;
        } else if (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__we_b) {
            if (((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__we_valid_b) 
                 & (0x10U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count)))) {
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_valid_b = 0U;
            }
            if (((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__we_valid_b) 
                 & (~ (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__buff_b_full)))) {
                VL_ASSIGNSEL_WI(128,8,(0x7fU & VL_SHIFTL_III(7,32,32, (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count), 3U)), __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__buff, 
                                (0xfU & vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_b[0U]));
                VL_ASSIGNSEL_WI(128,8,(0x7fU & VL_SHIFTL_III(7,32,32, 
                                                             ((IData)(1U) 
                                                              + (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count)), 3U)), __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__buff, 
                                (0xfU & (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_b[0U] 
                                         >> 4U)));
                VL_ASSIGNSEL_WI(128,8,(0x7fU & VL_SHIFTL_III(7,32,32, 
                                                             ((IData)(2U) 
                                                              + (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count)), 3U)), __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__buff, 
                                (0xfU & (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_b[0U] 
                                         >> 8U)));
                VL_ASSIGNSEL_WI(128,8,(0x7fU & VL_SHIFTL_III(7,32,32, 
                                                             ((IData)(3U) 
                                                              + (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count)), 3U)), __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__buff, 
                                (0xfU & (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_b[0U] 
                                         >> 0xcU)));
                __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count 
                    = (0x3ffU & ((IData)(4U) + (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count)));
            }
        } else if (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_b) {
            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_valid_b 
                = (0U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count));
            if ((1U & (~ (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__buff_b_empty)))) {
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_out_b[0U] 
                    = ((0xfffffff0U & vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_out_b[0U]) 
                       | (0xfU & (((0U == (0x1fU & 
                                           VL_SHIFTL_III(7,32,32, 
                                                         ((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count) 
                                                          - (IData)(4U)), 3U)))
                                    ? 0U : (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__buff[
                                            (((IData)(3U) 
                                              + (0x7fU 
                                                 & VL_SHIFTL_III(7,32,32, 
                                                                 ((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count) 
                                                                  - (IData)(4U)), 3U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   ((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count) 
                                                                    - (IData)(4U)), 3U))))) 
                                  | (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__buff[
                                     (3U & (VL_SHIFTL_III(7,32,32, 
                                                          ((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count) 
                                                           - (IData)(4U)), 3U) 
                                            >> 5U))] 
                                     >> (0x1fU & VL_SHIFTL_III(7,32,32, 
                                                               ((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count) 
                                                                - (IData)(4U)), 3U))))));
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_out_b[0U] 
                    = ((0xffffff0fU & vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_out_b[0U]) 
                       | (0xf0U & ((((0U == (0x1fU 
                                             & VL_SHIFTL_III(7,32,32, 
                                                             ((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count) 
                                                              - (IData)(3U)), 3U)))
                                      ? 0U : (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__buff[
                                              (((IData)(3U) 
                                                + (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   ((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count) 
                                                                    - (IData)(3U)), 3U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   ((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count) 
                                                                    - (IData)(3U)), 3U))))) 
                                    | (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__buff[
                                       (3U & (VL_SHIFTL_III(7,32,32, 
                                                            ((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count) 
                                                             - (IData)(3U)), 3U) 
                                              >> 5U))] 
                                       >> (0x1fU & 
                                           VL_SHIFTL_III(7,32,32, 
                                                         ((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count) 
                                                          - (IData)(3U)), 3U)))) 
                                   << 4U)));
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_out_b[0U] 
                    = ((0xfffff0ffU & vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_out_b[0U]) 
                       | (0xf00U & ((((0U == (0x1fU 
                                              & VL_SHIFTL_III(7,32,32, 
                                                              ((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count) 
                                                               - (IData)(2U)), 3U)))
                                       ? 0U : (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__buff[
                                               (((IData)(3U) 
                                                 + 
                                                 (0x7fU 
                                                  & VL_SHIFTL_III(7,32,32, 
                                                                  ((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count) 
                                                                   - (IData)(2U)), 3U))) 
                                                >> 5U)] 
                                               << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(7,32,32, 
                                                                    ((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count) 
                                                                     - (IData)(2U)), 3U))))) 
                                     | (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__buff[
                                        (3U & (VL_SHIFTL_III(7,32,32, 
                                                             ((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count) 
                                                              - (IData)(2U)), 3U) 
                                               >> 5U))] 
                                        >> (0x1fU & 
                                            VL_SHIFTL_III(7,32,32, 
                                                          ((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count) 
                                                           - (IData)(2U)), 3U)))) 
                                    << 8U)));
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_out_b[0U] 
                    = ((0xffff0fffU & vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_out_b[0U]) 
                       | (0xf000U & ((((0U == (0x1fU 
                                               & VL_SHIFTL_III(7,32,32, 
                                                               ((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count) 
                                                                - (IData)(1U)), 3U)))
                                        ? 0U : (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__buff[
                                                (((IData)(3U) 
                                                  + 
                                                  (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   ((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count) 
                                                                    - (IData)(1U)), 3U))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(7,32,32, 
                                                                  ((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count) 
                                                                   - (IData)(1U)), 3U))))) 
                                      | (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__buff[
                                         (3U & (VL_SHIFTL_III(7,32,32, 
                                                              ((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count) 
                                                               - (IData)(1U)), 3U) 
                                                >> 5U))] 
                                         >> (0x1fU 
                                             & VL_SHIFTL_III(7,32,32, 
                                                             ((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count) 
                                                              - (IData)(1U)), 3U)))) 
                                     << 0xcU)));
                __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count 
                    = (0x3ffU & ((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count) 
                                 - (IData)(4U)));
            }
        }
        vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state 
            = vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__next_state;
        if (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__clr_a) {
            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_valid_a = 0U;
            __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count = 0U;
        } else if (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__we_a) {
            if (((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__we_valid_a) 
                 & (0x10U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count)))) {
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_valid_a = 0U;
            }
            if (((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__we_valid_a) 
                 & (~ (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__buff_a_full)))) {
                VL_ASSIGNSEL_WI(128,8,(0x7fU & VL_SHIFTL_III(7,32,32, (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count), 3U)), __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__buff, 
                                (0xfU & vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_a[0U]));
                VL_ASSIGNSEL_WI(128,8,(0x7fU & VL_SHIFTL_III(7,32,32, 
                                                             ((IData)(1U) 
                                                              + (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count)), 3U)), __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__buff, 
                                (0xfU & (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_a[0U] 
                                         >> 4U)));
                VL_ASSIGNSEL_WI(128,8,(0x7fU & VL_SHIFTL_III(7,32,32, 
                                                             ((IData)(2U) 
                                                              + (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count)), 3U)), __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__buff, 
                                (0xfU & (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_a[0U] 
                                         >> 8U)));
                VL_ASSIGNSEL_WI(128,8,(0x7fU & VL_SHIFTL_III(7,32,32, 
                                                             ((IData)(3U) 
                                                              + (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count)), 3U)), __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__buff, 
                                (0xfU & (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_a[0U] 
                                         >> 0xcU)));
                __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count 
                    = (0x3ffU & ((IData)(4U) + (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count)));
            }
        } else if (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_a) {
            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_valid_a 
                = (0U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count));
            if ((1U & (~ (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__buff_a_empty)))) {
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_out_a[0U] 
                    = ((0xfffffff0U & vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_out_a[0U]) 
                       | (0xfU & (((0U == (0x1fU & 
                                           VL_SHIFTL_III(7,32,32, 
                                                         ((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count) 
                                                          - (IData)(4U)), 3U)))
                                    ? 0U : (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__buff[
                                            (((IData)(3U) 
                                              + (0x7fU 
                                                 & VL_SHIFTL_III(7,32,32, 
                                                                 ((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count) 
                                                                  - (IData)(4U)), 3U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   ((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count) 
                                                                    - (IData)(4U)), 3U))))) 
                                  | (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__buff[
                                     (3U & (VL_SHIFTL_III(7,32,32, 
                                                          ((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count) 
                                                           - (IData)(4U)), 3U) 
                                            >> 5U))] 
                                     >> (0x1fU & VL_SHIFTL_III(7,32,32, 
                                                               ((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count) 
                                                                - (IData)(4U)), 3U))))));
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_out_a[0U] 
                    = ((0xffffff0fU & vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_out_a[0U]) 
                       | (0xf0U & ((((0U == (0x1fU 
                                             & VL_SHIFTL_III(7,32,32, 
                                                             ((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count) 
                                                              - (IData)(3U)), 3U)))
                                      ? 0U : (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__buff[
                                              (((IData)(3U) 
                                                + (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   ((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count) 
                                                                    - (IData)(3U)), 3U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   ((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count) 
                                                                    - (IData)(3U)), 3U))))) 
                                    | (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__buff[
                                       (3U & (VL_SHIFTL_III(7,32,32, 
                                                            ((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count) 
                                                             - (IData)(3U)), 3U) 
                                              >> 5U))] 
                                       >> (0x1fU & 
                                           VL_SHIFTL_III(7,32,32, 
                                                         ((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count) 
                                                          - (IData)(3U)), 3U)))) 
                                   << 4U)));
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_out_a[0U] 
                    = ((0xfffff0ffU & vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_out_a[0U]) 
                       | (0xf00U & ((((0U == (0x1fU 
                                              & VL_SHIFTL_III(7,32,32, 
                                                              ((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count) 
                                                               - (IData)(2U)), 3U)))
                                       ? 0U : (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__buff[
                                               (((IData)(3U) 
                                                 + 
                                                 (0x7fU 
                                                  & VL_SHIFTL_III(7,32,32, 
                                                                  ((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count) 
                                                                   - (IData)(2U)), 3U))) 
                                                >> 5U)] 
                                               << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(7,32,32, 
                                                                    ((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count) 
                                                                     - (IData)(2U)), 3U))))) 
                                     | (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__buff[
                                        (3U & (VL_SHIFTL_III(7,32,32, 
                                                             ((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count) 
                                                              - (IData)(2U)), 3U) 
                                               >> 5U))] 
                                        >> (0x1fU & 
                                            VL_SHIFTL_III(7,32,32, 
                                                          ((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count) 
                                                           - (IData)(2U)), 3U)))) 
                                    << 8U)));
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_out_a[0U] 
                    = ((0xffff0fffU & vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_out_a[0U]) 
                       | (0xf000U & ((((0U == (0x1fU 
                                               & VL_SHIFTL_III(7,32,32, 
                                                               ((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count) 
                                                                - (IData)(1U)), 3U)))
                                        ? 0U : (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__buff[
                                                (((IData)(3U) 
                                                  + 
                                                  (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   ((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count) 
                                                                    - (IData)(1U)), 3U))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(7,32,32, 
                                                                  ((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count) 
                                                                   - (IData)(1U)), 3U))))) 
                                      | (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__buff[
                                         (3U & (VL_SHIFTL_III(7,32,32, 
                                                              ((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count) 
                                                               - (IData)(1U)), 3U) 
                                                >> 5U))] 
                                         >> (0x1fU 
                                             & VL_SHIFTL_III(7,32,32, 
                                                             ((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count) 
                                                              - (IData)(1U)), 3U)))) 
                                     << 0xcU)));
                __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count 
                    = (0x3ffU & ((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count) 
                                 - (IData)(4U)));
            }
        }
        vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state 
            = vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__next_state;
    } else {
        vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state = 0U;
        __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count = 0U;
        __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__buff[0U] = 0U;
        __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__buff[1U] = 0U;
        __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__buff[2U] = 0U;
        __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__buff[3U] = 0U;
        vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state = 0U;
        __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count = 0U;
        __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__buff[0U] = 0U;
        __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__buff[1U] = 0U;
        __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__buff[2U] = 0U;
        __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__buff[3U] = 0U;
    }
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__o_bank_reg 
        = ((IData)(vlSelf->tb_activation_buffer__DOT__act_rst_n) 
           && (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__buff_a_active));
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__o_bank_reg 
        = ((IData)(vlSelf->tb_activation_buffer__DOT__act_rst_n) 
           && (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__buff_b_active));
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__buff[0U] 
        = __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__buff[0U];
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__buff[1U] 
        = __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__buff[1U];
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__buff[2U] 
        = __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__buff[2U];
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__buff[3U] 
        = __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__buff[3U];
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count 
        = __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count;
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__buff[0U] 
        = __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__buff[0U];
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__buff[1U] 
        = __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__buff[1U];
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__buff[2U] 
        = __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__buff[2U];
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__buff[3U] 
        = __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__buff[3U];
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count 
        = __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count;
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__clr_b = 0U;
    if (((((((((0U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state)) 
               | (1U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) 
              | (2U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) 
             | (3U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) 
            | (4U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) 
           | (5U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) 
          | (6U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) 
         | (7U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state)))) {
        if ((0U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
            if ((1U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
                if ((2U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
                    if ((3U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
                        if ((4U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
                            if ((5U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
                                if ((6U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
                                    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__clr_b = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__buff_b_full 
        = (0x10U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count));
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__buff_b_empty 
        = (0U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count));
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__clr_a = 0U;
    if (((((((((0U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state)) 
               | (1U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) 
              | (2U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) 
             | (3U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) 
            | (4U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) 
           | (5U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) 
          | (6U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) 
         | (7U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state)))) {
        if ((0U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
            if ((1U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
                if ((2U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
                    if ((3U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
                        if ((4U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
                            if ((5U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
                                if ((6U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
                                    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__clr_a = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__buff_a_full 
        = (0x10U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count));
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__buff_a_empty 
        = (0U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count));
}

VL_INLINE_OPT void Vtb_activation_buffer___024root___nba_sequent__TOP__2(Vtb_activation_buffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_activation_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_activation_buffer___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__o_bank_reg 
        = ((IData)(vlSelf->tb_activation_buffer__DOT__bf_rst_n) 
           && (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__other_bank_active));
    vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state 
        = ((IData)(vlSelf->tb_activation_buffer__DOT__bf_rst_n)
            ? (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__next_state)
            : 0U);
    vlSelf->tb_activation_buffer__DOT__bf_clr = 0U;
    if (((((((((0U == (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state)) 
               | (1U == (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) 
              | (2U == (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) 
             | (3U == (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) 
            | (4U == (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) 
           | (5U == (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) 
          | (6U == (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) 
         | (7U == (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state)))) {
        if ((0U != (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
            if ((1U != (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
                if ((2U != (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
                    if ((3U != (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
                        if ((4U != (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
                            if ((5U != (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
                                if ((6U != (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
                                    vlSelf->tb_activation_buffer__DOT__bf_clr = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void Vtb_activation_buffer___024root___nba_comb__TOP__0(Vtb_activation_buffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_activation_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_activation_buffer___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__we_b = 0U;
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_b = 0U;
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__next_state 
        = vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state;
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__buff_b_active = 0U;
    if (((((((((0U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state)) 
               | (1U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) 
              | (2U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) 
             | (3U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) 
            | (4U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) 
           | (5U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) 
          | (6U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) 
         | (7U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state)))) {
        if ((0U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
            if (vlSelf->tb_activation_buffer__DOT__act_start) {
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__we_b = 1U;
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__next_state = 4U;
            } else {
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__next_state = 0U;
            }
        } else if ((1U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
            if ((0x10U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count))) {
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__we_b = 1U;
            }
            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__next_state 
                = ((0x10U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count))
                    ? 2U : 1U);
        } else if ((2U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
            if ((1U & (~ (IData)(vlSelf->tb_activation_buffer__DOT__act_preload_state)))) {
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__we_b = 1U;
            }
            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__next_state 
                = ((IData)(vlSelf->tb_activation_buffer__DOT__act_preload_state)
                    ? 3U : 2U);
        } else {
            if ((3U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
                if ((4U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
                    if ((5U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
                        vlSelf->tb_activation_buffer__DOT__act_dut__DOT__we_b = 1U;
                    }
                }
            }
            if ((3U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
                if ((((0U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count)) 
                      & ((IData)(vlSelf->tb_activation_buffer__DOT__act_compute_state) 
                         | (IData)(vlSelf->tb_activation_buffer__DOT__act_drain_state))) 
                     & (~ (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__o_bank_reg)))) {
                    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__next_state = 3U;
                    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__buff_b_active = 1U;
                } else if ((((~ (IData)(vlSelf->tb_activation_buffer__DOT__act_tiles_complete)) 
                             & (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__o_bank_reg)) 
                            & (~ (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__buff_b_active)))) {
                    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__next_state = 5U;
                } else if (vlSelf->tb_activation_buffer__DOT__act_tiles_complete) {
                    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__next_state = 7U;
                }
            } else if ((4U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__next_state 
                    = ((IData)(vlSelf->tb_activation_buffer__DOT__act_compute_state)
                        ? 5U : 4U);
            } else if ((5U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
                if ((((IData)(vlSelf->tb_activation_buffer__DOT__act_compute_state) 
                      | (IData)(vlSelf->tb_activation_buffer__DOT__act_drain_state)) 
                     & (0x10U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count)))) {
                    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__next_state = 6U;
                    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__buff_b_active = 1U;
                } else if ((0x10U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count))) {
                    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__next_state = 5U;
                }
            } else if ((6U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__next_state = 3U;
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__buff_b_active = 1U;
            } else {
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__next_state = 0U;
            }
        }
        if ((0U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
            if ((1U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
                if ((2U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
                    if ((3U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
                        if ((((0U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count)) 
                              & ((IData)(vlSelf->tb_activation_buffer__DOT__act_compute_state) 
                                 | (IData)(vlSelf->tb_activation_buffer__DOT__act_drain_state))) 
                             & (~ (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__o_bank_reg)))) {
                            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_b = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__we_a = 0U;
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_a = 0U;
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__first_pass_a = 0U;
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__next_state 
        = vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state;
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__buff_a_active = 0U;
    if (((((((((0U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state)) 
               | (1U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) 
              | (2U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) 
             | (3U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) 
            | (4U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) 
           | (5U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) 
          | (6U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) 
         | (7U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state)))) {
        if ((0U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
            if (vlSelf->tb_activation_buffer__DOT__act_start) {
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__we_a = 1U;
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__first_pass_a = 1U;
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__next_state = 1U;
            } else {
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__next_state = 0U;
            }
        } else if ((1U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
            if ((0x10U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count))) {
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__we_a = 1U;
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__first_pass_a = 1U;
            }
            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__next_state 
                = ((0x10U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count))
                    ? 2U : 1U);
        } else if ((2U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
            if ((1U & (~ (IData)(vlSelf->tb_activation_buffer__DOT__act_preload_state)))) {
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__we_a = 1U;
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__first_pass_a = 1U;
            }
            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__next_state 
                = ((IData)(vlSelf->tb_activation_buffer__DOT__act_preload_state)
                    ? 3U : 2U);
        } else {
            if ((3U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
                if ((4U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
                    if ((5U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
                        vlSelf->tb_activation_buffer__DOT__act_dut__DOT__we_a = 1U;
                    }
                }
            }
            if ((3U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
                if ((((0U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count)) 
                      & ((IData)(vlSelf->tb_activation_buffer__DOT__act_compute_state) 
                         | (IData)(vlSelf->tb_activation_buffer__DOT__act_drain_state))) 
                     & (~ (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__o_bank_reg)))) {
                    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__next_state = 3U;
                    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__buff_a_active = 1U;
                } else if ((((~ (IData)(vlSelf->tb_activation_buffer__DOT__act_tiles_complete)) 
                             & (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__o_bank_reg)) 
                            & (~ (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__buff_a_active)))) {
                    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__next_state = 5U;
                } else if (vlSelf->tb_activation_buffer__DOT__act_tiles_complete) {
                    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__next_state = 7U;
                }
            } else if ((4U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__next_state 
                    = ((IData)(vlSelf->tb_activation_buffer__DOT__act_compute_state)
                        ? 5U : 4U);
            } else if ((5U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
                if ((((IData)(vlSelf->tb_activation_buffer__DOT__act_compute_state) 
                      | (IData)(vlSelf->tb_activation_buffer__DOT__act_drain_state)) 
                     & (0x10U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count)))) {
                    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__next_state = 6U;
                    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__buff_a_active = 1U;
                } else if ((0x10U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count))) {
                    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__next_state = 5U;
                }
            } else if ((6U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__next_state = 3U;
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__buff_a_active = 1U;
            } else {
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__next_state = 0U;
            }
        }
        if ((0U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
            if ((1U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
                if ((2U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
                    if ((3U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
                        if ((((0U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count)) 
                              & ((IData)(vlSelf->tb_activation_buffer__DOT__act_compute_state) 
                                 | (IData)(vlSelf->tb_activation_buffer__DOT__act_drain_state))) 
                             & (~ (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__o_bank_reg)))) {
                            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_a = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__we_valid_b = 0U;
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_b[0U] = 0U;
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_b[1U] = 0U;
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_b[2U] = 0U;
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_b[3U] = 0U;
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__we_valid_a = 0U;
    vlSelf->tb_activation_buffer__DOT__act_output_buf_valid = 0U;
    if (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__first_pass_a) {
        if (vlSelf->tb_activation_buffer__DOT__act_DMA_in_valid) {
            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__we_valid_a = 1U;
        }
        if (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_valid_a) {
            vlSelf->tb_activation_buffer__DOT__act_output_buf_valid = 0U;
        }
    }
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_a[0U] = 0U;
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_a[1U] = 0U;
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_a[2U] = 0U;
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_a[3U] = 0U;
    if ((1U & (~ (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__buff_a_active)))) {
        if (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__buff_b_active) {
            if (vlSelf->tb_activation_buffer__DOT__act_DMA_in_valid) {
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__we_valid_a = 1U;
            }
        }
    }
    if (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__first_pass_a) {
        if (vlSelf->tb_activation_buffer__DOT__act_DMA_in_valid) {
            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_a[0U] 
                = vlSelf->tb_activation_buffer__DOT__act_DMA_in[0U];
            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_a[1U] 
                = vlSelf->tb_activation_buffer__DOT__act_DMA_in[1U];
            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_a[2U] 
                = vlSelf->tb_activation_buffer__DOT__act_DMA_in[2U];
            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_a[3U] 
                = vlSelf->tb_activation_buffer__DOT__act_DMA_in[3U];
        }
    }
    if ((1U & (~ (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__buff_a_active)))) {
        if (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__buff_b_active) {
            if (vlSelf->tb_activation_buffer__DOT__act_DMA_in_valid) {
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_a[0U] 
                    = vlSelf->tb_activation_buffer__DOT__act_DMA_in[0U];
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_a[1U] 
                    = vlSelf->tb_activation_buffer__DOT__act_DMA_in[1U];
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_a[2U] 
                    = vlSelf->tb_activation_buffer__DOT__act_DMA_in[2U];
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_a[3U] 
                    = vlSelf->tb_activation_buffer__DOT__act_DMA_in[3U];
            }
        }
    }
    vlSelf->tb_activation_buffer__DOT__act_output_buff[0U] = 0U;
    vlSelf->tb_activation_buffer__DOT__act_output_buff[1U] = 0U;
    vlSelf->tb_activation_buffer__DOT__act_output_buff[2U] = 0U;
    vlSelf->tb_activation_buffer__DOT__act_output_buff[3U] = 0U;
    if (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__first_pass_a) {
        if (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_valid_a) {
            vlSelf->tb_activation_buffer__DOT__act_output_buff[0U] = 0U;
            vlSelf->tb_activation_buffer__DOT__act_output_buff[1U] = 0U;
            vlSelf->tb_activation_buffer__DOT__act_output_buff[2U] = 0U;
            vlSelf->tb_activation_buffer__DOT__act_output_buff[3U] = 0U;
        }
    }
    if (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__buff_a_active) {
        if (vlSelf->tb_activation_buffer__DOT__act_DMA_in_valid) {
            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__we_valid_b = 1U;
            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_b[0U] 
                = vlSelf->tb_activation_buffer__DOT__act_DMA_in[0U];
            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_b[1U] 
                = vlSelf->tb_activation_buffer__DOT__act_DMA_in[1U];
            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_b[2U] 
                = vlSelf->tb_activation_buffer__DOT__act_DMA_in[2U];
            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_b[3U] 
                = vlSelf->tb_activation_buffer__DOT__act_DMA_in[3U];
        }
        if (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_valid_a) {
            vlSelf->tb_activation_buffer__DOT__act_output_buf_valid 
                = vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_valid_a;
            vlSelf->tb_activation_buffer__DOT__act_output_buff[0U] 
                = vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_out_a[0U];
            vlSelf->tb_activation_buffer__DOT__act_output_buff[1U] 
                = vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_out_a[1U];
            vlSelf->tb_activation_buffer__DOT__act_output_buff[2U] 
                = vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_out_a[2U];
            vlSelf->tb_activation_buffer__DOT__act_output_buff[3U] 
                = vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_out_a[3U];
        }
    } else if (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__buff_b_active) {
        if (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_valid_b) {
            vlSelf->tb_activation_buffer__DOT__act_output_buf_valid 
                = vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_valid_b;
            vlSelf->tb_activation_buffer__DOT__act_output_buff[0U] 
                = vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_out_b[0U];
            vlSelf->tb_activation_buffer__DOT__act_output_buff[1U] 
                = vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_out_b[1U];
            vlSelf->tb_activation_buffer__DOT__act_output_buff[2U] 
                = vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_out_b[2U];
            vlSelf->tb_activation_buffer__DOT__act_output_buff[3U] 
                = vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_out_b[3U];
        }
    }
}

VL_INLINE_OPT void Vtb_activation_buffer___024root___nba_comb__TOP__1(Vtb_activation_buffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_activation_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_activation_buffer___024root___nba_comb__TOP__1\n"); );
    // Body
    vlSelf->tb_activation_buffer__DOT__bf_re = 0U;
    vlSelf->tb_activation_buffer__DOT__bf_first_pass = 0U;
    vlSelf->tb_activation_buffer__DOT__bf_we = 0U;
    vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__next_state 
        = vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state;
    vlSelf->tb_activation_buffer__DOT__bf_active = 0U;
    if (((((((((0U == (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state)) 
               | (1U == (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) 
              | (2U == (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) 
             | (3U == (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) 
            | (4U == (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) 
           | (5U == (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) 
          | (6U == (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) 
         | (7U == (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state)))) {
        if ((0U != (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
            if ((1U != (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
                if ((2U != (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
                    if ((3U == (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
                        if ((((~ (IData)(vlSelf->tb_activation_buffer__DOT__bf_empty)) 
                              & ((IData)(vlSelf->tb_activation_buffer__DOT__bf_compute_state) 
                                 | (IData)(vlSelf->tb_activation_buffer__DOT__bf_drain_state))) 
                             & (~ (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__o_bank_reg)))) {
                            vlSelf->tb_activation_buffer__DOT__bf_re = 1U;
                        }
                    }
                }
            }
        }
        if ((0U == (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
            if (((IData)(vlSelf->tb_activation_buffer__DOT__bf_start) 
                 & (IData)(vlSelf->tb_activation_buffer__DOT__bf_a_or_b))) {
                vlSelf->tb_activation_buffer__DOT__bf_first_pass = 1U;
                vlSelf->tb_activation_buffer__DOT__bf_we = 1U;
                vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__next_state = 1U;
            } else if (((IData)(vlSelf->tb_activation_buffer__DOT__bf_start) 
                        & (~ (IData)(vlSelf->tb_activation_buffer__DOT__bf_a_or_b)))) {
                vlSelf->tb_activation_buffer__DOT__bf_we = 1U;
                vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__next_state = 4U;
            } else {
                vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__next_state = 0U;
            }
        } else if ((1U == (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
            if ((1U & (~ (IData)(vlSelf->tb_activation_buffer__DOT__bf_full)))) {
                vlSelf->tb_activation_buffer__DOT__bf_first_pass = 1U;
                vlSelf->tb_activation_buffer__DOT__bf_we = 1U;
            }
            vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__next_state 
                = ((IData)(vlSelf->tb_activation_buffer__DOT__bf_full)
                    ? 2U : 1U);
        } else if ((2U == (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
            if ((1U & (~ (IData)(vlSelf->tb_activation_buffer__DOT__bf_preload_state)))) {
                vlSelf->tb_activation_buffer__DOT__bf_first_pass = 1U;
                vlSelf->tb_activation_buffer__DOT__bf_we = 1U;
            }
            vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__next_state 
                = ((IData)(vlSelf->tb_activation_buffer__DOT__bf_preload_state)
                    ? 3U : 2U);
        } else {
            if ((3U != (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
                if ((4U != (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
                    if ((5U == (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
                        vlSelf->tb_activation_buffer__DOT__bf_we = 1U;
                    }
                }
            }
            if ((3U == (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
                if ((((~ (IData)(vlSelf->tb_activation_buffer__DOT__bf_empty)) 
                      & ((IData)(vlSelf->tb_activation_buffer__DOT__bf_compute_state) 
                         | (IData)(vlSelf->tb_activation_buffer__DOT__bf_drain_state))) 
                     & (~ (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__o_bank_reg)))) {
                    vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__next_state = 3U;
                    vlSelf->tb_activation_buffer__DOT__bf_active = 1U;
                } else if ((((~ (IData)(vlSelf->tb_activation_buffer__DOT__bf_tiles_complete)) 
                             & (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__o_bank_reg)) 
                            & (~ (IData)(vlSelf->tb_activation_buffer__DOT__bf_active)))) {
                    vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__next_state = 5U;
                } else if (vlSelf->tb_activation_buffer__DOT__bf_tiles_complete) {
                    vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__next_state = 7U;
                }
            } else if ((4U == (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
                vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__next_state 
                    = ((IData)(vlSelf->tb_activation_buffer__DOT__bf_compute_state)
                        ? 5U : 4U);
            } else if ((5U == (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
                if ((((IData)(vlSelf->tb_activation_buffer__DOT__bf_compute_state) 
                      | (IData)(vlSelf->tb_activation_buffer__DOT__bf_drain_state)) 
                     & (IData)(vlSelf->tb_activation_buffer__DOT__bf_full))) {
                    vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__next_state = 6U;
                    vlSelf->tb_activation_buffer__DOT__bf_active = 1U;
                } else if ((1U & (~ (IData)(vlSelf->tb_activation_buffer__DOT__bf_full)))) {
                    vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__next_state = 5U;
                }
            } else if ((6U == (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
                vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__next_state = 3U;
                vlSelf->tb_activation_buffer__DOT__bf_active = 1U;
            } else {
                vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__next_state = 0U;
            }
        }
    }
}

void Vtb_activation_buffer___024root___eval_nba(Vtb_activation_buffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_activation_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_activation_buffer___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_activation_buffer___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_activation_buffer___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_activation_buffer___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0x1cULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_activation_buffer___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((0x1aULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_activation_buffer___024root___nba_comb__TOP__1(vlSelf);
    }
}

void Vtb_activation_buffer___024root___timing_resume(Vtb_activation_buffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_activation_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_activation_buffer___024root___timing_resume\n"); );
    // Body
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h0c0022ab__0.resume("@(posedge tb_activation_buffer.clk)");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_activation_buffer___024root___timing_commit(Vtb_activation_buffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_activation_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_activation_buffer___024root___timing_commit\n"); );
    // Body
    if ((! (8ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h0c0022ab__0.commit("@(posedge tb_activation_buffer.clk)");
    }
}

void Vtb_activation_buffer___024root___eval_triggers__act(Vtb_activation_buffer___024root* vlSelf);

bool Vtb_activation_buffer___024root___eval_phase__act(Vtb_activation_buffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_activation_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_activation_buffer___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<5> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_activation_buffer___024root___eval_triggers__act(vlSelf);
    Vtb_activation_buffer___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_activation_buffer___024root___timing_resume(vlSelf);
        Vtb_activation_buffer___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_activation_buffer___024root___eval_phase__nba(Vtb_activation_buffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_activation_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_activation_buffer___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_activation_buffer___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_activation_buffer___024root___dump_triggers__nba(Vtb_activation_buffer___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_activation_buffer___024root___dump_triggers__act(Vtb_activation_buffer___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_activation_buffer___024root___eval(Vtb_activation_buffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_activation_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_activation_buffer___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_activation_buffer___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/tb_activation_buffer.sv", 11, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_activation_buffer___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/tb_activation_buffer.sv", 11, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_activation_buffer___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_activation_buffer___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_activation_buffer___024root___eval_debug_assertions(Vtb_activation_buffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_activation_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_activation_buffer___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
