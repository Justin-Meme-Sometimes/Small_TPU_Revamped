// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_weight_fifo.h for the primary calling header

#include "Vtb_weight_fifo__pch.h"
#include "Vtb_weight_fifo___024root.h"

VlCoroutine Vtb_weight_fifo___024root___eval_initial__TOP__Vtiming__0(Vtb_weight_fifo___024root* vlSelf);
VlCoroutine Vtb_weight_fifo___024root___eval_initial__TOP__Vtiming__1(Vtb_weight_fifo___024root* vlSelf);
VlCoroutine Vtb_weight_fifo___024root___eval_initial__TOP__Vtiming__2(Vtb_weight_fifo___024root* vlSelf);
VlCoroutine Vtb_weight_fifo___024root___eval_initial__TOP__Vtiming__3(Vtb_weight_fifo___024root* vlSelf);
VlCoroutine Vtb_weight_fifo___024root___eval_initial__TOP__Vtiming__4(Vtb_weight_fifo___024root* vlSelf);

void Vtb_weight_fifo___024root___eval_initial(Vtb_weight_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_weight_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_weight_fifo___024root___eval_initial\n"); );
    // Body
    Vtb_weight_fifo___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_weight_fifo___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_weight_fifo___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    Vtb_weight_fifo___024root___eval_initial__TOP__Vtiming__3(vlSelf);
    Vtb_weight_fifo___024root___eval_initial__TOP__Vtiming__4(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_weight_fifo__DOT__clk__0 
        = vlSelf->tb_weight_fifo__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__tb_weight_fifo__DOT__reset_n__0 
        = vlSelf->tb_weight_fifo__DOT__reset_n;
    vlSelf->__Vtrigprevexpr___TOP__tb_weight_fifo__DOT__clk2__0 
        = vlSelf->tb_weight_fifo__DOT__clk2;
    vlSelf->__Vtrigprevexpr___TOP__tb_weight_fifo__DOT__rst_n2__0 
        = vlSelf->tb_weight_fifo__DOT__rst_n2;
    vlSelf->__Vtrigprevexpr_h9cca9006__0 = ((IData)(vlSelf->tb_weight_fifo__DOT__fifo_test_done) 
                                            & (IData)(vlSelf->tb_weight_fifo__DOT__wl_test_done));
}

VL_INLINE_OPT VlCoroutine Vtb_weight_fifo___024root___eval_initial__TOP__Vtiming__0(Vtb_weight_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_weight_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_weight_fifo___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    std::string __Vtask_tb_weight_fifo__DOT__check__1__name;
    CData/*0:0*/ __Vtask_tb_weight_fifo__DOT__check__1__cond;
    __Vtask_tb_weight_fifo__DOT__check__1__cond = 0;
    std::string __Vtask_tb_weight_fifo__DOT__check__2__name;
    CData/*0:0*/ __Vtask_tb_weight_fifo__DOT__check__2__cond;
    __Vtask_tb_weight_fifo__DOT__check__2__cond = 0;
    std::string __Vtask_tb_weight_fifo__DOT__check__3__name;
    CData/*0:0*/ __Vtask_tb_weight_fifo__DOT__check__3__cond;
    __Vtask_tb_weight_fifo__DOT__check__3__cond = 0;
    std::string __Vtask_tb_weight_fifo__DOT__check__4__name;
    CData/*0:0*/ __Vtask_tb_weight_fifo__DOT__check__4__cond;
    __Vtask_tb_weight_fifo__DOT__check__4__cond = 0;
    std::string __Vtask_tb_weight_fifo__DOT__check__5__name;
    CData/*0:0*/ __Vtask_tb_weight_fifo__DOT__check__5__cond;
    __Vtask_tb_weight_fifo__DOT__check__5__cond = 0;
    std::string __Vtask_tb_weight_fifo__DOT__check__6__name;
    CData/*0:0*/ __Vtask_tb_weight_fifo__DOT__check__6__cond;
    __Vtask_tb_weight_fifo__DOT__check__6__cond = 0;
    std::string __Vtask_tb_weight_fifo__DOT__check__7__name;
    CData/*0:0*/ __Vtask_tb_weight_fifo__DOT__check__7__cond;
    __Vtask_tb_weight_fifo__DOT__check__7__cond = 0;
    std::string __Vtask_tb_weight_fifo__DOT__check__8__name;
    CData/*0:0*/ __Vtask_tb_weight_fifo__DOT__check__8__cond;
    __Vtask_tb_weight_fifo__DOT__check__8__cond = 0;
    std::string __Vtask_tb_weight_fifo__DOT__check__9__name;
    CData/*0:0*/ __Vtask_tb_weight_fifo__DOT__check__9__cond;
    __Vtask_tb_weight_fifo__DOT__check__9__cond = 0;
    std::string __Vtask_tb_weight_fifo__DOT__check__10__name;
    CData/*0:0*/ __Vtask_tb_weight_fifo__DOT__check__10__cond;
    __Vtask_tb_weight_fifo__DOT__check__10__cond = 0;
    std::string __Vtask_tb_weight_fifo__DOT__check__11__name;
    CData/*0:0*/ __Vtask_tb_weight_fifo__DOT__check__11__cond;
    __Vtask_tb_weight_fifo__DOT__check__11__cond = 0;
    std::string __Vtask_tb_weight_fifo__DOT__check__12__name;
    CData/*0:0*/ __Vtask_tb_weight_fifo__DOT__check__12__cond;
    __Vtask_tb_weight_fifo__DOT__check__12__cond = 0;
    std::string __Vtask_tb_weight_fifo__DOT__check__13__name;
    CData/*0:0*/ __Vtask_tb_weight_fifo__DOT__check__13__cond;
    __Vtask_tb_weight_fifo__DOT__check__13__cond = 0;
    std::string __Vtask_tb_weight_fifo__DOT__check__14__name;
    CData/*0:0*/ __Vtask_tb_weight_fifo__DOT__check__14__cond;
    __Vtask_tb_weight_fifo__DOT__check__14__cond = 0;
    std::string __Vtask_tb_weight_fifo__DOT__check__15__name;
    CData/*0:0*/ __Vtask_tb_weight_fifo__DOT__check__15__cond;
    __Vtask_tb_weight_fifo__DOT__check__15__cond = 0;
    std::string __Vtask_tb_weight_fifo__DOT__check__16__name;
    CData/*0:0*/ __Vtask_tb_weight_fifo__DOT__check__16__cond;
    __Vtask_tb_weight_fifo__DOT__check__16__cond = 0;
    std::string __Vtask_tb_weight_fifo__DOT__check__17__name;
    CData/*0:0*/ __Vtask_tb_weight_fifo__DOT__check__17__cond;
    __Vtask_tb_weight_fifo__DOT__check__17__cond = 0;
    std::string __Vtask_tb_weight_fifo__DOT__check__18__name;
    CData/*0:0*/ __Vtask_tb_weight_fifo__DOT__check__18__cond;
    __Vtask_tb_weight_fifo__DOT__check__18__cond = 0;
    std::string __Vtask_tb_weight_fifo__DOT__check__19__name;
    CData/*0:0*/ __Vtask_tb_weight_fifo__DOT__check__19__cond;
    __Vtask_tb_weight_fifo__DOT__check__19__cond = 0;
    // Body
    VL_WRITEF("==== FIFO submodule ====\n");
    vlSelf->tb_weight_fifo__DOT__reset_n = 0U;
    vlSelf->tb_weight_fifo__DOT__we = 0U;
    vlSelf->tb_weight_fifo__DOT__re = 0U;
    vlSelf->tb_weight_fifo__DOT__data_in[0U] = 0U;
    vlSelf->tb_weight_fifo__DOT__data_in[1U] = 0U;
    vlSelf->tb_weight_fifo__DOT__data_in[2U] = 0U;
    co_await vlSelf->__VtrigSched_h5107d62b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_weight_fifo.clk)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       52);
    co_await vlSelf->__VtrigSched_h5107d62b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_weight_fifo.clk)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       52);
    vlSelf->tb_weight_fifo__DOT__reset_n = 1U;
    co_await vlSelf->__VtrigSched_h5107d62b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_weight_fifo.clk)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       54);
    __Vtask_tb_weight_fifo__DOT__check__1__cond = (0U 
                                                   == (IData)(vlSelf->tb_weight_fifo__DOT__dut_fifo__DOT__count));
    __Vtask_tb_weight_fifo__DOT__check__1__name = std::string{"after reset: empty asserted"};
    vlSelf->tb_weight_fifo__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_weight_fifo__DOT__checks);
    if (__Vtask_tb_weight_fifo__DOT__check__1__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__check__1__name));
    } else {
        vlSelf->tb_weight_fifo__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_weight_fifo__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__check__1__name));
    }
    __Vtask_tb_weight_fifo__DOT__check__2__cond = (4U 
                                                   != (IData)(vlSelf->tb_weight_fifo__DOT__dut_fifo__DOT__count));
    __Vtask_tb_weight_fifo__DOT__check__2__name = std::string{"after reset: full deasserted"};
    vlSelf->tb_weight_fifo__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_weight_fifo__DOT__checks);
    if (__Vtask_tb_weight_fifo__DOT__check__2__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__check__2__name));
    } else {
        vlSelf->tb_weight_fifo__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_weight_fifo__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__check__2__name));
    }
    vlSelf->tb_weight_fifo__DOT__wr_word[0U][0U] = 0xa0000000U;
    vlSelf->tb_weight_fifo__DOT__wr_word[0U][1U] = 0xb0000000U;
    vlSelf->tb_weight_fifo__DOT__wr_word[0U][2U] = 0xc0000000U;
    co_await vlSelf->__VtrigSched_h5107d6ee__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_weight_fifo.clk)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       73);
    vlSelf->tb_weight_fifo__DOT__we = 1U;
    vlSelf->tb_weight_fifo__DOT__data_in[0U] = vlSelf->tb_weight_fifo__DOT__wr_word
        [0U][0U];
    vlSelf->tb_weight_fifo__DOT__data_in[1U] = vlSelf->tb_weight_fifo__DOT__wr_word
        [0U][1U];
    vlSelf->tb_weight_fifo__DOT__data_in[2U] = vlSelf->tb_weight_fifo__DOT__wr_word
        [0U][2U];
    vlSelf->tb_weight_fifo__DOT__wr_word[1U][0U] = 0xa0000001U;
    vlSelf->tb_weight_fifo__DOT__wr_word[1U][1U] = 0xb0000001U;
    vlSelf->tb_weight_fifo__DOT__wr_word[1U][2U] = 0xc0000001U;
    co_await vlSelf->__VtrigSched_h5107d6ee__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_weight_fifo.clk)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       73);
    vlSelf->tb_weight_fifo__DOT__we = 1U;
    vlSelf->tb_weight_fifo__DOT__data_in[0U] = vlSelf->tb_weight_fifo__DOT__wr_word
        [1U][0U];
    vlSelf->tb_weight_fifo__DOT__data_in[1U] = vlSelf->tb_weight_fifo__DOT__wr_word
        [1U][1U];
    vlSelf->tb_weight_fifo__DOT__data_in[2U] = vlSelf->tb_weight_fifo__DOT__wr_word
        [1U][2U];
    vlSelf->tb_weight_fifo__DOT__wr_word[2U][0U] = 0xa0000002U;
    vlSelf->tb_weight_fifo__DOT__wr_word[2U][1U] = 0xb0000002U;
    vlSelf->tb_weight_fifo__DOT__wr_word[2U][2U] = 0xc0000002U;
    co_await vlSelf->__VtrigSched_h5107d6ee__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_weight_fifo.clk)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       73);
    vlSelf->tb_weight_fifo__DOT__we = 1U;
    vlSelf->tb_weight_fifo__DOT__data_in[0U] = vlSelf->tb_weight_fifo__DOT__wr_word
        [2U][0U];
    vlSelf->tb_weight_fifo__DOT__data_in[1U] = vlSelf->tb_weight_fifo__DOT__wr_word
        [2U][1U];
    vlSelf->tb_weight_fifo__DOT__data_in[2U] = vlSelf->tb_weight_fifo__DOT__wr_word
        [2U][2U];
    vlSelf->tb_weight_fifo__DOT__wr_word[3U][0U] = 0xa0000003U;
    vlSelf->tb_weight_fifo__DOT__wr_word[3U][1U] = 0xb0000003U;
    vlSelf->tb_weight_fifo__DOT__wr_word[3U][2U] = 0xc0000003U;
    co_await vlSelf->__VtrigSched_h5107d6ee__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_weight_fifo.clk)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       73);
    vlSelf->tb_weight_fifo__DOT__we = 1U;
    vlSelf->tb_weight_fifo__DOT__data_in[0U] = vlSelf->tb_weight_fifo__DOT__wr_word
        [3U][0U];
    vlSelf->tb_weight_fifo__DOT__data_in[1U] = vlSelf->tb_weight_fifo__DOT__wr_word
        [3U][1U];
    vlSelf->tb_weight_fifo__DOT__data_in[2U] = vlSelf->tb_weight_fifo__DOT__wr_word
        [3U][2U];
    co_await vlSelf->__VtrigSched_h5107d6ee__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_weight_fifo.clk)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       76);
    vlSelf->tb_weight_fifo__DOT__we = 0U;
    __Vtask_tb_weight_fifo__DOT__check__3__cond = (4U 
                                                   == (IData)(vlSelf->tb_weight_fifo__DOT__dut_fifo__DOT__count));
    __Vtask_tb_weight_fifo__DOT__check__3__name = std::string{"after 4 writes: full asserted"};
    vlSelf->tb_weight_fifo__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_weight_fifo__DOT__checks);
    if (__Vtask_tb_weight_fifo__DOT__check__3__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__check__3__name));
    } else {
        vlSelf->tb_weight_fifo__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_weight_fifo__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__check__3__name));
    }
    __Vtask_tb_weight_fifo__DOT__check__4__cond = (0U 
                                                   != (IData)(vlSelf->tb_weight_fifo__DOT__dut_fifo__DOT__count));
    __Vtask_tb_weight_fifo__DOT__check__4__name = std::string{"after 4 writes: not empty"};
    vlSelf->tb_weight_fifo__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_weight_fifo__DOT__checks);
    if (__Vtask_tb_weight_fifo__DOT__check__4__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__check__4__name));
    } else {
        vlSelf->tb_weight_fifo__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_weight_fifo__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__check__4__name));
    }
    co_await vlSelf->__VtrigSched_h5107d6ee__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_weight_fifo.clk)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       82);
    vlSelf->tb_weight_fifo__DOT__we = 1U;
    vlSelf->tb_weight_fifo__DOT__data_in[0U] = 0xdeadbeefU;
    co_await vlSelf->__VtrigSched_h5107d6ee__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_weight_fifo.clk)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       84);
    vlSelf->tb_weight_fifo__DOT__we = 0U;
    __Vtask_tb_weight_fifo__DOT__check__5__cond = (4U 
                                                   == (IData)(vlSelf->tb_weight_fifo__DOT__dut_fifo__DOT__count));
    __Vtask_tb_weight_fifo__DOT__check__5__name = std::string{"write while full is a no-op (still full)"};
    vlSelf->tb_weight_fifo__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_weight_fifo__DOT__checks);
    if (__Vtask_tb_weight_fifo__DOT__check__5__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__check__5__name));
    } else {
        vlSelf->tb_weight_fifo__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_weight_fifo__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__check__5__name));
    }
    co_await vlSelf->__VtrigSched_h5107d6ee__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_weight_fifo.clk)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       90);
    vlSelf->tb_weight_fifo__DOT__re = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_weight_fifo.sv", 
                                       92);
    __Vtask_tb_weight_fifo__DOT__check__6__cond = (0U 
                                                   == 
                                                   (((vlSelf->tb_weight_fifo__DOT__data_out[0U] 
                                                      ^ 
                                                      vlSelf->tb_weight_fifo__DOT__wr_word
                                                      [0U][0U]) 
                                                     | (vlSelf->tb_weight_fifo__DOT__data_out[1U] 
                                                        ^ 
                                                        vlSelf->tb_weight_fifo__DOT__wr_word
                                                        [0U][1U])) 
                                                    | (vlSelf->tb_weight_fifo__DOT__data_out[2U] 
                                                       ^ 
                                                       vlSelf->tb_weight_fifo__DOT__wr_word
                                                       [0U][2U])));
    __Vtask_tb_weight_fifo__DOT__check__6__name = std::string{"pop 0 returns row written 0st"};
    vlSelf->tb_weight_fifo__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_weight_fifo__DOT__checks);
    if (__Vtask_tb_weight_fifo__DOT__check__6__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__check__6__name));
    } else {
        vlSelf->tb_weight_fifo__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_weight_fifo__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__check__6__name));
    }
    co_await vlSelf->__VtrigSched_h5107d6ee__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_weight_fifo.clk)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       90);
    vlSelf->tb_weight_fifo__DOT__re = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_weight_fifo.sv", 
                                       92);
    __Vtask_tb_weight_fifo__DOT__check__6__cond = (0U 
                                                   == 
                                                   (((vlSelf->tb_weight_fifo__DOT__data_out[0U] 
                                                      ^ 
                                                      vlSelf->tb_weight_fifo__DOT__wr_word
                                                      [1U][0U]) 
                                                     | (vlSelf->tb_weight_fifo__DOT__data_out[1U] 
                                                        ^ 
                                                        vlSelf->tb_weight_fifo__DOT__wr_word
                                                        [1U][1U])) 
                                                    | (vlSelf->tb_weight_fifo__DOT__data_out[2U] 
                                                       ^ 
                                                       vlSelf->tb_weight_fifo__DOT__wr_word
                                                       [1U][2U])));
    __Vtask_tb_weight_fifo__DOT__check__6__name = std::string{"pop 1 returns row written 1st"};
    vlSelf->tb_weight_fifo__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_weight_fifo__DOT__checks);
    if (__Vtask_tb_weight_fifo__DOT__check__6__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__check__6__name));
    } else {
        vlSelf->tb_weight_fifo__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_weight_fifo__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__check__6__name));
    }
    co_await vlSelf->__VtrigSched_h5107d6ee__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_weight_fifo.clk)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       90);
    vlSelf->tb_weight_fifo__DOT__re = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_weight_fifo.sv", 
                                       92);
    __Vtask_tb_weight_fifo__DOT__check__6__cond = (0U 
                                                   == 
                                                   (((vlSelf->tb_weight_fifo__DOT__data_out[0U] 
                                                      ^ 
                                                      vlSelf->tb_weight_fifo__DOT__wr_word
                                                      [2U][0U]) 
                                                     | (vlSelf->tb_weight_fifo__DOT__data_out[1U] 
                                                        ^ 
                                                        vlSelf->tb_weight_fifo__DOT__wr_word
                                                        [2U][1U])) 
                                                    | (vlSelf->tb_weight_fifo__DOT__data_out[2U] 
                                                       ^ 
                                                       vlSelf->tb_weight_fifo__DOT__wr_word
                                                       [2U][2U])));
    __Vtask_tb_weight_fifo__DOT__check__6__name = std::string{"pop 2 returns row written 2st"};
    vlSelf->tb_weight_fifo__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_weight_fifo__DOT__checks);
    if (__Vtask_tb_weight_fifo__DOT__check__6__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__check__6__name));
    } else {
        vlSelf->tb_weight_fifo__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_weight_fifo__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__check__6__name));
    }
    co_await vlSelf->__VtrigSched_h5107d6ee__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_weight_fifo.clk)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       90);
    vlSelf->tb_weight_fifo__DOT__re = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_weight_fifo.sv", 
                                       92);
    __Vtask_tb_weight_fifo__DOT__check__6__cond = (0U 
                                                   == 
                                                   (((vlSelf->tb_weight_fifo__DOT__data_out[0U] 
                                                      ^ 
                                                      vlSelf->tb_weight_fifo__DOT__wr_word
                                                      [3U][0U]) 
                                                     | (vlSelf->tb_weight_fifo__DOT__data_out[1U] 
                                                        ^ 
                                                        vlSelf->tb_weight_fifo__DOT__wr_word
                                                        [3U][1U])) 
                                                    | (vlSelf->tb_weight_fifo__DOT__data_out[2U] 
                                                       ^ 
                                                       vlSelf->tb_weight_fifo__DOT__wr_word
                                                       [3U][2U])));
    __Vtask_tb_weight_fifo__DOT__check__6__name = std::string{"pop 3 returns row written 3st"};
    vlSelf->tb_weight_fifo__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_weight_fifo__DOT__checks);
    if (__Vtask_tb_weight_fifo__DOT__check__6__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__check__6__name));
    } else {
        vlSelf->tb_weight_fifo__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_weight_fifo__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__check__6__name));
    }
    co_await vlSelf->__VtrigSched_h5107d6ee__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_weight_fifo.clk)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       96);
    vlSelf->tb_weight_fifo__DOT__re = 0U;
    __Vtask_tb_weight_fifo__DOT__check__7__cond = (0U 
                                                   == (IData)(vlSelf->tb_weight_fifo__DOT__dut_fifo__DOT__count));
    __Vtask_tb_weight_fifo__DOT__check__7__name = std::string{"after draining 4 entries: empty asserted"};
    vlSelf->tb_weight_fifo__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_weight_fifo__DOT__checks);
    if (__Vtask_tb_weight_fifo__DOT__check__7__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__check__7__name));
    } else {
        vlSelf->tb_weight_fifo__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_weight_fifo__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__check__7__name));
    }
    co_await vlSelf->__VtrigSched_h5107d6ee__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_weight_fifo.clk)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       102);
    vlSelf->tb_weight_fifo__DOT__re = 1U;
    co_await vlSelf->__VtrigSched_h5107d6ee__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_weight_fifo.clk)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       104);
    co_await vlSelf->__VtrigSched_h5107d6ee__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_weight_fifo.clk)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       105);
    vlSelf->tb_weight_fifo__DOT__re = 0U;
    __Vtask_tb_weight_fifo__DOT__check__8__cond = (0U 
                                                   == (IData)(vlSelf->tb_weight_fifo__DOT__dut_fifo__DOT__count));
    __Vtask_tb_weight_fifo__DOT__check__8__name = std::string{"read while empty is a no-op: still empty"};
    vlSelf->tb_weight_fifo__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_weight_fifo__DOT__checks);
    if (__Vtask_tb_weight_fifo__DOT__check__8__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__check__8__name));
    } else {
        vlSelf->tb_weight_fifo__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_weight_fifo__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__check__8__name));
    }
    __Vtask_tb_weight_fifo__DOT__check__9__cond = (4U 
                                                   != (IData)(vlSelf->tb_weight_fifo__DOT__dut_fifo__DOT__count));
    __Vtask_tb_weight_fifo__DOT__check__9__name = std::string{"read while empty is a no-op: not full"};
    vlSelf->tb_weight_fifo__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_weight_fifo__DOT__checks);
    if (__Vtask_tb_weight_fifo__DOT__check__9__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__check__9__name));
    } else {
        vlSelf->tb_weight_fifo__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_weight_fifo__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__check__9__name));
    }
    co_await vlSelf->__VtrigSched_h5107d6ee__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_weight_fifo.clk)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       112);
    vlSelf->tb_weight_fifo__DOT__we = 1U;
    vlSelf->tb_weight_fifo__DOT__re = 1U;
    vlSelf->tb_weight_fifo__DOT__data_in[0U] = vlSelf->tb_weight_fifo__DOT__wr_word
        [2U][0U];
    vlSelf->tb_weight_fifo__DOT__data_in[1U] = vlSelf->tb_weight_fifo__DOT__wr_word
        [2U][1U];
    vlSelf->tb_weight_fifo__DOT__data_in[2U] = vlSelf->tb_weight_fifo__DOT__wr_word
        [2U][2U];
    co_await vlSelf->__VtrigSched_h5107d6ee__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_weight_fifo.clk)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       114);
    vlSelf->tb_weight_fifo__DOT__we = 0U;
    vlSelf->tb_weight_fifo__DOT__re = 0U;
    __Vtask_tb_weight_fifo__DOT__check__10__cond = 
        ((0U != (IData)(vlSelf->tb_weight_fifo__DOT__dut_fifo__DOT__count)) 
         & (4U != (IData)(vlSelf->tb_weight_fifo__DOT__dut_fifo__DOT__count)));
    __Vtask_tb_weight_fifo__DOT__check__10__name = 
        std::string{"we&&re while empty performs a plain write, not a no-op"};
    vlSelf->tb_weight_fifo__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_weight_fifo__DOT__checks);
    if (__Vtask_tb_weight_fifo__DOT__check__10__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__check__10__name));
    } else {
        vlSelf->tb_weight_fifo__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_weight_fifo__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__check__10__name));
    }
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_weight_fifo.sv", 
                                       117);
    __Vtask_tb_weight_fifo__DOT__check__11__cond = 
        (0U == (((vlSelf->tb_weight_fifo__DOT__data_out[0U] 
                  ^ vlSelf->tb_weight_fifo__DOT__wr_word
                  [2U][0U]) | (vlSelf->tb_weight_fifo__DOT__data_out[1U] 
                               ^ vlSelf->tb_weight_fifo__DOT__wr_word
                               [2U][1U])) | (vlSelf->tb_weight_fifo__DOT__data_out[2U] 
                                             ^ vlSelf->tb_weight_fifo__DOT__wr_word
                                             [2U][2U])));
    __Vtask_tb_weight_fifo__DOT__check__11__name = 
        std::string{"we&&re-while-empty write is readable back correctly"};
    vlSelf->tb_weight_fifo__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_weight_fifo__DOT__checks);
    if (__Vtask_tb_weight_fifo__DOT__check__11__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__check__11__name));
    } else {
        vlSelf->tb_weight_fifo__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_weight_fifo__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__check__11__name));
    }
    co_await vlSelf->__VtrigSched_h5107d6ee__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_weight_fifo.clk)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       120);
    vlSelf->tb_weight_fifo__DOT__re = 1U;
    co_await vlSelf->__VtrigSched_h5107d6ee__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_weight_fifo.clk)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       122);
    vlSelf->tb_weight_fifo__DOT__re = 0U;
    __Vtask_tb_weight_fifo__DOT__check__12__cond = 
        (0U == (IData)(vlSelf->tb_weight_fifo__DOT__dut_fifo__DOT__count));
    __Vtask_tb_weight_fifo__DOT__check__12__name = 
        std::string{"after draining the we&&re-while-empty entry: empty again"};
    vlSelf->tb_weight_fifo__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_weight_fifo__DOT__checks);
    if (__Vtask_tb_weight_fifo__DOT__check__12__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__check__12__name));
    } else {
        vlSelf->tb_weight_fifo__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_weight_fifo__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__check__12__name));
    }
    co_await vlSelf->__VtrigSched_h5107d6ee__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_weight_fifo.clk)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       127);
    vlSelf->tb_weight_fifo__DOT__we = 1U;
    vlSelf->tb_weight_fifo__DOT__data_in[0U] = vlSelf->tb_weight_fifo__DOT__wr_word
        [0U][0U];
    vlSelf->tb_weight_fifo__DOT__data_in[1U] = vlSelf->tb_weight_fifo__DOT__wr_word
        [0U][1U];
    vlSelf->tb_weight_fifo__DOT__data_in[2U] = vlSelf->tb_weight_fifo__DOT__wr_word
        [0U][2U];
    co_await vlSelf->__VtrigSched_h5107d6ee__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_weight_fifo.clk)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       129);
    vlSelf->tb_weight_fifo__DOT__we = 0U;
    __Vtask_tb_weight_fifo__DOT__check__13__cond = 
        ((0U != (IData)(vlSelf->tb_weight_fifo__DOT__dut_fifo__DOT__count)) 
         & (4U != (IData)(vlSelf->tb_weight_fifo__DOT__dut_fifo__DOT__count)));
    __Vtask_tb_weight_fifo__DOT__check__13__name = 
        std::string{"single write leaves fifo non-empty, non-full"};
    vlSelf->tb_weight_fifo__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_weight_fifo__DOT__checks);
    if (__Vtask_tb_weight_fifo__DOT__check__13__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__check__13__name));
    } else {
        vlSelf->tb_weight_fifo__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_weight_fifo__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__check__13__name));
    }
    co_await vlSelf->__VtrigSched_h5107d6ee__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_weight_fifo.clk)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       133);
    vlSelf->tb_weight_fifo__DOT__we = 1U;
    vlSelf->tb_weight_fifo__DOT__re = 1U;
    vlSelf->tb_weight_fifo__DOT__data_in[0U] = vlSelf->tb_weight_fifo__DOT__wr_word
        [1U][0U];
    vlSelf->tb_weight_fifo__DOT__data_in[1U] = vlSelf->tb_weight_fifo__DOT__wr_word
        [1U][1U];
    vlSelf->tb_weight_fifo__DOT__data_in[2U] = vlSelf->tb_weight_fifo__DOT__wr_word
        [1U][2U];
    co_await vlSelf->__VtrigSched_h5107d6ee__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_weight_fifo.clk)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       135);
    vlSelf->tb_weight_fifo__DOT__we = 0U;
    vlSelf->tb_weight_fifo__DOT__re = 0U;
    __Vtask_tb_weight_fifo__DOT__check__14__cond = 
        ((0U != (IData)(vlSelf->tb_weight_fifo__DOT__dut_fifo__DOT__count)) 
         & (4U != (IData)(vlSelf->tb_weight_fifo__DOT__dut_fifo__DOT__count)));
    __Vtask_tb_weight_fifo__DOT__check__14__name = 
        std::string{"simultaneous we&&re: fifo neither grows nor shrinks (still non-empty/non-full)"};
    vlSelf->tb_weight_fifo__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_weight_fifo__DOT__checks);
    if (__Vtask_tb_weight_fifo__DOT__check__14__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__check__14__name));
    } else {
        vlSelf->tb_weight_fifo__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_weight_fifo__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__check__14__name));
    }
    co_await vlSelf->__VtrigSched_h5107d6ee__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_weight_fifo.clk)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       145);
    vlSelf->tb_weight_fifo__DOT__re = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_weight_fifo.sv", 
                                       147);
    __Vtask_tb_weight_fifo__DOT__check__15__cond = 
        (0U == (((vlSelf->tb_weight_fifo__DOT__data_out[0U] 
                  ^ vlSelf->tb_weight_fifo__DOT__wr_word
                  [1U][0U]) | (vlSelf->tb_weight_fifo__DOT__data_out[1U] 
                               ^ vlSelf->tb_weight_fifo__DOT__wr_word
                               [1U][1U])) | (vlSelf->tb_weight_fifo__DOT__data_out[2U] 
                                             ^ vlSelf->tb_weight_fifo__DOT__wr_word
                                             [1U][2U])));
    __Vtask_tb_weight_fifo__DOT__check__15__name = 
        std::string{"NOTE: we&&re evicted the old front - draining now returns wr_word[1], not wr_word[0]"};
    vlSelf->tb_weight_fifo__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_weight_fifo__DOT__checks);
    if (__Vtask_tb_weight_fifo__DOT__check__15__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__check__15__name));
    } else {
        vlSelf->tb_weight_fifo__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_weight_fifo__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__check__15__name));
    }
    co_await vlSelf->__VtrigSched_h5107d6ee__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_weight_fifo.clk)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       150);
    vlSelf->tb_weight_fifo__DOT__re = 0U;
    __Vtask_tb_weight_fifo__DOT__check__16__cond = 
        (0U == (IData)(vlSelf->tb_weight_fifo__DOT__dut_fifo__DOT__count));
    __Vtask_tb_weight_fifo__DOT__check__16__name = 
        std::string{"after draining that entry: fifo empty again"};
    vlSelf->tb_weight_fifo__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_weight_fifo__DOT__checks);
    if (__Vtask_tb_weight_fifo__DOT__check__16__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__check__16__name));
    } else {
        vlSelf->tb_weight_fifo__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_weight_fifo__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__check__16__name));
    }
    vlSelf->tb_weight_fifo__DOT__wr_word[0U][0U] = 0xd0000000U;
    vlSelf->tb_weight_fifo__DOT__wr_word[0U][1U] = 0xe0000000U;
    vlSelf->tb_weight_fifo__DOT__wr_word[0U][2U] = 0xf0000000U;
    co_await vlSelf->__VtrigSched_h5107d6ee__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_weight_fifo.clk)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       162);
    vlSelf->tb_weight_fifo__DOT__we = 1U;
    vlSelf->tb_weight_fifo__DOT__data_in[0U] = vlSelf->tb_weight_fifo__DOT__wr_word
        [0U][0U];
    vlSelf->tb_weight_fifo__DOT__data_in[1U] = vlSelf->tb_weight_fifo__DOT__wr_word
        [0U][1U];
    vlSelf->tb_weight_fifo__DOT__data_in[2U] = vlSelf->tb_weight_fifo__DOT__wr_word
        [0U][2U];
    vlSelf->tb_weight_fifo__DOT__wr_word[1U][0U] = 0xd0000001U;
    vlSelf->tb_weight_fifo__DOT__wr_word[1U][1U] = 0xe0000001U;
    vlSelf->tb_weight_fifo__DOT__wr_word[1U][2U] = 0xf0000001U;
    co_await vlSelf->__VtrigSched_h5107d6ee__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_weight_fifo.clk)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       162);
    vlSelf->tb_weight_fifo__DOT__we = 1U;
    vlSelf->tb_weight_fifo__DOT__data_in[0U] = vlSelf->tb_weight_fifo__DOT__wr_word
        [1U][0U];
    vlSelf->tb_weight_fifo__DOT__data_in[1U] = vlSelf->tb_weight_fifo__DOT__wr_word
        [1U][1U];
    vlSelf->tb_weight_fifo__DOT__data_in[2U] = vlSelf->tb_weight_fifo__DOT__wr_word
        [1U][2U];
    vlSelf->tb_weight_fifo__DOT__wr_word[2U][0U] = 0xd0000002U;
    vlSelf->tb_weight_fifo__DOT__wr_word[2U][1U] = 0xe0000002U;
    vlSelf->tb_weight_fifo__DOT__wr_word[2U][2U] = 0xf0000002U;
    co_await vlSelf->__VtrigSched_h5107d6ee__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_weight_fifo.clk)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       162);
    vlSelf->tb_weight_fifo__DOT__we = 1U;
    vlSelf->tb_weight_fifo__DOT__data_in[0U] = vlSelf->tb_weight_fifo__DOT__wr_word
        [2U][0U];
    vlSelf->tb_weight_fifo__DOT__data_in[1U] = vlSelf->tb_weight_fifo__DOT__wr_word
        [2U][1U];
    vlSelf->tb_weight_fifo__DOT__data_in[2U] = vlSelf->tb_weight_fifo__DOT__wr_word
        [2U][2U];
    vlSelf->tb_weight_fifo__DOT__wr_word[3U][0U] = 0xd0000003U;
    vlSelf->tb_weight_fifo__DOT__wr_word[3U][1U] = 0xe0000003U;
    vlSelf->tb_weight_fifo__DOT__wr_word[3U][2U] = 0xf0000003U;
    co_await vlSelf->__VtrigSched_h5107d6ee__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_weight_fifo.clk)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       162);
    vlSelf->tb_weight_fifo__DOT__we = 1U;
    vlSelf->tb_weight_fifo__DOT__data_in[0U] = vlSelf->tb_weight_fifo__DOT__wr_word
        [3U][0U];
    vlSelf->tb_weight_fifo__DOT__data_in[1U] = vlSelf->tb_weight_fifo__DOT__wr_word
        [3U][1U];
    vlSelf->tb_weight_fifo__DOT__data_in[2U] = vlSelf->tb_weight_fifo__DOT__wr_word
        [3U][2U];
    co_await vlSelf->__VtrigSched_h5107d6ee__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_weight_fifo.clk)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       165);
    vlSelf->tb_weight_fifo__DOT__we = 0U;
    __Vtask_tb_weight_fifo__DOT__check__17__cond = 
        (4U == (IData)(vlSelf->tb_weight_fifo__DOT__dut_fifo__DOT__count));
    __Vtask_tb_weight_fifo__DOT__check__17__name = 
        std::string{"second fill pass: full asserted"};
    vlSelf->tb_weight_fifo__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_weight_fifo__DOT__checks);
    if (__Vtask_tb_weight_fifo__DOT__check__17__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__check__17__name));
    } else {
        vlSelf->tb_weight_fifo__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_weight_fifo__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__check__17__name));
    }
    co_await vlSelf->__VtrigSched_h5107d6ee__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_weight_fifo.clk)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       170);
    vlSelf->tb_weight_fifo__DOT__re = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_weight_fifo.sv", 
                                       172);
    __Vtask_tb_weight_fifo__DOT__check__18__cond = 
        (0U == (((vlSelf->tb_weight_fifo__DOT__data_out[0U] 
                  ^ vlSelf->tb_weight_fifo__DOT__wr_word
                  [0U][0U]) | (vlSelf->tb_weight_fifo__DOT__data_out[1U] 
                               ^ vlSelf->tb_weight_fifo__DOT__wr_word
                               [0U][1U])) | (vlSelf->tb_weight_fifo__DOT__data_out[2U] 
                                             ^ vlSelf->tb_weight_fifo__DOT__wr_word
                                             [0U][2U])));
    __Vtask_tb_weight_fifo__DOT__check__18__name = 
        std::string{"second pass pop 0 returns row written 0st (pointer wraparound holds)"};
    vlSelf->tb_weight_fifo__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_weight_fifo__DOT__checks);
    if (__Vtask_tb_weight_fifo__DOT__check__18__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__check__18__name));
    } else {
        vlSelf->tb_weight_fifo__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_weight_fifo__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__check__18__name));
    }
    co_await vlSelf->__VtrigSched_h5107d6ee__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_weight_fifo.clk)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       170);
    vlSelf->tb_weight_fifo__DOT__re = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_weight_fifo.sv", 
                                       172);
    __Vtask_tb_weight_fifo__DOT__check__18__cond = 
        (0U == (((vlSelf->tb_weight_fifo__DOT__data_out[0U] 
                  ^ vlSelf->tb_weight_fifo__DOT__wr_word
                  [1U][0U]) | (vlSelf->tb_weight_fifo__DOT__data_out[1U] 
                               ^ vlSelf->tb_weight_fifo__DOT__wr_word
                               [1U][1U])) | (vlSelf->tb_weight_fifo__DOT__data_out[2U] 
                                             ^ vlSelf->tb_weight_fifo__DOT__wr_word
                                             [1U][2U])));
    __Vtask_tb_weight_fifo__DOT__check__18__name = 
        std::string{"second pass pop 1 returns row written 1st (pointer wraparound holds)"};
    vlSelf->tb_weight_fifo__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_weight_fifo__DOT__checks);
    if (__Vtask_tb_weight_fifo__DOT__check__18__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__check__18__name));
    } else {
        vlSelf->tb_weight_fifo__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_weight_fifo__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__check__18__name));
    }
    co_await vlSelf->__VtrigSched_h5107d6ee__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_weight_fifo.clk)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       170);
    vlSelf->tb_weight_fifo__DOT__re = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_weight_fifo.sv", 
                                       172);
    __Vtask_tb_weight_fifo__DOT__check__18__cond = 
        (0U == (((vlSelf->tb_weight_fifo__DOT__data_out[0U] 
                  ^ vlSelf->tb_weight_fifo__DOT__wr_word
                  [2U][0U]) | (vlSelf->tb_weight_fifo__DOT__data_out[1U] 
                               ^ vlSelf->tb_weight_fifo__DOT__wr_word
                               [2U][1U])) | (vlSelf->tb_weight_fifo__DOT__data_out[2U] 
                                             ^ vlSelf->tb_weight_fifo__DOT__wr_word
                                             [2U][2U])));
    __Vtask_tb_weight_fifo__DOT__check__18__name = 
        std::string{"second pass pop 2 returns row written 2st (pointer wraparound holds)"};
    vlSelf->tb_weight_fifo__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_weight_fifo__DOT__checks);
    if (__Vtask_tb_weight_fifo__DOT__check__18__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__check__18__name));
    } else {
        vlSelf->tb_weight_fifo__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_weight_fifo__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__check__18__name));
    }
    co_await vlSelf->__VtrigSched_h5107d6ee__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_weight_fifo.clk)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       170);
    vlSelf->tb_weight_fifo__DOT__re = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_weight_fifo.sv", 
                                       172);
    __Vtask_tb_weight_fifo__DOT__check__18__cond = 
        (0U == (((vlSelf->tb_weight_fifo__DOT__data_out[0U] 
                  ^ vlSelf->tb_weight_fifo__DOT__wr_word
                  [3U][0U]) | (vlSelf->tb_weight_fifo__DOT__data_out[1U] 
                               ^ vlSelf->tb_weight_fifo__DOT__wr_word
                               [3U][1U])) | (vlSelf->tb_weight_fifo__DOT__data_out[2U] 
                                             ^ vlSelf->tb_weight_fifo__DOT__wr_word
                                             [3U][2U])));
    __Vtask_tb_weight_fifo__DOT__check__18__name = 
        std::string{"second pass pop 3 returns row written 3st (pointer wraparound holds)"};
    vlSelf->tb_weight_fifo__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_weight_fifo__DOT__checks);
    if (__Vtask_tb_weight_fifo__DOT__check__18__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__check__18__name));
    } else {
        vlSelf->tb_weight_fifo__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_weight_fifo__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__check__18__name));
    }
    co_await vlSelf->__VtrigSched_h5107d6ee__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_weight_fifo.clk)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       176);
    vlSelf->tb_weight_fifo__DOT__re = 0U;
    __Vtask_tb_weight_fifo__DOT__check__19__cond = 
        (0U == (IData)(vlSelf->tb_weight_fifo__DOT__dut_fifo__DOT__count));
    __Vtask_tb_weight_fifo__DOT__check__19__name = 
        std::string{"second pass: empty again after draining"};
    vlSelf->tb_weight_fifo__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_weight_fifo__DOT__checks);
    if (__Vtask_tb_weight_fifo__DOT__check__19__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__check__19__name));
    } else {
        vlSelf->tb_weight_fifo__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_weight_fifo__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__check__19__name));
    }
    VL_WRITEF("==== FIFO submodule done: %0d/%0d checks passed ====\n\n",
              32,(vlSelf->tb_weight_fifo__DOT__checks 
                  - vlSelf->tb_weight_fifo__DOT__errors),
              32,vlSelf->tb_weight_fifo__DOT__checks);
    vlSelf->tb_weight_fifo__DOT__fifo_test_done = 1U;
}

