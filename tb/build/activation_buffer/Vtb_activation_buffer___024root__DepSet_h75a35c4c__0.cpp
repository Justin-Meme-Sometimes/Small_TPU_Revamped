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
    std::string __Vtask_tb_activation_buffer__DOT__check__13__name;
    CData/*0:0*/ __Vtask_tb_activation_buffer__DOT__check__13__cond;
    __Vtask_tb_activation_buffer__DOT__check__13__cond = 0;
    std::string __Vtask_tb_activation_buffer__DOT__check__15__name;
    CData/*0:0*/ __Vtask_tb_activation_buffer__DOT__check__15__cond;
    __Vtask_tb_activation_buffer__DOT__check__15__cond = 0;
    std::string __Vtask_tb_activation_buffer__DOT__check__17__name;
    CData/*0:0*/ __Vtask_tb_activation_buffer__DOT__check__17__cond;
    __Vtask_tb_activation_buffer__DOT__check__17__cond = 0;
    std::string __Vtask_tb_activation_buffer__DOT__check__20__name;
    CData/*0:0*/ __Vtask_tb_activation_buffer__DOT__check__20__cond;
    __Vtask_tb_activation_buffer__DOT__check__20__cond = 0;
    std::string __Vtask_tb_activation_buffer__DOT__check__22__name;
    CData/*0:0*/ __Vtask_tb_activation_buffer__DOT__check__22__cond;
    __Vtask_tb_activation_buffer__DOT__check__22__cond = 0;
    std::string __Vtask_tb_activation_buffer__DOT__check__24__name;
    CData/*0:0*/ __Vtask_tb_activation_buffer__DOT__check__24__cond;
    __Vtask_tb_activation_buffer__DOT__check__24__cond = 0;
    std::string __Vtask_tb_activation_buffer__DOT__check__26__name;
    CData/*0:0*/ __Vtask_tb_activation_buffer__DOT__check__26__cond;
    __Vtask_tb_activation_buffer__DOT__check__26__cond = 0;
    std::string __Vtask_tb_activation_buffer__DOT__check__28__name;
    CData/*0:0*/ __Vtask_tb_activation_buffer__DOT__check__28__cond;
    __Vtask_tb_activation_buffer__DOT__check__28__cond = 0;
    std::string __Vtask_tb_activation_buffer__DOT__check__29__name;
    CData/*0:0*/ __Vtask_tb_activation_buffer__DOT__check__29__cond;
    __Vtask_tb_activation_buffer__DOT__check__29__cond = 0;
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
                                                       57);
    co_await vlSelf->__VtrigSched_h0c0022ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_activation_buffer.clk)", 
                                                       "tb/tb_activation_buffer.sv", 
                                                       57);
    vlSelf->tb_activation_buffer__DOT__ib_rst_n = 1U;
    co_await vlSelf->__VtrigSched_h0c0022ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_activation_buffer.clk)", 
                                                       "tb/tb_activation_buffer.sv", 
                                                       59);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_activation_buffer.sv", 
                                       59);
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
        = (0xffU != (IData)(vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__curr_count));
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
                                                       63);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_activation_buffer.sv", 
                                       63);
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
                                                       63);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_activation_buffer.sv", 
                                       63);
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
        = (0U != (0xfU & vlSelf->tb_activation_buffer__DOT__ib_re_out[0U]));
    __Vtask_tb_activation_buffer__DOT__check__8__name = 
        std::string{"BUG: re_out[0] should not read an unwritten slot (buff[4]), it should return the first written byte 0xa - off-by-one"};
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
        = (0xdU == (0xfU & (vlSelf->tb_activation_buffer__DOT__ib_re_out[0U] 
                            >> 4U)));
    __Vtask_tb_activation_buffer__DOT__check__9__name = 
        std::string{"re_out[1] recovers we_in[3] (0xd)"};
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
        = (0xbU == (0xfU & (vlSelf->tb_activation_buffer__DOT__ib_re_out[0U] 
                            >> 0xcU)));
    __Vtask_tb_activation_buffer__DOT__check__11__name = 
        std::string{"re_out[3] recovers we_in[1] (0xb)"};
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
        = (0xaU == (0xfU & vlSelf->tb_activation_buffer__DOT__ib_re_out[0U]));
    __Vtask_tb_activation_buffer__DOT__check__12__name = 
        std::string{"BUG: we_in[0] (0xa) should be returned by a read this cycle"};
    vlSelf->tb_activation_buffer__DOT__checks = ((IData)(1U) 
                                                 + vlSelf->tb_activation_buffer__DOT__checks);
    if (__Vtask_tb_activation_buffer__DOT__check__12__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_activation_buffer__DOT__check__12__name));
    } else {
        vlSelf->tb_activation_buffer__DOT__errors = 
            ((IData)(1U) + vlSelf->tb_activation_buffer__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_activation_buffer__DOT__check__12__name));
    }
    __Vtask_tb_activation_buffer__DOT__check__13__cond 
        = (0U == (IData)(vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__curr_count));
    __Vtask_tb_activation_buffer__DOT__check__13__name = 
        std::string{"after read: back to empty"};
    vlSelf->tb_activation_buffer__DOT__checks = ((IData)(1U) 
                                                 + vlSelf->tb_activation_buffer__DOT__checks);
    if (__Vtask_tb_activation_buffer__DOT__check__13__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_activation_buffer__DOT__check__13__name));
    } else {
        vlSelf->tb_activation_buffer__DOT__errors = 
            ((IData)(1U) + vlSelf->tb_activation_buffer__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_activation_buffer__DOT__check__13__name));
    }
    vlSelf->tb_activation_buffer__DOT__ib_we = 1U;
    vlSelf->tb_activation_buffer__DOT__ib_we_valid = 1U;
    vlSelf->tb_activation_buffer__DOT__ib_we_in[0U] 
        = (1U | (0xfffffff0U & vlSelf->tb_activation_buffer__DOT__ib_we_in[0U]));
    co_await vlSelf->__VtrigSched_h0c0022ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_activation_buffer.clk)", 
                                                       "tb/tb_activation_buffer.sv", 
                                                       63);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_activation_buffer.sv", 
                                       63);
    vlSelf->tb_activation_buffer__DOT__ib_we = 0U;
    vlSelf->tb_activation_buffer__DOT__ib_we_valid = 0U;
    __Vtask_tb_activation_buffer__DOT__check__15__cond 
        = (0U != (IData)(vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__curr_count));
    __Vtask_tb_activation_buffer__DOT__check__15__name = 
        std::string{"after another write: not empty"};
    vlSelf->tb_activation_buffer__DOT__checks = ((IData)(1U) 
                                                 + vlSelf->tb_activation_buffer__DOT__checks);
    if (__Vtask_tb_activation_buffer__DOT__check__15__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_activation_buffer__DOT__check__15__name));
    } else {
        vlSelf->tb_activation_buffer__DOT__errors = 
            ((IData)(1U) + vlSelf->tb_activation_buffer__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_activation_buffer__DOT__check__15__name));
    }
    vlSelf->tb_activation_buffer__DOT__ib_clr = 1U;
    co_await vlSelf->__VtrigSched_h0c0022ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_activation_buffer.clk)", 
                                                       "tb/tb_activation_buffer.sv", 
                                                       63);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_activation_buffer.sv", 
                                       63);
    vlSelf->tb_activation_buffer__DOT__ib_clr = 0U;
    __Vtask_tb_activation_buffer__DOT__check__17__cond 
        = (0U == (IData)(vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__curr_count));
    __Vtask_tb_activation_buffer__DOT__check__17__name = 
        std::string{"clr forces empty"};
    vlSelf->tb_activation_buffer__DOT__checks = ((IData)(1U) 
                                                 + vlSelf->tb_activation_buffer__DOT__checks);
    if (__Vtask_tb_activation_buffer__DOT__check__17__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_activation_buffer__DOT__check__17__name));
    } else {
        vlSelf->tb_activation_buffer__DOT__errors = 
            ((IData)(1U) + vlSelf->tb_activation_buffer__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_activation_buffer__DOT__check__17__name));
    }
    VL_WRITEF("i_buffer: %0d/%0d checks passed\n\n",
              32,(vlSelf->tb_activation_buffer__DOT__checks 
                  - vlSelf->tb_activation_buffer__DOT__errors),
              32,vlSelf->tb_activation_buffer__DOT__checks);
    vlSelf->tb_activation_buffer__DOT__bf_rst_n = 0U;
    vlSelf->tb_activation_buffer__DOT__bf_a_or_b = 1U;
    vlSelf->tb_activation_buffer__DOT__bf_start = 0U;
    vlSelf->tb_activation_buffer__DOT__bf_compute_state = 0U;
    vlSelf->tb_activation_buffer__DOT__bf_drain_state = 0U;
    vlSelf->tb_activation_buffer__DOT__bf_tiles_complete = 0U;
    vlSelf->tb_activation_buffer__DOT__bf_full = 0U;
    vlSelf->tb_activation_buffer__DOT__bf_empty = 1U;
    co_await vlSelf->__VtrigSched_h0c0022ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_activation_buffer.clk)", 
                                                       "tb/tb_activation_buffer.sv", 
                                                       125);
    co_await vlSelf->__VtrigSched_h0c0022ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_activation_buffer.clk)", 
                                                       "tb/tb_activation_buffer.sv", 
                                                       125);
    vlSelf->tb_activation_buffer__DOT__bf_rst_n = 1U;
    co_await vlSelf->__VtrigSched_h0c0022ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_activation_buffer.clk)", 
                                                       "tb/tb_activation_buffer.sv", 
                                                       127);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_activation_buffer.sv", 
                                       127);
    VL_WRITEF("==== bank_fsm (a_or_b=1, i.e. bank A) ====\n");
    __Vtask_tb_activation_buffer__DOT__check__20__cond 
        = (0U == (((IData)(vlSelf->tb_activation_buffer__DOT__bf_we) 
                   << 3U) | (((IData)(vlSelf->tb_activation_buffer__DOT__bf_re) 
                              << 2U) | (((IData)(vlSelf->tb_activation_buffer__DOT__bf_active) 
                                         << 1U) | (IData)(vlSelf->tb_activation_buffer__DOT__bf_clr)))));
    __Vtask_tb_activation_buffer__DOT__check__20__name = 
        std::string{"idle: we/re/active/clr low"};
    vlSelf->tb_activation_buffer__DOT__checks = ((IData)(1U) 
                                                 + vlSelf->tb_activation_buffer__DOT__checks);
    if (__Vtask_tb_activation_buffer__DOT__check__20__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_activation_buffer__DOT__check__20__name));
    } else {
        vlSelf->tb_activation_buffer__DOT__errors = 
            ((IData)(1U) + vlSelf->tb_activation_buffer__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_activation_buffer__DOT__check__20__name));
    }
    vlSelf->tb_activation_buffer__DOT__bf_start = 1U;
    co_await vlSelf->__VtrigSched_h0c0022ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_activation_buffer.clk)", 
                                                       "tb/tb_activation_buffer.sv", 
                                                       131);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_activation_buffer.sv", 
                                       131);
    vlSelf->tb_activation_buffer__DOT__bf_start = 0U;
    __Vtask_tb_activation_buffer__DOT__check__22__cond 
        = ((IData)(vlSelf->tb_activation_buffer__DOT__bf_we) 
           & (IData)(vlSelf->tb_activation_buffer__DOT__bf_first_pass));
    __Vtask_tb_activation_buffer__DOT__check__22__name = 
        std::string{"start (a_or_b=1): moves toward PREFILL, we asserted"};
    vlSelf->tb_activation_buffer__DOT__checks = ((IData)(1U) 
                                                 + vlSelf->tb_activation_buffer__DOT__checks);
    if (__Vtask_tb_activation_buffer__DOT__check__22__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_activation_buffer__DOT__check__22__name));
    } else {
        vlSelf->tb_activation_buffer__DOT__errors = 
            ((IData)(1U) + vlSelf->tb_activation_buffer__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_activation_buffer__DOT__check__22__name));
    }
    vlSelf->tb_activation_buffer__DOT__bf_full = 1U;
    co_await vlSelf->__VtrigSched_h0c0022ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_activation_buffer.clk)", 
                                                       "tb/tb_activation_buffer.sv", 
                                                       131);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_activation_buffer.sv", 
                                       131);
    __Vtask_tb_activation_buffer__DOT__check__24__cond 
        = (1U & (~ ((~ (IData)(vlSelf->tb_activation_buffer__DOT__bf_we)) 
                    & (~ (IData)(vlSelf->tb_activation_buffer__DOT__bf_first_pass)))));
    __Vtask_tb_activation_buffer__DOT__check__24__name = 
        std::string{"BUG: PRELOAD's guard is the always-false '!PRELOAD' (enum value, not a real signal), so it wrongly falls straight through instead of asserting we/first_pass in PRELOAD"};
    vlSelf->tb_activation_buffer__DOT__checks = ((IData)(1U) 
                                                 + vlSelf->tb_activation_buffer__DOT__checks);
    if (__Vtask_tb_activation_buffer__DOT__check__24__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_activation_buffer__DOT__check__24__name));
    } else {
        vlSelf->tb_activation_buffer__DOT__errors = 
            ((IData)(1U) + vlSelf->tb_activation_buffer__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_activation_buffer__DOT__check__24__name));
    }
    co_await vlSelf->__VtrigSched_h0c0022ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_activation_buffer.clk)", 
                                                       "tb/tb_activation_buffer.sv", 
                                                       131);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_activation_buffer.sv", 
                                       131);
    __Vtask_tb_activation_buffer__DOT__check__26__cond 
        = (1U & (~ (IData)(vlSelf->tb_activation_buffer__DOT__bf_active)));
    __Vtask_tb_activation_buffer__DOT__check__26__name = 
        std::string{"PRELOAD unconditionally advances to COMPUTE the very next cycle"};
    vlSelf->tb_activation_buffer__DOT__checks = ((IData)(1U) 
                                                 + vlSelf->tb_activation_buffer__DOT__checks);
    if (__Vtask_tb_activation_buffer__DOT__check__26__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_activation_buffer__DOT__check__26__name));
    } else {
        vlSelf->tb_activation_buffer__DOT__errors = 
            ((IData)(1U) + vlSelf->tb_activation_buffer__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_activation_buffer__DOT__check__26__name));
    }
    VL_WRITEF("bank_fsm: %0d/%0d checks passed\n\n",
              32,(vlSelf->tb_activation_buffer__DOT__checks 
                  - vlSelf->tb_activation_buffer__DOT__errors),
              32,vlSelf->tb_activation_buffer__DOT__checks);
    VL_WRITEF("==== activation_buffer (top-level smoke test) ====\n");
    vlSelf->tb_activation_buffer__DOT__act_rst_n = 0U;
    vlSelf->tb_activation_buffer__DOT__act_start = 0U;
    vlSelf->tb_activation_buffer__DOT__act_compute_state = 0U;
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
                                                       185);
    co_await vlSelf->__VtrigSched_h0c0022ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_activation_buffer.clk)", 
                                                       "tb/tb_activation_buffer.sv", 
                                                       185);
    vlSelf->tb_activation_buffer__DOT__act_rst_n = 1U;
    co_await vlSelf->__VtrigSched_h0c0022ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_activation_buffer.clk)", 
                                                       "tb/tb_activation_buffer.sv", 
                                                       187);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_activation_buffer.sv", 
                                       187);
    __Vtask_tb_activation_buffer__DOT__check__28__cond 
        = (1U & (~ (IData)(vlSelf->tb_activation_buffer__DOT__act_output_buf_valid)));
    __Vtask_tb_activation_buffer__DOT__check__28__name = 
        std::string{"reset: output_buf_valid low"};
    vlSelf->tb_activation_buffer__DOT__checks = ((IData)(1U) 
                                                 + vlSelf->tb_activation_buffer__DOT__checks);
    if (__Vtask_tb_activation_buffer__DOT__check__28__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_activation_buffer__DOT__check__28__name));
    } else {
        vlSelf->tb_activation_buffer__DOT__errors = 
            ((IData)(1U) + vlSelf->tb_activation_buffer__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_activation_buffer__DOT__check__28__name));
    }
    __Vtask_tb_activation_buffer__DOT__check__29__cond 
        = (0U == (((vlSelf->tb_activation_buffer__DOT__act_output_buff[0U] 
                    | vlSelf->tb_activation_buffer__DOT__act_output_buff[1U]) 
                   | vlSelf->tb_activation_buffer__DOT__act_output_buff[2U]) 
                  | vlSelf->tb_activation_buffer__DOT__act_output_buff[3U]));
    __Vtask_tb_activation_buffer__DOT__check__29__name = 
        std::string{"reset: output_buff all zero"};
    vlSelf->tb_activation_buffer__DOT__checks = ((IData)(1U) 
                                                 + vlSelf->tb_activation_buffer__DOT__checks);
    if (__Vtask_tb_activation_buffer__DOT__check__29__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_activation_buffer__DOT__check__29__name));
    } else {
        vlSelf->tb_activation_buffer__DOT__errors = 
            ((IData)(1U) + vlSelf->tb_activation_buffer__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_activation_buffer__DOT__check__29__name));
    }
    VL_WRITEF("activation_buffer: %0d/%0d checks passed\n\n==== SUMMARY ====\ntotal: %0d/%0d checks passed\n",
              32,(vlSelf->tb_activation_buffer__DOT__checks 
                  - vlSelf->tb_activation_buffer__DOT__errors),
              32,vlSelf->tb_activation_buffer__DOT__checks,
              32,(vlSelf->tb_activation_buffer__DOT__checks 
                  - vlSelf->tb_activation_buffer__DOT__errors),
              32,vlSelf->tb_activation_buffer__DOT__checks);
    VL_FINISH_MT("tb/tb_activation_buffer.sv", 202, "");
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
                                           41);
        vlSelf->tb_activation_buffer__DOT__clk = (1U 
                                                  & (~ (IData)(vlSelf->tb_activation_buffer__DOT__clk)));
    }
}

