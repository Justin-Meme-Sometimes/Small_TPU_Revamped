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
    VlWide<5>/*131:0*/ tb_array__DOT__arr_drain_snapshot;
    VL_ZERO_W(132, tb_array__DOT__arr_drain_snapshot);
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
    std::string __Vtask_tb_array__DOT__check__16__name;
    CData/*0:0*/ __Vtask_tb_array__DOT__check__16__cond;
    __Vtask_tb_array__DOT__check__16__cond = 0;
    std::string __Vtask_tb_array__DOT__check__17__name;
    CData/*0:0*/ __Vtask_tb_array__DOT__check__17__cond;
    __Vtask_tb_array__DOT__check__17__cond = 0;
    std::string __Vtask_tb_array__DOT__check__18__name;
    CData/*0:0*/ __Vtask_tb_array__DOT__check__18__cond;
    __Vtask_tb_array__DOT__check__18__cond = 0;
    std::string __Vtask_tb_array__DOT__check__19__name;
    CData/*0:0*/ __Vtask_tb_array__DOT__check__19__cond;
    __Vtask_tb_array__DOT__check__19__cond = 0;
    std::string __Vtask_tb_array__DOT__check__22__name;
    CData/*0:0*/ __Vtask_tb_array__DOT__check__22__cond;
    __Vtask_tb_array__DOT__check__22__cond = 0;
    std::string __Vtask_tb_array__DOT__check__23__name;
    CData/*0:0*/ __Vtask_tb_array__DOT__check__23__cond;
    __Vtask_tb_array__DOT__check__23__cond = 0;
    std::string __Vtask_tb_array__DOT__check__24__name;
    CData/*0:0*/ __Vtask_tb_array__DOT__check__24__cond;
    __Vtask_tb_array__DOT__check__24__cond = 0;
    std::string __Vtask_tb_array__DOT__check__25__name;
    CData/*0:0*/ __Vtask_tb_array__DOT__check__25__cond;
    __Vtask_tb_array__DOT__check__25__cond = 0;
    std::string __Vtask_tb_array__DOT__check__26__name;
    CData/*0:0*/ __Vtask_tb_array__DOT__check__26__cond;
    __Vtask_tb_array__DOT__check__26__cond = 0;
    std::string __Vtask_tb_array__DOT__check__27__name;
    CData/*0:0*/ __Vtask_tb_array__DOT__check__27__cond;
    __Vtask_tb_array__DOT__check__27__cond = 0;
    std::string __Vtask_tb_array__DOT__check__28__name;
    CData/*0:0*/ __Vtask_tb_array__DOT__check__28__cond;
    __Vtask_tb_array__DOT__check__28__cond = 0;
    std::string __Vtask_tb_array__DOT__check__31__name;
    CData/*0:0*/ __Vtask_tb_array__DOT__check__31__cond;
    __Vtask_tb_array__DOT__check__31__cond = 0;
    std::string __Vtask_tb_array__DOT__check__32__name;
    CData/*0:0*/ __Vtask_tb_array__DOT__check__32__cond;
    __Vtask_tb_array__DOT__check__32__cond = 0;
    std::string __Vtask_tb_array__DOT__check__33__name;
    CData/*0:0*/ __Vtask_tb_array__DOT__check__33__cond;
    __Vtask_tb_array__DOT__check__33__cond = 0;
    std::string __Vtask_tb_array__DOT__check__34__name;
    CData/*0:0*/ __Vtask_tb_array__DOT__check__34__cond;
    __Vtask_tb_array__DOT__check__34__cond = 0;
    std::string __Vtask_tb_array__DOT__check__36__name;
    CData/*0:0*/ __Vtask_tb_array__DOT__check__36__cond;
    __Vtask_tb_array__DOT__check__36__cond = 0;
    std::string __Vtask_tb_array__DOT__check__37__name;
    CData/*0:0*/ __Vtask_tb_array__DOT__check__37__cond;
    __Vtask_tb_array__DOT__check__37__cond = 0;
    std::string __Vtask_tb_array__DOT__check__38__name;
    CData/*0:0*/ __Vtask_tb_array__DOT__check__38__cond;
    __Vtask_tb_array__DOT__check__38__cond = 0;
    std::string __Vtask_tb_array__DOT__check__39__name;
    CData/*0:0*/ __Vtask_tb_array__DOT__check__39__cond;
    __Vtask_tb_array__DOT__check__39__cond = 0;
    std::string __Vtask_tb_array__DOT__check__42__name;
    CData/*0:0*/ __Vtask_tb_array__DOT__check__42__cond;
    __Vtask_tb_array__DOT__check__42__cond = 0;
    std::string __Vtask_tb_array__DOT__check__43__name;
    CData/*0:0*/ __Vtask_tb_array__DOT__check__43__cond;
    __Vtask_tb_array__DOT__check__43__cond = 0;
    std::string __Vtask_tb_array__DOT__check__45__name;
    CData/*0:0*/ __Vtask_tb_array__DOT__check__45__cond;
    __Vtask_tb_array__DOT__check__45__cond = 0;
    std::string __Vtask_tb_array__DOT__check__47__name;
    CData/*0:0*/ __Vtask_tb_array__DOT__check__47__cond;
    __Vtask_tb_array__DOT__check__47__cond = 0;
    std::string __Vtask_tb_array__DOT__check__49__name;
    CData/*0:0*/ __Vtask_tb_array__DOT__check__49__cond;
    __Vtask_tb_array__DOT__check__49__cond = 0;
    std::string __Vtask_tb_array__DOT__check__52__name;
    CData/*0:0*/ __Vtask_tb_array__DOT__check__52__cond;
    __Vtask_tb_array__DOT__check__52__cond = 0;
    std::string __Vtask_tb_array__DOT__check__57__name;
    CData/*0:0*/ __Vtask_tb_array__DOT__check__57__cond;
    __Vtask_tb_array__DOT__check__57__cond = 0;
    std::string __Vtask_tb_array__DOT__check__59__name;
    CData/*0:0*/ __Vtask_tb_array__DOT__check__59__cond;
    __Vtask_tb_array__DOT__check__59__cond = 0;
    VlWide<5>/*131:0*/ __Vtask_tb_array__DOT__run_pe_array_activation_valid_test__60__result_valid_low;
    VL_ZERO_W(132, __Vtask_tb_array__DOT__run_pe_array_activation_valid_test__60__result_valid_low);
    VlWide<5>/*131:0*/ __Vtask_tb_array__DOT__run_pe_array_activation_valid_test__60__result_valid_high;
    VL_ZERO_W(132, __Vtask_tb_array__DOT__run_pe_array_activation_valid_test__60__result_valid_high);
    CData/*0:0*/ __Vtask_tb_array__DOT__run_pe_array_sequence__61__av;
    __Vtask_tb_array__DOT__run_pe_array_sequence__61__av = 0;
    VlWide<5>/*131:0*/ __Vtask_tb_array__DOT__run_pe_array_sequence__61__result;
    VL_ZERO_W(132, __Vtask_tb_array__DOT__run_pe_array_sequence__61__result);
    CData/*0:0*/ __Vtask_tb_array__DOT__run_pe_array_sequence__70__av;
    __Vtask_tb_array__DOT__run_pe_array_sequence__70__av = 0;
    VlWide<5>/*131:0*/ __Vtask_tb_array__DOT__run_pe_array_sequence__70__result;
    VL_ZERO_W(132, __Vtask_tb_array__DOT__run_pe_array_sequence__70__result);
    std::string __Vtask_tb_array__DOT__check__79__name;
    CData/*0:0*/ __Vtask_tb_array__DOT__check__79__cond;
    __Vtask_tb_array__DOT__check__79__cond = 0;
    std::string __Vtask_tb_array__DOT__check__80__name;
    CData/*0:0*/ __Vtask_tb_array__DOT__check__80__cond;
    __Vtask_tb_array__DOT__check__80__cond = 0;
    std::string __Vtask_tb_array__DOT__check__84__name;
    CData/*0:0*/ __Vtask_tb_array__DOT__check__84__cond;
    __Vtask_tb_array__DOT__check__84__cond = 0;
    std::string __Vtask_tb_array__DOT__check__85__name;
    CData/*0:0*/ __Vtask_tb_array__DOT__check__85__cond;
    __Vtask_tb_array__DOT__check__85__cond = 0;
    std::string __Vtask_tb_array__DOT__check__86__name;
    CData/*0:0*/ __Vtask_tb_array__DOT__check__86__cond;
    __Vtask_tb_array__DOT__check__86__cond = 0;
    std::string __Vtask_tb_array__DOT__check__87__name;
    CData/*0:0*/ __Vtask_tb_array__DOT__check__87__cond;
    __Vtask_tb_array__DOT__check__87__cond = 0;
    std::string __Vtask_tb_array__DOT__check__91__name;
    CData/*0:0*/ __Vtask_tb_array__DOT__check__91__cond;
    __Vtask_tb_array__DOT__check__91__cond = 0;
    std::string __Vtask_tb_array__DOT__check__94__name;
    CData/*0:0*/ __Vtask_tb_array__DOT__check__94__cond;
    __Vtask_tb_array__DOT__check__94__cond = 0;
    VlWide<5>/*131:0*/ __Vtask_tb_array__DOT__run_pe_array_reset_mid_preload_test__95__pre_reset_value;
    VL_ZERO_W(132, __Vtask_tb_array__DOT__run_pe_array_reset_mid_preload_test__95__pre_reset_value);
    std::string __Vtask_tb_array__DOT__check__98__name;
    CData/*0:0*/ __Vtask_tb_array__DOT__check__98__cond;
    __Vtask_tb_array__DOT__check__98__cond = 0;
    std::string __Vtask_tb_array__DOT__check__100__name;
    CData/*0:0*/ __Vtask_tb_array__DOT__check__100__cond;
    __Vtask_tb_array__DOT__check__100__cond = 0;
    VlWide<5>/*159:0*/ __Vtemp_178;
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
    VL_WRITEF("==== horizontal_en_fsm edge cases ====\n");
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
                                       82);
    vlSelf->tb_array__DOT__h_start = 1U;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       84);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       84);
    vlSelf->tb_array__DOT__h_start = 0U;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       85);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       85);
    __Vtask_tb_array__DOT__check__11__cond = (3U == 
                                              (((IData)(vlSelf->tb_array__DOT__h_en_3) 
                                                << 3U) 
                                               | (((IData)(vlSelf->tb_array__DOT__h_en_2) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->tb_array__DOT__h_en_1) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->tb_array__DOT__h_en_0)))));
    __Vtask_tb_array__DOT__check__11__name = std::string{"pre-check: S1 pattern"};
    vlSelf->tb_array__DOT__checks = ((IData)(1U) + vlSelf->tb_array__DOT__checks);
    if (__Vtask_tb_array__DOT__check__11__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_array__DOT__check__11__name));
    } else {
        vlSelf->tb_array__DOT__errors = ((IData)(1U) 
                                         + vlSelf->tb_array__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_array__DOT__check__11__name));
    }
    vlSelf->tb_array__DOT__h_tile_done = 1U;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       88);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       88);
    vlSelf->tb_array__DOT__h_tile_done = 0U;
    __Vtask_tb_array__DOT__check__12__cond = (7U == 
                                              (((IData)(vlSelf->tb_array__DOT__h_en_3) 
                                                << 3U) 
                                               | (((IData)(vlSelf->tb_array__DOT__h_en_2) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->tb_array__DOT__h_en_1) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->tb_array__DOT__h_en_0)))));
    __Vtask_tb_array__DOT__check__12__name = std::string{"tile_done asserted during S1 has no effect: still advances to S2"};
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
                                                       95);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       95);
    __Vtask_tb_array__DOT__check__13__cond = (0xfU 
                                              == (((IData)(vlSelf->tb_array__DOT__h_en_3) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->tb_array__DOT__h_en_2) 
                                                      << 2U) 
                                                     | (((IData)(vlSelf->tb_array__DOT__h_en_1) 
                                                         << 1U) 
                                                        | (IData)(vlSelf->tb_array__DOT__h_en_0)))));
    __Vtask_tb_array__DOT__check__13__name = std::string{"pre-check: S3 pattern"};
    vlSelf->tb_array__DOT__checks = ((IData)(1U) + vlSelf->tb_array__DOT__checks);
    if (__Vtask_tb_array__DOT__check__13__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_array__DOT__check__13__name));
    } else {
        vlSelf->tb_array__DOT__errors = ((IData)(1U) 
                                         + vlSelf->tb_array__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_array__DOT__check__13__name));
    }
    vlSelf->tb_array__DOT__h_rst_n = 0U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       98);
    __Vtask_tb_array__DOT__check__14__cond = (0U == 
                                              (((IData)(vlSelf->tb_array__DOT__h_en_3) 
                                                << 3U) 
                                               | (((IData)(vlSelf->tb_array__DOT__h_en_2) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->tb_array__DOT__h_en_1) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->tb_array__DOT__h_en_0)))));
    __Vtask_tb_array__DOT__check__14__name = std::string{"async reset mid-S3: all en immediately low"};
    vlSelf->tb_array__DOT__checks = ((IData)(1U) + vlSelf->tb_array__DOT__checks);
    if (__Vtask_tb_array__DOT__check__14__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_array__DOT__check__14__name));
    } else {
        vlSelf->tb_array__DOT__errors = ((IData)(1U) 
                                         + vlSelf->tb_array__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_array__DOT__check__14__name));
    }
    vlSelf->tb_array__DOT__h_rst_n = 1U;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       102);
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
                                       108);
    vlSelf->tb_array__DOT__h_start = 1U;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       110);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       110);
    vlSelf->tb_array__DOT__h_start = 0U;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       111);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       111);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       111);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       111);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       111);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       111);
    vlSelf->tb_array__DOT__h_tile_done = 1U;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       113);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       113);
    vlSelf->tb_array__DOT__h_tile_done = 0U;
    __Vtask_tb_array__DOT__check__16__cond = (0U == 
                                              (((IData)(vlSelf->tb_array__DOT__h_en_3) 
                                                << 3U) 
                                               | (((IData)(vlSelf->tb_array__DOT__h_en_2) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->tb_array__DOT__h_en_1) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->tb_array__DOT__h_en_0)))));
    __Vtask_tb_array__DOT__check__16__name = std::string{"tile 1: back in IDLE after tile_done"};
    vlSelf->tb_array__DOT__checks = ((IData)(1U) + vlSelf->tb_array__DOT__checks);
    if (__Vtask_tb_array__DOT__check__16__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_array__DOT__check__16__name));
    } else {
        vlSelf->tb_array__DOT__errors = ((IData)(1U) 
                                         + vlSelf->tb_array__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_array__DOT__check__16__name));
    }
    vlSelf->tb_array__DOT__h_start = 1U;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       117);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       117);
    vlSelf->tb_array__DOT__h_start = 0U;
    __Vtask_tb_array__DOT__check__17__cond = (1U == 
                                              (((IData)(vlSelf->tb_array__DOT__h_en_3) 
                                                << 3U) 
                                               | (((IData)(vlSelf->tb_array__DOT__h_en_2) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->tb_array__DOT__h_en_1) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->tb_array__DOT__h_en_0)))));
    __Vtask_tb_array__DOT__check__17__name = std::string{"tile 2: restarts cleanly into S0"};
    vlSelf->tb_array__DOT__checks = ((IData)(1U) + vlSelf->tb_array__DOT__checks);
    if (__Vtask_tb_array__DOT__check__17__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_array__DOT__check__17__name));
    } else {
        vlSelf->tb_array__DOT__errors = ((IData)(1U) 
                                         + vlSelf->tb_array__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_array__DOT__check__17__name));
    }
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       119);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       119);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       119);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       119);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       119);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       119);
    __Vtask_tb_array__DOT__check__18__cond = (0xfU 
                                              == (((IData)(vlSelf->tb_array__DOT__h_en_3) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->tb_array__DOT__h_en_2) 
                                                      << 2U) 
                                                     | (((IData)(vlSelf->tb_array__DOT__h_en_1) 
                                                         << 1U) 
                                                        | (IData)(vlSelf->tb_array__DOT__h_en_0)))));
    __Vtask_tb_array__DOT__check__18__name = std::string{"tile 2: reaches S3 pattern same as tile 1"};
    vlSelf->tb_array__DOT__checks = ((IData)(1U) + vlSelf->tb_array__DOT__checks);
    if (__Vtask_tb_array__DOT__check__18__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_array__DOT__check__18__name));
    } else {
        vlSelf->tb_array__DOT__errors = ((IData)(1U) 
                                         + vlSelf->tb_array__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_array__DOT__check__18__name));
    }
    vlSelf->tb_array__DOT__h_tile_done = 1U;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       122);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       122);
    vlSelf->tb_array__DOT__h_tile_done = 0U;
    __Vtask_tb_array__DOT__check__19__cond = (0U == 
                                              (((IData)(vlSelf->tb_array__DOT__h_en_3) 
                                                << 3U) 
                                               | (((IData)(vlSelf->tb_array__DOT__h_en_2) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->tb_array__DOT__h_en_1) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->tb_array__DOT__h_en_0)))));
    __Vtask_tb_array__DOT__check__19__name = std::string{"tile 2: back in IDLE after tile_done"};
    vlSelf->tb_array__DOT__checks = ((IData)(1U) + vlSelf->tb_array__DOT__checks);
    if (__Vtask_tb_array__DOT__check__19__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_array__DOT__check__19__name));
    } else {
        vlSelf->tb_array__DOT__errors = ((IData)(1U) 
                                         + vlSelf->tb_array__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_array__DOT__check__19__name));
    }
    VL_WRITEF("horizontal_en_fsm edge cases done\n\n");
    vlSelf->tb_array__DOT__v_rst_n = 0U;
    vlSelf->tb_array__DOT__v_start = 0U;
    vlSelf->tb_array__DOT__v_tile_done = 0U;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       143);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       143);
    vlSelf->tb_array__DOT__v_rst_n = 1U;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       145);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       150);
    VL_WRITEF("==== vertical_en_fsm ====\n");
    __Vtask_tb_array__DOT__check__22__cond = (0U == 
                                              (((IData)(vlSelf->tb_array__DOT__v_en_3) 
                                                << 3U) 
                                               | (((IData)(vlSelf->tb_array__DOT__v_en_2) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->tb_array__DOT__v_en_1) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->tb_array__DOT__v_en_0)))));
    __Vtask_tb_array__DOT__check__22__name = std::string{"idle: all en low"};
    vlSelf->tb_array__DOT__checks = ((IData)(1U) + vlSelf->tb_array__DOT__checks);
    if (__Vtask_tb_array__DOT__check__22__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_array__DOT__check__22__name));
    } else {
        vlSelf->tb_array__DOT__errors = ((IData)(1U) 
                                         + vlSelf->tb_array__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_array__DOT__check__22__name));
    }
    vlSelf->tb_array__DOT__v_start = 1U;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       155);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       155);
    vlSelf->tb_array__DOT__v_start = 0U;
    __Vtask_tb_array__DOT__check__23__cond = (0U == 
                                              (((IData)(vlSelf->tb_array__DOT__v_en_3) 
                                                << 3U) 
                                               | (((IData)(vlSelf->tb_array__DOT__v_en_2) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->tb_array__DOT__v_en_1) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->tb_array__DOT__v_en_0)))));
    __Vtask_tb_array__DOT__check__23__name = std::string{"S0: all en low (en_0 never asserts)"};
    vlSelf->tb_array__DOT__checks = ((IData)(1U) + vlSelf->tb_array__DOT__checks);
    if (__Vtask_tb_array__DOT__check__23__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_array__DOT__check__23__name));
    } else {
        vlSelf->tb_array__DOT__errors = ((IData)(1U) 
                                         + vlSelf->tb_array__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_array__DOT__check__23__name));
    }
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       158);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       158);
    __Vtask_tb_array__DOT__check__24__cond = (2U == 
                                              (((IData)(vlSelf->tb_array__DOT__v_en_3) 
                                                << 3U) 
                                               | (((IData)(vlSelf->tb_array__DOT__v_en_2) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->tb_array__DOT__v_en_1) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->tb_array__DOT__v_en_0)))));
    __Vtask_tb_array__DOT__check__24__name = std::string{"S1: en_1 only (single-cycle pulse)"};
    vlSelf->tb_array__DOT__checks = ((IData)(1U) + vlSelf->tb_array__DOT__checks);
    if (__Vtask_tb_array__DOT__check__24__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_array__DOT__check__24__name));
    } else {
        vlSelf->tb_array__DOT__errors = ((IData)(1U) 
                                         + vlSelf->tb_array__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_array__DOT__check__24__name));
    }
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       161);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       161);
    __Vtask_tb_array__DOT__check__25__cond = (4U == 
                                              (((IData)(vlSelf->tb_array__DOT__v_en_3) 
                                                << 3U) 
                                               | (((IData)(vlSelf->tb_array__DOT__v_en_2) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->tb_array__DOT__v_en_1) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->tb_array__DOT__v_en_0)))));
    __Vtask_tb_array__DOT__check__25__name = std::string{"S2: en_2 only (en_1 already deasserted)"};
    vlSelf->tb_array__DOT__checks = ((IData)(1U) + vlSelf->tb_array__DOT__checks);
    if (__Vtask_tb_array__DOT__check__25__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_array__DOT__check__25__name));
    } else {
        vlSelf->tb_array__DOT__errors = ((IData)(1U) 
                                         + vlSelf->tb_array__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_array__DOT__check__25__name));
    }
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       164);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       164);
    __Vtask_tb_array__DOT__check__26__cond = (8U == 
                                              (((IData)(vlSelf->tb_array__DOT__v_en_3) 
                                                << 3U) 
                                               | (((IData)(vlSelf->tb_array__DOT__v_en_2) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->tb_array__DOT__v_en_1) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->tb_array__DOT__v_en_0)))));
    __Vtask_tb_array__DOT__check__26__name = std::string{"S3: en_3 only, tile_done low so holds"};
    vlSelf->tb_array__DOT__checks = ((IData)(1U) + vlSelf->tb_array__DOT__checks);
    if (__Vtask_tb_array__DOT__check__26__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_array__DOT__check__26__name));
    } else {
        vlSelf->tb_array__DOT__errors = ((IData)(1U) 
                                         + vlSelf->tb_array__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_array__DOT__check__26__name));
    }
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       167);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       167);
    __Vtask_tb_array__DOT__check__27__cond = (8U == 
                                              (((IData)(vlSelf->tb_array__DOT__v_en_3) 
                                                << 3U) 
                                               | (((IData)(vlSelf->tb_array__DOT__v_en_2) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->tb_array__DOT__v_en_1) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->tb_array__DOT__v_en_0)))));
    __Vtask_tb_array__DOT__check__27__name = std::string{"S3 still holds en_3 (tile_done low)"};
    vlSelf->tb_array__DOT__checks = ((IData)(1U) + vlSelf->tb_array__DOT__checks);
    if (__Vtask_tb_array__DOT__check__27__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_array__DOT__check__27__name));
    } else {
        vlSelf->tb_array__DOT__errors = ((IData)(1U) 
                                         + vlSelf->tb_array__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_array__DOT__check__27__name));
    }
    vlSelf->tb_array__DOT__v_tile_done = 1U;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       174);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       174);
    vlSelf->tb_array__DOT__v_tile_done = 0U;
    __Vtask_tb_array__DOT__check__28__cond = (0U == 
                                              (((IData)(vlSelf->tb_array__DOT__v_en_3) 
                                                << 3U) 
                                               | (((IData)(vlSelf->tb_array__DOT__v_en_2) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->tb_array__DOT__v_en_1) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->tb_array__DOT__v_en_0)))));
    __Vtask_tb_array__DOT__check__28__name = std::string{"tile_done took effect: back in IDLE, all en low"};
    vlSelf->tb_array__DOT__checks = ((IData)(1U) + vlSelf->tb_array__DOT__checks);
    if (__Vtask_tb_array__DOT__check__28__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_array__DOT__check__28__name));
    } else {
        vlSelf->tb_array__DOT__errors = ((IData)(1U) 
                                         + vlSelf->tb_array__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_array__DOT__check__28__name));
    }
    VL_WRITEF("vertical_en_fsm done\n\n");
    VL_WRITEF("==== vertical_en_fsm edge cases ====\n");
    vlSelf->tb_array__DOT__v_rst_n = 0U;
    vlSelf->tb_array__DOT__v_start = 0U;
    vlSelf->tb_array__DOT__v_tile_done = 0U;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       143);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       143);
    vlSelf->tb_array__DOT__v_rst_n = 1U;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       145);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       187);
    vlSelf->tb_array__DOT__v_start = 1U;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       189);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       189);
    vlSelf->tb_array__DOT__v_start = 0U;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       190);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       190);
    __Vtask_tb_array__DOT__check__31__cond = (2U == 
                                              (((IData)(vlSelf->tb_array__DOT__v_en_3) 
                                                << 3U) 
                                               | (((IData)(vlSelf->tb_array__DOT__v_en_2) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->tb_array__DOT__v_en_1) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->tb_array__DOT__v_en_0)))));
    __Vtask_tb_array__DOT__check__31__name = std::string{"pre-check: S1 pattern"};
    vlSelf->tb_array__DOT__checks = ((IData)(1U) + vlSelf->tb_array__DOT__checks);
    if (__Vtask_tb_array__DOT__check__31__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_array__DOT__check__31__name));
    } else {
        vlSelf->tb_array__DOT__errors = ((IData)(1U) 
                                         + vlSelf->tb_array__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_array__DOT__check__31__name));
    }
    vlSelf->tb_array__DOT__v_tile_done = 1U;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       193);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       193);
    vlSelf->tb_array__DOT__v_tile_done = 0U;
    __Vtask_tb_array__DOT__check__32__cond = (4U == 
                                              (((IData)(vlSelf->tb_array__DOT__v_en_3) 
                                                << 3U) 
                                               | (((IData)(vlSelf->tb_array__DOT__v_en_2) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->tb_array__DOT__v_en_1) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->tb_array__DOT__v_en_0)))));
    __Vtask_tb_array__DOT__check__32__name = std::string{"tile_done asserted during S1 has no effect: still advances to S2"};
    vlSelf->tb_array__DOT__checks = ((IData)(1U) + vlSelf->tb_array__DOT__checks);
    if (__Vtask_tb_array__DOT__check__32__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_array__DOT__check__32__name));
    } else {
        vlSelf->tb_array__DOT__errors = ((IData)(1U) 
                                         + vlSelf->tb_array__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_array__DOT__check__32__name));
    }
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       200);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       200);
    __Vtask_tb_array__DOT__check__33__cond = (8U == 
                                              (((IData)(vlSelf->tb_array__DOT__v_en_3) 
                                                << 3U) 
                                               | (((IData)(vlSelf->tb_array__DOT__v_en_2) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->tb_array__DOT__v_en_1) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->tb_array__DOT__v_en_0)))));
    __Vtask_tb_array__DOT__check__33__name = std::string{"pre-check: S3 pattern"};
    vlSelf->tb_array__DOT__checks = ((IData)(1U) + vlSelf->tb_array__DOT__checks);
    if (__Vtask_tb_array__DOT__check__33__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_array__DOT__check__33__name));
    } else {
        vlSelf->tb_array__DOT__errors = ((IData)(1U) 
                                         + vlSelf->tb_array__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_array__DOT__check__33__name));
    }
    vlSelf->tb_array__DOT__v_rst_n = 0U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       203);
    __Vtask_tb_array__DOT__check__34__cond = (0U == 
                                              (((IData)(vlSelf->tb_array__DOT__v_en_3) 
                                                << 3U) 
                                               | (((IData)(vlSelf->tb_array__DOT__v_en_2) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->tb_array__DOT__v_en_1) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->tb_array__DOT__v_en_0)))));
    __Vtask_tb_array__DOT__check__34__name = std::string{"async reset mid-S3: all en immediately low"};
    vlSelf->tb_array__DOT__checks = ((IData)(1U) + vlSelf->tb_array__DOT__checks);
    if (__Vtask_tb_array__DOT__check__34__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_array__DOT__check__34__name));
    } else {
        vlSelf->tb_array__DOT__errors = ((IData)(1U) 
                                         + vlSelf->tb_array__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_array__DOT__check__34__name));
    }
    vlSelf->tb_array__DOT__v_rst_n = 1U;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       207);
    vlSelf->tb_array__DOT__v_rst_n = 0U;
    vlSelf->tb_array__DOT__v_start = 0U;
    vlSelf->tb_array__DOT__v_tile_done = 0U;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       143);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       143);
    vlSelf->tb_array__DOT__v_rst_n = 1U;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       145);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       213);
    vlSelf->tb_array__DOT__v_start = 1U;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       215);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       215);
    vlSelf->tb_array__DOT__v_start = 0U;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       216);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       216);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       216);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       216);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       216);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       216);
    vlSelf->tb_array__DOT__v_tile_done = 1U;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       218);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       218);
    vlSelf->tb_array__DOT__v_tile_done = 0U;
    __Vtask_tb_array__DOT__check__36__cond = (0U == 
                                              (((IData)(vlSelf->tb_array__DOT__v_en_3) 
                                                << 3U) 
                                               | (((IData)(vlSelf->tb_array__DOT__v_en_2) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->tb_array__DOT__v_en_1) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->tb_array__DOT__v_en_0)))));
    __Vtask_tb_array__DOT__check__36__name = std::string{"tile 1: back in IDLE after tile_done"};
    vlSelf->tb_array__DOT__checks = ((IData)(1U) + vlSelf->tb_array__DOT__checks);
    if (__Vtask_tb_array__DOT__check__36__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_array__DOT__check__36__name));
    } else {
        vlSelf->tb_array__DOT__errors = ((IData)(1U) 
                                         + vlSelf->tb_array__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_array__DOT__check__36__name));
    }
    vlSelf->tb_array__DOT__v_start = 1U;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       222);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       222);
    vlSelf->tb_array__DOT__v_start = 0U;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       223);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       223);
    __Vtask_tb_array__DOT__check__37__cond = (2U == 
                                              (((IData)(vlSelf->tb_array__DOT__v_en_3) 
                                                << 3U) 
                                               | (((IData)(vlSelf->tb_array__DOT__v_en_2) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->tb_array__DOT__v_en_1) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->tb_array__DOT__v_en_0)))));
    __Vtask_tb_array__DOT__check__37__name = std::string{"tile 2: reaches S1 pattern same as tile 1"};
    vlSelf->tb_array__DOT__checks = ((IData)(1U) + vlSelf->tb_array__DOT__checks);
    if (__Vtask_tb_array__DOT__check__37__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_array__DOT__check__37__name));
    } else {
        vlSelf->tb_array__DOT__errors = ((IData)(1U) 
                                         + vlSelf->tb_array__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_array__DOT__check__37__name));
    }
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       225);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       225);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       225);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       225);
    __Vtask_tb_array__DOT__check__38__cond = (8U == 
                                              (((IData)(vlSelf->tb_array__DOT__v_en_3) 
                                                << 3U) 
                                               | (((IData)(vlSelf->tb_array__DOT__v_en_2) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->tb_array__DOT__v_en_1) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->tb_array__DOT__v_en_0)))));
    __Vtask_tb_array__DOT__check__38__name = std::string{"tile 2: reaches S3 pattern same as tile 1"};
    vlSelf->tb_array__DOT__checks = ((IData)(1U) + vlSelf->tb_array__DOT__checks);
    if (__Vtask_tb_array__DOT__check__38__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_array__DOT__check__38__name));
    } else {
        vlSelf->tb_array__DOT__errors = ((IData)(1U) 
                                         + vlSelf->tb_array__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_array__DOT__check__38__name));
    }
    vlSelf->tb_array__DOT__v_tile_done = 1U;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       228);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       228);
    vlSelf->tb_array__DOT__v_tile_done = 0U;
    __Vtask_tb_array__DOT__check__39__cond = (0U == 
                                              (((IData)(vlSelf->tb_array__DOT__v_en_3) 
                                                << 3U) 
                                               | (((IData)(vlSelf->tb_array__DOT__v_en_2) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->tb_array__DOT__v_en_1) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->tb_array__DOT__v_en_0)))));
    __Vtask_tb_array__DOT__check__39__name = std::string{"tile 2: back in IDLE after tile_done"};
    vlSelf->tb_array__DOT__checks = ((IData)(1U) + vlSelf->tb_array__DOT__checks);
    if (__Vtask_tb_array__DOT__check__39__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_array__DOT__check__39__name));
    } else {
        vlSelf->tb_array__DOT__errors = ((IData)(1U) 
                                         + vlSelf->tb_array__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_array__DOT__check__39__name));
    }
    VL_WRITEF("vertical_en_fsm edge cases done\n\n");
    vlSelf->tb_array__DOT__arr_rst_n = 0U;
    vlSelf->tb_array__DOT__arr_preload = 0U;
    vlSelf->tb_array__DOT__arr_compute_start = 0U;
    vlSelf->tb_array__DOT__arr_clr = 0U;
    vlSelf->tb_array__DOT__arr_tile_done = 0U;
    vlSelf->tb_array__DOT__arr_drain = 0U;
    vlSelf->tb_array__DOT__arr_weight = 0U;
    vlSelf->tb_array__DOT__arr_activation = 0U;
    vlSelf->tb_array__DOT__arr_activation_valid = 0U;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       273);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       273);
    vlSelf->tb_array__DOT__arr_rst_n = 1U;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       275);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       275);
    VL_WRITEF("==== PE_array ====\n");
    __Vtask_tb_array__DOT__check__42__cond = (0U == 
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
    __Vtask_tb_array__DOT__check__42__name = std::string{"reset: product_array all zero"};
    vlSelf->tb_array__DOT__checks = ((IData)(1U) + vlSelf->tb_array__DOT__checks);
    if (__Vtask_tb_array__DOT__check__42__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_array__DOT__check__42__name));
    } else {
        vlSelf->tb_array__DOT__errors = ((IData)(1U) 
                                         + vlSelf->tb_array__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_array__DOT__check__42__name));
    }
    __Vtask_tb_array__DOT__check__43__cond = (1U & 
                                              (~ (IData)(vlSelf->tb_array__DOT__arr_output_valid)));
    __Vtask_tb_array__DOT__check__43__name = std::string{"reset: output_valid low"};
    vlSelf->tb_array__DOT__checks = ((IData)(1U) + vlSelf->tb_array__DOT__checks);
    if (__Vtask_tb_array__DOT__check__43__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_array__DOT__check__43__name));
    } else {
        vlSelf->tb_array__DOT__errors = ((IData)(1U) 
                                         + vlSelf->tb_array__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_array__DOT__check__43__name));
    }
    vlSelf->tb_array__DOT__arr_drain = 1U;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    __Vtask_tb_array__DOT__check__45__cond = vlSelf->tb_array__DOT__arr_output_valid;
    __Vtask_tb_array__DOT__check__45__name = std::string{"output_valid mirrors drain_state (comb assign)"};
    vlSelf->tb_array__DOT__checks = ((IData)(1U) + vlSelf->tb_array__DOT__checks);
    if (__Vtask_tb_array__DOT__check__45__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_array__DOT__check__45__name));
    } else {
        vlSelf->tb_array__DOT__errors = ((IData)(1U) 
                                         + vlSelf->tb_array__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_array__DOT__check__45__name));
    }
    vlSelf->tb_array__DOT__arr_drain = 0U;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    __Vtask_tb_array__DOT__check__47__cond = (1U & 
                                              (~ (IData)(vlSelf->tb_array__DOT__arr_output_valid)));
    __Vtask_tb_array__DOT__check__47__name = std::string{"output_valid drops when drain_state drops"};
    vlSelf->tb_array__DOT__checks = ((IData)(1U) + vlSelf->tb_array__DOT__checks);
    if (__Vtask_tb_array__DOT__check__47__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_array__DOT__check__47__name));
    } else {
        vlSelf->tb_array__DOT__errors = ((IData)(1U) 
                                         + vlSelf->tb_array__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_array__DOT__check__47__name));
    }
    vlSelf->tb_array__DOT__arr_preload = 1U;
    vlSelf->tb_array__DOT__arr_weight = 0x2020202U;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    vlSelf->tb_array__DOT__arr_preload = 0U;
    __Vtask_tb_array__DOT__check__49__cond = (0U == 
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
    __Vtask_tb_array__DOT__check__49__name = std::string{"preload propagated weight to product_array's row (row 3) via down_out"};
    vlSelf->tb_array__DOT__checks = ((IData)(1U) + vlSelf->tb_array__DOT__checks);
    if (__Vtask_tb_array__DOT__check__49__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_array__DOT__check__49__name));
    } else {
        vlSelf->tb_array__DOT__errors = ((IData)(1U) 
                                         + vlSelf->tb_array__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_array__DOT__check__49__name));
    }
    vlSelf->tb_array__DOT__arr_compute_start = 1U;
    vlSelf->tb_array__DOT__arr_activation_valid = 1U;
    vlSelf->tb_array__DOT__arr_activation = 0x3030303U;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    vlSelf->tb_array__DOT__arr_compute_start = 0U;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    __Vtask_tb_array__DOT__check__52__cond = (0U == 
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
    __Vtask_tb_array__DOT__check__52__name = std::string{"product_array reads 0 during compute (down_out is now cleared every compute_en cycle)"};
    vlSelf->tb_array__DOT__checks = ((IData)(1U) + vlSelf->tb_array__DOT__checks);
    if (__Vtask_tb_array__DOT__check__52__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_array__DOT__check__52__name));
    } else {
        vlSelf->tb_array__DOT__errors = ((IData)(1U) 
                                         + vlSelf->tb_array__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_array__DOT__check__52__name));
    }
    vlSelf->tb_array__DOT__arr_tile_done = 1U;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    vlSelf->tb_array__DOT__arr_tile_done = 0U;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    vlSelf->tb_array__DOT__arr_drain = 1U;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    __Vtask_tb_array__DOT__check__57__cond = ((0U != 
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
                                                       >> 0xdU))))) 
                                              & (0U 
                                                 != 
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
                                                        >> 0xdU)))));
    __Vtask_tb_array__DOT__check__57__name = std::string{"drain-after-tile_done surfaces a real (non-frozen, non-zero) MAC result"};
    vlSelf->tb_array__DOT__checks = ((IData)(1U) + vlSelf->tb_array__DOT__checks);
    if (__Vtask_tb_array__DOT__check__57__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_array__DOT__check__57__name));
    } else {
        vlSelf->tb_array__DOT__errors = ((IData)(1U) 
                                         + vlSelf->tb_array__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_array__DOT__check__57__name));
    }
    tb_array__DOT__arr_drain_snapshot[0U] = (IData)(
                                                    (((QData)((IData)(
                                                                      (vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[6U] 
                                                                       >> 0x10U))) 
                                                      << 0x21U) 
                                                     | (QData)((IData)(
                                                                       (0xffffU 
                                                                        & vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[6U])))));
    tb_array__DOT__arr_drain_snapshot[1U] = (IData)(
                                                    ((((QData)((IData)(
                                                                       (vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[6U] 
                                                                        >> 0x10U))) 
                                                       << 0x21U) 
                                                      | (QData)((IData)(
                                                                        (0xffffU 
                                                                         & vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[6U])))) 
                                                     >> 0x20U));
    tb_array__DOT__arr_drain_snapshot[2U] = (0x3fffcU 
                                             & (vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[7U] 
                                                << 2U));
    tb_array__DOT__arr_drain_snapshot[3U] = (0x7fff8U 
                                             & (vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[7U] 
                                                >> 0xdU));
    tb_array__DOT__arr_drain_snapshot[4U] = 0U;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    __Vtask_tb_array__DOT__check__59__cond = (0U == 
                                              ((((((IData)(
                                                           (((QData)((IData)(
                                                                             (vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[6U] 
                                                                              >> 0x10U))) 
                                                             << 0x21U) 
                                                            | (QData)((IData)(
                                                                              (0xffffU 
                                                                               & vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[6U]))))) 
                                                   ^ 
                                                   tb_array__DOT__arr_drain_snapshot[0U]) 
                                                  | ((IData)(
                                                             ((((QData)((IData)(
                                                                                (vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[6U] 
                                                                                >> 0x10U))) 
                                                                << 0x21U) 
                                                               | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[6U])))) 
                                                              >> 0x20U)) 
                                                     ^ 
                                                     tb_array__DOT__arr_drain_snapshot[1U])) 
                                                 | ((0x3fffcU 
                                                     & (vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[7U] 
                                                        << 2U)) 
                                                    ^ 
                                                    tb_array__DOT__arr_drain_snapshot[2U])) 
                                                | ((0x7fff8U 
                                                    & (vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[7U] 
                                                       >> 0xdU)) 
                                                   ^ 
                                                   tb_array__DOT__arr_drain_snapshot[3U])) 
                                               | tb_array__DOT__arr_drain_snapshot[4U]));
    __Vtask_tb_array__DOT__check__59__name = std::string{"holding drain_state: product_array stays stable at the drained value"};
    vlSelf->tb_array__DOT__checks = ((IData)(1U) + vlSelf->tb_array__DOT__checks);
    if (__Vtask_tb_array__DOT__check__59__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_array__DOT__check__59__name));
    } else {
        vlSelf->tb_array__DOT__errors = ((IData)(1U) 
                                         + vlSelf->tb_array__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_array__DOT__check__59__name));
    }
    vlSelf->tb_array__DOT__arr_drain = 0U;
    VL_WRITEF("PE_array done\n\n");
    VL_WRITEF("==== PE_array: activation_valid gating check ====\n");
    __Vtask_tb_array__DOT__run_pe_array_sequence__61__av = 0U;
    vlSelf->tb_array__DOT__arr_rst_n = 0U;
    vlSelf->tb_array__DOT__arr_preload = 0U;
    vlSelf->tb_array__DOT__arr_compute_start = 0U;
    vlSelf->tb_array__DOT__arr_clr = 0U;
    vlSelf->tb_array__DOT__arr_tile_done = 0U;
    vlSelf->tb_array__DOT__arr_drain = 0U;
    vlSelf->tb_array__DOT__arr_weight = 0U;
    vlSelf->tb_array__DOT__arr_activation = 0U;
    vlSelf->tb_array__DOT__arr_activation_valid = 0U;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       273);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       273);
    vlSelf->tb_array__DOT__arr_rst_n = 1U;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       275);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       275);
    vlSelf->tb_array__DOT__arr_activation_valid = __Vtask_tb_array__DOT__run_pe_array_sequence__61__av;
    vlSelf->tb_array__DOT__arr_preload = 1U;
    vlSelf->tb_array__DOT__arr_weight = 0x2020202U;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    vlSelf->tb_array__DOT__arr_preload = 0U;
    vlSelf->tb_array__DOT__arr_compute_start = 1U;
    vlSelf->tb_array__DOT__arr_activation = 0x3030303U;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    vlSelf->tb_array__DOT__arr_compute_start = 0U;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    vlSelf->tb_array__DOT__arr_tile_done = 1U;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    vlSelf->tb_array__DOT__arr_tile_done = 0U;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    vlSelf->tb_array__DOT__arr_drain = 1U;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    vlSelf->tb_array__DOT__arr_drain = 0U;
    __Vtask_tb_array__DOT__run_pe_array_sequence__61__result[0U] 
        = (IData)((((QData)((IData)((vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[6U] 
                                     >> 0x10U))) << 0x21U) 
                   | (QData)((IData)((0xffffU & vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[6U])))));
    __Vtask_tb_array__DOT__run_pe_array_sequence__61__result[1U] 
        = (IData)(((((QData)((IData)((vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[6U] 
                                      >> 0x10U))) << 0x21U) 
                    | (QData)((IData)((0xffffU & vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[6U])))) 
                   >> 0x20U));
    __Vtask_tb_array__DOT__run_pe_array_sequence__61__result[2U] 
        = (0x3fffcU & (vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[7U] 
                       << 2U));
    __Vtask_tb_array__DOT__run_pe_array_sequence__61__result[3U] 
        = (0x7fff8U & (vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[7U] 
                       >> 0xdU));
    __Vtask_tb_array__DOT__run_pe_array_sequence__61__result[4U] = 0U;
    __Vtask_tb_array__DOT__run_pe_array_activation_valid_test__60__result_valid_low[0U] 
        = __Vtask_tb_array__DOT__run_pe_array_sequence__61__result[0U];
    __Vtask_tb_array__DOT__run_pe_array_activation_valid_test__60__result_valid_low[1U] 
        = __Vtask_tb_array__DOT__run_pe_array_sequence__61__result[1U];
    __Vtask_tb_array__DOT__run_pe_array_activation_valid_test__60__result_valid_low[2U] 
        = __Vtask_tb_array__DOT__run_pe_array_sequence__61__result[2U];
    __Vtask_tb_array__DOT__run_pe_array_activation_valid_test__60__result_valid_low[3U] 
        = __Vtask_tb_array__DOT__run_pe_array_sequence__61__result[3U];
    __Vtask_tb_array__DOT__run_pe_array_activation_valid_test__60__result_valid_low[4U] 
        = __Vtask_tb_array__DOT__run_pe_array_sequence__61__result[4U];
    __Vtask_tb_array__DOT__run_pe_array_sequence__70__av = 1U;
    vlSelf->tb_array__DOT__arr_rst_n = 0U;
    vlSelf->tb_array__DOT__arr_preload = 0U;
    vlSelf->tb_array__DOT__arr_compute_start = 0U;
    vlSelf->tb_array__DOT__arr_clr = 0U;
    vlSelf->tb_array__DOT__arr_tile_done = 0U;
    vlSelf->tb_array__DOT__arr_drain = 0U;
    vlSelf->tb_array__DOT__arr_weight = 0U;
    vlSelf->tb_array__DOT__arr_activation = 0U;
    vlSelf->tb_array__DOT__arr_activation_valid = 0U;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       273);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       273);
    vlSelf->tb_array__DOT__arr_rst_n = 1U;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       275);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       275);
    vlSelf->tb_array__DOT__arr_activation_valid = __Vtask_tb_array__DOT__run_pe_array_sequence__70__av;
    vlSelf->tb_array__DOT__arr_preload = 1U;
    vlSelf->tb_array__DOT__arr_weight = 0x2020202U;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    vlSelf->tb_array__DOT__arr_preload = 0U;
    vlSelf->tb_array__DOT__arr_compute_start = 1U;
    vlSelf->tb_array__DOT__arr_activation = 0x3030303U;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    vlSelf->tb_array__DOT__arr_compute_start = 0U;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    vlSelf->tb_array__DOT__arr_tile_done = 1U;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    vlSelf->tb_array__DOT__arr_tile_done = 0U;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    vlSelf->tb_array__DOT__arr_drain = 1U;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    vlSelf->tb_array__DOT__arr_drain = 0U;
    __Vtask_tb_array__DOT__run_pe_array_sequence__70__result[0U] 
        = (IData)((((QData)((IData)((vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[6U] 
                                     >> 0x10U))) << 0x21U) 
                   | (QData)((IData)((0xffffU & vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[6U])))));
    __Vtask_tb_array__DOT__run_pe_array_sequence__70__result[1U] 
        = (IData)(((((QData)((IData)((vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[6U] 
                                      >> 0x10U))) << 0x21U) 
                    | (QData)((IData)((0xffffU & vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[6U])))) 
                   >> 0x20U));
    __Vtask_tb_array__DOT__run_pe_array_sequence__70__result[2U] 
        = (0x3fffcU & (vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[7U] 
                       << 2U));
    __Vtask_tb_array__DOT__run_pe_array_sequence__70__result[3U] 
        = (0x7fff8U & (vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[7U] 
                       >> 0xdU));
    __Vtask_tb_array__DOT__run_pe_array_sequence__70__result[4U] = 0U;
    __Vtask_tb_array__DOT__run_pe_array_activation_valid_test__60__result_valid_high[0U] 
        = __Vtask_tb_array__DOT__run_pe_array_sequence__70__result[0U];
    __Vtask_tb_array__DOT__run_pe_array_activation_valid_test__60__result_valid_high[1U] 
        = __Vtask_tb_array__DOT__run_pe_array_sequence__70__result[1U];
    __Vtask_tb_array__DOT__run_pe_array_activation_valid_test__60__result_valid_high[2U] 
        = __Vtask_tb_array__DOT__run_pe_array_sequence__70__result[2U];
    __Vtask_tb_array__DOT__run_pe_array_activation_valid_test__60__result_valid_high[3U] 
        = __Vtask_tb_array__DOT__run_pe_array_sequence__70__result[3U];
    __Vtask_tb_array__DOT__run_pe_array_activation_valid_test__60__result_valid_high[4U] 
        = __Vtask_tb_array__DOT__run_pe_array_sequence__70__result[4U];
    __Vtask_tb_array__DOT__check__79__cond = (0U == 
                                              ((((__Vtask_tb_array__DOT__run_pe_array_activation_valid_test__60__result_valid_low[0U] 
                                                  | __Vtask_tb_array__DOT__run_pe_array_activation_valid_test__60__result_valid_low[1U]) 
                                                 | __Vtask_tb_array__DOT__run_pe_array_activation_valid_test__60__result_valid_low[2U]) 
                                                | __Vtask_tb_array__DOT__run_pe_array_activation_valid_test__60__result_valid_low[3U]) 
                                               | __Vtask_tb_array__DOT__run_pe_array_activation_valid_test__60__result_valid_low[4U]));
    __Vtask_tb_array__DOT__check__79__name = std::string{"activation_valid=0 the whole time: val_act_in never latches, drained result is all zero"};
    vlSelf->tb_array__DOT__checks = ((IData)(1U) + vlSelf->tb_array__DOT__checks);
    if (__Vtask_tb_array__DOT__check__79__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_array__DOT__check__79__name));
    } else {
        vlSelf->tb_array__DOT__errors = ((IData)(1U) 
                                         + vlSelf->tb_array__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_array__DOT__check__79__name));
    }
    __Vtask_tb_array__DOT__check__80__cond = ((0U != 
                                               ((((__Vtask_tb_array__DOT__run_pe_array_activation_valid_test__60__result_valid_high[0U] 
                                                   | __Vtask_tb_array__DOT__run_pe_array_activation_valid_test__60__result_valid_high[1U]) 
                                                  | __Vtask_tb_array__DOT__run_pe_array_activation_valid_test__60__result_valid_high[2U]) 
                                                 | __Vtask_tb_array__DOT__run_pe_array_activation_valid_test__60__result_valid_high[3U]) 
                                                | __Vtask_tb_array__DOT__run_pe_array_activation_valid_test__60__result_valid_high[4U])) 
                                              & (0U 
                                                 != 
                                                 (((((__Vtask_tb_array__DOT__run_pe_array_activation_valid_test__60__result_valid_high[0U] 
                                                      ^ 
                                                      __Vtask_tb_array__DOT__run_pe_array_activation_valid_test__60__result_valid_low[0U]) 
                                                     | (__Vtask_tb_array__DOT__run_pe_array_activation_valid_test__60__result_valid_high[1U] 
                                                        ^ 
                                                        __Vtask_tb_array__DOT__run_pe_array_activation_valid_test__60__result_valid_low[1U])) 
                                                    | (__Vtask_tb_array__DOT__run_pe_array_activation_valid_test__60__result_valid_high[2U] 
                                                       ^ 
                                                       __Vtask_tb_array__DOT__run_pe_array_activation_valid_test__60__result_valid_low[2U])) 
                                                   | (__Vtask_tb_array__DOT__run_pe_array_activation_valid_test__60__result_valid_high[3U] 
                                                      ^ 
                                                      __Vtask_tb_array__DOT__run_pe_array_activation_valid_test__60__result_valid_low[3U])) 
                                                  | (__Vtask_tb_array__DOT__run_pe_array_activation_valid_test__60__result_valid_high[4U] 
                                                     ^ 
                                                     __Vtask_tb_array__DOT__run_pe_array_activation_valid_test__60__result_valid_low[4U]))));
    __Vtask_tb_array__DOT__check__80__name = std::string{"activation_valid=1 lets the real activation value flow through: drained result is non-zero and differs from the av=0 case"};
    vlSelf->tb_array__DOT__checks = ((IData)(1U) + vlSelf->tb_array__DOT__checks);
    if (__Vtask_tb_array__DOT__check__80__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_array__DOT__check__80__name));
    } else {
        vlSelf->tb_array__DOT__errors = ((IData)(1U) 
                                         + vlSelf->tb_array__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_array__DOT__check__80__name));
    }
    VL_WRITEF("PE_array activation_valid gating check done\n\n");
    VL_WRITEF("==== PE_array: per-column preload check ====\n");
    vlSelf->tb_array__DOT__arr_rst_n = 0U;
    vlSelf->tb_array__DOT__arr_preload = 0U;
    vlSelf->tb_array__DOT__arr_compute_start = 0U;
    vlSelf->tb_array__DOT__arr_clr = 0U;
    vlSelf->tb_array__DOT__arr_tile_done = 0U;
    vlSelf->tb_array__DOT__arr_drain = 0U;
    vlSelf->tb_array__DOT__arr_weight = 0U;
    vlSelf->tb_array__DOT__arr_activation = 0U;
    vlSelf->tb_array__DOT__arr_activation_valid = 0U;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       273);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       273);
    vlSelf->tb_array__DOT__arr_rst_n = 1U;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       275);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       275);
    vlSelf->tb_array__DOT__arr_preload = 1U;
    vlSelf->tb_array__DOT__arr_weight = 0x281e140aU;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    vlSelf->tb_array__DOT__arr_preload = 0U;
    __Vtask_tb_array__DOT__check__84__cond = (0xaULL 
                                              == (0x1ffffffffULL 
                                                  & (((QData)((IData)(
                                                                      ((((QData)((IData)(
                                                                                (vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[6U] 
                                                                                >> 0x10U))) 
                                                                         << 0x21U) 
                                                                        | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[6U])))) 
                                                                       >> 0x20U))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       (((QData)((IData)(
                                                                                (vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[6U] 
                                                                                >> 0x10U))) 
                                                                         << 0x21U) 
                                                                        | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[6U])))))))));
    __Vtask_tb_array__DOT__check__84__name = std::string{"column 0 preloaded correctly"};
    vlSelf->tb_array__DOT__checks = ((IData)(1U) + vlSelf->tb_array__DOT__checks);
    if (__Vtask_tb_array__DOT__check__84__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_array__DOT__check__84__name));
    } else {
        vlSelf->tb_array__DOT__errors = ((IData)(1U) 
                                         + vlSelf->tb_array__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_array__DOT__check__84__name));
    }
    __Vtask_tb_array__DOT__check__85__cond = (0x14ULL 
                                              == (0x1ffffffffULL 
                                                  & (((QData)((IData)(
                                                                      (0x3fffcU 
                                                                       & (vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[7U] 
                                                                          << 2U)))) 
                                                      << 0x1fU) 
                                                     | ((QData)((IData)(
                                                                        ((((QData)((IData)(
                                                                                (vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[6U] 
                                                                                >> 0x10U))) 
                                                                           << 0x21U) 
                                                                          | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[6U])))) 
                                                                         >> 0x20U))) 
                                                        >> 1U))));
    __Vtask_tb_array__DOT__check__85__name = std::string{"column 1 preloaded correctly"};
    vlSelf->tb_array__DOT__checks = ((IData)(1U) + vlSelf->tb_array__DOT__checks);
    if (__Vtask_tb_array__DOT__check__85__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_array__DOT__check__85__name));
    } else {
        vlSelf->tb_array__DOT__errors = ((IData)(1U) 
                                         + vlSelf->tb_array__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_array__DOT__check__85__name));
    }
    __Vtask_tb_array__DOT__check__86__cond = (0x1eULL 
                                              == (0x1ffffffffULL 
                                                  & (((QData)((IData)(
                                                                      (0x7fff8U 
                                                                       & (vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[7U] 
                                                                          >> 0xdU)))) 
                                                      << 0x1eU) 
                                                     | ((QData)((IData)(
                                                                        (0x3fffcU 
                                                                         & (vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[7U] 
                                                                            << 2U)))) 
                                                        >> 2U))));
    __Vtask_tb_array__DOT__check__86__name = std::string{"column 2 preloaded correctly"};
    vlSelf->tb_array__DOT__checks = ((IData)(1U) + vlSelf->tb_array__DOT__checks);
    if (__Vtask_tb_array__DOT__check__86__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_array__DOT__check__86__name));
    } else {
        vlSelf->tb_array__DOT__errors = ((IData)(1U) 
                                         + vlSelf->tb_array__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_array__DOT__check__86__name));
    }
    __Vtask_tb_array__DOT__check__87__cond = (0x28ULL 
                                              == (0x1ffffffffULL 
                                                  & ((QData)((IData)(
                                                                     (0x7fff8U 
                                                                      & (vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[7U] 
                                                                         >> 0xdU)))) 
                                                     >> 3U)));
    __Vtask_tb_array__DOT__check__87__name = std::string{"column 3 preloaded correctly"};
    vlSelf->tb_array__DOT__checks = ((IData)(1U) + vlSelf->tb_array__DOT__checks);
    if (__Vtask_tb_array__DOT__check__87__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_array__DOT__check__87__name));
    } else {
        vlSelf->tb_array__DOT__errors = ((IData)(1U) 
                                         + vlSelf->tb_array__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_array__DOT__check__87__name));
    }
    VL_WRITEF("PE_array per-column preload check done\n\n");
    VL_WRITEF("==== PE_array: back-to-back tile reuse check ====\n");
    vlSelf->tb_array__DOT__arr_rst_n = 0U;
    vlSelf->tb_array__DOT__arr_preload = 0U;
    vlSelf->tb_array__DOT__arr_compute_start = 0U;
    vlSelf->tb_array__DOT__arr_clr = 0U;
    vlSelf->tb_array__DOT__arr_tile_done = 0U;
    vlSelf->tb_array__DOT__arr_drain = 0U;
    vlSelf->tb_array__DOT__arr_weight = 0U;
    vlSelf->tb_array__DOT__arr_activation = 0U;
    vlSelf->tb_array__DOT__arr_activation_valid = 0U;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       273);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       273);
    vlSelf->tb_array__DOT__arr_rst_n = 1U;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       275);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       275);
    vlSelf->tb_array__DOT__arr_preload = 1U;
    vlSelf->tb_array__DOT__arr_weight = 0x2020202U;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    vlSelf->tb_array__DOT__arr_preload = 0U;
    __Vtask_tb_array__DOT__check__91__cond = (0U == 
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
    __Vtask_tb_array__DOT__check__91__name = std::string{"tile 1: preload landed"};
    vlSelf->tb_array__DOT__checks = ((IData)(1U) + vlSelf->tb_array__DOT__checks);
    if (__Vtask_tb_array__DOT__check__91__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_array__DOT__check__91__name));
    } else {
        vlSelf->tb_array__DOT__errors = ((IData)(1U) 
                                         + vlSelf->tb_array__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_array__DOT__check__91__name));
    }
    vlSelf->tb_array__DOT__arr_tile_done = 1U;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    vlSelf->tb_array__DOT__arr_tile_done = 0U;
    vlSelf->tb_array__DOT__arr_preload = 1U;
    vlSelf->tb_array__DOT__arr_weight = 0x7070707U;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    vlSelf->tb_array__DOT__arr_preload = 0U;
    __Vtask_tb_array__DOT__check__94__cond = (0U == 
                                              ((((7U 
                                                  ^ (IData)(
                                                            (((QData)((IData)(
                                                                              (vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[6U] 
                                                                               >> 0x10U))) 
                                                              << 0x21U) 
                                                             | (QData)((IData)(
                                                                               (0xffffU 
                                                                                & vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[6U])))))) 
                                                 | (0xeU 
                                                    ^ (IData)(
                                                              ((((QData)((IData)(
                                                                                (vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[6U] 
                                                                                >> 0x10U))) 
                                                                 << 0x21U) 
                                                                | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[6U])))) 
                                                               >> 0x20U)))) 
                                                | (0x1cU 
                                                   ^ 
                                                   (0x3fffcU 
                                                    & (vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[7U] 
                                                       << 2U)))) 
                                               | (0x38U 
                                                  ^ 
                                                  (0x7fff8U 
                                                   & (vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[7U] 
                                                      >> 0xdU)))));
    __Vtask_tb_array__DOT__check__94__name = std::string{"tile 2: new weight preloaded cleanly after tile 1's tile_done"};
    vlSelf->tb_array__DOT__checks = ((IData)(1U) + vlSelf->tb_array__DOT__checks);
    if (__Vtask_tb_array__DOT__check__94__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_array__DOT__check__94__name));
    } else {
        vlSelf->tb_array__DOT__errors = ((IData)(1U) 
                                         + vlSelf->tb_array__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_array__DOT__check__94__name));
    }
    VL_WRITEF("PE_array back-to-back tile reuse check done\n\n");
    VL_WRITEF("==== PE_array: reset after a real value is loaded ====\n");
    vlSelf->tb_array__DOT__arr_rst_n = 0U;
    vlSelf->tb_array__DOT__arr_preload = 0U;
    vlSelf->tb_array__DOT__arr_compute_start = 0U;
    vlSelf->tb_array__DOT__arr_clr = 0U;
    vlSelf->tb_array__DOT__arr_tile_done = 0U;
    vlSelf->tb_array__DOT__arr_drain = 0U;
    vlSelf->tb_array__DOT__arr_weight = 0U;
    vlSelf->tb_array__DOT__arr_activation = 0U;
    vlSelf->tb_array__DOT__arr_activation_valid = 0U;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       273);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       273);
    vlSelf->tb_array__DOT__arr_rst_n = 1U;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       275);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       275);
    vlSelf->tb_array__DOT__arr_preload = 1U;
    vlSelf->tb_array__DOT__arr_weight = 0x9090909U;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    vlSelf->tb_array__DOT__arr_preload = 0U;
    __Vtask_tb_array__DOT__run_pe_array_reset_mid_preload_test__95__pre_reset_value[0U] 
        = (IData)((((QData)((IData)((vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[6U] 
                                     >> 0x10U))) << 0x21U) 
                   | (QData)((IData)((0xffffU & vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[6U])))));
    __Vtask_tb_array__DOT__run_pe_array_reset_mid_preload_test__95__pre_reset_value[1U] 
        = (IData)(((((QData)((IData)((vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[6U] 
                                      >> 0x10U))) << 0x21U) 
                    | (QData)((IData)((0xffffU & vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[6U])))) 
                   >> 0x20U));
    __Vtask_tb_array__DOT__run_pe_array_reset_mid_preload_test__95__pre_reset_value[2U] 
        = (0x3fffcU & (vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[7U] 
                       << 2U));
    __Vtask_tb_array__DOT__run_pe_array_reset_mid_preload_test__95__pre_reset_value[3U] 
        = (0x7fff8U & (vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[7U] 
                       >> 0xdU));
    __Vtask_tb_array__DOT__run_pe_array_reset_mid_preload_test__95__pre_reset_value[4U] = 0U;
    __Vtask_tb_array__DOT__check__98__cond = (0U == 
                                              (((((9U 
                                                   ^ 
                                                   __Vtask_tb_array__DOT__run_pe_array_reset_mid_preload_test__95__pre_reset_value[0U]) 
                                                  | (0x12U 
                                                     ^ 
                                                     __Vtask_tb_array__DOT__run_pe_array_reset_mid_preload_test__95__pre_reset_value[1U])) 
                                                 | (0x24U 
                                                    ^ 
                                                    __Vtask_tb_array__DOT__run_pe_array_reset_mid_preload_test__95__pre_reset_value[2U])) 
                                                | (0x48U 
                                                   ^ 
                                                   __Vtask_tb_array__DOT__run_pe_array_reset_mid_preload_test__95__pre_reset_value[3U])) 
                                               | __Vtask_tb_array__DOT__run_pe_array_reset_mid_preload_test__95__pre_reset_value[4U]));
    __Vtask_tb_array__DOT__check__98__name = std::string{"pre-check: product_array holds the preloaded value"};
    vlSelf->tb_array__DOT__checks = ((IData)(1U) + vlSelf->tb_array__DOT__checks);
    if (__Vtask_tb_array__DOT__check__98__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_array__DOT__check__98__name));
    } else {
        vlSelf->tb_array__DOT__errors = ((IData)(1U) 
                                         + vlSelf->tb_array__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_array__DOT__check__98__name));
    }
    vlSelf->tb_array__DOT__arr_rst_n = 0U;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       279);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_array.sv", 
                                       279);
    __Vtemp_178[0U] = (IData)((((QData)((IData)((vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[6U] 
                                                 >> 0x10U))) 
                                << 0x21U) | (QData)((IData)(
                                                            (0xffffU 
                                                             & vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[6U])))));
    __Vtemp_178[1U] = (IData)(((((QData)((IData)((vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[6U] 
                                                  >> 0x10U))) 
                                 << 0x21U) | (QData)((IData)(
                                                             (0xffffU 
                                                              & vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[6U])))) 
                               >> 0x20U));
    __Vtemp_178[2U] = (0x3fffcU & (vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[7U] 
                                   << 2U));
    __Vtemp_178[3U] = (0x7fff8U & (vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[7U] 
                                   >> 0xdU));
    __Vtemp_178[4U] = 0U;
    VL_WRITEF("[INFO] product_array after async reset (with a prior real value loaded): %x (pre-reset value was %x)\n",
              132,__Vtemp_178.data(),132,__Vtask_tb_array__DOT__run_pe_array_reset_mid_preload_test__95__pre_reset_value.data());
    __Vtask_tb_array__DOT__check__100__cond = (0U == 
                                               ((((((IData)(
                                                            (((QData)((IData)(
                                                                              (vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[6U] 
                                                                               >> 0x10U))) 
                                                              << 0x21U) 
                                                             | (QData)((IData)(
                                                                               (0xffffU 
                                                                                & vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[6U]))))) 
                                                    ^ 
                                                    __Vtask_tb_array__DOT__run_pe_array_reset_mid_preload_test__95__pre_reset_value[0U]) 
                                                   | ((IData)(
                                                              ((((QData)((IData)(
                                                                                (vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[6U] 
                                                                                >> 0x10U))) 
                                                                 << 0x21U) 
                                                                | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[6U])))) 
                                                               >> 0x20U)) 
                                                      ^ 
                                                      __Vtask_tb_array__DOT__run_pe_array_reset_mid_preload_test__95__pre_reset_value[1U])) 
                                                  | ((0x3fffcU 
                                                      & (vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[7U] 
                                                         << 2U)) 
                                                     ^ 
                                                     __Vtask_tb_array__DOT__run_pe_array_reset_mid_preload_test__95__pre_reset_value[2U])) 
                                                 | ((0x7fff8U 
                                                     & (vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[7U] 
                                                        >> 0xdU)) 
                                                    ^ 
                                                    __Vtask_tb_array__DOT__run_pe_array_reset_mid_preload_test__95__pre_reset_value[3U])) 
                                                | __Vtask_tb_array__DOT__run_pe_array_reset_mid_preload_test__95__pre_reset_value[4U]));
    __Vtask_tb_array__DOT__check__100__name = std::string{"NOTE: down_out is not in PE.sv's reset branch, so product_array is NOT forced to zero by rst_n once a real value has been preloaded"};
    vlSelf->tb_array__DOT__checks = ((IData)(1U) + vlSelf->tb_array__DOT__checks);
    if (__Vtask_tb_array__DOT__check__100__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_array__DOT__check__100__name));
    } else {
        vlSelf->tb_array__DOT__errors = ((IData)(1U) 
                                         + vlSelf->tb_array__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_array__DOT__check__100__name));
    }
    vlSelf->tb_array__DOT__arr_rst_n = 1U;
    co_await vlSelf->__VtrigSched_h25dd34e8__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_array.clk)", 
                                                       "tb/tb_array.sv", 
                                                       497);
    VL_WRITEF("PE_array reset-after-real-value check done\n\n==== SUMMARY ====\ntotal: %0d/%0d checks passed\n",
              32,(vlSelf->tb_array__DOT__checks - vlSelf->tb_array__DOT__errors),
              32,vlSelf->tb_array__DOT__checks);
    VL_FINISH_MT("tb/tb_array.sv", 515, "");
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
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_array__ConstPool__TABLE_h95214b9c_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_array__ConstPool__TABLE_he5d58018_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_array__ConstPool__TABLE_h26d33955_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_array__ConstPool__TABLE_hfc07e341_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_array__ConstPool__TABLE_h25f53c5b_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_array__ConstPool__TABLE_hb598fdfd_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_array__ConstPool__TABLE_h2fe71d6b_0;

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
    __Vtableidx4 = (((IData)(vlSelf->tb_array__DOT__arr_tile_done) 
                     << 6U) | (((IData)(vlSelf->tb_array__DOT__arr_compute_start) 
                                << 5U) | (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__v_fsm_1__DOT__current_state)));
    vlSelf->tb_array__DOT__arr_dut__DOT__v_fsm_1__DOT__next_state 
        = Vtb_array__ConstPool__TABLE_h73872590_0[__Vtableidx4];
    vlSelf->tb_array__DOT__arr_dut__DOT__v_en_3 = Vtb_array__ConstPool__TABLE_h95214b9c_0
        [__Vtableidx4];
    vlSelf->tb_array__DOT__arr_dut__DOT__v_en_2 = Vtb_array__ConstPool__TABLE_h25f53c5b_0
        [__Vtableidx4];
    vlSelf->tb_array__DOT__arr_dut__DOT__v_en_1 = Vtb_array__ConstPool__TABLE_hb598fdfd_0
        [__Vtableidx4];
    vlSelf->tb_array__DOT__arr_dut__DOT__v_en_0 = Vtb_array__ConstPool__TABLE_h2fe71d6b_0
        [__Vtableidx4];
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
            if ((1U & ((~ (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__h_en_3)) 
                       & (~ (IData)(vlSelf->tb_array__DOT__arr_drain))))) {
                __Vdly__tb_array__DOT__arr_dut__DOT__pe_0_3__DOT__accum_reg = 0U;
                __Vdly__tb_array__DOT__arr_dut__DOT__pe_3_3__DOT__accum_reg = 0U;
                __Vdly__tb_array__DOT__arr_dut__DOT__pe_2_3__DOT__accum_reg = 0U;
                __Vdly__tb_array__DOT__arr_dut__DOT__pe_1_3__DOT__accum_reg = 0U;
            }
            vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_0_3__down_out = 0U;
            __Vdly__tb_array__DOT__arr_dut__DOT__pe_0_2__DOT__product_reg = 0U;
            if ((1U & ((~ (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__h_en_2)) 
                       & (~ (IData)(vlSelf->tb_array__DOT__arr_drain))))) {
                __Vdly__tb_array__DOT__arr_dut__DOT__pe_0_2__DOT__accum_reg = 0U;
                __Vdly__tb_array__DOT__arr_dut__DOT__pe_3_2__DOT__accum_reg = 0U;
                __Vdly__tb_array__DOT__arr_dut__DOT__pe_2_2__DOT__accum_reg = 0U;
                __Vdly__tb_array__DOT__arr_dut__DOT__pe_1_2__DOT__accum_reg = 0U;
            }
            vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_0_2__down_out = 0U;
            __Vdly__tb_array__DOT__arr_dut__DOT__pe_0_1__DOT__product_reg = 0U;
            if ((1U & ((~ (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__h_en_1)) 
                       & (~ (IData)(vlSelf->tb_array__DOT__arr_drain))))) {
                __Vdly__tb_array__DOT__arr_dut__DOT__pe_0_1__DOT__accum_reg = 0U;
                __Vdly__tb_array__DOT__arr_dut__DOT__pe_3_1__DOT__accum_reg = 0U;
                __Vdly__tb_array__DOT__arr_dut__DOT__pe_2_1__DOT__accum_reg = 0U;
                __Vdly__tb_array__DOT__arr_dut__DOT__pe_1_1__DOT__accum_reg = 0U;
            }
            vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_0_1__down_out = 0U;
            __Vdly__tb_array__DOT__arr_dut__DOT__pe_0_0__DOT__product_reg = 0U;
            if ((1U & ((~ (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__h_en_0)) 
                       & (~ (IData)(vlSelf->tb_array__DOT__arr_drain))))) {
                __Vdly__tb_array__DOT__arr_dut__DOT__pe_0_0__DOT__accum_reg = 0U;
                __Vdly__tb_array__DOT__arr_dut__DOT__pe_3_0__DOT__accum_reg = 0U;
                __Vdly__tb_array__DOT__arr_dut__DOT__pe_2_0__DOT__accum_reg = 0U;
                __Vdly__tb_array__DOT__arr_dut__DOT__pe_1_0__DOT__accum_reg = 0U;
            }
            vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_0_0__down_out = 0U;
            __Vdly__tb_array__DOT__arr_dut__DOT__pe_3_3__DOT__product_reg = 0U;
            vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_3_3__down_out = 0U;
            __Vdly__tb_array__DOT__arr_dut__DOT__pe_3_2__DOT__product_reg = 0U;
            vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_3_2__down_out = 0U;
            __Vdly__tb_array__DOT__arr_dut__DOT__pe_3_1__DOT__product_reg = 0U;
            vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_3_1__down_out = 0U;
            __Vdly__tb_array__DOT__arr_dut__DOT__pe_2_3__DOT__product_reg = 0U;
            vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_2_3__down_out = 0U;
            __Vdly__tb_array__DOT__arr_dut__DOT__pe_2_2__DOT__product_reg = 0U;
            vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_2_2__down_out = 0U;
            __Vdly__tb_array__DOT__arr_dut__DOT__pe_2_1__DOT__product_reg = 0U;
            vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_2_1__down_out = 0U;
            __Vdly__tb_array__DOT__arr_dut__DOT__pe_1_3__DOT__product_reg = 0U;
            vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_1_3__down_out = 0U;
            __Vdly__tb_array__DOT__arr_dut__DOT__pe_1_2__DOT__product_reg = 0U;
            vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_1_2__down_out = 0U;
            __Vdly__tb_array__DOT__arr_dut__DOT__pe_1_1__DOT__product_reg = 0U;
            vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_1_1__down_out = 0U;
            __Vdly__tb_array__DOT__arr_dut__DOT__pe_3_0__DOT__product_reg = 0U;
            vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_3_0__down_out = 0U;
            __Vdly__tb_array__DOT__arr_dut__DOT__pe_2_0__DOT__product_reg = 0U;
            vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_2_0__down_out = 0U;
            __Vdly__tb_array__DOT__arr_dut__DOT__pe_1_0__DOT__product_reg = 0U;
            vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_1_0__down_out = 0U;
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
            } else if (vlSelf->tb_array__DOT__arr_drain) {
                if (vlSelf->tb_array__DOT__arr_dut__DOT__v_en_0) {
                    __Vdly__tb_array__DOT__arr_dut__DOT__pe_0_3__DOT__accum_reg = 0U;
                    __Vdly__tb_array__DOT__arr_dut__DOT__pe_0_2__DOT__accum_reg = 0U;
                    __Vdly__tb_array__DOT__arr_dut__DOT__pe_0_1__DOT__accum_reg = 0U;
                    __Vdly__tb_array__DOT__arr_dut__DOT__pe_0_0__DOT__accum_reg = 0U;
                } else {
                    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_0_3__down_out 
                        = vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_3__DOT__accum_reg;
                    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_0_2__down_out 
                        = vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_2__DOT__accum_reg;
                    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_0_1__down_out 
                        = vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_1__DOT__accum_reg;
                    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_0_0__down_out 
                        = vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_0__DOT__accum_reg;
                }
                if (vlSelf->tb_array__DOT__arr_dut__DOT__v_en_3) {
                    __Vdly__tb_array__DOT__arr_dut__DOT__pe_3_3__DOT__accum_reg 
                        = (vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[5U] 
                           >> 0x10U);
                    __Vdly__tb_array__DOT__arr_dut__DOT__pe_3_2__DOT__accum_reg 
                        = (0xffffU & vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[5U]);
                    __Vdly__tb_array__DOT__arr_dut__DOT__pe_3_1__DOT__accum_reg 
                        = (vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[4U] 
                           >> 0x10U);
                    __Vdly__tb_array__DOT__arr_dut__DOT__pe_3_0__DOT__accum_reg 
                        = (0xffffU & vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[4U]);
                } else {
                    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_3_3__down_out 
                        = vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_3__DOT__accum_reg;
                    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_3_2__down_out 
                        = vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_2__DOT__accum_reg;
                    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_3_1__down_out 
                        = vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_1__DOT__accum_reg;
                    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_3_0__down_out 
                        = vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_0__DOT__accum_reg;
                }
                if (vlSelf->tb_array__DOT__arr_dut__DOT__v_en_2) {
                    __Vdly__tb_array__DOT__arr_dut__DOT__pe_2_3__DOT__accum_reg 
                        = (vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[3U] 
                           >> 0x10U);
                    __Vdly__tb_array__DOT__arr_dut__DOT__pe_2_2__DOT__accum_reg 
                        = (0xffffU & vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[3U]);
                    __Vdly__tb_array__DOT__arr_dut__DOT__pe_2_1__DOT__accum_reg 
                        = (vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[2U] 
                           >> 0x10U);
                    __Vdly__tb_array__DOT__arr_dut__DOT__pe_2_0__DOT__accum_reg 
                        = (0xffffU & vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[2U]);
                } else {
                    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_2_3__down_out 
                        = vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_3__DOT__accum_reg;
                    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_2_2__down_out 
                        = vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_2__DOT__accum_reg;
                    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_2_1__down_out 
                        = vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_1__DOT__accum_reg;
                    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_2_0__down_out 
                        = vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_0__DOT__accum_reg;
                }
                if (vlSelf->tb_array__DOT__arr_dut__DOT__v_en_1) {
                    __Vdly__tb_array__DOT__arr_dut__DOT__pe_1_3__DOT__accum_reg 
                        = (vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[1U] 
                           >> 0x10U);
                    __Vdly__tb_array__DOT__arr_dut__DOT__pe_1_2__DOT__accum_reg 
                        = (0xffffU & vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[1U]);
                    __Vdly__tb_array__DOT__arr_dut__DOT__pe_1_1__DOT__accum_reg 
                        = (vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[0U] 
                           >> 0x10U);
                    __Vdly__tb_array__DOT__arr_dut__DOT__pe_1_0__DOT__accum_reg 
                        = (0xffffU & vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out[0U]);
                } else {
                    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_1_3__down_out 
                        = vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_3__DOT__accum_reg;
                    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_1_2__down_out 
                        = vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_2__DOT__accum_reg;
                    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_1_1__down_out 
                        = vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_1__DOT__accum_reg;
                    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_1_0__down_out 
                        = vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_0__DOT__accum_reg;
                }
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
                    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_0_3__down_out = 0U;
                    __Vdly__tb_array__DOT__arr_dut__DOT__pe_3_3__DOT__product_reg 
                        = (0xffffU & (((IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_3__DOT__a_reg) 
                                       * (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_3__DOT__b_reg)) 
                                      + (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_3__DOT__product_reg)));
                    __Vdly__tb_array__DOT__arr_dut__DOT__pe_3_3__DOT__accum_reg 
                        = (vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_3__DOT__accum_reg 
                           + (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_3__DOT__product_reg));
                    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_3_3__right_out 
                        = vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_3__DOT__a_reg;
                    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_3_3__down_out = 0U;
                    __Vdly__tb_array__DOT__arr_dut__DOT__pe_2_3__DOT__product_reg 
                        = (0xffffU & (((IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_3__DOT__a_reg) 
                                       * (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_3__DOT__b_reg)) 
                                      + (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_3__DOT__product_reg)));
                    __Vdly__tb_array__DOT__arr_dut__DOT__pe_2_3__DOT__accum_reg 
                        = (vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_3__DOT__accum_reg 
                           + (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_3__DOT__product_reg));
                    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_2_3__right_out 
                        = vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_3__DOT__a_reg;
                    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_2_3__down_out = 0U;
                    __Vdly__tb_array__DOT__arr_dut__DOT__pe_1_3__DOT__product_reg 
                        = (0xffffU & (((IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_3__DOT__a_reg) 
                                       * (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_3__DOT__b_reg)) 
                                      + (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_3__DOT__product_reg)));
                    __Vdly__tb_array__DOT__arr_dut__DOT__pe_1_3__DOT__accum_reg 
                        = (vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_3__DOT__accum_reg 
                           + (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_3__DOT__product_reg));
                    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_1_3__right_out 
                        = vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_3__DOT__a_reg;
                    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_1_3__down_out = 0U;
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
                    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_0_2__down_out = 0U;
                    __Vdly__tb_array__DOT__arr_dut__DOT__pe_3_2__DOT__product_reg 
                        = (0xffffU & (((IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_2__DOT__a_reg) 
                                       * (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_2__DOT__b_reg)) 
                                      + (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_2__DOT__product_reg)));
                    __Vdly__tb_array__DOT__arr_dut__DOT__pe_3_2__DOT__accum_reg 
                        = (vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_2__DOT__accum_reg 
                           + (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_2__DOT__product_reg));
                    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_3_2__right_out 
                        = vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_2__DOT__a_reg;
                    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_3_2__down_out = 0U;
                    __Vdly__tb_array__DOT__arr_dut__DOT__pe_2_2__DOT__product_reg 
                        = (0xffffU & (((IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_2__DOT__a_reg) 
                                       * (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_2__DOT__b_reg)) 
                                      + (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_2__DOT__product_reg)));
                    __Vdly__tb_array__DOT__arr_dut__DOT__pe_2_2__DOT__accum_reg 
                        = (vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_2__DOT__accum_reg 
                           + (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_2__DOT__product_reg));
                    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_2_2__right_out 
                        = vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_2__DOT__a_reg;
                    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_2_2__down_out = 0U;
                    __Vdly__tb_array__DOT__arr_dut__DOT__pe_1_2__DOT__product_reg 
                        = (0xffffU & (((IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_2__DOT__a_reg) 
                                       * (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_2__DOT__b_reg)) 
                                      + (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_2__DOT__product_reg)));
                    __Vdly__tb_array__DOT__arr_dut__DOT__pe_1_2__DOT__accum_reg 
                        = (vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_2__DOT__accum_reg 
                           + (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_2__DOT__product_reg));
                    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_1_2__right_out 
                        = vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_2__DOT__a_reg;
                    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_1_2__down_out = 0U;
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
                    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_0_1__down_out = 0U;
                    __Vdly__tb_array__DOT__arr_dut__DOT__pe_3_1__DOT__product_reg 
                        = (0xffffU & (((IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_1__DOT__a_reg) 
                                       * (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_1__DOT__b_reg)) 
                                      + (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_1__DOT__product_reg)));
                    __Vdly__tb_array__DOT__arr_dut__DOT__pe_3_1__DOT__accum_reg 
                        = (vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_1__DOT__accum_reg 
                           + (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_1__DOT__product_reg));
                    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_3_1__right_out 
                        = vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_1__DOT__a_reg;
                    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_3_1__down_out = 0U;
                    __Vdly__tb_array__DOT__arr_dut__DOT__pe_2_1__DOT__product_reg 
                        = (0xffffU & (((IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_1__DOT__a_reg) 
                                       * (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_1__DOT__b_reg)) 
                                      + (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_1__DOT__product_reg)));
                    __Vdly__tb_array__DOT__arr_dut__DOT__pe_2_1__DOT__accum_reg 
                        = (vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_1__DOT__accum_reg 
                           + (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_1__DOT__product_reg));
                    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_2_1__right_out 
                        = vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_1__DOT__a_reg;
                    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_2_1__down_out = 0U;
                    __Vdly__tb_array__DOT__arr_dut__DOT__pe_1_1__DOT__product_reg 
                        = (0xffffU & (((IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_1__DOT__a_reg) 
                                       * (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_1__DOT__b_reg)) 
                                      + (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_1__DOT__product_reg)));
                    __Vdly__tb_array__DOT__arr_dut__DOT__pe_1_1__DOT__accum_reg 
                        = (vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_1__DOT__accum_reg 
                           + (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_1__DOT__product_reg));
                    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_1_1__right_out 
                        = vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_1__DOT__a_reg;
                    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_1_1__down_out = 0U;
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
                    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_0_0__down_out = 0U;
                    __Vdly__tb_array__DOT__arr_dut__DOT__pe_3_0__DOT__product_reg 
                        = (0xffffU & (((IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_0__DOT__a_reg) 
                                       * (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_0__DOT__b_reg)) 
                                      + (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_0__DOT__product_reg)));
                    __Vdly__tb_array__DOT__arr_dut__DOT__pe_3_0__DOT__accum_reg 
                        = (vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_0__DOT__accum_reg 
                           + (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_0__DOT__product_reg));
                    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_3_0__right_out 
                        = vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_0__DOT__a_reg;
                    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_3_0__down_out = 0U;
                    __Vdly__tb_array__DOT__arr_dut__DOT__pe_2_0__DOT__product_reg 
                        = (0xffffU & (((IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_0__DOT__a_reg) 
                                       * (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_0__DOT__b_reg)) 
                                      + (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_0__DOT__product_reg)));
                    __Vdly__tb_array__DOT__arr_dut__DOT__pe_2_0__DOT__accum_reg 
                        = (vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_0__DOT__accum_reg 
                           + (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_0__DOT__product_reg));
                    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_2_0__right_out 
                        = vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_0__DOT__a_reg;
                    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_2_0__down_out = 0U;
                    __Vdly__tb_array__DOT__arr_dut__DOT__pe_1_0__DOT__product_reg 
                        = (0xffffU & (((IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_0__DOT__a_reg) 
                                       * (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_0__DOT__b_reg)) 
                                      + (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_0__DOT__product_reg)));
                    __Vdly__tb_array__DOT__arr_dut__DOT__pe_1_0__DOT__accum_reg 
                        = (vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_0__DOT__accum_reg 
                           + (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_0__DOT__product_reg));
                    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_1_0__right_out 
                        = vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_0__DOT__a_reg;
                    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_1_0__down_out = 0U;
                }
            }
            if ((1U & (~ (IData)(vlSelf->tb_array__DOT__arr_preload)))) {
                if ((1U & (~ (IData)(vlSelf->tb_array__DOT__arr_drain)))) {
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
        }
        if (vlSelf->tb_array__DOT__arr_activation_valid) {
            vlSelf->tb_array__DOT__arr_dut__DOT__val_act_in 
                = vlSelf->tb_array__DOT__arr_activation;
        }
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
    vlSelf->tb_array__DOT__arr_dut__DOT__v_en_3 = Vtb_array__ConstPool__TABLE_h95214b9c_0
        [__Vtableidx4];
    vlSelf->tb_array__DOT__arr_dut__DOT__v_en_2 = Vtb_array__ConstPool__TABLE_h25f53c5b_0
        [__Vtableidx4];
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