VL_INLINE_OPT VlCoroutine Vtb_weight_fifo___024root___eval_initial__TOP__Vtiming__1(Vtb_weight_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_weight_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_weight_fifo___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Init
    IData/*31:0*/ tb_weight_fifo__DOT__sent_word;
    tb_weight_fifo__DOT__sent_word = 0;
    std::string __Vtask_tb_weight_fifo__DOT__wcheck__20__name;
    CData/*0:0*/ __Vtask_tb_weight_fifo__DOT__wcheck__20__cond;
    __Vtask_tb_weight_fifo__DOT__wcheck__20__cond = 0;
    std::string __Vtask_tb_weight_fifo__DOT__wcheck__21__name;
    CData/*0:0*/ __Vtask_tb_weight_fifo__DOT__wcheck__21__cond;
    __Vtask_tb_weight_fifo__DOT__wcheck__21__cond = 0;
    std::string __Vtask_tb_weight_fifo__DOT__wcheck__22__name;
    CData/*0:0*/ __Vtask_tb_weight_fifo__DOT__wcheck__22__cond;
    __Vtask_tb_weight_fifo__DOT__wcheck__22__cond = 0;
    std::string __Vtask_tb_weight_fifo__DOT__wcheck__23__name;
    CData/*0:0*/ __Vtask_tb_weight_fifo__DOT__wcheck__23__cond;
    __Vtask_tb_weight_fifo__DOT__wcheck__23__cond = 0;
    std::string __Vtask_tb_weight_fifo__DOT__wcheck__24__name;
    CData/*0:0*/ __Vtask_tb_weight_fifo__DOT__wcheck__24__cond;
    __Vtask_tb_weight_fifo__DOT__wcheck__24__cond = 0;
    std::string __Vtask_tb_weight_fifo__DOT__wcheck__25__name;
    CData/*0:0*/ __Vtask_tb_weight_fifo__DOT__wcheck__25__cond;
    __Vtask_tb_weight_fifo__DOT__wcheck__25__cond = 0;
    std::string __Vtask_tb_weight_fifo__DOT__wcheck__26__name;
    CData/*0:0*/ __Vtask_tb_weight_fifo__DOT__wcheck__26__cond;
    __Vtask_tb_weight_fifo__DOT__wcheck__26__cond = 0;
    std::string __Vtask_tb_weight_fifo__DOT__wcheck__28__name;
    CData/*0:0*/ __Vtask_tb_weight_fifo__DOT__wcheck__28__cond;
    __Vtask_tb_weight_fifo__DOT__wcheck__28__cond = 0;
    std::string __Vtask_tb_weight_fifo__DOT__wcheck__29__name;
    CData/*0:0*/ __Vtask_tb_weight_fifo__DOT__wcheck__29__cond;
    __Vtask_tb_weight_fifo__DOT__wcheck__29__cond = 0;
    std::string __Vtask_tb_weight_fifo__DOT__wcheck__31__name;
    CData/*0:0*/ __Vtask_tb_weight_fifo__DOT__wcheck__31__cond;
    __Vtask_tb_weight_fifo__DOT__wcheck__31__cond = 0;
    std::string __Vtask_tb_weight_fifo__DOT__wcheck__32__name;
    CData/*0:0*/ __Vtask_tb_weight_fifo__DOT__wcheck__32__cond;
    __Vtask_tb_weight_fifo__DOT__wcheck__32__cond = 0;
    std::string __Vtask_tb_weight_fifo__DOT__wcheck__34__name;
    CData/*0:0*/ __Vtask_tb_weight_fifo__DOT__wcheck__34__cond;
    __Vtask_tb_weight_fifo__DOT__wcheck__34__cond = 0;
    std::string __Vtask_tb_weight_fifo__DOT__wcheck__35__name;
    CData/*0:0*/ __Vtask_tb_weight_fifo__DOT__wcheck__35__cond;
    __Vtask_tb_weight_fifo__DOT__wcheck__35__cond = 0;
    std::string __Vtask_tb_weight_fifo__DOT__wcheck__36__name;
    CData/*0:0*/ __Vtask_tb_weight_fifo__DOT__wcheck__36__cond;
    __Vtask_tb_weight_fifo__DOT__wcheck__36__cond = 0;
    std::string __Vtask_tb_weight_fifo__DOT__wcheck__37__name;
    CData/*0:0*/ __Vtask_tb_weight_fifo__DOT__wcheck__37__cond;
    __Vtask_tb_weight_fifo__DOT__wcheck__37__cond = 0;
    std::string __Vtask_tb_weight_fifo__DOT__wcheck__39__name;
    CData/*0:0*/ __Vtask_tb_weight_fifo__DOT__wcheck__39__cond;
    __Vtask_tb_weight_fifo__DOT__wcheck__39__cond = 0;
    std::string __Vtask_tb_weight_fifo__DOT__wcheck__40__name;
    CData/*0:0*/ __Vtask_tb_weight_fifo__DOT__wcheck__40__cond;
    __Vtask_tb_weight_fifo__DOT__wcheck__40__cond = 0;
    // Body
    co_await vlSelf->__VtrigSched_h5107d6ee__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_weight_fifo.clk)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       237);
    VL_WRITEF("\n==== weight_loader wrapper ====\n");
    vlSelf->tb_weight_fifo__DOT__rst_n2 = 0U;
    vlSelf->tb_weight_fifo__DOT__start_load_fifo_state = 0U;
    vlSelf->tb_weight_fifo__DOT__load_fifo_state = 0U;
    vlSelf->tb_weight_fifo__DOT__preload_state = 0U;
    vlSelf->tb_weight_fifo__DOT__tiles_complete = 0U;
    vlSelf->tb_weight_fifo__DOT__read_data_valid = 0U;
    vlSelf->tb_weight_fifo__DOT__read_data = 0U;
    co_await vlSelf->__VtrigSched_hb5160297__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_weight_fifo.clk2)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       241);
    co_await vlSelf->__VtrigSched_hb5160297__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_weight_fifo.clk2)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       241);
    vlSelf->tb_weight_fifo__DOT__rst_n2 = 1U;
    co_await vlSelf->__VtrigSched_hb5160297__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_weight_fifo.clk2)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       243);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_weight_fifo.sv", 
                                       244);
    __Vtask_tb_weight_fifo__DOT__wcheck__20__cond = 
        (0U == (IData)(vlSelf->tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__count));
    __Vtask_tb_weight_fifo__DOT__wcheck__20__name = 
        std::string{"idle: fifo_empty asserted"};
    vlSelf->tb_weight_fifo__DOT__wl_checks = ((IData)(1U) 
                                              + vlSelf->tb_weight_fifo__DOT__wl_checks);
    if (__Vtask_tb_weight_fifo__DOT__wcheck__20__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__wcheck__20__name));
    } else {
        vlSelf->tb_weight_fifo__DOT__wl_errors = ((IData)(1U) 
                                                  + vlSelf->tb_weight_fifo__DOT__wl_errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__wcheck__20__name));
    }
    tb_weight_fifo__DOT__sent_word = 0xddccbbaaU;
    vlSelf->tb_weight_fifo__DOT__start_load_fifo_state = 1U;
    co_await vlSelf->__VtrigSched_hb5160297__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_weight_fifo.clk2)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       256);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_weight_fifo.sv", 
                                       256);
    vlSelf->tb_weight_fifo__DOT__start_load_fifo_state = 0U;
    vlSelf->tb_weight_fifo__DOT__load_fifo_state = 1U;
    vlSelf->tb_weight_fifo__DOT__read_data = tb_weight_fifo__DOT__sent_word;
    vlSelf->tb_weight_fifo__DOT__read_data_valid = 1U;
    co_await vlSelf->__VtrigSched_hb5160297__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_weight_fifo.clk2)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       261);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_weight_fifo.sv", 
                                       261);
    vlSelf->tb_weight_fifo__DOT__read_data_valid = 0U;
    vlSelf->tb_weight_fifo__DOT__load_fifo_state = 0U;
    co_await vlSelf->__VtrigSched_hb5160297__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_weight_fifo.clk2)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       264);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_weight_fifo.sv", 
                                       264);
    vlSelf->tb_weight_fifo__DOT__preload_state = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_weight_fifo.sv", 
                                       272);
    __Vtask_tb_weight_fifo__DOT__wcheck__21__cond = vlSelf->tb_weight_fifo__DOT__data_valid;
    __Vtask_tb_weight_fifo__DOT__wcheck__21__name = 
        std::string{"first preload pulse returns the real row (no more garbage row ahead of it)"};
    vlSelf->tb_weight_fifo__DOT__wl_checks = ((IData)(1U) 
                                              + vlSelf->tb_weight_fifo__DOT__wl_checks);
    if (__Vtask_tb_weight_fifo__DOT__wcheck__21__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__wcheck__21__name));
    } else {
        vlSelf->tb_weight_fifo__DOT__wl_errors = ((IData)(1U) 
                                                  + vlSelf->tb_weight_fifo__DOT__wl_errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__wcheck__21__name));
    }
    __Vtask_tb_weight_fifo__DOT__wcheck__22__cond = 
        ((0xffU & vlSelf->tb_weight_fifo__DOT__wl_data_out) 
         == (0xffU & tb_weight_fifo__DOT__sent_word));
    __Vtask_tb_weight_fifo__DOT__wcheck__22__name = 
        std::string{"row 0 round-trips correctly"};
    vlSelf->tb_weight_fifo__DOT__wl_checks = ((IData)(1U) 
                                              + vlSelf->tb_weight_fifo__DOT__wl_checks);
    if (__Vtask_tb_weight_fifo__DOT__wcheck__22__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__wcheck__22__name));
    } else {
        vlSelf->tb_weight_fifo__DOT__wl_errors = ((IData)(1U) 
                                                  + vlSelf->tb_weight_fifo__DOT__wl_errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__wcheck__22__name));
    }
    __Vtask_tb_weight_fifo__DOT__wcheck__23__cond = 
        ((0xffU & (vlSelf->tb_weight_fifo__DOT__wl_data_out 
                   >> 8U)) == (0xffU & (tb_weight_fifo__DOT__sent_word 
                                        >> 8U)));
    __Vtask_tb_weight_fifo__DOT__wcheck__23__name = 
        std::string{"row 1 round-trips correctly"};
    vlSelf->tb_weight_fifo__DOT__wl_checks = ((IData)(1U) 
                                              + vlSelf->tb_weight_fifo__DOT__wl_checks);
    if (__Vtask_tb_weight_fifo__DOT__wcheck__23__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__wcheck__23__name));
    } else {
        vlSelf->tb_weight_fifo__DOT__wl_errors = ((IData)(1U) 
                                                  + vlSelf->tb_weight_fifo__DOT__wl_errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__wcheck__23__name));
    }
    __Vtask_tb_weight_fifo__DOT__wcheck__24__cond = 
        ((0xffU & (vlSelf->tb_weight_fifo__DOT__wl_data_out 
                   >> 0x10U)) == (0xffU & (tb_weight_fifo__DOT__sent_word 
                                           >> 0x10U)));
    __Vtask_tb_weight_fifo__DOT__wcheck__24__name = 
        std::string{"row 2 round-trips correctly"};
    vlSelf->tb_weight_fifo__DOT__wl_checks = ((IData)(1U) 
                                              + vlSelf->tb_weight_fifo__DOT__wl_checks);
    if (__Vtask_tb_weight_fifo__DOT__wcheck__24__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__wcheck__24__name));
    } else {
        vlSelf->tb_weight_fifo__DOT__wl_errors = ((IData)(1U) 
                                                  + vlSelf->tb_weight_fifo__DOT__wl_errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__wcheck__24__name));
    }
    __Vtask_tb_weight_fifo__DOT__wcheck__25__cond = 
        ((vlSelf->tb_weight_fifo__DOT__wl_data_out 
          >> 0x18U) == (tb_weight_fifo__DOT__sent_word 
                        >> 0x18U));
    __Vtask_tb_weight_fifo__DOT__wcheck__25__name = 
        std::string{"row 3 round-trips correctly (weight_loader declares ROW_SIZE=4 but never overrides the internal FIFO instance's ROW_SIZE, which still defaults to 3)"};
    vlSelf->tb_weight_fifo__DOT__wl_checks = ((IData)(1U) 
                                              + vlSelf->tb_weight_fifo__DOT__wl_checks);
    if (__Vtask_tb_weight_fifo__DOT__wcheck__25__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__wcheck__25__name));
    } else {
        vlSelf->tb_weight_fifo__DOT__wl_errors = ((IData)(1U) 
                                                  + vlSelf->tb_weight_fifo__DOT__wl_errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__wcheck__25__name));
    }
    co_await vlSelf->__VtrigSched_hb5160297__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_weight_fifo.clk2)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       288);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_weight_fifo.sv", 
                                       288);
    vlSelf->tb_weight_fifo__DOT__preload_state = 0U;
    __Vtask_tb_weight_fifo__DOT__wcheck__26__cond = 
        (0U == (IData)(vlSelf->tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__count));
    __Vtask_tb_weight_fifo__DOT__wcheck__26__name = 
        std::string{"single row drained: fifo_empty asserted"};
    vlSelf->tb_weight_fifo__DOT__wl_checks = ((IData)(1U) 
                                              + vlSelf->tb_weight_fifo__DOT__wl_checks);
    if (__Vtask_tb_weight_fifo__DOT__wcheck__26__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__wcheck__26__name));
    } else {
        vlSelf->tb_weight_fifo__DOT__wl_errors = ((IData)(1U) 
                                                  + vlSelf->tb_weight_fifo__DOT__wl_errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__wcheck__26__name));
    }
    VL_WRITEF("==== weight_loader edge cases ====\n");
    vlSelf->tb_weight_fifo__DOT__rst_n2 = 0U;
    vlSelf->tb_weight_fifo__DOT__start_load_fifo_state = 0U;
    vlSelf->tb_weight_fifo__DOT__load_fifo_state = 0U;
    vlSelf->tb_weight_fifo__DOT__preload_state = 0U;
    vlSelf->tb_weight_fifo__DOT__tiles_complete = 0U;
    vlSelf->tb_weight_fifo__DOT__read_data_valid = 0U;
    vlSelf->tb_weight_fifo__DOT__read_data = 0U;
    co_await vlSelf->__VtrigSched_hb5160297__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_weight_fifo.clk2)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       231);
    co_await vlSelf->__VtrigSched_hb5160297__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_weight_fifo.clk2)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       231);
    vlSelf->tb_weight_fifo__DOT__rst_n2 = 1U;
    co_await vlSelf->__VtrigSched_hb5160297__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_weight_fifo.clk2)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       233);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_weight_fifo.sv", 
                                       299);
    vlSelf->tb_weight_fifo__DOT__start_load_fifo_state = 1U;
    co_await vlSelf->__VtrigSched_hb5160297__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_weight_fifo.clk2)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       301);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_weight_fifo.sv", 
                                       301);
    vlSelf->tb_weight_fifo__DOT__start_load_fifo_state = 0U;
    vlSelf->tb_weight_fifo__DOT__load_fifo_state = 1U;
    vlSelf->tb_weight_fifo__DOT__read_data = 0U;
    vlSelf->tb_weight_fifo__DOT__read_data = (0xa0U 
                                              | (0xffffff00U 
                                                 & vlSelf->tb_weight_fifo__DOT__read_data));
    vlSelf->tb_weight_fifo__DOT__read_data_valid = 1U;
    co_await vlSelf->__VtrigSched_hb5160297__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_weight_fifo.clk2)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       308);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_weight_fifo.sv", 
                                       308);
    vlSelf->tb_weight_fifo__DOT__read_data = 0U;
    vlSelf->tb_weight_fifo__DOT__read_data = (0xa1U 
                                              | (0xffffff00U 
                                                 & vlSelf->tb_weight_fifo__DOT__read_data));
    vlSelf->tb_weight_fifo__DOT__read_data_valid = 1U;
    co_await vlSelf->__VtrigSched_hb5160297__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_weight_fifo.clk2)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       308);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_weight_fifo.sv", 
                                       308);
    vlSelf->tb_weight_fifo__DOT__read_data = 0U;
    vlSelf->tb_weight_fifo__DOT__read_data = (0xa2U 
                                              | (0xffffff00U 
                                                 & vlSelf->tb_weight_fifo__DOT__read_data));
    vlSelf->tb_weight_fifo__DOT__read_data_valid = 1U;
    co_await vlSelf->__VtrigSched_hb5160297__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_weight_fifo.clk2)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       308);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_weight_fifo.sv", 
                                       308);
    vlSelf->tb_weight_fifo__DOT__read_data = 0U;
    vlSelf->tb_weight_fifo__DOT__read_data = (0xa3U 
                                              | (0xffffff00U 
                                                 & vlSelf->tb_weight_fifo__DOT__read_data));
    vlSelf->tb_weight_fifo__DOT__read_data_valid = 1U;
    co_await vlSelf->__VtrigSched_hb5160297__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_weight_fifo.clk2)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       308);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_weight_fifo.sv", 
                                       308);
    vlSelf->tb_weight_fifo__DOT__read_data_valid = 0U;
    __Vtask_tb_weight_fifo__DOT__wcheck__28__cond = 
        (4U == (IData)(vlSelf->tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__count));
    __Vtask_tb_weight_fifo__DOT__wcheck__28__name = 
        std::string{"edgeA: fifo_full reached (4 real rows)"};
    vlSelf->tb_weight_fifo__DOT__wl_checks = ((IData)(1U) 
                                              + vlSelf->tb_weight_fifo__DOT__wl_checks);
    if (__Vtask_tb_weight_fifo__DOT__wcheck__28__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__wcheck__28__name));
    } else {
        vlSelf->tb_weight_fifo__DOT__wl_errors = ((IData)(1U) 
                                                  + vlSelf->tb_weight_fifo__DOT__wl_errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__wcheck__28__name));
    }
    vlSelf->tb_weight_fifo__DOT__preload_state = 1U;
    co_await vlSelf->__VtrigSched_hb5160297__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_weight_fifo.clk2)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       314);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_weight_fifo.sv", 
                                       314);
    __Vtask_tb_weight_fifo__DOT__wcheck__29__cond = vlSelf->tb_weight_fifo__DOT__data_valid;
    __Vtask_tb_weight_fifo__DOT__wcheck__29__name = 
        std::string{"edgeA: FSM left LOAD_FIFO for PRELOAD purely from fifo_full (load_fifo_state never dropped)"};
    vlSelf->tb_weight_fifo__DOT__wl_checks = ((IData)(1U) 
                                              + vlSelf->tb_weight_fifo__DOT__wl_checks);
    if (__Vtask_tb_weight_fifo__DOT__wcheck__29__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__wcheck__29__name));
    } else {
        vlSelf->tb_weight_fifo__DOT__wl_errors = ((IData)(1U) 
                                                  + vlSelf->tb_weight_fifo__DOT__wl_errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__wcheck__29__name));
    }
    vlSelf->tb_weight_fifo__DOT__preload_state = 0U;
    vlSelf->tb_weight_fifo__DOT__load_fifo_state = 0U;
    co_await vlSelf->__VtrigSched_hb5160297__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_weight_fifo.clk2)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       319);
    co_await vlSelf->__VtrigSched_hb5160297__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_weight_fifo.clk2)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       319);
    co_await vlSelf->__VtrigSched_hb5160297__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_weight_fifo.clk2)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       319);
    co_await vlSelf->__VtrigSched_hb5160297__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_weight_fifo.clk2)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       319);
    vlSelf->tb_weight_fifo__DOT__rst_n2 = 0U;
    vlSelf->tb_weight_fifo__DOT__start_load_fifo_state = 0U;
    vlSelf->tb_weight_fifo__DOT__load_fifo_state = 0U;
    vlSelf->tb_weight_fifo__DOT__preload_state = 0U;
    vlSelf->tb_weight_fifo__DOT__tiles_complete = 0U;
    vlSelf->tb_weight_fifo__DOT__read_data_valid = 0U;
    vlSelf->tb_weight_fifo__DOT__read_data = 0U;
    co_await vlSelf->__VtrigSched_hb5160297__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_weight_fifo.clk2)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       231);
    co_await vlSelf->__VtrigSched_hb5160297__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_weight_fifo.clk2)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       231);
    vlSelf->tb_weight_fifo__DOT__rst_n2 = 1U;
    co_await vlSelf->__VtrigSched_hb5160297__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_weight_fifo.clk2)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       233);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_weight_fifo.sv", 
                                       326);
    vlSelf->tb_weight_fifo__DOT__start_load_fifo_state = 1U;
    co_await vlSelf->__VtrigSched_hb5160297__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_weight_fifo.clk2)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       328);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_weight_fifo.sv", 
                                       328);
    vlSelf->tb_weight_fifo__DOT__start_load_fifo_state = 0U;
    vlSelf->tb_weight_fifo__DOT__load_fifo_state = 1U;
    vlSelf->tb_weight_fifo__DOT__read_data = 0U;
    vlSelf->tb_weight_fifo__DOT__read_data = (0xb1U 
                                              | (0xffffff00U 
                                                 & vlSelf->tb_weight_fifo__DOT__read_data));
    vlSelf->tb_weight_fifo__DOT__read_data_valid = 1U;
    co_await vlSelf->__VtrigSched_hb5160297__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_weight_fifo.clk2)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       334);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_weight_fifo.sv", 
                                       334);
    vlSelf->tb_weight_fifo__DOT__read_data_valid = 0U;
    vlSelf->tb_weight_fifo__DOT__load_fifo_state = 0U;
    __Vtask_tb_weight_fifo__DOT__wcheck__31__cond = 
        (4U != (IData)(vlSelf->tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__count));
    __Vtask_tb_weight_fifo__DOT__wcheck__31__name = 
        std::string{"edgeB: fifo not full when load_fifo_state dropped"};
    vlSelf->tb_weight_fifo__DOT__wl_checks = ((IData)(1U) 
                                              + vlSelf->tb_weight_fifo__DOT__wl_checks);
    if (__Vtask_tb_weight_fifo__DOT__wcheck__31__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__wcheck__31__name));
    } else {
        vlSelf->tb_weight_fifo__DOT__wl_errors = ((IData)(1U) 
                                                  + vlSelf->tb_weight_fifo__DOT__wl_errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__wcheck__31__name));
    }
    vlSelf->tb_weight_fifo__DOT__preload_state = 1U;
    co_await vlSelf->__VtrigSched_hb5160297__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_weight_fifo.clk2)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       340);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_weight_fifo.sv", 
                                       340);
    __Vtask_tb_weight_fifo__DOT__wcheck__32__cond = vlSelf->tb_weight_fifo__DOT__data_valid;
    __Vtask_tb_weight_fifo__DOT__wcheck__32__name = 
        std::string{"edgeB: FSM left LOAD_FIFO for PRELOAD once load_fifo_state dropped, even though fifo wasn't full"};
    vlSelf->tb_weight_fifo__DOT__wl_checks = ((IData)(1U) 
                                              + vlSelf->tb_weight_fifo__DOT__wl_checks);
    if (__Vtask_tb_weight_fifo__DOT__wcheck__32__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__wcheck__32__name));
    } else {
        vlSelf->tb_weight_fifo__DOT__wl_errors = ((IData)(1U) 
                                                  + vlSelf->tb_weight_fifo__DOT__wl_errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__wcheck__32__name));
    }
    vlSelf->tb_weight_fifo__DOT__preload_state = 0U;
    co_await vlSelf->__VtrigSched_hb5160297__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_weight_fifo.clk2)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       344);
    co_await vlSelf->__VtrigSched_hb5160297__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_weight_fifo.clk2)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       344);
    co_await vlSelf->__VtrigSched_hb5160297__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_weight_fifo.clk2)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       344);
    vlSelf->tb_weight_fifo__DOT__rst_n2 = 0U;
    vlSelf->tb_weight_fifo__DOT__start_load_fifo_state = 0U;
    vlSelf->tb_weight_fifo__DOT__load_fifo_state = 0U;
    vlSelf->tb_weight_fifo__DOT__preload_state = 0U;
    vlSelf->tb_weight_fifo__DOT__tiles_complete = 0U;
    vlSelf->tb_weight_fifo__DOT__read_data_valid = 0U;
    vlSelf->tb_weight_fifo__DOT__read_data = 0U;
    co_await vlSelf->__VtrigSched_hb5160297__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_weight_fifo.clk2)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       231);
    co_await vlSelf->__VtrigSched_hb5160297__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_weight_fifo.clk2)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       231);
    vlSelf->tb_weight_fifo__DOT__rst_n2 = 1U;
    co_await vlSelf->__VtrigSched_hb5160297__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_weight_fifo.clk2)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       233);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_weight_fifo.sv", 
                                       351);
    __Vtask_tb_weight_fifo__DOT__wcheck__34__cond = 
        (0U == (IData)(vlSelf->tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__count));
    __Vtask_tb_weight_fifo__DOT__wcheck__34__name = 
        std::string{"edgeC: idle before tiles_complete"};
    vlSelf->tb_weight_fifo__DOT__wl_checks = ((IData)(1U) 
                                              + vlSelf->tb_weight_fifo__DOT__wl_checks);
    if (__Vtask_tb_weight_fifo__DOT__wcheck__34__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__wcheck__34__name));
    } else {
        vlSelf->tb_weight_fifo__DOT__wl_errors = ((IData)(1U) 
                                                  + vlSelf->tb_weight_fifo__DOT__wl_errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__wcheck__34__name));
    }
    vlSelf->tb_weight_fifo__DOT__tiles_complete = 1U;
    co_await vlSelf->__VtrigSched_hb5160297__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_weight_fifo.clk2)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       354);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_weight_fifo.sv", 
                                       354);
    vlSelf->tb_weight_fifo__DOT__tiles_complete = 0U;
    __Vtask_tb_weight_fifo__DOT__wcheck__35__cond = 
        (0U == (IData)(vlSelf->tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__count));
    __Vtask_tb_weight_fifo__DOT__wcheck__35__name = 
        std::string{"edgeC: tiles_complete alone (without start_load_fifo_state) leaves IDLE - no write on this edge itself"};
    vlSelf->tb_weight_fifo__DOT__wl_checks = ((IData)(1U) 
                                              + vlSelf->tb_weight_fifo__DOT__wl_checks);
    if (__Vtask_tb_weight_fifo__DOT__wcheck__35__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__wcheck__35__name));
    } else {
        vlSelf->tb_weight_fifo__DOT__wl_errors = ((IData)(1U) 
                                                  + vlSelf->tb_weight_fifo__DOT__wl_errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__wcheck__35__name));
    }
    vlSelf->tb_weight_fifo__DOT__load_fifo_state = 1U;
    vlSelf->tb_weight_fifo__DOT__read_data = 0U;
    vlSelf->tb_weight_fifo__DOT__read_data = (0xc1U 
                                              | (0xffffff00U 
                                                 & vlSelf->tb_weight_fifo__DOT__read_data));
    vlSelf->tb_weight_fifo__DOT__read_data_valid = 1U;
    co_await vlSelf->__VtrigSched_hb5160297__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_weight_fifo.clk2)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       363);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_weight_fifo.sv", 
                                       363);
    vlSelf->tb_weight_fifo__DOT__read_data_valid = 0U;
    vlSelf->tb_weight_fifo__DOT__load_fifo_state = 0U;
    __Vtask_tb_weight_fifo__DOT__wcheck__36__cond = 
        (0U != (IData)(vlSelf->tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__count));
    __Vtask_tb_weight_fifo__DOT__wcheck__36__name = 
        std::string{"edgeC: a real write after the tiles_complete entry lands correctly"};
    vlSelf->tb_weight_fifo__DOT__wl_checks = ((IData)(1U) 
                                              + vlSelf->tb_weight_fifo__DOT__wl_checks);
    if (__Vtask_tb_weight_fifo__DOT__wcheck__36__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__wcheck__36__name));
    } else {
        vlSelf->tb_weight_fifo__DOT__wl_errors = ((IData)(1U) 
                                                  + vlSelf->tb_weight_fifo__DOT__wl_errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__wcheck__36__name));
    }
    vlSelf->tb_weight_fifo__DOT__preload_state = 1U;
    co_await vlSelf->__VtrigSched_hb5160297__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_weight_fifo.clk2)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       369);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_weight_fifo.sv", 
                                       369);
    __Vtask_tb_weight_fifo__DOT__wcheck__37__cond = vlSelf->tb_weight_fifo__DOT__data_valid;
    __Vtask_tb_weight_fifo__DOT__wcheck__37__name = 
        std::string{"edgeC: reaches PRELOAD and surfaces the row written after the tiles_complete entry"};
    vlSelf->tb_weight_fifo__DOT__wl_checks = ((IData)(1U) 
                                              + vlSelf->tb_weight_fifo__DOT__wl_checks);
    if (__Vtask_tb_weight_fifo__DOT__wcheck__37__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__wcheck__37__name));
    } else {
        vlSelf->tb_weight_fifo__DOT__wl_errors = ((IData)(1U) 
                                                  + vlSelf->tb_weight_fifo__DOT__wl_errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__wcheck__37__name));
    }
    vlSelf->tb_weight_fifo__DOT__preload_state = 0U;
    co_await vlSelf->__VtrigSched_hb5160297__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_weight_fifo.clk2)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       373);
    co_await vlSelf->__VtrigSched_hb5160297__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_weight_fifo.clk2)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       373);
    co_await vlSelf->__VtrigSched_hb5160297__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_weight_fifo.clk2)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       373);
    vlSelf->tb_weight_fifo__DOT__rst_n2 = 0U;
    vlSelf->tb_weight_fifo__DOT__start_load_fifo_state = 0U;
    vlSelf->tb_weight_fifo__DOT__load_fifo_state = 0U;
    vlSelf->tb_weight_fifo__DOT__preload_state = 0U;
    vlSelf->tb_weight_fifo__DOT__tiles_complete = 0U;
    vlSelf->tb_weight_fifo__DOT__read_data_valid = 0U;
    vlSelf->tb_weight_fifo__DOT__read_data = 0U;
    co_await vlSelf->__VtrigSched_hb5160297__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_weight_fifo.clk2)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       231);
    co_await vlSelf->__VtrigSched_hb5160297__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_weight_fifo.clk2)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       231);
    vlSelf->tb_weight_fifo__DOT__rst_n2 = 1U;
    co_await vlSelf->__VtrigSched_hb5160297__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_weight_fifo.clk2)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       233);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_weight_fifo.sv", 
                                       381);
    vlSelf->tb_weight_fifo__DOT__start_load_fifo_state = 1U;
    co_await vlSelf->__VtrigSched_hb5160297__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_weight_fifo.clk2)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       383);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_weight_fifo.sv", 
                                       383);
    vlSelf->tb_weight_fifo__DOT__start_load_fifo_state = 0U;
    vlSelf->tb_weight_fifo__DOT__load_fifo_state = 1U;
    vlSelf->tb_weight_fifo__DOT__read_data = 0U;
    vlSelf->tb_weight_fifo__DOT__read_data = (0xd1U 
                                              | (0xffffff00U 
                                                 & vlSelf->tb_weight_fifo__DOT__read_data));
    vlSelf->tb_weight_fifo__DOT__read_data_valid = 1U;
    co_await vlSelf->__VtrigSched_hb5160297__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_weight_fifo.clk2)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       389);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_weight_fifo.sv", 
                                       389);
    vlSelf->tb_weight_fifo__DOT__read_data_valid = 0U;
    vlSelf->tb_weight_fifo__DOT__load_fifo_state = 0U;
    vlSelf->tb_weight_fifo__DOT__preload_state = 1U;
    co_await vlSelf->__VtrigSched_hb5160297__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_weight_fifo.clk2)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       393);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_weight_fifo.sv", 
                                       393);
    __Vtask_tb_weight_fifo__DOT__wcheck__39__cond = vlSelf->tb_weight_fifo__DOT__data_valid;
    __Vtask_tb_weight_fifo__DOT__wcheck__39__name = 
        std::string{"edgeD: entered PRELOAD, first pulse valid"};
    vlSelf->tb_weight_fifo__DOT__wl_checks = ((IData)(1U) 
                                              + vlSelf->tb_weight_fifo__DOT__wl_checks);
    if (__Vtask_tb_weight_fifo__DOT__wcheck__39__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__wcheck__39__name));
    } else {
        vlSelf->tb_weight_fifo__DOT__wl_errors = ((IData)(1U) 
                                                  + vlSelf->tb_weight_fifo__DOT__wl_errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__wcheck__39__name));
    }
    vlSelf->tb_weight_fifo__DOT__preload_state = 0U;
    co_await vlSelf->__VtrigSched_hb5160297__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_weight_fifo.clk2)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       397);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_weight_fifo.sv", 
                                       397);
    __Vtask_tb_weight_fifo__DOT__wcheck__40__cond = 
        (1U & (~ (IData)(vlSelf->tb_weight_fifo__DOT__data_valid)));
    __Vtask_tb_weight_fifo__DOT__wcheck__40__name = 
        std::string{"edgeD: dropping preload_state while fifo non-empty returns to IDLE immediately (data_valid drops)"};
    vlSelf->tb_weight_fifo__DOT__wl_checks = ((IData)(1U) 
                                              + vlSelf->tb_weight_fifo__DOT__wl_checks);
    if (__Vtask_tb_weight_fifo__DOT__wcheck__40__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__wcheck__40__name));
    } else {
        vlSelf->tb_weight_fifo__DOT__wl_errors = ((IData)(1U) 
                                                  + vlSelf->tb_weight_fifo__DOT__wl_errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_weight_fifo__DOT__wcheck__40__name));
    }
    co_await vlSelf->__VtrigSched_hb5160297__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_weight_fifo.clk2)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       400);
    co_await vlSelf->__VtrigSched_hb5160297__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_weight_fifo.clk2)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       400);
    VL_WRITEF("==== weight_loader edge cases done ====\n\n");
    co_await vlSelf->__VtrigSched_hb5160297__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_weight_fifo.clk2)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       404);
    co_await vlSelf->__VtrigSched_hb5160297__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_weight_fifo.clk2)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       404);
    co_await vlSelf->__VtrigSched_hb5160297__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_weight_fifo.clk2)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       404);
    co_await vlSelf->__VtrigSched_hb5160297__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_weight_fifo.clk2)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       404);
    co_await vlSelf->__VtrigSched_hb5160297__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_weight_fifo.clk2)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       404);
    co_await vlSelf->__VtrigSched_hb5160297__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_weight_fifo.clk2)", 
                                                       "tb/tb_weight_fifo.sv", 
                                                       404);
    VL_WRITEF("==== weight_loader wrapper done: %0d/%0d checks passed ====\n\n",
              32,(vlSelf->tb_weight_fifo__DOT__wl_checks 
                  - vlSelf->tb_weight_fifo__DOT__wl_errors),
              32,vlSelf->tb_weight_fifo__DOT__wl_checks);
    vlSelf->tb_weight_fifo__DOT__wl_test_done = 1U;
}