VL_INLINE_OPT void Vtb_activation_buffer___024root___act_comb__TOP__0(Vtb_activation_buffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_activation_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_activation_buffer___024root___act_comb__TOP__0\n"); );
    // Init
    CData/*0:0*/ tb_activation_buffer__DOT__act_dut__DOT__buff_a_active;
    tb_activation_buffer__DOT__act_dut__DOT__buff_a_active = 0;
    CData/*0:0*/ tb_activation_buffer__DOT__act_dut__DOT__first_pass_a;
    tb_activation_buffer__DOT__act_dut__DOT__first_pass_a = 0;
    CData/*0:0*/ tb_activation_buffer__DOT__act_dut__DOT__buff_b_active;
    tb_activation_buffer__DOT__act_dut__DOT__buff_b_active = 0;
    // Body
    vlSelf->tb_activation_buffer__DOT__bf_first_pass = 0U;
    vlSelf->tb_activation_buffer__DOT__bf_active = 0U;
    vlSelf->tb_activation_buffer__DOT__bf_re = 0U;
    if ((0U != (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
        if ((1U != (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
            if ((2U != (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
                if ((3U == (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
                    if (((~ (IData)(vlSelf->tb_activation_buffer__DOT__bf_empty)) 
                         & ((IData)(vlSelf->tb_activation_buffer__DOT__bf_compute_state) 
                            | (IData)(vlSelf->tb_activation_buffer__DOT__bf_drain_state)))) {
                        vlSelf->tb_activation_buffer__DOT__bf_active = 1U;
                        vlSelf->tb_activation_buffer__DOT__bf_re = 1U;
                    }
                }
            }
        }
    }
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_a = 0U;
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_b = 0U;
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__we_a = 0U;
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__we_b = 0U;
    vlSelf->tb_activation_buffer__DOT__bf_we = 0U;
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__next_state 
        = vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state;
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__next_state 
        = vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state;
    if ((0U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
        if (vlSelf->tb_activation_buffer__DOT__act_start) {
            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__we_b = 1U;
            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__next_state = 4U;
        } else {
            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__next_state = 0U;
        }
    } else if ((1U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
        if ((0xffU != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count))) {
            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__we_b = 1U;
        }
        vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__next_state 
            = ((0xffU == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count))
                ? 2U : 1U);
    } else {
        if ((2U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
            if ((3U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
                if ((4U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
                    if ((5U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
                        if (((IData)(vlSelf->tb_activation_buffer__DOT__act_compute_state) 
                             | ((IData)(vlSelf->tb_activation_buffer__DOT__act_drain_state) 
                                & (0xffU != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count))))) {
                            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__we_b = 1U;
                        }
                    }
                }
            }
        }
        if ((2U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__next_state = 3U;
        } else if ((3U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
            if (((0U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count)) 
                 & ((IData)(vlSelf->tb_activation_buffer__DOT__act_compute_state) 
                    | (IData)(vlSelf->tb_activation_buffer__DOT__act_drain_state)))) {
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__next_state = 3U;
            } else if (vlSelf->tb_activation_buffer__DOT__act_tiles_complete) {
                if (vlSelf->tb_activation_buffer__DOT__act_tiles_complete) {
                    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__next_state = 6U;
                }
            } else {
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__next_state = 5U;
            }
        } else if ((4U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__next_state 
                = ((IData)(vlSelf->tb_activation_buffer__DOT__act_compute_state)
                    ? 5U : 4U);
        } else if ((5U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
            if (((IData)(vlSelf->tb_activation_buffer__DOT__act_compute_state) 
                 | ((IData)(vlSelf->tb_activation_buffer__DOT__act_drain_state) 
                    & (0xffU != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count))))) {
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__next_state = 3U;
            }
        } else if ((6U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__next_state = 0U;
        }
    }
    vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__next_state 
        = vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state;
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
    } else {
        if ((2U != (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
            if ((3U != (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
                if ((4U != (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
                    if ((5U == (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
                        if (((IData)(vlSelf->tb_activation_buffer__DOT__bf_compute_state) 
                             | ((IData)(vlSelf->tb_activation_buffer__DOT__bf_drain_state) 
                                & (~ (IData)(vlSelf->tb_activation_buffer__DOT__bf_full))))) {
                            vlSelf->tb_activation_buffer__DOT__bf_we = 1U;
                        }
                    }
                }
            }
        }
        if ((2U == (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
            vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__next_state = 3U;
        } else if ((3U == (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
            if (((~ (IData)(vlSelf->tb_activation_buffer__DOT__bf_empty)) 
                 & ((IData)(vlSelf->tb_activation_buffer__DOT__bf_compute_state) 
                    | (IData)(vlSelf->tb_activation_buffer__DOT__bf_drain_state)))) {
                vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__next_state = 3U;
            } else if (vlSelf->tb_activation_buffer__DOT__bf_tiles_complete) {
                if (vlSelf->tb_activation_buffer__DOT__bf_tiles_complete) {
                    vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__next_state = 6U;
                }
            } else {
                vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__next_state = 5U;
            }
        } else if ((4U == (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
            vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__next_state 
                = ((IData)(vlSelf->tb_activation_buffer__DOT__bf_compute_state)
                    ? 5U : 4U);
        } else if ((5U == (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
            if (((IData)(vlSelf->tb_activation_buffer__DOT__bf_compute_state) 
                 | ((IData)(vlSelf->tb_activation_buffer__DOT__bf_drain_state) 
                    & (~ (IData)(vlSelf->tb_activation_buffer__DOT__bf_full))))) {
                vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__next_state = 3U;
            }
        } else if ((6U == (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
            vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__next_state = 0U;
        }
    }
    tb_activation_buffer__DOT__act_dut__DOT__buff_b_active = 0U;
    if ((0U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
        if ((1U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
            if ((2U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
                if ((3U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
                    if (((0U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count)) 
                         & ((IData)(vlSelf->tb_activation_buffer__DOT__act_compute_state) 
                            | (IData)(vlSelf->tb_activation_buffer__DOT__act_drain_state)))) {
                        vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_b = 1U;
                        tb_activation_buffer__DOT__act_dut__DOT__buff_b_active = 1U;
                    }
                }
            }
        }
    }
    tb_activation_buffer__DOT__act_dut__DOT__first_pass_a = 0U;
    if ((0U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
        if (vlSelf->tb_activation_buffer__DOT__act_start) {
            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__we_a = 1U;
            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__next_state = 1U;
            tb_activation_buffer__DOT__act_dut__DOT__first_pass_a = 1U;
        } else {
            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__next_state = 0U;
        }
    } else if ((1U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
        if ((0xffU != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count))) {
            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__we_a = 1U;
            tb_activation_buffer__DOT__act_dut__DOT__first_pass_a = 1U;
        }
        vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__next_state 
            = ((0xffU == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count))
                ? 2U : 1U);
    } else {
        if ((2U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
            if ((3U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
                if ((4U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
                    if ((5U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
                        if (((IData)(vlSelf->tb_activation_buffer__DOT__act_compute_state) 
                             | ((IData)(vlSelf->tb_activation_buffer__DOT__act_drain_state) 
                                & (0xffU != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count))))) {
                            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__we_a = 1U;
                        }
                    }
                }
            }
        }
        if ((2U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__next_state = 3U;
        } else if ((3U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
            if (((0U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count)) 
                 & ((IData)(vlSelf->tb_activation_buffer__DOT__act_compute_state) 
                    | (IData)(vlSelf->tb_activation_buffer__DOT__act_drain_state)))) {
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__next_state = 3U;
            } else if (vlSelf->tb_activation_buffer__DOT__act_tiles_complete) {
                if (vlSelf->tb_activation_buffer__DOT__act_tiles_complete) {
                    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__next_state = 6U;
                }
            } else {
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__next_state = 5U;
            }
        } else if ((4U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__next_state 
                = ((IData)(vlSelf->tb_activation_buffer__DOT__act_compute_state)
                    ? 5U : 4U);
        } else if ((5U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
            if (((IData)(vlSelf->tb_activation_buffer__DOT__act_compute_state) 
                 | ((IData)(vlSelf->tb_activation_buffer__DOT__act_drain_state) 
                    & (0xffU != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count))))) {
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__next_state = 3U;
            }
        } else if ((6U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__next_state = 0U;
        }
    }
    tb_activation_buffer__DOT__act_dut__DOT__buff_a_active = 0U;
    if ((0U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
        if ((1U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
            if ((2U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
                if ((3U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
                    if (((0U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count)) 
                         & ((IData)(vlSelf->tb_activation_buffer__DOT__act_compute_state) 
                            | (IData)(vlSelf->tb_activation_buffer__DOT__act_drain_state)))) {
                        vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_a = 1U;
                        tb_activation_buffer__DOT__act_dut__DOT__buff_a_active = 1U;
                    }
                }
            }
        }
    }
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__we_valid_b = 0U;
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__we_valid_a = 0U;
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_b[0U] = 0U;
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_b[1U] = 0U;
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_b[2U] = 0U;
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_b[3U] = 0U;
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_a[0U] = 0U;
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_a[1U] = 0U;
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_a[2U] = 0U;
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_a[3U] = 0U;
    if ((1U & (~ ((IData)(tb_activation_buffer__DOT__act_dut__DOT__buff_a_active) 
                  | (IData)(tb_activation_buffer__DOT__act_dut__DOT__first_pass_a))))) {
        if (tb_activation_buffer__DOT__act_dut__DOT__buff_b_active) {
            if (vlSelf->tb_activation_buffer__DOT__act_DMA_in_valid) {
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__we_valid_a = 1U;
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
    vlSelf->tb_activation_buffer__DOT__act_output_buf_valid = 0U;
    vlSelf->tb_activation_buffer__DOT__act_output_buff[0U] = 0U;
    vlSelf->tb_activation_buffer__DOT__act_output_buff[1U] = 0U;
    vlSelf->tb_activation_buffer__DOT__act_output_buff[2U] = 0U;
    vlSelf->tb_activation_buffer__DOT__act_output_buff[3U] = 0U;
    if (((IData)(tb_activation_buffer__DOT__act_dut__DOT__buff_a_active) 
         | (IData)(tb_activation_buffer__DOT__act_dut__DOT__first_pass_a))) {
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
    } else if (tb_activation_buffer__DOT__act_dut__DOT__buff_b_active) {
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

extern const VlWide<64>/*2047:0*/ Vtb_activation_buffer__ConstPool__CONST_h6be9aa18_0;

VL_INLINE_OPT void Vtb_activation_buffer___024root___nba_sequent__TOP__0(Vtb_activation_buffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_activation_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_activation_buffer___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vdly__tb_activation_buffer__DOT__ib_dut__DOT__curr_count;
    __Vdly__tb_activation_buffer__DOT__ib_dut__DOT__curr_count = 0;
    IData/*31:0*/ __Vilp;
    VlWide<64>/*2047:0*/ __Vdly__tb_activation_buffer__DOT__ib_dut__DOT__buff;
    VL_ZERO_W(2048, __Vdly__tb_activation_buffer__DOT__ib_dut__DOT__buff);
    // Body
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        __Vdly__tb_activation_buffer__DOT__ib_dut__DOT__buff[__Vilp] 
            = vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__buff[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vdly__tb_activation_buffer__DOT__ib_dut__DOT__curr_count 
        = vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__curr_count;
    if (vlSelf->tb_activation_buffer__DOT__ib_rst_n) {
        if (vlSelf->tb_activation_buffer__DOT__ib_clr) {
            vlSelf->tb_activation_buffer__DOT__ib_re_valid = 0U;
            __Vdly__tb_activation_buffer__DOT__ib_dut__DOT__curr_count = 0U;
        } else if (vlSelf->tb_activation_buffer__DOT__ib_we) {
            if (((IData)(vlSelf->tb_activation_buffer__DOT__ib_we_valid) 
                 & (0xffU != (IData)(vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__curr_count)))) {
                vlSelf->tb_activation_buffer__DOT__ib_re_valid = 0U;
            }
            if (((IData)(vlSelf->tb_activation_buffer__DOT__ib_we_valid) 
                 & (~ (IData)(vlSelf->tb_activation_buffer__DOT__ib_full)))) {
                VL_ASSIGNSEL_WI(2048,8,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__curr_count), 3U)), __Vdly__tb_activation_buffer__DOT__ib_dut__DOT__buff, 
                                (0xfU & vlSelf->tb_activation_buffer__DOT__ib_we_in[0U]));
                VL_ASSIGNSEL_WI(2048,8,(0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                               ((IData)(1U) 
                                                                + (IData)(vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__curr_count)), 3U)), __Vdly__tb_activation_buffer__DOT__ib_dut__DOT__buff, 
                                (0xfU & (vlSelf->tb_activation_buffer__DOT__ib_we_in[0U] 
                                         >> 4U)));
                VL_ASSIGNSEL_WI(2048,8,(0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                               ((IData)(2U) 
                                                                + (IData)(vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__curr_count)), 3U)), __Vdly__tb_activation_buffer__DOT__ib_dut__DOT__buff, 
                                (0xfU & (vlSelf->tb_activation_buffer__DOT__ib_we_in[0U] 
                                         >> 8U)));
                VL_ASSIGNSEL_WI(2048,8,(0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                               ((IData)(3U) 
                                                                + (IData)(vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__curr_count)), 3U)), __Vdly__tb_activation_buffer__DOT__ib_dut__DOT__buff, 
                                (0xfU & (vlSelf->tb_activation_buffer__DOT__ib_we_in[0U] 
                                         >> 0xcU)));
                __Vdly__tb_activation_buffer__DOT__ib_dut__DOT__curr_count 
                    = (0xffU & ((IData)(4U) + (IData)(vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__curr_count)));
            }
        } else if (vlSelf->tb_activation_buffer__DOT__ib_re) {
            vlSelf->tb_activation_buffer__DOT__ib_re_valid 
                = (0U != (IData)(vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__curr_count));
            if ((1U & (~ (IData)(vlSelf->tb_activation_buffer__DOT__ib_empty)))) {
                vlSelf->tb_activation_buffer__DOT__ib_re_out[0U] 
                    = ((0xfffffff0U & vlSelf->tb_activation_buffer__DOT__ib_re_out[0U]) 
                       | (0xfU & (((0U == (0x1fU & 
                                           VL_SHIFTL_III(11,32,32, (IData)(vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__curr_count), 3U)))
                                    ? 0U : (vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__buff[
                                            (((IData)(3U) 
                                              + (0x7ffU 
                                                 & VL_SHIFTL_III(11,32,32, (IData)(vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__curr_count), 3U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_SHIFTL_III(11,32,32, (IData)(vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__curr_count), 3U))))) 
                                  | (vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__buff[
                                     (0x3fU & (VL_SHIFTL_III(11,32,32, (IData)(vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__curr_count), 3U) 
                                               >> 5U))] 
                                     >> (0x1fU & VL_SHIFTL_III(11,32,32, (IData)(vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__curr_count), 3U))))));
                vlSelf->tb_activation_buffer__DOT__ib_re_out[0U] 
                    = ((0xffffff0fU & vlSelf->tb_activation_buffer__DOT__ib_re_out[0U]) 
                       | (0xf0U & ((((0U == (0x1fU 
                                             & VL_SHIFTL_III(11,32,32, 
                                                             ((IData)(vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__curr_count) 
                                                              - (IData)(1U)), 3U)))
                                      ? 0U : (vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__buff[
                                              (((IData)(3U) 
                                                + (0x7ffU 
                                                   & VL_SHIFTL_III(11,32,32, 
                                                                   ((IData)(vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__curr_count) 
                                                                    - (IData)(1U)), 3U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(11,32,32, 
                                                                   ((IData)(vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__curr_count) 
                                                                    - (IData)(1U)), 3U))))) 
                                    | (vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__buff[
                                       (0x3fU & (VL_SHIFTL_III(11,32,32, 
                                                               ((IData)(vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__curr_count) 
                                                                - (IData)(1U)), 3U) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_SHIFTL_III(11,32,32, 
                                                         ((IData)(vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__curr_count) 
                                                          - (IData)(1U)), 3U)))) 
                                   << 4U)));
                vlSelf->tb_activation_buffer__DOT__ib_re_out[0U] 
                    = ((0xfffff0ffU & vlSelf->tb_activation_buffer__DOT__ib_re_out[0U]) 
                       | (0xf00U & ((((0U == (0x1fU 
                                              & VL_SHIFTL_III(11,32,32, 
                                                              ((IData)(vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__curr_count) 
                                                               - (IData)(2U)), 3U)))
                                       ? 0U : (vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__buff[
                                               (((IData)(3U) 
                                                 + 
                                                 (0x7ffU 
                                                  & VL_SHIFTL_III(11,32,32, 
                                                                  ((IData)(vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__curr_count) 
                                                                   - (IData)(2U)), 3U))) 
                                                >> 5U)] 
                                               << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(11,32,32, 
                                                                    ((IData)(vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__curr_count) 
                                                                     - (IData)(2U)), 3U))))) 
                                     | (vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__buff[
                                        (0x3fU & (VL_SHIFTL_III(11,32,32, 
                                                                ((IData)(vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__curr_count) 
                                                                 - (IData)(2U)), 3U) 
                                                  >> 5U))] 
                                        >> (0x1fU & 
                                            VL_SHIFTL_III(11,32,32, 
                                                          ((IData)(vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__curr_count) 
                                                           - (IData)(2U)), 3U)))) 
                                    << 8U)));
                vlSelf->tb_activation_buffer__DOT__ib_re_out[0U] 
                    = ((0xffff0fffU & vlSelf->tb_activation_buffer__DOT__ib_re_out[0U]) 
                       | (0xf000U & ((((0U == (0x1fU 
                                               & VL_SHIFTL_III(11,32,32, 
                                                               ((IData)(vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__curr_count) 
                                                                - (IData)(3U)), 3U)))
                                        ? 0U : (vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__buff[
                                                (((IData)(3U) 
                                                  + 
                                                  (0x7ffU 
                                                   & VL_SHIFTL_III(11,32,32, 
                                                                   ((IData)(vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__curr_count) 
                                                                    - (IData)(3U)), 3U))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(11,32,32, 
                                                                  ((IData)(vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__curr_count) 
                                                                   - (IData)(3U)), 3U))))) 
                                      | (vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__buff[
                                         (0x3fU & (
                                                   VL_SHIFTL_III(11,32,32, 
                                                                 ((IData)(vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__curr_count) 
                                                                  - (IData)(3U)), 3U) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_SHIFTL_III(11,32,32, 
                                                             ((IData)(vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__curr_count) 
                                                              - (IData)(3U)), 3U)))) 
                                     << 0xcU)));
                __Vdly__tb_activation_buffer__DOT__ib_dut__DOT__curr_count 
                    = (0xffU & ((IData)(vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__curr_count) 
                                - (IData)(4U)));
            }
        }
    } else {
        __Vdly__tb_activation_buffer__DOT__ib_dut__DOT__curr_count = 0U;
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            __Vdly__tb_activation_buffer__DOT__ib_dut__DOT__buff[__Vilp] 
                = Vtb_activation_buffer__ConstPool__CONST_h6be9aa18_0[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__buff[__Vilp] 
            = __Vdly__tb_activation_buffer__DOT__ib_dut__DOT__buff[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__curr_count 
        = __Vdly__tb_activation_buffer__DOT__ib_dut__DOT__curr_count;
    vlSelf->tb_activation_buffer__DOT__ib_empty = (0U 
                                                   == (IData)(vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__curr_count));
    vlSelf->tb_activation_buffer__DOT__ib_full = (0xffU 
                                                  == (IData)(vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__curr_count));
}

VL_INLINE_OPT void Vtb_activation_buffer___024root___nba_sequent__TOP__1(Vtb_activation_buffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_activation_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_activation_buffer___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*7:0*/ __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count;
    __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count = 0;
    IData/*31:0*/ __Vilp;
    VlWide<64>/*2047:0*/ __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__buff;
    VL_ZERO_W(2048, __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__buff);
    CData/*7:0*/ __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count;
    __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count = 0;
    VlWide<64>/*2047:0*/ __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__buff;
    VL_ZERO_W(2048, __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__buff);
    // Body
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__buff[__Vilp] 
            = vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__buff[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count 
        = vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count;
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__buff[__Vilp] 
            = vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__buff[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count 
        = vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count;
    if (vlSelf->tb_activation_buffer__DOT__act_rst_n) {
        vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state 
            = vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__next_state;
        if (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__clr_b) {
            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_valid_b = 0U;
            __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count = 0U;
        } else if (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__we_b) {
            if (((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__we_valid_b) 
                 & (0xffU != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count)))) {
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_valid_b = 0U;
            }
            if (((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__we_valid_b) 
                 & (~ (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__buff_b_full)))) {
                VL_ASSIGNSEL_WI(2048,8,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count), 3U)), __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__buff, 
                                (0xfU & vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_b[0U]));
                VL_ASSIGNSEL_WI(2048,8,(0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                               ((IData)(1U) 
                                                                + (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count)), 3U)), __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__buff, 
                                (0xfU & (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_b[0U] 
                                         >> 4U)));
                VL_ASSIGNSEL_WI(2048,8,(0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                               ((IData)(2U) 
                                                                + (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count)), 3U)), __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__buff, 
                                (0xfU & (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_b[0U] 
                                         >> 8U)));
                VL_ASSIGNSEL_WI(2048,8,(0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                               ((IData)(3U) 
                                                                + (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count)), 3U)), __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__buff, 
                                (0xfU & (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_b[0U] 
                                         >> 0xcU)));
                __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count 
                    = (0xffU & ((IData)(4U) + (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count)));
            }
        } else if (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_b) {
            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_valid_b 
                = (0U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count));
            if ((1U & (~ (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__buff_b_empty)))) {
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_out_b[0U] 
                    = ((0xfffffff0U & vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_out_b[0U]) 
                       | (0xfU & (((0U == (0x1fU & 
                                           VL_SHIFTL_III(11,32,32, (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count), 3U)))
                                    ? 0U : (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__buff[
                                            (((IData)(3U) 
                                              + (0x7ffU 
                                                 & VL_SHIFTL_III(11,32,32, (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count), 3U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_SHIFTL_III(11,32,32, (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count), 3U))))) 
                                  | (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__buff[
                                     (0x3fU & (VL_SHIFTL_III(11,32,32, (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count), 3U) 
                                               >> 5U))] 
                                     >> (0x1fU & VL_SHIFTL_III(11,32,32, (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count), 3U))))));
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_out_b[0U] 
                    = ((0xffffff0fU & vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_out_b[0U]) 
                       | (0xf0U & ((((0U == (0x1fU 
                                             & VL_SHIFTL_III(11,32,32, 
                                                             ((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count) 
                                                              - (IData)(1U)), 3U)))
                                      ? 0U : (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__buff[
                                              (((IData)(3U) 
                                                + (0x7ffU 
                                                   & VL_SHIFTL_III(11,32,32, 
                                                                   ((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count) 
                                                                    - (IData)(1U)), 3U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(11,32,32, 
                                                                   ((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count) 
                                                                    - (IData)(1U)), 3U))))) 
                                    | (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__buff[
                                       (0x3fU & (VL_SHIFTL_III(11,32,32, 
                                                               ((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count) 
                                                                - (IData)(1U)), 3U) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_SHIFTL_III(11,32,32, 
                                                         ((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count) 
                                                          - (IData)(1U)), 3U)))) 
                                   << 4U)));
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_out_b[0U] 
                    = ((0xfffff0ffU & vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_out_b[0U]) 
                       | (0xf00U & ((((0U == (0x1fU 
                                              & VL_SHIFTL_III(11,32,32, 
                                                              ((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count) 
                                                               - (IData)(2U)), 3U)))
                                       ? 0U : (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__buff[
                                               (((IData)(3U) 
                                                 + 
                                                 (0x7ffU 
                                                  & VL_SHIFTL_III(11,32,32, 
                                                                  ((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count) 
                                                                   - (IData)(2U)), 3U))) 
                                                >> 5U)] 
                                               << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(11,32,32, 
                                                                    ((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count) 
                                                                     - (IData)(2U)), 3U))))) 
                                     | (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__buff[
                                        (0x3fU & (VL_SHIFTL_III(11,32,32, 
                                                                ((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count) 
                                                                 - (IData)(2U)), 3U) 
                                                  >> 5U))] 
                                        >> (0x1fU & 
                                            VL_SHIFTL_III(11,32,32, 
                                                          ((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count) 
                                                           - (IData)(2U)), 3U)))) 
                                    << 8U)));
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_out_b[0U] 
                    = ((0xffff0fffU & vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_out_b[0U]) 
                       | (0xf000U & ((((0U == (0x1fU 
                                               & VL_SHIFTL_III(11,32,32, 
                                                               ((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count) 
                                                                - (IData)(3U)), 3U)))
                                        ? 0U : (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__buff[
                                                (((IData)(3U) 
                                                  + 
                                                  (0x7ffU 
                                                   & VL_SHIFTL_III(11,32,32, 
                                                                   ((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count) 
                                                                    - (IData)(3U)), 3U))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(11,32,32, 
                                                                  ((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count) 
                                                                   - (IData)(3U)), 3U))))) 
                                      | (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__buff[
                                         (0x3fU & (
                                                   VL_SHIFTL_III(11,32,32, 
                                                                 ((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count) 
                                                                  - (IData)(3U)), 3U) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_SHIFTL_III(11,32,32, 
                                                             ((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count) 
                                                              - (IData)(3U)), 3U)))) 
                                     << 0xcU)));
                __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count 
                    = (0xffU & ((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count) 
                                - (IData)(4U)));
            }
        }
        if (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__clr_a) {
            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_valid_a = 0U;
            __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count = 0U;
        } else if (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__we_a) {
            if (((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__we_valid_a) 
                 & (0xffU != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count)))) {
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_valid_a = 0U;
            }
            if (((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__we_valid_a) 
                 & (~ (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__buff_a_full)))) {
                VL_ASSIGNSEL_WI(2048,8,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count), 3U)), __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__buff, 
                                (0xfU & vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_a[0U]));
                VL_ASSIGNSEL_WI(2048,8,(0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                               ((IData)(1U) 
                                                                + (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count)), 3U)), __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__buff, 
                                (0xfU & (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_a[0U] 
                                         >> 4U)));
                VL_ASSIGNSEL_WI(2048,8,(0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                               ((IData)(2U) 
                                                                + (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count)), 3U)), __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__buff, 
                                (0xfU & (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_a[0U] 
                                         >> 8U)));
                VL_ASSIGNSEL_WI(2048,8,(0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                               ((IData)(3U) 
                                                                + (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count)), 3U)), __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__buff, 
                                (0xfU & (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_a[0U] 
                                         >> 0xcU)));
                __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count 
                    = (0xffU & ((IData)(4U) + (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count)));
            }
        } else if (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_a) {
            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_valid_a 
                = (0U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count));
            if ((1U & (~ (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__buff_a_empty)))) {
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_out_a[0U] 
                    = ((0xfffffff0U & vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_out_a[0U]) 
                       | (0xfU & (((0U == (0x1fU & 
                                           VL_SHIFTL_III(11,32,32, (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count), 3U)))
                                    ? 0U : (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__buff[
                                            (((IData)(3U) 
                                              + (0x7ffU 
                                                 & VL_SHIFTL_III(11,32,32, (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count), 3U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_SHIFTL_III(11,32,32, (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count), 3U))))) 
                                  | (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__buff[
                                     (0x3fU & (VL_SHIFTL_III(11,32,32, (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count), 3U) 
                                               >> 5U))] 
                                     >> (0x1fU & VL_SHIFTL_III(11,32,32, (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count), 3U))))));
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_out_a[0U] 
                    = ((0xffffff0fU & vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_out_a[0U]) 
                       | (0xf0U & ((((0U == (0x1fU 
                                             & VL_SHIFTL_III(11,32,32, 
                                                             ((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count) 
                                                              - (IData)(1U)), 3U)))
                                      ? 0U : (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__buff[
                                              (((IData)(3U) 
                                                + (0x7ffU 
                                                   & VL_SHIFTL_III(11,32,32, 
                                                                   ((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count) 
                                                                    - (IData)(1U)), 3U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(11,32,32, 
                                                                   ((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count) 
                                                                    - (IData)(1U)), 3U))))) 
                                    | (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__buff[
                                       (0x3fU & (VL_SHIFTL_III(11,32,32, 
                                                               ((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count) 
                                                                - (IData)(1U)), 3U) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_SHIFTL_III(11,32,32, 
                                                         ((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count) 
                                                          - (IData)(1U)), 3U)))) 
                                   << 4U)));
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_out_a[0U] 
                    = ((0xfffff0ffU & vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_out_a[0U]) 
                       | (0xf00U & ((((0U == (0x1fU 
                                              & VL_SHIFTL_III(11,32,32, 
                                                              ((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count) 
                                                               - (IData)(2U)), 3U)))
                                       ? 0U : (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__buff[
                                               (((IData)(3U) 
                                                 + 
                                                 (0x7ffU 
                                                  & VL_SHIFTL_III(11,32,32, 
                                                                  ((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count) 
                                                                   - (IData)(2U)), 3U))) 
                                                >> 5U)] 
                                               << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(11,32,32, 
                                                                    ((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count) 
                                                                     - (IData)(2U)), 3U))))) 
                                     | (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__buff[
                                        (0x3fU & (VL_SHIFTL_III(11,32,32, 
                                                                ((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count) 
                                                                 - (IData)(2U)), 3U) 
                                                  >> 5U))] 
                                        >> (0x1fU & 
                                            VL_SHIFTL_III(11,32,32, 
                                                          ((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count) 
                                                           - (IData)(2U)), 3U)))) 
                                    << 8U)));
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_out_a[0U] 
                    = ((0xffff0fffU & vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_out_a[0U]) 
                       | (0xf000U & ((((0U == (0x1fU 
                                               & VL_SHIFTL_III(11,32,32, 
                                                               ((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count) 
                                                                - (IData)(3U)), 3U)))
                                        ? 0U : (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__buff[
                                                (((IData)(3U) 
                                                  + 
                                                  (0x7ffU 
                                                   & VL_SHIFTL_III(11,32,32, 
                                                                   ((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count) 
                                                                    - (IData)(3U)), 3U))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(11,32,32, 
                                                                  ((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count) 
                                                                   - (IData)(3U)), 3U))))) 
                                      | (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__buff[
                                         (0x3fU & (
                                                   VL_SHIFTL_III(11,32,32, 
                                                                 ((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count) 
                                                                  - (IData)(3U)), 3U) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_SHIFTL_III(11,32,32, 
                                                             ((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count) 
                                                              - (IData)(3U)), 3U)))) 
                                     << 0xcU)));
                __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count 
                    = (0xffU & ((IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count) 
                                - (IData)(4U)));
            }
        }
        vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state 
            = vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__next_state;
    } else {
        vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state = 0U;
        __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count = 0U;
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__buff[__Vilp] 
                = Vtb_activation_buffer__ConstPool__CONST_h6be9aa18_0[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state = 0U;
        __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count = 0U;
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__buff[__Vilp] 
                = Vtb_activation_buffer__ConstPool__CONST_h6be9aa18_0[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__buff[__Vilp] 
            = __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__buff[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count 
        = __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count;
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__buff[__Vilp] 
            = __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__buff[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count 
        = __Vdly__tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count;
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__clr_b = 0U;
    if ((0U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
        if ((1U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
            if ((2U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
                if ((3U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
                    if ((4U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
                        if ((5U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
                            if ((6U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
                                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__clr_b = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__buff_b_full 
        = (0xffU == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count));
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__buff_b_empty 
        = (0U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count));
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__clr_a = 0U;
    if ((0U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
        if ((1U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
            if ((2U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
                if ((3U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
                    if ((4U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
                        if ((5U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
                            if ((6U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
                                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__clr_a = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__buff_a_full 
        = (0xffU == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count));
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__buff_a_empty 
        = (0U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count));
}

VL_INLINE_OPT void Vtb_activation_buffer___024root___nba_sequent__TOP__2(Vtb_activation_buffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_activation_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_activation_buffer___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state 
        = ((IData)(vlSelf->tb_activation_buffer__DOT__bf_rst_n)
            ? (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__next_state)
            : 0U);
    vlSelf->tb_activation_buffer__DOT__bf_clr = 0U;
    if ((0U != (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
        if ((1U != (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
            if ((2U != (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
                if ((3U != (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
                    if ((4U != (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
                        if ((5U != (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
                            if ((6U == (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
                                vlSelf->tb_activation_buffer__DOT__bf_clr = 1U;
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
    // Init
    CData/*0:0*/ tb_activation_buffer__DOT__act_dut__DOT__buff_a_active;
    tb_activation_buffer__DOT__act_dut__DOT__buff_a_active = 0;
    CData/*0:0*/ tb_activation_buffer__DOT__act_dut__DOT__first_pass_a;
    tb_activation_buffer__DOT__act_dut__DOT__first_pass_a = 0;
    CData/*0:0*/ tb_activation_buffer__DOT__act_dut__DOT__buff_b_active;
    tb_activation_buffer__DOT__act_dut__DOT__buff_b_active = 0;
    // Body
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_b = 0U;
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__we_b = 0U;
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__next_state 
        = vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state;
    if ((0U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
        if (vlSelf->tb_activation_buffer__DOT__act_start) {
            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__we_b = 1U;
            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__next_state = 4U;
        } else {
            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__next_state = 0U;
        }
    } else if ((1U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
        if ((0xffU != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count))) {
            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__we_b = 1U;
        }
        vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__next_state 
            = ((0xffU == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count))
                ? 2U : 1U);
    } else {
        if ((2U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
            if ((3U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
                if ((4U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
                    if ((5U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
                        if (((IData)(vlSelf->tb_activation_buffer__DOT__act_compute_state) 
                             | ((IData)(vlSelf->tb_activation_buffer__DOT__act_drain_state) 
                                & (0xffU != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count))))) {
                            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__we_b = 1U;
                        }
                    }
                }
            }
        }
        if ((2U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__next_state = 3U;
        } else if ((3U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
            if (((0U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count)) 
                 & ((IData)(vlSelf->tb_activation_buffer__DOT__act_compute_state) 
                    | (IData)(vlSelf->tb_activation_buffer__DOT__act_drain_state)))) {
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__next_state = 3U;
            } else if (vlSelf->tb_activation_buffer__DOT__act_tiles_complete) {
                if (vlSelf->tb_activation_buffer__DOT__act_tiles_complete) {
                    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__next_state = 6U;
                }
            } else {
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__next_state = 5U;
            }
        } else if ((4U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__next_state 
                = ((IData)(vlSelf->tb_activation_buffer__DOT__act_compute_state)
                    ? 5U : 4U);
        } else if ((5U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
            if (((IData)(vlSelf->tb_activation_buffer__DOT__act_compute_state) 
                 | ((IData)(vlSelf->tb_activation_buffer__DOT__act_drain_state) 
                    & (0xffU != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count))))) {
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__next_state = 3U;
            }
        } else if ((6U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__next_state = 0U;
        }
    }
    tb_activation_buffer__DOT__act_dut__DOT__buff_b_active = 0U;
    if ((0U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
        if ((1U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
            if ((2U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
                if ((3U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
                    if (((0U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count)) 
                         & ((IData)(vlSelf->tb_activation_buffer__DOT__act_compute_state) 
                            | (IData)(vlSelf->tb_activation_buffer__DOT__act_drain_state)))) {
                        vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_b = 1U;
                        tb_activation_buffer__DOT__act_dut__DOT__buff_b_active = 1U;
                    }
                }
            }
        }
    }
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_a = 0U;
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__we_a = 0U;
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__next_state 
        = vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state;
    tb_activation_buffer__DOT__act_dut__DOT__first_pass_a = 0U;
    if ((0U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
        if (vlSelf->tb_activation_buffer__DOT__act_start) {
            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__we_a = 1U;
            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__next_state = 1U;
            tb_activation_buffer__DOT__act_dut__DOT__first_pass_a = 1U;
        } else {
            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__next_state = 0U;
        }
    } else if ((1U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
        if ((0xffU != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count))) {
            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__we_a = 1U;
            tb_activation_buffer__DOT__act_dut__DOT__first_pass_a = 1U;
        }
        vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__next_state 
            = ((0xffU == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count))
                ? 2U : 1U);
    } else {
        if ((2U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
            if ((3U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
                if ((4U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
                    if ((5U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
                        if (((IData)(vlSelf->tb_activation_buffer__DOT__act_compute_state) 
                             | ((IData)(vlSelf->tb_activation_buffer__DOT__act_drain_state) 
                                & (0xffU != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count))))) {
                            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__we_a = 1U;
                        }
                    }
                }
            }
        }
        if ((2U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__next_state = 3U;
        } else if ((3U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
            if (((0U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count)) 
                 & ((IData)(vlSelf->tb_activation_buffer__DOT__act_compute_state) 
                    | (IData)(vlSelf->tb_activation_buffer__DOT__act_drain_state)))) {
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__next_state = 3U;
            } else if (vlSelf->tb_activation_buffer__DOT__act_tiles_complete) {
                if (vlSelf->tb_activation_buffer__DOT__act_tiles_complete) {
                    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__next_state = 6U;
                }
            } else {
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__next_state = 5U;
            }
        } else if ((4U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__next_state 
                = ((IData)(vlSelf->tb_activation_buffer__DOT__act_compute_state)
                    ? 5U : 4U);
        } else if ((5U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
            if (((IData)(vlSelf->tb_activation_buffer__DOT__act_compute_state) 
                 | ((IData)(vlSelf->tb_activation_buffer__DOT__act_drain_state) 
                    & (0xffU != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count))))) {
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__next_state = 3U;
            }
        } else if ((6U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__next_state = 0U;
        }
    }
    tb_activation_buffer__DOT__act_dut__DOT__buff_a_active = 0U;
    if ((0U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
        if ((1U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
            if ((2U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
                if ((3U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
                    if (((0U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count)) 
                         & ((IData)(vlSelf->tb_activation_buffer__DOT__act_compute_state) 
                            | (IData)(vlSelf->tb_activation_buffer__DOT__act_drain_state)))) {
                        vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_a = 1U;
                        tb_activation_buffer__DOT__act_dut__DOT__buff_a_active = 1U;
                    }
                }
            }
        }
    }
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__we_valid_b = 0U;
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__we_valid_a = 0U;
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_b[0U] = 0U;
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_b[1U] = 0U;
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_b[2U] = 0U;
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_b[3U] = 0U;
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_a[0U] = 0U;
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_a[1U] = 0U;
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_a[2U] = 0U;
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_a[3U] = 0U;
    if ((1U & (~ ((IData)(tb_activation_buffer__DOT__act_dut__DOT__buff_a_active) 
                  | (IData)(tb_activation_buffer__DOT__act_dut__DOT__first_pass_a))))) {
        if (tb_activation_buffer__DOT__act_dut__DOT__buff_b_active) {
            if (vlSelf->tb_activation_buffer__DOT__act_DMA_in_valid) {
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__we_valid_a = 1U;
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
    vlSelf->tb_activation_buffer__DOT__act_output_buf_valid = 0U;
    vlSelf->tb_activation_buffer__DOT__act_output_buff[0U] = 0U;
    vlSelf->tb_activation_buffer__DOT__act_output_buff[1U] = 0U;
    vlSelf->tb_activation_buffer__DOT__act_output_buff[2U] = 0U;
    vlSelf->tb_activation_buffer__DOT__act_output_buff[3U] = 0U;
    if (((IData)(tb_activation_buffer__DOT__act_dut__DOT__buff_a_active) 
         | (IData)(tb_activation_buffer__DOT__act_dut__DOT__first_pass_a))) {
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
    } else if (tb_activation_buffer__DOT__act_dut__DOT__buff_b_active) {
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
    vlSelf->tb_activation_buffer__DOT__bf_first_pass = 0U;
    vlSelf->tb_activation_buffer__DOT__bf_active = 0U;
    vlSelf->tb_activation_buffer__DOT__bf_re = 0U;
    if ((0U != (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
        if ((1U != (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
            if ((2U != (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
                if ((3U == (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
                    if (((~ (IData)(vlSelf->tb_activation_buffer__DOT__bf_empty)) 
                         & ((IData)(vlSelf->tb_activation_buffer__DOT__bf_compute_state) 
                            | (IData)(vlSelf->tb_activation_buffer__DOT__bf_drain_state)))) {
                        vlSelf->tb_activation_buffer__DOT__bf_active = 1U;
                        vlSelf->tb_activation_buffer__DOT__bf_re = 1U;
                    }
                }
            }
        }
    }
    vlSelf->tb_activation_buffer__DOT__bf_we = 0U;
    vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__next_state 
        = vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state;
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
    } else {
        if ((2U != (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
            if ((3U != (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
                if ((4U != (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
                    if ((5U == (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
                        if (((IData)(vlSelf->tb_activation_buffer__DOT__bf_compute_state) 
                             | ((IData)(vlSelf->tb_activation_buffer__DOT__bf_drain_state) 
                                & (~ (IData)(vlSelf->tb_activation_buffer__DOT__bf_full))))) {
                            vlSelf->tb_activation_buffer__DOT__bf_we = 1U;
                        }
                    }
                }
            }
        }
        if ((2U == (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
            vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__next_state = 3U;
        } else if ((3U == (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
            if (((~ (IData)(vlSelf->tb_activation_buffer__DOT__bf_empty)) 
                 & ((IData)(vlSelf->tb_activation_buffer__DOT__bf_compute_state) 
                    | (IData)(vlSelf->tb_activation_buffer__DOT__bf_drain_state)))) {
                vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__next_state = 3U;
            } else if (vlSelf->tb_activation_buffer__DOT__bf_tiles_complete) {
                if (vlSelf->tb_activation_buffer__DOT__bf_tiles_complete) {
                    vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__next_state = 6U;
                }
            } else {
                vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__next_state = 5U;
            }
        } else if ((4U == (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
            vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__next_state 
                = ((IData)(vlSelf->tb_activation_buffer__DOT__bf_compute_state)
                    ? 5U : 4U);
        } else if ((5U == (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
            if (((IData)(vlSelf->tb_activation_buffer__DOT__bf_compute_state) 
                 | ((IData)(vlSelf->tb_activation_buffer__DOT__bf_drain_state) 
                    & (~ (IData)(vlSelf->tb_activation_buffer__DOT__bf_full))))) {
                vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__next_state = 3U;
            }
        } else if ((6U == (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
            vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__next_state = 0U;
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
            VL_FATAL_MT("tb/tb_activation_buffer.sv", 25, "", "NBA region did not converge.");
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
                VL_FATAL_MT("tb/tb_activation_buffer.sv", 25, "", "Active region did not converge.");
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