VL_INLINE_OPT VlCoroutine Vtb_weight_fifo___024root___eval_initial__TOP__Vtiming__2(Vtb_weight_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_weight_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_weight_fifo___024root___eval_initial__TOP__Vtiming__2\n"); );
    // Body
    while ((1U & (~ ((IData)(vlSelf->tb_weight_fifo__DOT__fifo_test_done) 
                     & (IData)(vlSelf->tb_weight_fifo__DOT__wl_test_done))))) {
        co_await vlSelf->__VtrigSched_h087dc694__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] (tb_weight_fifo.fifo_test_done & tb_weight_fifo.wl_test_done))", 
                                                           "tb/tb_weight_fifo.sv", 
                                                           411);
    }
    VL_WRITEF("\n==== SUMMARY ====\nFIFO submodule:    %0d/%0d passed\nweight_loader:     %0d/%0d passed\n",
              32,(vlSelf->tb_weight_fifo__DOT__checks 
                  - vlSelf->tb_weight_fifo__DOT__errors),
              32,vlSelf->tb_weight_fifo__DOT__checks,
              32,(vlSelf->tb_weight_fifo__DOT__wl_checks 
                  - vlSelf->tb_weight_fifo__DOT__wl_errors),
              32,vlSelf->tb_weight_fifo__DOT__wl_checks);
    VL_FINISH_MT("tb/tb_weight_fifo.sv", 415, "");
}

VL_INLINE_OPT VlCoroutine Vtb_weight_fifo___024root___eval_initial__TOP__Vtiming__3(Vtb_weight_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_weight_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_weight_fifo___024root___eval_initial__TOP__Vtiming__3\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "tb/tb_weight_fifo.sv", 
                                           188);
        vlSelf->tb_weight_fifo__DOT__clk2 = (1U & (~ (IData)(vlSelf->tb_weight_fifo__DOT__clk2)));
    }
}

VL_INLINE_OPT VlCoroutine Vtb_weight_fifo___024root___eval_initial__TOP__Vtiming__4(Vtb_weight_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_weight_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_weight_fifo___024root___eval_initial__TOP__Vtiming__4\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "tb/tb_weight_fifo.sv", 
                                           35);
        vlSelf->tb_weight_fifo__DOT__clk = (1U & (~ (IData)(vlSelf->tb_weight_fifo__DOT__clk)));
    }
}

VL_INLINE_OPT void Vtb_weight_fifo___024root___act_comb__TOP__0(Vtb_weight_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_weight_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_weight_fifo___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->tb_weight_fifo__DOT__dut_wl__DOT__fifo_re = 0U;
    vlSelf->tb_weight_fifo__DOT__data_valid = 0U;
    vlSelf->tb_weight_fifo__DOT__dut_wl__DOT__fifo_we = 0U;
    if ((0U != (IData)(vlSelf->tb_weight_fifo__DOT__dut_wl__DOT__current_state))) {
        if ((1U != (IData)(vlSelf->tb_weight_fifo__DOT__dut_wl__DOT__current_state))) {
            if ((2U == (IData)(vlSelf->tb_weight_fifo__DOT__dut_wl__DOT__current_state))) {
                if (((0U != (IData)(vlSelf->tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__count)) 
                     & (IData)(vlSelf->tb_weight_fifo__DOT__preload_state))) {
                    vlSelf->tb_weight_fifo__DOT__dut_wl__DOT__fifo_re = 1U;
                    vlSelf->tb_weight_fifo__DOT__data_valid = 1U;
                }
            }
        }
        if ((1U == (IData)(vlSelf->tb_weight_fifo__DOT__dut_wl__DOT__current_state))) {
            if (((4U != (IData)(vlSelf->tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__count)) 
                 & (IData)(vlSelf->tb_weight_fifo__DOT__load_fifo_state))) {
                if (vlSelf->tb_weight_fifo__DOT__read_data_valid) {
                    vlSelf->tb_weight_fifo__DOT__dut_wl__DOT__fifo_we = 1U;
                }
            }
        }
    }
    vlSelf->tb_weight_fifo__DOT__dut_wl__DOT__next_state 
        = vlSelf->tb_weight_fifo__DOT__dut_wl__DOT__current_state;
    if ((0U == (IData)(vlSelf->tb_weight_fifo__DOT__dut_wl__DOT__current_state))) {
        vlSelf->tb_weight_fifo__DOT__dut_wl__DOT__next_state 
            = (((IData)(vlSelf->tb_weight_fifo__DOT__start_load_fifo_state) 
                | (IData)(vlSelf->tb_weight_fifo__DOT__tiles_complete))
                ? 1U : 0U);
    } else if ((1U == (IData)(vlSelf->tb_weight_fifo__DOT__dut_wl__DOT__current_state))) {
        vlSelf->tb_weight_fifo__DOT__dut_wl__DOT__next_state 
            = (((4U != (IData)(vlSelf->tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__count)) 
                & (IData)(vlSelf->tb_weight_fifo__DOT__load_fifo_state))
                ? 1U : 2U);
    } else if ((2U == (IData)(vlSelf->tb_weight_fifo__DOT__dut_wl__DOT__current_state))) {
        vlSelf->tb_weight_fifo__DOT__dut_wl__DOT__next_state 
            = (((0U != (IData)(vlSelf->tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__count)) 
                & (IData)(vlSelf->tb_weight_fifo__DOT__preload_state))
                ? 2U : 0U);
    }
}

void Vtb_weight_fifo___024root___eval_act(Vtb_weight_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_weight_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_weight_fifo___024root___eval_act\n"); );
    // Body
    if ((0x38ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_weight_fifo___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_weight_fifo___024root___nba_sequent__TOP__0(Vtb_weight_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_weight_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_weight_fifo___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ __Vdly__tb_weight_fifo__DOT__dut_fifo__DOT__count;
    __Vdly__tb_weight_fifo__DOT__dut_fifo__DOT__count = 0;
    CData/*1:0*/ __Vdly__tb_weight_fifo__DOT__dut_fifo__DOT__getPtr;
    __Vdly__tb_weight_fifo__DOT__dut_fifo__DOT__getPtr = 0;
    CData/*1:0*/ __Vdly__tb_weight_fifo__DOT__dut_fifo__DOT__putPtr;
    __Vdly__tb_weight_fifo__DOT__dut_fifo__DOT__putPtr = 0;
    CData/*1:0*/ __Vdlyvdim0__tb_weight_fifo__DOT__dut_fifo__DOT__Q__v0;
    __Vdlyvdim0__tb_weight_fifo__DOT__dut_fifo__DOT__Q__v0 = 0;
    VlWide<3>/*95:0*/ __Vdlyvval__tb_weight_fifo__DOT__dut_fifo__DOT__Q__v0;
    VL_ZERO_W(96, __Vdlyvval__tb_weight_fifo__DOT__dut_fifo__DOT__Q__v0);
    CData/*0:0*/ __Vdlyvset__tb_weight_fifo__DOT__dut_fifo__DOT__Q__v0;
    __Vdlyvset__tb_weight_fifo__DOT__dut_fifo__DOT__Q__v0 = 0;
    CData/*1:0*/ __Vdlyvdim0__tb_weight_fifo__DOT__dut_fifo__DOT__Q__v1;
    __Vdlyvdim0__tb_weight_fifo__DOT__dut_fifo__DOT__Q__v1 = 0;
    VlWide<3>/*95:0*/ __Vdlyvval__tb_weight_fifo__DOT__dut_fifo__DOT__Q__v1;
    VL_ZERO_W(96, __Vdlyvval__tb_weight_fifo__DOT__dut_fifo__DOT__Q__v1);
    CData/*0:0*/ __Vdlyvset__tb_weight_fifo__DOT__dut_fifo__DOT__Q__v1;
    __Vdlyvset__tb_weight_fifo__DOT__dut_fifo__DOT__Q__v1 = 0;
    // Body
    __Vdly__tb_weight_fifo__DOT__dut_fifo__DOT__getPtr 
        = vlSelf->tb_weight_fifo__DOT__dut_fifo__DOT__getPtr;
    __Vdly__tb_weight_fifo__DOT__dut_fifo__DOT__count 
        = vlSelf->tb_weight_fifo__DOT__dut_fifo__DOT__count;
    __Vdly__tb_weight_fifo__DOT__dut_fifo__DOT__putPtr 
        = vlSelf->tb_weight_fifo__DOT__dut_fifo__DOT__putPtr;
    __Vdlyvset__tb_weight_fifo__DOT__dut_fifo__DOT__Q__v0 = 0U;
    __Vdlyvset__tb_weight_fifo__DOT__dut_fifo__DOT__Q__v1 = 0U;
    if ((1U & (~ (IData)(vlSelf->tb_weight_fifo__DOT__reset_n)))) {
        __Vdly__tb_weight_fifo__DOT__dut_fifo__DOT__getPtr = 0U;
        __Vdly__tb_weight_fifo__DOT__dut_fifo__DOT__count = 0U;
        __Vdly__tb_weight_fifo__DOT__dut_fifo__DOT__putPtr = 0U;
    }
    if (((((IData)(vlSelf->tb_weight_fifo__DOT__we) 
           & (IData)(vlSelf->tb_weight_fifo__DOT__re)) 
          & (0U != (IData)(vlSelf->tb_weight_fifo__DOT__dut_fifo__DOT__count))) 
         & (4U != (IData)(vlSelf->tb_weight_fifo__DOT__dut_fifo__DOT__count)))) {
        __Vdly__tb_weight_fifo__DOT__dut_fifo__DOT__getPtr 
            = (3U & ((IData)(1U) + (IData)(vlSelf->tb_weight_fifo__DOT__dut_fifo__DOT__getPtr)));
        __Vdlyvval__tb_weight_fifo__DOT__dut_fifo__DOT__Q__v0[0U] 
            = vlSelf->tb_weight_fifo__DOT__data_in[0U];
        __Vdlyvval__tb_weight_fifo__DOT__dut_fifo__DOT__Q__v0[1U] 
            = vlSelf->tb_weight_fifo__DOT__data_in[1U];
        __Vdlyvval__tb_weight_fifo__DOT__dut_fifo__DOT__Q__v0[2U] 
            = vlSelf->tb_weight_fifo__DOT__data_in[2U];
        __Vdlyvset__tb_weight_fifo__DOT__dut_fifo__DOT__Q__v0 = 1U;
        __Vdlyvdim0__tb_weight_fifo__DOT__dut_fifo__DOT__Q__v0 
            = vlSelf->tb_weight_fifo__DOT__dut_fifo__DOT__putPtr;
        __Vdly__tb_weight_fifo__DOT__dut_fifo__DOT__putPtr 
            = (3U & ((IData)(1U) + (IData)(vlSelf->tb_weight_fifo__DOT__dut_fifo__DOT__putPtr)));
    } else {
        if (((IData)(vlSelf->tb_weight_fifo__DOT__re) 
             & (0U != (IData)(vlSelf->tb_weight_fifo__DOT__dut_fifo__DOT__count)))) {
            __Vdly__tb_weight_fifo__DOT__dut_fifo__DOT__getPtr 
                = (3U & ((IData)(1U) + (IData)(vlSelf->tb_weight_fifo__DOT__dut_fifo__DOT__getPtr)));
        }
        if ((1U & (~ ((IData)(vlSelf->tb_weight_fifo__DOT__re) 
                      & (0U != (IData)(vlSelf->tb_weight_fifo__DOT__dut_fifo__DOT__count)))))) {
            if (((IData)(vlSelf->tb_weight_fifo__DOT__we) 
                 & (4U != (IData)(vlSelf->tb_weight_fifo__DOT__dut_fifo__DOT__count)))) {
                __Vdlyvval__tb_weight_fifo__DOT__dut_fifo__DOT__Q__v1[0U] 
                    = vlSelf->tb_weight_fifo__DOT__data_in[0U];
                __Vdlyvval__tb_weight_fifo__DOT__dut_fifo__DOT__Q__v1[1U] 
                    = vlSelf->tb_weight_fifo__DOT__data_in[1U];
                __Vdlyvval__tb_weight_fifo__DOT__dut_fifo__DOT__Q__v1[2U] 
                    = vlSelf->tb_weight_fifo__DOT__data_in[2U];
                __Vdlyvset__tb_weight_fifo__DOT__dut_fifo__DOT__Q__v1 = 1U;
                __Vdlyvdim0__tb_weight_fifo__DOT__dut_fifo__DOT__Q__v1 
                    = vlSelf->tb_weight_fifo__DOT__dut_fifo__DOT__putPtr;
                __Vdly__tb_weight_fifo__DOT__dut_fifo__DOT__putPtr 
                    = (3U & ((IData)(1U) + (IData)(vlSelf->tb_weight_fifo__DOT__dut_fifo__DOT__putPtr)));
            }
        }
    }
    if ((1U & (~ ((((IData)(vlSelf->tb_weight_fifo__DOT__we) 
                    & (IData)(vlSelf->tb_weight_fifo__DOT__re)) 
                   & (~ (IData)(vlSelf->tb_weight_fifo__DOT__empty))) 
                  & (~ (IData)(vlSelf->tb_weight_fifo__DOT__full)))))) {
        if (((IData)(vlSelf->tb_weight_fifo__DOT__re) 
             & (~ (IData)(vlSelf->tb_weight_fifo__DOT__empty)))) {
            __Vdly__tb_weight_fifo__DOT__dut_fifo__DOT__count 
                = (0xfU & ((IData)(vlSelf->tb_weight_fifo__DOT__dut_fifo__DOT__count) 
                           - (IData)(1U)));
        } else if (((IData)(vlSelf->tb_weight_fifo__DOT__we) 
                    & (~ (IData)(vlSelf->tb_weight_fifo__DOT__full)))) {
            __Vdly__tb_weight_fifo__DOT__dut_fifo__DOT__count 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->tb_weight_fifo__DOT__dut_fifo__DOT__count)));
        }
    }
    vlSelf->tb_weight_fifo__DOT__dut_fifo__DOT__getPtr 
        = __Vdly__tb_weight_fifo__DOT__dut_fifo__DOT__getPtr;
    vlSelf->tb_weight_fifo__DOT__dut_fifo__DOT__putPtr 
        = __Vdly__tb_weight_fifo__DOT__dut_fifo__DOT__putPtr;
    if (__Vdlyvset__tb_weight_fifo__DOT__dut_fifo__DOT__Q__v0) {
        vlSelf->tb_weight_fifo__DOT__dut_fifo__DOT__Q[__Vdlyvdim0__tb_weight_fifo__DOT__dut_fifo__DOT__Q__v0][0U] 
            = __Vdlyvval__tb_weight_fifo__DOT__dut_fifo__DOT__Q__v0[0U];
        vlSelf->tb_weight_fifo__DOT__dut_fifo__DOT__Q[__Vdlyvdim0__tb_weight_fifo__DOT__dut_fifo__DOT__Q__v0][1U] 
            = __Vdlyvval__tb_weight_fifo__DOT__dut_fifo__DOT__Q__v0[1U];
        vlSelf->tb_weight_fifo__DOT__dut_fifo__DOT__Q[__Vdlyvdim0__tb_weight_fifo__DOT__dut_fifo__DOT__Q__v0][2U] 
            = __Vdlyvval__tb_weight_fifo__DOT__dut_fifo__DOT__Q__v0[2U];
    }
    if (__Vdlyvset__tb_weight_fifo__DOT__dut_fifo__DOT__Q__v1) {
        vlSelf->tb_weight_fifo__DOT__dut_fifo__DOT__Q[__Vdlyvdim0__tb_weight_fifo__DOT__dut_fifo__DOT__Q__v1][0U] 
            = __Vdlyvval__tb_weight_fifo__DOT__dut_fifo__DOT__Q__v1[0U];
        vlSelf->tb_weight_fifo__DOT__dut_fifo__DOT__Q[__Vdlyvdim0__tb_weight_fifo__DOT__dut_fifo__DOT__Q__v1][1U] 
            = __Vdlyvval__tb_weight_fifo__DOT__dut_fifo__DOT__Q__v1[1U];
        vlSelf->tb_weight_fifo__DOT__dut_fifo__DOT__Q[__Vdlyvdim0__tb_weight_fifo__DOT__dut_fifo__DOT__Q__v1][2U] 
            = __Vdlyvval__tb_weight_fifo__DOT__dut_fifo__DOT__Q__v1[2U];
    }
    vlSelf->tb_weight_fifo__DOT__dut_fifo__DOT__count 
        = __Vdly__tb_weight_fifo__DOT__dut_fifo__DOT__count;
    vlSelf->tb_weight_fifo__DOT__empty = (0U == (IData)(vlSelf->tb_weight_fifo__DOT__dut_fifo__DOT__count));
    vlSelf->tb_weight_fifo__DOT__full = (4U == (IData)(vlSelf->tb_weight_fifo__DOT__dut_fifo__DOT__count));
    if ((0U != (IData)(vlSelf->tb_weight_fifo__DOT__dut_fifo__DOT__count))) {
        vlSelf->tb_weight_fifo__DOT__data_out[0U] = 
            vlSelf->tb_weight_fifo__DOT__dut_fifo__DOT__Q
            [vlSelf->tb_weight_fifo__DOT__dut_fifo__DOT__getPtr][0U];
        vlSelf->tb_weight_fifo__DOT__data_out[1U] = 
            vlSelf->tb_weight_fifo__DOT__dut_fifo__DOT__Q
            [vlSelf->tb_weight_fifo__DOT__dut_fifo__DOT__getPtr][1U];
        vlSelf->tb_weight_fifo__DOT__data_out[2U] = 
            vlSelf->tb_weight_fifo__DOT__dut_fifo__DOT__Q
            [vlSelf->tb_weight_fifo__DOT__dut_fifo__DOT__getPtr][2U];
    }
}

VL_INLINE_OPT void Vtb_weight_fifo___024root___nba_sequent__TOP__1(Vtb_weight_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_weight_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_weight_fifo___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*3:0*/ __Vdly__tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__count;
    __Vdly__tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__count = 0;
    CData/*1:0*/ __Vdly__tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__getPtr;
    __Vdly__tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__getPtr = 0;
    CData/*1:0*/ __Vdly__tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__putPtr;
    __Vdly__tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__putPtr = 0;
    CData/*4:0*/ __Vdlyvdim0__tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__Q__v0;
    __Vdlyvdim0__tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__Q__v0 = 0;
    IData/*31:0*/ __Vdlyvval__tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__Q__v0;
    __Vdlyvval__tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__Q__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__Q__v0;
    __Vdlyvset__tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__Q__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__Q__v1;
    __Vdlyvdim0__tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__Q__v1 = 0;
    IData/*31:0*/ __Vdlyvval__tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__Q__v1;
    __Vdlyvval__tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__Q__v1 = 0;
    CData/*0:0*/ __Vdlyvset__tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__Q__v1;
    __Vdlyvset__tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__Q__v1 = 0;
    // Body
    __Vdly__tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__getPtr 
        = vlSelf->tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__getPtr;
    __Vdly__tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__count 
        = vlSelf->tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__count;
    __Vdly__tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__putPtr 
        = vlSelf->tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__putPtr;
    __Vdlyvset__tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__Q__v0 = 0U;
    __Vdlyvset__tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__Q__v1 = 0U;
    if ((1U & (~ (IData)(vlSelf->tb_weight_fifo__DOT__rst_n2)))) {
        __Vdly__tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__getPtr = 0U;
        __Vdly__tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__count = 0U;
        __Vdly__tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__putPtr = 0U;
    }
    if (((((IData)(vlSelf->tb_weight_fifo__DOT__dut_wl__DOT__fifo_we) 
           & (IData)(vlSelf->tb_weight_fifo__DOT__dut_wl__DOT__fifo_re)) 
          & (0U != (IData)(vlSelf->tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__count))) 
         & (4U != (IData)(vlSelf->tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__count)))) {
        __Vdly__tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__getPtr 
            = (3U & ((IData)(1U) + (IData)(vlSelf->tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__getPtr)));
        __Vdlyvval__tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__Q__v0 
            = vlSelf->tb_weight_fifo__DOT__read_data;
        __Vdlyvset__tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__Q__v0 = 1U;
        __Vdlyvdim0__tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__Q__v0 
            = vlSelf->tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__putPtr;
        __Vdly__tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__putPtr 
            = (3U & ((IData)(1U) + (IData)(vlSelf->tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__putPtr)));
    } else {
        if (((IData)(vlSelf->tb_weight_fifo__DOT__dut_wl__DOT__fifo_re) 
             & (0U != (IData)(vlSelf->tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__count)))) {
            __Vdly__tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__getPtr 
                = (3U & ((IData)(1U) + (IData)(vlSelf->tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__getPtr)));
        }
        if ((1U & (~ ((IData)(vlSelf->tb_weight_fifo__DOT__dut_wl__DOT__fifo_re) 
                      & (0U != (IData)(vlSelf->tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__count)))))) {
            if (((IData)(vlSelf->tb_weight_fifo__DOT__dut_wl__DOT__fifo_we) 
                 & (4U != (IData)(vlSelf->tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__count)))) {
                __Vdlyvval__tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__Q__v1 
                    = vlSelf->tb_weight_fifo__DOT__read_data;
                __Vdlyvset__tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__Q__v1 = 1U;
                __Vdlyvdim0__tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__Q__v1 
                    = vlSelf->tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__putPtr;
                __Vdly__tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__putPtr 
                    = (3U & ((IData)(1U) + (IData)(vlSelf->tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__putPtr)));
            }
        }
    }
    if ((1U & (~ ((((IData)(vlSelf->tb_weight_fifo__DOT__dut_wl__DOT__fifo_we) 
                    & (IData)(vlSelf->tb_weight_fifo__DOT__dut_wl__DOT__fifo_re)) 
                   & (~ (IData)(vlSelf->tb_weight_fifo__DOT__fifo_empty))) 
                  & (~ (IData)(vlSelf->tb_weight_fifo__DOT__fifo_full)))))) {
        if (((IData)(vlSelf->tb_weight_fifo__DOT__dut_wl__DOT__fifo_re) 
             & (~ (IData)(vlSelf->tb_weight_fifo__DOT__fifo_empty)))) {
            __Vdly__tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__count 
                = (0xfU & ((IData)(vlSelf->tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__count) 
                           - (IData)(1U)));
        } else if (((IData)(vlSelf->tb_weight_fifo__DOT__dut_wl__DOT__fifo_we) 
                    & (~ (IData)(vlSelf->tb_weight_fifo__DOT__fifo_full)))) {
            __Vdly__tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__count 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__count)));
        }
    }
    vlSelf->tb_weight_fifo__DOT__dut_wl__DOT__current_state 
        = ((IData)(vlSelf->tb_weight_fifo__DOT__rst_n2)
            ? (IData)(vlSelf->tb_weight_fifo__DOT__dut_wl__DOT__next_state)
            : 0U);
    vlSelf->tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__getPtr 
        = __Vdly__tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__getPtr;
    vlSelf->tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__putPtr 
        = __Vdly__tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__putPtr;
    if (__Vdlyvset__tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__Q__v0) {
        vlSelf->tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__Q[__Vdlyvdim0__tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__Q__v0] 
            = __Vdlyvval__tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__Q__v0;
    }
    if (__Vdlyvset__tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__Q__v1) {
        vlSelf->tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__Q[__Vdlyvdim0__tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__Q__v1] 
            = __Vdlyvval__tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__Q__v1;
    }
    vlSelf->tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__count 
        = __Vdly__tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__count;
    vlSelf->tb_weight_fifo__DOT__fifo_empty = (0U == (IData)(vlSelf->tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__count));
    vlSelf->tb_weight_fifo__DOT__fifo_full = (4U == (IData)(vlSelf->tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__count));
    if ((0U != (IData)(vlSelf->tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__count))) {
        vlSelf->tb_weight_fifo__DOT__wl_data_out = 
            vlSelf->tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__Q
            [vlSelf->tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__getPtr];
    }
}

void Vtb_weight_fifo___024root___eval_nba(Vtb_weight_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_weight_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_weight_fifo___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_weight_fifo___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_weight_fifo___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((0x3aULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_weight_fifo___024root___act_comb__TOP__0(vlSelf);
    }
}

void Vtb_weight_fifo___024root___timing_resume(Vtb_weight_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_weight_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_weight_fifo___024root___timing_resume\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h5107d62b__0.resume("@(posedge tb_weight_fifo.clk)");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h5107d6ee__0.resume("@(negedge tb_weight_fifo.clk)");
    }
    if ((0x20ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hb5160297__0.resume("@(posedge tb_weight_fifo.clk2)");
    }
    if ((0x40ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h087dc694__0.resume("@([changed] (tb_weight_fifo.fifo_test_done & tb_weight_fifo.wl_test_done))");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_weight_fifo___024root___timing_commit(Vtb_weight_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_weight_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_weight_fifo___024root___timing_commit\n"); );
    // Body
    if ((! (4ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h5107d62b__0.commit("@(posedge tb_weight_fifo.clk)");
    }
    if ((! (8ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h5107d6ee__0.commit("@(negedge tb_weight_fifo.clk)");
    }
    if ((! (0x20ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hb5160297__0.commit("@(posedge tb_weight_fifo.clk2)");
    }
    if ((! (0x40ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h087dc694__0.commit("@([changed] (tb_weight_fifo.fifo_test_done & tb_weight_fifo.wl_test_done))");
    }
}

void Vtb_weight_fifo___024root___eval_triggers__act(Vtb_weight_fifo___024root* vlSelf);

bool Vtb_weight_fifo___024root___eval_phase__act(Vtb_weight_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_weight_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_weight_fifo___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<7> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_weight_fifo___024root___eval_triggers__act(vlSelf);
    Vtb_weight_fifo___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_weight_fifo___024root___timing_resume(vlSelf);
        Vtb_weight_fifo___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_weight_fifo___024root___eval_phase__nba(Vtb_weight_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_weight_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_weight_fifo___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_weight_fifo___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_weight_fifo___024root___dump_triggers__nba(Vtb_weight_fifo___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_weight_fifo___024root___dump_triggers__act(Vtb_weight_fifo___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_weight_fifo___024root___eval(Vtb_weight_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_weight_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_weight_fifo___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_weight_fifo___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/tb_weight_fifo.sv", 14, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_weight_fifo___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/tb_weight_fifo.sv", 14, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_weight_fifo___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_weight_fifo___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_weight_fifo___024root___eval_debug_assertions(Vtb_weight_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_weight_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_weight_fifo___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
