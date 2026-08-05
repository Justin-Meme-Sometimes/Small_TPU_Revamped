// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_tpu_top.h for the primary calling header

#include "Vtb_tpu_top__pch.h"
#include "Vtb_tpu_top___024root.h"

VL_ATTR_COLD void Vtb_tpu_top___024root___eval_initial__TOP(Vtb_tpu_top___024root* vlSelf);
VlCoroutine Vtb_tpu_top___024root___eval_initial__TOP__Vtiming__0(Vtb_tpu_top___024root* vlSelf);
VlCoroutine Vtb_tpu_top___024root___eval_initial__TOP__Vtiming__1(Vtb_tpu_top___024root* vlSelf);

void Vtb_tpu_top___024root___eval_initial(Vtb_tpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_tpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tpu_top___024root___eval_initial\n"); );
    // Body
    Vtb_tpu_top___024root___eval_initial__TOP(vlSelf);
    Vtb_tpu_top___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_tpu_top___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_tpu_top__DOT__clk__0 
        = vlSelf->tb_tpu_top__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__tb_tpu_top__DOT__rst_n__0 
        = vlSelf->tb_tpu_top__DOT__rst_n;
}

VL_INLINE_OPT VlCoroutine Vtb_tpu_top___024root___eval_initial__TOP__Vtiming__0(Vtb_tpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_tpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tpu_top___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    IData/*31:0*/ tb_tpu_top__DOT__unnamedblk2__DOT__n;
    tb_tpu_top__DOT__unnamedblk2__DOT__n = 0;
    CData/*7:0*/ tb_tpu_top__DOT__unnamedblk2__DOT__unnamedblk3__DOT__sampled_u_in;
    tb_tpu_top__DOT__unnamedblk2__DOT__unnamedblk3__DOT__sampled_u_in = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__1__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__1__cond;
    __Vtask_tb_tpu_top__DOT__check__1__cond = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__2__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__2__cond;
    __Vtask_tb_tpu_top__DOT__check__2__cond = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__3__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__3__cond;
    __Vtask_tb_tpu_top__DOT__check__3__cond = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__6__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__6__cond;
    __Vtask_tb_tpu_top__DOT__check__6__cond = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__7__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__7__cond;
    __Vtask_tb_tpu_top__DOT__check__7__cond = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__9__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__9__cond;
    __Vtask_tb_tpu_top__DOT__check__9__cond = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__11__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__11__cond;
    __Vtask_tb_tpu_top__DOT__check__11__cond = 0;
    CData/*7:0*/ __Vtask_tb_tpu_top__DOT__pulse_opcode__12__opcode;
    __Vtask_tb_tpu_top__DOT__pulse_opcode__12__opcode = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__15__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__15__cond;
    __Vtask_tb_tpu_top__DOT__check__15__cond = 0;
    CData/*4:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__16__target;
    __Vtask_tb_tpu_top__DOT__wait_for_state__16__target = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__16__max_cycles;
    __Vtask_tb_tpu_top__DOT__wait_for_state__16__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__16__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__16__cycles_taken = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__18__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__18__cond;
    __Vtask_tb_tpu_top__DOT__check__18__cond = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__19__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__19__cond;
    __Vtask_tb_tpu_top__DOT__check__19__cond = 0;
    CData/*4:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__20__target;
    __Vtask_tb_tpu_top__DOT__wait_for_state__20__target = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__20__max_cycles;
    __Vtask_tb_tpu_top__DOT__wait_for_state__20__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__20__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__20__cycles_taken = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__22__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__22__cond;
    __Vtask_tb_tpu_top__DOT__check__22__cond = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__23__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__23__cond;
    __Vtask_tb_tpu_top__DOT__check__23__cond = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__24__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__24__cond;
    __Vtask_tb_tpu_top__DOT__check__24__cond = 0;
    CData/*4:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__25__target;
    __Vtask_tb_tpu_top__DOT__wait_for_state__25__target = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__25__max_cycles;
    __Vtask_tb_tpu_top__DOT__wait_for_state__25__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__25__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__25__cycles_taken = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__27__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__27__cond;
    __Vtask_tb_tpu_top__DOT__check__27__cond = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__28__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__28__cond;
    __Vtask_tb_tpu_top__DOT__check__28__cond = 0;
    CData/*4:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__29__target;
    __Vtask_tb_tpu_top__DOT__wait_for_state__29__target = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__29__max_cycles;
    __Vtask_tb_tpu_top__DOT__wait_for_state__29__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__29__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__29__cycles_taken = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__31__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__31__cond;
    __Vtask_tb_tpu_top__DOT__check__31__cond = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__32__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__32__cond;
    __Vtask_tb_tpu_top__DOT__check__32__cond = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__33__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__33__cond;
    __Vtask_tb_tpu_top__DOT__check__33__cond = 0;
    CData/*4:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__34__target;
    __Vtask_tb_tpu_top__DOT__wait_for_state__34__target = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__34__max_cycles;
    __Vtask_tb_tpu_top__DOT__wait_for_state__34__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__34__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__34__cycles_taken = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__36__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__36__cond;
    __Vtask_tb_tpu_top__DOT__check__36__cond = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__37__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__37__cond;
    __Vtask_tb_tpu_top__DOT__check__37__cond = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__38__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__38__cond;
    __Vtask_tb_tpu_top__DOT__check__38__cond = 0;
    CData/*4:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__39__target;
    __Vtask_tb_tpu_top__DOT__wait_for_state__39__target = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__39__max_cycles;
    __Vtask_tb_tpu_top__DOT__wait_for_state__39__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__39__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__39__cycles_taken = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__41__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__41__cond;
    __Vtask_tb_tpu_top__DOT__check__41__cond = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__42__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__42__cond;
    __Vtask_tb_tpu_top__DOT__check__42__cond = 0;
    CData/*4:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__43__target;
    __Vtask_tb_tpu_top__DOT__wait_for_state__43__target = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__43__max_cycles;
    __Vtask_tb_tpu_top__DOT__wait_for_state__43__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__43__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__43__cycles_taken = 0;
    CData/*4:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__45__target;
    __Vtask_tb_tpu_top__DOT__wait_for_state__45__target = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__45__max_cycles;
    __Vtask_tb_tpu_top__DOT__wait_for_state__45__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__45__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__45__cycles_taken = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__47__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__47__cond;
    __Vtask_tb_tpu_top__DOT__check__47__cond = 0;
    CData/*4:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__48__target;
    __Vtask_tb_tpu_top__DOT__wait_for_state__48__target = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__48__max_cycles;
    __Vtask_tb_tpu_top__DOT__wait_for_state__48__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__48__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__48__cycles_taken = 0;
    CData/*4:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__50__target;
    __Vtask_tb_tpu_top__DOT__wait_for_state__50__target = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__50__max_cycles;
    __Vtask_tb_tpu_top__DOT__wait_for_state__50__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__50__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__50__cycles_taken = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__52__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__52__cond;
    __Vtask_tb_tpu_top__DOT__check__52__cond = 0;
    CData/*4:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__53__target;
    __Vtask_tb_tpu_top__DOT__wait_for_state__53__target = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__53__max_cycles;
    __Vtask_tb_tpu_top__DOT__wait_for_state__53__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__53__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__53__cycles_taken = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__55__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__55__cond;
    __Vtask_tb_tpu_top__DOT__check__55__cond = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__56__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__56__cond;
    __Vtask_tb_tpu_top__DOT__check__56__cond = 0;
    CData/*7:0*/ __Vtask_tb_tpu_top__DOT__pulse_opcode__57__opcode;
    __Vtask_tb_tpu_top__DOT__pulse_opcode__57__opcode = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__60__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__60__cond;
    __Vtask_tb_tpu_top__DOT__check__60__cond = 0;
    CData/*4:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__61__target;
    __Vtask_tb_tpu_top__DOT__wait_for_state__61__target = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__61__max_cycles;
    __Vtask_tb_tpu_top__DOT__wait_for_state__61__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__61__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__61__cycles_taken = 0;
    CData/*4:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__63__target;
    __Vtask_tb_tpu_top__DOT__wait_for_state__63__target = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__63__max_cycles;
    __Vtask_tb_tpu_top__DOT__wait_for_state__63__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__63__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__63__cycles_taken = 0;
    CData/*4:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__65__target;
    __Vtask_tb_tpu_top__DOT__wait_for_state__65__target = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__65__max_cycles;
    __Vtask_tb_tpu_top__DOT__wait_for_state__65__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__65__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__65__cycles_taken = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__67__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__67__cond;
    __Vtask_tb_tpu_top__DOT__check__67__cond = 0;
    CData/*4:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__68__target;
    __Vtask_tb_tpu_top__DOT__wait_for_state__68__target = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__68__max_cycles;
    __Vtask_tb_tpu_top__DOT__wait_for_state__68__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__68__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__68__cycles_taken = 0;
    CData/*4:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__70__target;
    __Vtask_tb_tpu_top__DOT__wait_for_state__70__target = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__70__max_cycles;
    __Vtask_tb_tpu_top__DOT__wait_for_state__70__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__70__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__70__cycles_taken = 0;
    CData/*4:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__72__target;
    __Vtask_tb_tpu_top__DOT__wait_for_state__72__target = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__72__max_cycles;
    __Vtask_tb_tpu_top__DOT__wait_for_state__72__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__72__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__72__cycles_taken = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__74__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__74__cond;
    __Vtask_tb_tpu_top__DOT__check__74__cond = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__75__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__75__cond;
    __Vtask_tb_tpu_top__DOT__check__75__cond = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num;
    __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials;
    __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__run_group_test__76__n;
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n = 0;
    CData/*7:0*/ __Vtask_tb_tpu_top__DOT__pulse_opcode__77__opcode;
    __Vtask_tb_tpu_top__DOT__pulse_opcode__77__opcode = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__80__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__80__cond;
    __Vtask_tb_tpu_top__DOT__check__80__cond = 0;
    CData/*4:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__81__target;
    __Vtask_tb_tpu_top__DOT__wait_for_state__81__target = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__81__max_cycles;
    __Vtask_tb_tpu_top__DOT__wait_for_state__81__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__81__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__81__cycles_taken = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__83__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__83__cond;
    __Vtask_tb_tpu_top__DOT__check__83__cond = 0;
    CData/*4:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__84__target;
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__target = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__84__max_cycles;
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__86__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__86__cond;
    __Vtask_tb_tpu_top__DOT__check__86__cond = 0;
    CData/*4:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__87__target;
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__target = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__87__max_cycles;
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__89__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__89__cond;
    __Vtask_tb_tpu_top__DOT__check__89__cond = 0;
    CData/*4:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__90__target;
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__target = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__90__max_cycles;
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__92__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__92__cond;
    __Vtask_tb_tpu_top__DOT__check__92__cond = 0;
    CData/*4:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__93__target;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__target = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__95__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__95__cond;
    __Vtask_tb_tpu_top__DOT__check__95__cond = 0;
    CData/*4:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__96__target;
    __Vtask_tb_tpu_top__DOT__wait_for_state__96__target = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__96__max_cycles;
    __Vtask_tb_tpu_top__DOT__wait_for_state__96__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__96__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__96__cycles_taken = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__98__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__98__cond;
    __Vtask_tb_tpu_top__DOT__check__98__cond = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__99__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__99__cond;
    __Vtask_tb_tpu_top__DOT__check__99__cond = 0;
    // Body
    vlSelf->tb_tpu_top__DOT__rst_n = 0U;
    vlSelf->tb_tpu_top__DOT__uio_in = 0U;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       99);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       99);
    vlSelf->tb_tpu_top__DOT__rst_n = 1U;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       101);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       101);
    VL_WRITEF("==== tpu_top: reset ====\n");
    __Vtask_tb_tpu_top__DOT__check__1__cond = (0U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__1__name = std::string{"reset: current_state is IDLE"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__1__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__1__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__1__name));
    }
    __Vtask_tb_tpu_top__DOT__check__2__cond = (0U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__count));
    __Vtask_tb_tpu_top__DOT__check__2__name = std::string{"reset: weight fifo empty"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__2__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__2__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__2__name));
    }
    __Vtask_tb_tpu_top__DOT__check__3__cond = (0U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__3__name = std::string{"reset: tile_count is 0"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__3__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__3__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__3__name));
    }
    VL_WRITEF("==== tpu_top: opcode decode (OP_LOAD_REQUANT / OP_READ_OUTPUTS) ====\n");
    vlSelf->tb_tpu_top__DOT__uio_in = 2U;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       105);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       105);
    tb_tpu_top__DOT__unnamedblk2__DOT__unnamedblk3__DOT__sampled_u_in 
        = vlSelf->tb_tpu_top__DOT__u_in;
    vlSelf->tb_tpu_top__DOT__uio_in = 0U;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       105);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       105);
    __Vtask_tb_tpu_top__DOT__check__6__cond = ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__requant_value) 
                                               == (IData)(tb_tpu_top__DOT__unnamedblk2__DOT__unnamedblk3__DOT__sampled_u_in));
    __Vtask_tb_tpu_top__DOT__check__6__name = std::string{"OP_LOAD_REQUANT latches u_in into requant_value"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__6__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__6__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__6__name));
    }
    __Vtask_tb_tpu_top__DOT__check__7__cond = (0U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__7__name = std::string{"FSM still IDLE (OP_LOAD_REQUANT doesn't trigger start)"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__7__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__7__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__7__name));
    }
    vlSelf->tb_tpu_top__DOT__uio_in = 3U;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       105);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       105);
    __Vtask_tb_tpu_top__DOT__check__9__cond = vlSelf->tb_tpu_top__DOT__dut__DOT__start_read_fsm;
    __Vtask_tb_tpu_top__DOT__check__9__name = std::string{"OP_READ_OUTPUTS asserts start_read_fsm"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__9__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__9__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__9__name));
    }
    vlSelf->tb_tpu_top__DOT__uio_in = 0U;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       105);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       105);
    __Vtask_tb_tpu_top__DOT__check__11__cond = (1U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__r_fsm__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__11__name = std::string{"start_read_fsm forwarded into DMA's read FSM (left IDLE)"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__11__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__11__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__11__name));
    }
    VL_WRITEF("==== tpu_top: tile group 1 - LOAD_DMA ====\n");
    __Vtask_tb_tpu_top__DOT__pulse_opcode__12__opcode = 1U;
    vlSelf->tb_tpu_top__DOT__uio_in = __Vtask_tb_tpu_top__DOT__pulse_opcode__12__opcode;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       105);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       105);
    vlSelf->tb_tpu_top__DOT__uio_in = 0U;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       105);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       105);
    __Vtask_tb_tpu_top__DOT__check__15__cond = (1U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__15__name = std::string{"start pulse moves IDLE -> LOAD_DMA"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__15__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__15__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__15__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__16__max_cycles = 0x10eU;
    __Vtask_tb_tpu_top__DOT__wait_for_state__16__target = 2U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__16__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__16__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__16__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__16__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__16__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__16__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__16__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__18__cond = (2U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__18__name = VL_SFORMATF_NX("reached PREFILL within budget (took %0d cycles)",
                                                              32,
                                                              tb_tpu_top__DOT__unnamedblk2__DOT__n) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__18__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__18__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__18__name));
    }
    __Vtask_tb_tpu_top__DOT__check__19__cond = (0x101U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__load_dma_count));
    __Vtask_tb_tpu_top__DOT__check__19__name = std::string{"LOAD_DMA ran the full 257 cycles (load_dma_count saturated)"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__19__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__19__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__19__name));
    }
    VL_WRITEF("==== tpu_top: tile group 1 - PREFILL ====\n");
    __Vtask_tb_tpu_top__DOT__wait_for_state__20__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__20__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__20__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__20__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__20__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__20__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__20__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__20__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__20__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__22__cond = (3U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__22__name = VL_SFORMATF_NX("reached PRELOAD within budget (took %0d cycles)",
                                                              32,
                                                              tb_tpu_top__DOT__unnamedblk2__DOT__n) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__22__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__22__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__22__name));
    }
    __Vtask_tb_tpu_top__DOT__check__23__cond = (0x10U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__prefill_count));
    __Vtask_tb_tpu_top__DOT__check__23__name = std::string{"PREFILL ran the full 16 cycles (prefill_count saturated)"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__23__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__23__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__23__name));
    }
    __Vtask_tb_tpu_top__DOT__check__24__cond = (0U 
                                                != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__count));
    __Vtask_tb_tpu_top__DOT__check__24__name = std::string{"weight_fifo received weight data during PREFILL (non-empty right as PRELOAD begins)"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__24__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__24__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__24__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__25__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__25__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__25__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__25__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__25__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__25__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__25__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__25__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__25__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__27__cond = (4U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__27__name = VL_SFORMATF_NX("reached COMPUTE within budget (took %0d cycles)",
                                                              32,
                                                              tb_tpu_top__DOT__unnamedblk2__DOT__n) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__27__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__27__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__27__name));
    }
    __Vtask_tb_tpu_top__DOT__check__28__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__28__name = std::string{"no X/Z in product_out entering COMPUTE"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__28__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__28__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__28__name));
    }
    VL_WRITEF("==== tpu_top: tile group 1 - COMPUTE -> DRAIN ====\n");
    __Vtask_tb_tpu_top__DOT__wait_for_state__29__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__29__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__29__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__29__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__29__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__29__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__29__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__29__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__29__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__31__cond = (5U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__31__name = VL_SFORMATF_NX("reached DRAIN within budget (took %0d cycles)",
                                                              32,
                                                              tb_tpu_top__DOT__unnamedblk2__DOT__n) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__31__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__31__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__31__name));
    }
    __Vtask_tb_tpu_top__DOT__check__32__cond = (7U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__compute_count));
    __Vtask_tb_tpu_top__DOT__check__32__name = std::string{"COMPUTE ran the full 7 cycles (compute_count saturated)"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__32__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__32__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__32__name));
    }
    __Vtask_tb_tpu_top__DOT__check__33__cond = (1U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__33__name = std::string{"tile_done pulsed on the COMPUTE->DRAIN edge (tile_count advanced to 1)"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__33__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__33__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__33__name));
    }
    VL_WRITEF("==== tpu_top: tile group 1 - DRAIN -> FUNCS ====\n");
    __Vtask_tb_tpu_top__DOT__wait_for_state__34__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__34__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__34__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__34__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__34__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__34__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__34__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__34__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__34__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__36__cond = (6U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__36__name = VL_SFORMATF_NX("reached FUNCS within budget (took %0d cycles)",
                                                              32,
                                                              tb_tpu_top__DOT__unnamedblk2__DOT__n) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__36__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__36__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__36__name));
    }
    __Vtask_tb_tpu_top__DOT__check__37__cond = (4U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__drain_count));
    __Vtask_tb_tpu_top__DOT__check__37__name = std::string{"DRAIN ran the full 4 cycles (drain_count saturated)"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__37__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__37__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__37__name));
    }
    __Vtask_tb_tpu_top__DOT__check__38__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__38__name = std::string{"no X/Z in requant_out during drain/funcs window"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__38__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__38__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__38__name));
    }
    VL_WRITEF("==== tpu_top: tile group 1 - FUNCS -> back to PRELOAD (tile 1 of 8, not yet tile_complete) ====\n");
    __Vtask_tb_tpu_top__DOT__wait_for_state__39__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__39__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__39__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__39__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__39__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__39__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__39__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__39__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__39__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__41__cond = (3U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__41__name = VL_SFORMATF_NX("FUNCS looped back to PRELOAD for tile 2/8 (took %0d cycles)",
                                                              32,
                                                              tb_tpu_top__DOT__unnamedblk2__DOT__n) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__41__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__41__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__41__name));
    }
    __Vtask_tb_tpu_top__DOT__check__42__cond = (3U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__funcs_count));
    __Vtask_tb_tpu_top__DOT__check__42__name = std::string{"FUNCS ran the full 3 cycles (funcs_count saturated)"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__42__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__42__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__42__name));
    }
    VL_WRITEF("==== tpu_top: running tiles 2-8 to reach tiles_complete ====\n");
    __Vtask_tb_tpu_top__DOT__wait_for_state__43__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__43__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__43__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__43__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__43__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__43__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__43__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__43__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__43__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__45__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__45__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__45__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__45__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__45__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__45__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__45__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__45__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__45__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__47__cond = (2U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__47__name = std::string{"tile 2/8: tile_count advanced correctly"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__47__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__47__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__47__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__48__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__48__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__48__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__48__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__48__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__48__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__48__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__48__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__48__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__50__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__50__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__50__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__50__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__50__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__50__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__50__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__50__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__50__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__52__cond = (3U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__52__name = std::string{"tile 2/8: FUNCS looped back to PRELOAD"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__52__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__52__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__52__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__43__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__43__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__43__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__43__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__43__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__43__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__43__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__43__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__43__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__45__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__45__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__45__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__45__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__45__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__45__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__45__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__45__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__45__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__47__cond = (3U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__47__name = std::string{"tile 3/8: tile_count advanced correctly"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__47__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__47__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__47__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__48__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__48__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__48__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__48__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__48__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__48__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__48__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__48__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__48__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__50__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__50__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__50__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__50__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__50__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__50__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__50__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__50__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__50__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__52__cond = (3U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__52__name = std::string{"tile 3/8: FUNCS looped back to PRELOAD"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__52__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__52__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__52__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__43__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__43__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__43__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__43__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__43__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__43__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__43__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__43__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__43__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__45__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__45__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__45__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__45__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__45__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__45__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__45__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__45__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__45__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__47__cond = (4U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__47__name = std::string{"tile 4/8: tile_count advanced correctly"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__47__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__47__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__47__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__48__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__48__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__48__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__48__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__48__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__48__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__48__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__48__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__48__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__50__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__50__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__50__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__50__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__50__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__50__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__50__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__50__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__50__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__52__cond = (3U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__52__name = std::string{"tile 4/8: FUNCS looped back to PRELOAD"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__52__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__52__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__52__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__43__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__43__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__43__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__43__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__43__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__43__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__43__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__43__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__43__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__45__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__45__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__45__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__45__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__45__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__45__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__45__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__45__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__45__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__47__cond = (5U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__47__name = std::string{"tile 5/8: tile_count advanced correctly"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__47__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__47__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__47__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__48__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__48__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__48__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__48__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__48__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__48__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__48__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__48__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__48__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__50__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__50__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__50__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__50__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__50__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__50__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__50__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__50__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__50__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__52__cond = (3U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__52__name = std::string{"tile 5/8: FUNCS looped back to PRELOAD"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__52__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__52__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__52__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__43__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__43__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__43__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__43__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__43__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__43__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__43__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__43__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__43__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__45__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__45__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__45__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__45__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__45__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__45__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__45__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__45__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__45__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__47__cond = (6U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__47__name = std::string{"tile 6/8: tile_count advanced correctly"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__47__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__47__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__47__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__48__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__48__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__48__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__48__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__48__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__48__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__48__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__48__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__48__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__50__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__50__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__50__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__50__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__50__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__50__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__50__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__50__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__50__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__52__cond = (3U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__52__name = std::string{"tile 6/8: FUNCS looped back to PRELOAD"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__52__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__52__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__52__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__43__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__43__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__43__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__43__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__43__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__43__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__43__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__43__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__43__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__45__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__45__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__45__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__45__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__45__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__45__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__45__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__45__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__45__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__47__cond = (7U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__47__name = std::string{"tile 7/8: tile_count advanced correctly"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__47__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__47__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__47__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__48__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__48__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__48__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__48__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__48__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__48__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__48__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__48__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__48__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__50__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__50__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__50__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__50__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__50__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__50__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__50__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__50__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__50__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__52__cond = (3U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__52__name = std::string{"tile 7/8: FUNCS looped back to PRELOAD"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__52__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__52__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__52__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__43__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__43__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__43__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__43__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__43__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__43__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__43__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__43__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__43__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__45__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__45__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__45__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__45__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__45__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__45__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__45__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__45__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__45__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__47__cond = (8U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__47__name = std::string{"tile 8/8: tile_count advanced correctly"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__47__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__47__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__47__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__48__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__48__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__48__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__48__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__48__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__48__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__48__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__48__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__48__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__53__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__53__target = 0U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__53__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__53__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__53__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__53__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__53__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__53__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__53__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__55__cond = (0U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__55__name = VL_SFORMATF_NX("after 8 tiles: FUNCS saw tile_complete and returned to IDLE (took %0d cycles)",
                                                              32,
                                                              tb_tpu_top__DOT__unnamedblk2__DOT__n) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__55__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__55__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__55__name));
    }
    __Vtask_tb_tpu_top__DOT__check__56__cond = (0U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__56__name = std::string{"DONE's tile_clr reset tile_count back to 0 on the way to IDLE"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__56__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__56__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__56__name));
    }
    VL_WRITEF("==== tpu_top: tile group 2 (does a fresh 8-tile group actually complete?) ====\n");
    __Vtask_tb_tpu_top__DOT__pulse_opcode__57__opcode = 1U;
    vlSelf->tb_tpu_top__DOT__uio_in = __Vtask_tb_tpu_top__DOT__pulse_opcode__57__opcode;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       105);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       105);
    vlSelf->tb_tpu_top__DOT__uio_in = 0U;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       105);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       105);
    __Vtask_tb_tpu_top__DOT__check__60__cond = (1U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__60__name = std::string{"group 2: start pulse moves IDLE -> LOAD_DMA"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__60__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__60__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__60__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__61__max_cycles = 0x12cU;
    __Vtask_tb_tpu_top__DOT__wait_for_state__61__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__61__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__61__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__61__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__61__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__61__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__61__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__61__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__63__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__63__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__63__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__63__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__63__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__63__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__63__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__63__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__63__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__65__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__65__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__65__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__65__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__65__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__65__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__65__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__65__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__65__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__67__cond = (1U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__67__name = std::string{"group 2 tile 1: tile_count advanced correctly"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__67__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__67__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__67__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__68__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__68__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__68__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__68__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__68__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__68__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__68__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__68__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__68__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__70__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__70__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__70__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__70__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__70__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__70__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__70__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__70__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__70__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__63__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__63__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__63__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__63__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__63__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__63__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__63__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__63__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__63__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__65__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__65__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__65__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__65__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__65__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__65__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__65__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__65__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__65__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__67__cond = (2U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__67__name = std::string{"group 2 tile 2: tile_count advanced correctly"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__67__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__67__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__67__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__68__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__68__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__68__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__68__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__68__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__68__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__68__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__68__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__68__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__70__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__70__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__70__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__70__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__70__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__70__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__70__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__70__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__70__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__63__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__63__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__63__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__63__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__63__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__63__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__63__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__63__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__63__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__65__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__65__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__65__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__65__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__65__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__65__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__65__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__65__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__65__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__67__cond = (3U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__67__name = std::string{"group 2 tile 3: tile_count advanced correctly"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__67__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__67__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__67__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__68__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__68__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__68__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__68__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__68__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__68__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__68__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__68__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__68__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__70__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__70__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__70__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__70__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__70__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__70__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__70__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__70__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__70__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__63__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__63__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__63__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__63__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__63__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__63__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__63__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__63__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__63__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__65__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__65__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__65__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__65__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__65__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__65__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__65__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__65__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__65__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__67__cond = (4U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__67__name = std::string{"group 2 tile 4: tile_count advanced correctly"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__67__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__67__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__67__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__68__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__68__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__68__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__68__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__68__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__68__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__68__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__68__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__68__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__70__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__70__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__70__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__70__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__70__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__70__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__70__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__70__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__70__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__63__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__63__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__63__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__63__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__63__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__63__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__63__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__63__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__63__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__65__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__65__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__65__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__65__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__65__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__65__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__65__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__65__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__65__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__67__cond = (5U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__67__name = std::string{"group 2 tile 5: tile_count advanced correctly"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__67__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__67__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__67__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__68__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__68__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__68__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__68__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__68__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__68__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__68__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__68__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__68__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__70__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__70__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__70__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__70__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__70__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__70__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__70__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__70__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__70__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__63__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__63__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__63__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__63__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__63__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__63__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__63__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__63__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__63__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__65__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__65__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__65__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__65__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__65__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__65__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__65__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__65__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__65__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__67__cond = (6U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__67__name = std::string{"group 2 tile 6: tile_count advanced correctly"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__67__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__67__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__67__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__68__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__68__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__68__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__68__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__68__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__68__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__68__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__68__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__68__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__70__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__70__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__70__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__70__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__70__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__70__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__70__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__70__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__70__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__63__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__63__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__63__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__63__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__63__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__63__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__63__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__63__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__63__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__65__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__65__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__65__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__65__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__65__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__65__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__65__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__65__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__65__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__67__cond = (7U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__67__name = std::string{"group 2 tile 7: tile_count advanced correctly"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__67__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__67__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__67__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__68__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__68__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__68__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__68__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__68__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__68__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__68__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__68__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__68__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__70__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__70__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__70__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__70__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__70__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__70__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__70__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__70__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__70__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__63__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__63__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__63__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__63__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__63__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__63__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__63__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__63__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__63__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__65__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__65__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__65__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__65__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__65__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__65__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__65__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__65__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__65__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__67__cond = (8U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__67__name = std::string{"group 2 tile 8: tile_count advanced correctly"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__67__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__67__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__67__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__68__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__68__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__68__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__68__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__68__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__68__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__68__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__68__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__68__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__72__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__72__target = 0U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__72__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__72__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__72__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__72__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__72__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__72__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__72__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__74__cond = (0U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__74__name = VL_SFORMATF_NX("group 2 also reached tiles_complete and returned to IDLE (took %0d cycles)",
                                                              32,
                                                              tb_tpu_top__DOT__unnamedblk2__DOT__n) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__74__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__74__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__74__name));
    }
    __Vtask_tb_tpu_top__DOT__check__75__cond = (0U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__75__name = std::string{"group 2: tile_count cleared back to 0 again"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__75__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__75__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__75__name));
    }
    VL_WRITEF("==== tpu_top: 5 more back-to-back tile groups (control-path stress) ====\n");
    __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials = 5U;
    __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num = 1U;
    __Vtask_tb_tpu_top__DOT__pulse_opcode__77__opcode = 1U;
    vlSelf->tb_tpu_top__DOT__uio_in = __Vtask_tb_tpu_top__DOT__pulse_opcode__77__opcode;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       105);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       105);
    vlSelf->tb_tpu_top__DOT__uio_in = 0U;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       105);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       105);
    __Vtask_tb_tpu_top__DOT__check__80__cond = (1U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__80__name = VL_SFORMATF_NX("group %0d/%0d: start pulse moves IDLE -> LOAD_DMA",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__80__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__80__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__80__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__81__max_cycles = 0x12cU;
    __Vtask_tb_tpu_top__DOT__wait_for_state__81__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__81__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__81__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__81__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__81__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__81__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__81__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__81__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__83__cond = (3U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__83__name = VL_SFORMATF_NX("group %0d/%0d: reached PRELOAD within budget (took %0d cycles)",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__n) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__83__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__83__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__83__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__84__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__84__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__86__cond = (4U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__86__name = VL_SFORMATF_NX("group %0d/%0d tile 1: reached COMPUTE",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__86__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__87__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__87__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__89__cond = (1U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__89__name = VL_SFORMATF_NX("group %0d/%0d tile 1: tile_count advanced to 1 on the COMPUTE->DRAIN edge",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__89__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__89__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__89__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__90__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__90__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__92__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__92__name = VL_SFORMATF_NX("group %0d/%0d tile 1: no X/Z in requant_out",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__92__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__92__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__92__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__93__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__95__cond = (3U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__95__name = VL_SFORMATF_NX("group %0d/%0d tile 1: FUNCS looped back to PRELOAD",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__95__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__95__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__95__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__84__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__84__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__86__cond = (4U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__86__name = VL_SFORMATF_NX("group %0d/%0d tile 2: reached COMPUTE",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__86__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__87__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__87__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__89__cond = (2U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__89__name = VL_SFORMATF_NX("group %0d/%0d tile 2: tile_count advanced to 2 on the COMPUTE->DRAIN edge",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__89__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__89__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__89__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__90__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__90__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__92__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__92__name = VL_SFORMATF_NX("group %0d/%0d tile 2: no X/Z in requant_out",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__92__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__92__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__92__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__93__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__95__cond = (3U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__95__name = VL_SFORMATF_NX("group %0d/%0d tile 2: FUNCS looped back to PRELOAD",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__95__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__95__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__95__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__84__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__84__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__86__cond = (4U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__86__name = VL_SFORMATF_NX("group %0d/%0d tile 3: reached COMPUTE",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__86__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__87__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__87__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__89__cond = (3U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__89__name = VL_SFORMATF_NX("group %0d/%0d tile 3: tile_count advanced to 3 on the COMPUTE->DRAIN edge",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__89__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__89__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__89__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__90__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__90__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__92__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__92__name = VL_SFORMATF_NX("group %0d/%0d tile 3: no X/Z in requant_out",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__92__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__92__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__92__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__93__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__95__cond = (3U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__95__name = VL_SFORMATF_NX("group %0d/%0d tile 3: FUNCS looped back to PRELOAD",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__95__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__95__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__95__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__84__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__84__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__86__cond = (4U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__86__name = VL_SFORMATF_NX("group %0d/%0d tile 4: reached COMPUTE",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__86__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__87__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__87__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__89__cond = (4U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__89__name = VL_SFORMATF_NX("group %0d/%0d tile 4: tile_count advanced to 4 on the COMPUTE->DRAIN edge",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__89__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__89__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__89__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__90__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__90__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__92__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__92__name = VL_SFORMATF_NX("group %0d/%0d tile 4: no X/Z in requant_out",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__92__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__92__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__92__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__93__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__95__cond = (3U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__95__name = VL_SFORMATF_NX("group %0d/%0d tile 4: FUNCS looped back to PRELOAD",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__95__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__95__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__95__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__84__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__84__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__86__cond = (4U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__86__name = VL_SFORMATF_NX("group %0d/%0d tile 5: reached COMPUTE",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__86__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__87__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__87__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__89__cond = (5U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__89__name = VL_SFORMATF_NX("group %0d/%0d tile 5: tile_count advanced to 5 on the COMPUTE->DRAIN edge",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__89__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__89__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__89__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__90__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__90__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__92__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__92__name = VL_SFORMATF_NX("group %0d/%0d tile 5: no X/Z in requant_out",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__92__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__92__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__92__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__93__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__95__cond = (3U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__95__name = VL_SFORMATF_NX("group %0d/%0d tile 5: FUNCS looped back to PRELOAD",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__95__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__95__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__95__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__84__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__84__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__86__cond = (4U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__86__name = VL_SFORMATF_NX("group %0d/%0d tile 6: reached COMPUTE",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__86__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__87__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__87__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__89__cond = (6U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__89__name = VL_SFORMATF_NX("group %0d/%0d tile 6: tile_count advanced to 6 on the COMPUTE->DRAIN edge",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__89__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__89__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__89__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__90__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__90__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__92__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__92__name = VL_SFORMATF_NX("group %0d/%0d tile 6: no X/Z in requant_out",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__92__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__92__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__92__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__93__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__95__cond = (3U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__95__name = VL_SFORMATF_NX("group %0d/%0d tile 6: FUNCS looped back to PRELOAD",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__95__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__95__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__95__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__84__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__84__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__86__cond = (4U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__86__name = VL_SFORMATF_NX("group %0d/%0d tile 7: reached COMPUTE",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__86__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__87__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__87__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__89__cond = (7U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__89__name = VL_SFORMATF_NX("group %0d/%0d tile 7: tile_count advanced to 7 on the COMPUTE->DRAIN edge",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__89__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__89__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__89__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__90__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__90__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__92__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__92__name = VL_SFORMATF_NX("group %0d/%0d tile 7: no X/Z in requant_out",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__92__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__92__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__92__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__93__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__95__cond = (3U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__95__name = VL_SFORMATF_NX("group %0d/%0d tile 7: FUNCS looped back to PRELOAD",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__95__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__95__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__95__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__84__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__84__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__86__cond = (4U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__86__name = VL_SFORMATF_NX("group %0d/%0d tile 8: reached COMPUTE",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__86__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__87__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__87__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__89__cond = (8U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__89__name = VL_SFORMATF_NX("group %0d/%0d tile 8: tile_count advanced to 8 on the COMPUTE->DRAIN edge",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__89__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__89__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__89__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__90__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__90__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__92__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__92__name = VL_SFORMATF_NX("group %0d/%0d tile 8: no X/Z in requant_out",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__92__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__92__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__92__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__96__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__96__target = 0U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__96__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__96__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__96__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__96__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__96__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__96__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__96__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__98__cond = (0U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__98__name = VL_SFORMATF_NX("group %0d/%0d: all 8 tiles completed and FSM returned to IDLE (took %0d cycles)",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__n) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__98__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__98__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__98__name));
    }
    __Vtask_tb_tpu_top__DOT__check__99__cond = (0U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__99__name = VL_SFORMATF_NX("group %0d/%0d: DONE's tile_clr reset tile_count back to 0",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__99__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__99__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__99__name));
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials = 5U;
    __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num = 2U;
    __Vtask_tb_tpu_top__DOT__pulse_opcode__77__opcode = 1U;
    vlSelf->tb_tpu_top__DOT__uio_in = __Vtask_tb_tpu_top__DOT__pulse_opcode__77__opcode;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       105);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       105);
    vlSelf->tb_tpu_top__DOT__uio_in = 0U;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       105);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       105);
    __Vtask_tb_tpu_top__DOT__check__80__cond = (1U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__80__name = VL_SFORMATF_NX("group %0d/%0d: start pulse moves IDLE -> LOAD_DMA",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__80__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__80__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__80__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__81__max_cycles = 0x12cU;
    __Vtask_tb_tpu_top__DOT__wait_for_state__81__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__81__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__81__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__81__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__81__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__81__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__81__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__81__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__83__cond = (3U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__83__name = VL_SFORMATF_NX("group %0d/%0d: reached PRELOAD within budget (took %0d cycles)",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__n) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__83__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__83__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__83__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__84__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__84__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__86__cond = (4U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__86__name = VL_SFORMATF_NX("group %0d/%0d tile 1: reached COMPUTE",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__86__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__87__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__87__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__89__cond = (1U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__89__name = VL_SFORMATF_NX("group %0d/%0d tile 1: tile_count advanced to 1 on the COMPUTE->DRAIN edge",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__89__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__89__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__89__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__90__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__90__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__92__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__92__name = VL_SFORMATF_NX("group %0d/%0d tile 1: no X/Z in requant_out",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__92__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__92__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__92__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__93__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__95__cond = (3U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__95__name = VL_SFORMATF_NX("group %0d/%0d tile 1: FUNCS looped back to PRELOAD",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__95__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__95__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__95__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__84__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__84__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__86__cond = (4U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__86__name = VL_SFORMATF_NX("group %0d/%0d tile 2: reached COMPUTE",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__86__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__87__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__87__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__89__cond = (2U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__89__name = VL_SFORMATF_NX("group %0d/%0d tile 2: tile_count advanced to 2 on the COMPUTE->DRAIN edge",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__89__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__89__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__89__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__90__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__90__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__92__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__92__name = VL_SFORMATF_NX("group %0d/%0d tile 2: no X/Z in requant_out",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__92__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__92__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__92__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__93__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__95__cond = (3U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__95__name = VL_SFORMATF_NX("group %0d/%0d tile 2: FUNCS looped back to PRELOAD",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__95__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__95__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__95__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__84__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__84__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__86__cond = (4U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__86__name = VL_SFORMATF_NX("group %0d/%0d tile 3: reached COMPUTE",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__86__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__87__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__87__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__89__cond = (3U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__89__name = VL_SFORMATF_NX("group %0d/%0d tile 3: tile_count advanced to 3 on the COMPUTE->DRAIN edge",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__89__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__89__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__89__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__90__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__90__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__92__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__92__name = VL_SFORMATF_NX("group %0d/%0d tile 3: no X/Z in requant_out",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__92__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__92__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__92__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__93__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__95__cond = (3U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__95__name = VL_SFORMATF_NX("group %0d/%0d tile 3: FUNCS looped back to PRELOAD",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__95__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__95__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__95__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__84__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__84__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__86__cond = (4U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__86__name = VL_SFORMATF_NX("group %0d/%0d tile 4: reached COMPUTE",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__86__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__87__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__87__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__89__cond = (4U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__89__name = VL_SFORMATF_NX("group %0d/%0d tile 4: tile_count advanced to 4 on the COMPUTE->DRAIN edge",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__89__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__89__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__89__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__90__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__90__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__92__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__92__name = VL_SFORMATF_NX("group %0d/%0d tile 4: no X/Z in requant_out",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__92__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__92__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__92__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__93__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__95__cond = (3U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__95__name = VL_SFORMATF_NX("group %0d/%0d tile 4: FUNCS looped back to PRELOAD",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__95__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__95__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__95__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__84__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__84__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__86__cond = (4U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__86__name = VL_SFORMATF_NX("group %0d/%0d tile 5: reached COMPUTE",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__86__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__87__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__87__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__89__cond = (5U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__89__name = VL_SFORMATF_NX("group %0d/%0d tile 5: tile_count advanced to 5 on the COMPUTE->DRAIN edge",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__89__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__89__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__89__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__90__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__90__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__92__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__92__name = VL_SFORMATF_NX("group %0d/%0d tile 5: no X/Z in requant_out",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__92__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__92__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__92__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__93__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__95__cond = (3U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__95__name = VL_SFORMATF_NX("group %0d/%0d tile 5: FUNCS looped back to PRELOAD",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__95__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__95__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__95__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__84__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__84__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__86__cond = (4U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__86__name = VL_SFORMATF_NX("group %0d/%0d tile 6: reached COMPUTE",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__86__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__87__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__87__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__89__cond = (6U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__89__name = VL_SFORMATF_NX("group %0d/%0d tile 6: tile_count advanced to 6 on the COMPUTE->DRAIN edge",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__89__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__89__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__89__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__90__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__90__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__92__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__92__name = VL_SFORMATF_NX("group %0d/%0d tile 6: no X/Z in requant_out",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__92__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__92__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__92__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__93__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__95__cond = (3U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__95__name = VL_SFORMATF_NX("group %0d/%0d tile 6: FUNCS looped back to PRELOAD",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__95__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__95__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__95__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__84__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__84__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__86__cond = (4U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__86__name = VL_SFORMATF_NX("group %0d/%0d tile 7: reached COMPUTE",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__86__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__87__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__87__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__89__cond = (7U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__89__name = VL_SFORMATF_NX("group %0d/%0d tile 7: tile_count advanced to 7 on the COMPUTE->DRAIN edge",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__89__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__89__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__89__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__90__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__90__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__92__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__92__name = VL_SFORMATF_NX("group %0d/%0d tile 7: no X/Z in requant_out",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__92__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__92__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__92__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__93__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__95__cond = (3U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__95__name = VL_SFORMATF_NX("group %0d/%0d tile 7: FUNCS looped back to PRELOAD",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__95__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__95__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__95__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__84__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__84__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__86__cond = (4U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__86__name = VL_SFORMATF_NX("group %0d/%0d tile 8: reached COMPUTE",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__86__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__87__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__87__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__89__cond = (8U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__89__name = VL_SFORMATF_NX("group %0d/%0d tile 8: tile_count advanced to 8 on the COMPUTE->DRAIN edge",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__89__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__89__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__89__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__90__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__90__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__92__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__92__name = VL_SFORMATF_NX("group %0d/%0d tile 8: no X/Z in requant_out",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__92__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__92__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__92__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__96__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__96__target = 0U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__96__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__96__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__96__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__96__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__96__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__96__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__96__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__98__cond = (0U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__98__name = VL_SFORMATF_NX("group %0d/%0d: all 8 tiles completed and FSM returned to IDLE (took %0d cycles)",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__n) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__98__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__98__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__98__name));
    }
    __Vtask_tb_tpu_top__DOT__check__99__cond = (0U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__99__name = VL_SFORMATF_NX("group %0d/%0d: DONE's tile_clr reset tile_count back to 0",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__99__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__99__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__99__name));
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials = 5U;
    __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num = 3U;
    __Vtask_tb_tpu_top__DOT__pulse_opcode__77__opcode = 1U;
    vlSelf->tb_tpu_top__DOT__uio_in = __Vtask_tb_tpu_top__DOT__pulse_opcode__77__opcode;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       105);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       105);
    vlSelf->tb_tpu_top__DOT__uio_in = 0U;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       105);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       105);
    __Vtask_tb_tpu_top__DOT__check__80__cond = (1U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__80__name = VL_SFORMATF_NX("group %0d/%0d: start pulse moves IDLE -> LOAD_DMA",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__80__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__80__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__80__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__81__max_cycles = 0x12cU;
    __Vtask_tb_tpu_top__DOT__wait_for_state__81__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__81__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__81__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__81__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__81__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__81__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__81__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__81__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__83__cond = (3U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__83__name = VL_SFORMATF_NX("group %0d/%0d: reached PRELOAD within budget (took %0d cycles)",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__n) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__83__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__83__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__83__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__84__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__84__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__86__cond = (4U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__86__name = VL_SFORMATF_NX("group %0d/%0d tile 1: reached COMPUTE",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__86__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__87__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__87__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__89__cond = (1U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__89__name = VL_SFORMATF_NX("group %0d/%0d tile 1: tile_count advanced to 1 on the COMPUTE->DRAIN edge",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__89__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__89__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__89__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__90__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__90__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__92__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__92__name = VL_SFORMATF_NX("group %0d/%0d tile 1: no X/Z in requant_out",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__92__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__92__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__92__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__93__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__95__cond = (3U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__95__name = VL_SFORMATF_NX("group %0d/%0d tile 1: FUNCS looped back to PRELOAD",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__95__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__95__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__95__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__84__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__84__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__86__cond = (4U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__86__name = VL_SFORMATF_NX("group %0d/%0d tile 2: reached COMPUTE",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__86__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__87__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__87__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__89__cond = (2U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__89__name = VL_SFORMATF_NX("group %0d/%0d tile 2: tile_count advanced to 2 on the COMPUTE->DRAIN edge",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__89__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__89__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__89__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__90__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__90__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__92__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__92__name = VL_SFORMATF_NX("group %0d/%0d tile 2: no X/Z in requant_out",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__92__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__92__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__92__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__93__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__95__cond = (3U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__95__name = VL_SFORMATF_NX("group %0d/%0d tile 2: FUNCS looped back to PRELOAD",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__95__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__95__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__95__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__84__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__84__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__86__cond = (4U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__86__name = VL_SFORMATF_NX("group %0d/%0d tile 3: reached COMPUTE",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__86__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__87__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__87__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__89__cond = (3U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__89__name = VL_SFORMATF_NX("group %0d/%0d tile 3: tile_count advanced to 3 on the COMPUTE->DRAIN edge",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__89__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__89__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__89__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__90__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__90__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__92__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__92__name = VL_SFORMATF_NX("group %0d/%0d tile 3: no X/Z in requant_out",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__92__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__92__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__92__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__93__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__95__cond = (3U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__95__name = VL_SFORMATF_NX("group %0d/%0d tile 3: FUNCS looped back to PRELOAD",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__95__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__95__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__95__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__84__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__84__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__86__cond = (4U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__86__name = VL_SFORMATF_NX("group %0d/%0d tile 4: reached COMPUTE",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__86__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__87__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__87__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__89__cond = (4U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__89__name = VL_SFORMATF_NX("group %0d/%0d tile 4: tile_count advanced to 4 on the COMPUTE->DRAIN edge",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__89__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__89__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__89__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__90__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__90__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__92__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__92__name = VL_SFORMATF_NX("group %0d/%0d tile 4: no X/Z in requant_out",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__92__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__92__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__92__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__93__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__95__cond = (3U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__95__name = VL_SFORMATF_NX("group %0d/%0d tile 4: FUNCS looped back to PRELOAD",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__95__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__95__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__95__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__84__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__84__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__86__cond = (4U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__86__name = VL_SFORMATF_NX("group %0d/%0d tile 5: reached COMPUTE",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__86__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__87__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__87__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__89__cond = (5U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__89__name = VL_SFORMATF_NX("group %0d/%0d tile 5: tile_count advanced to 5 on the COMPUTE->DRAIN edge",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__89__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__89__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__89__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__90__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__90__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__92__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__92__name = VL_SFORMATF_NX("group %0d/%0d tile 5: no X/Z in requant_out",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__92__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__92__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__92__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__93__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__95__cond = (3U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__95__name = VL_SFORMATF_NX("group %0d/%0d tile 5: FUNCS looped back to PRELOAD",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__95__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__95__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__95__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__84__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__84__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__86__cond = (4U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__86__name = VL_SFORMATF_NX("group %0d/%0d tile 6: reached COMPUTE",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__86__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__87__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__87__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__89__cond = (6U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__89__name = VL_SFORMATF_NX("group %0d/%0d tile 6: tile_count advanced to 6 on the COMPUTE->DRAIN edge",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__89__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__89__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__89__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__90__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__90__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__92__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__92__name = VL_SFORMATF_NX("group %0d/%0d tile 6: no X/Z in requant_out",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__92__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__92__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__92__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__93__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__95__cond = (3U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__95__name = VL_SFORMATF_NX("group %0d/%0d tile 6: FUNCS looped back to PRELOAD",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__95__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__95__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__95__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__84__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__84__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__86__cond = (4U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__86__name = VL_SFORMATF_NX("group %0d/%0d tile 7: reached COMPUTE",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__86__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__87__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__87__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__89__cond = (7U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__89__name = VL_SFORMATF_NX("group %0d/%0d tile 7: tile_count advanced to 7 on the COMPUTE->DRAIN edge",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__89__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__89__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__89__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__90__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__90__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__92__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__92__name = VL_SFORMATF_NX("group %0d/%0d tile 7: no X/Z in requant_out",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__92__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__92__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__92__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__93__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__95__cond = (3U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__95__name = VL_SFORMATF_NX("group %0d/%0d tile 7: FUNCS looped back to PRELOAD",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__95__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__95__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__95__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__84__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__84__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__86__cond = (4U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__86__name = VL_SFORMATF_NX("group %0d/%0d tile 8: reached COMPUTE",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__86__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__87__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__87__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__89__cond = (8U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__89__name = VL_SFORMATF_NX("group %0d/%0d tile 8: tile_count advanced to 8 on the COMPUTE->DRAIN edge",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__89__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__89__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__89__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__90__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__90__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__92__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__92__name = VL_SFORMATF_NX("group %0d/%0d tile 8: no X/Z in requant_out",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__92__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__92__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__92__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__96__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__96__target = 0U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__96__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__96__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__96__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__96__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__96__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__96__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__96__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__98__cond = (0U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__98__name = VL_SFORMATF_NX("group %0d/%0d: all 8 tiles completed and FSM returned to IDLE (took %0d cycles)",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__n) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__98__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__98__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__98__name));
    }
    __Vtask_tb_tpu_top__DOT__check__99__cond = (0U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__99__name = VL_SFORMATF_NX("group %0d/%0d: DONE's tile_clr reset tile_count back to 0",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__99__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__99__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__99__name));
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials = 5U;
    __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num = 4U;
    __Vtask_tb_tpu_top__DOT__pulse_opcode__77__opcode = 1U;
    vlSelf->tb_tpu_top__DOT__uio_in = __Vtask_tb_tpu_top__DOT__pulse_opcode__77__opcode;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       105);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       105);
    vlSelf->tb_tpu_top__DOT__uio_in = 0U;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       105);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       105);
    __Vtask_tb_tpu_top__DOT__check__80__cond = (1U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__80__name = VL_SFORMATF_NX("group %0d/%0d: start pulse moves IDLE -> LOAD_DMA",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__80__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__80__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__80__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__81__max_cycles = 0x12cU;
    __Vtask_tb_tpu_top__DOT__wait_for_state__81__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__81__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__81__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__81__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__81__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__81__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__81__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__81__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__83__cond = (3U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__83__name = VL_SFORMATF_NX("group %0d/%0d: reached PRELOAD within budget (took %0d cycles)",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__n) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__83__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__83__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__83__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__84__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__84__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__86__cond = (4U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__86__name = VL_SFORMATF_NX("group %0d/%0d tile 1: reached COMPUTE",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__86__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__87__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__87__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__89__cond = (1U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__89__name = VL_SFORMATF_NX("group %0d/%0d tile 1: tile_count advanced to 1 on the COMPUTE->DRAIN edge",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__89__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__89__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__89__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__90__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__90__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__92__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__92__name = VL_SFORMATF_NX("group %0d/%0d tile 1: no X/Z in requant_out",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__92__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__92__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__92__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__93__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__95__cond = (3U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__95__name = VL_SFORMATF_NX("group %0d/%0d tile 1: FUNCS looped back to PRELOAD",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__95__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__95__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__95__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__84__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__84__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__86__cond = (4U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__86__name = VL_SFORMATF_NX("group %0d/%0d tile 2: reached COMPUTE",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__86__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__87__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__87__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__89__cond = (2U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__89__name = VL_SFORMATF_NX("group %0d/%0d tile 2: tile_count advanced to 2 on the COMPUTE->DRAIN edge",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__89__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__89__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__89__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__90__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__90__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__92__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__92__name = VL_SFORMATF_NX("group %0d/%0d tile 2: no X/Z in requant_out",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__92__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__92__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__92__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__93__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__95__cond = (3U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__95__name = VL_SFORMATF_NX("group %0d/%0d tile 2: FUNCS looped back to PRELOAD",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__95__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__95__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__95__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__84__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__84__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__86__cond = (4U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__86__name = VL_SFORMATF_NX("group %0d/%0d tile 3: reached COMPUTE",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__86__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__87__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__87__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__89__cond = (3U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__89__name = VL_SFORMATF_NX("group %0d/%0d tile 3: tile_count advanced to 3 on the COMPUTE->DRAIN edge",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__89__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__89__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__89__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__90__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__90__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__92__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__92__name = VL_SFORMATF_NX("group %0d/%0d tile 3: no X/Z in requant_out",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__92__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__92__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__92__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__93__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__95__cond = (3U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__95__name = VL_SFORMATF_NX("group %0d/%0d tile 3: FUNCS looped back to PRELOAD",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__95__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__95__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__95__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__84__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__84__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__86__cond = (4U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__86__name = VL_SFORMATF_NX("group %0d/%0d tile 4: reached COMPUTE",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__86__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__87__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__87__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__89__cond = (4U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__89__name = VL_SFORMATF_NX("group %0d/%0d tile 4: tile_count advanced to 4 on the COMPUTE->DRAIN edge",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__89__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__89__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__89__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__90__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__90__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__92__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__92__name = VL_SFORMATF_NX("group %0d/%0d tile 4: no X/Z in requant_out",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__92__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__92__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__92__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__93__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__95__cond = (3U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__95__name = VL_SFORMATF_NX("group %0d/%0d tile 4: FUNCS looped back to PRELOAD",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__95__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__95__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__95__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__84__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__84__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__86__cond = (4U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__86__name = VL_SFORMATF_NX("group %0d/%0d tile 5: reached COMPUTE",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__86__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__87__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__87__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__89__cond = (5U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__89__name = VL_SFORMATF_NX("group %0d/%0d tile 5: tile_count advanced to 5 on the COMPUTE->DRAIN edge",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__89__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__89__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__89__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__90__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__90__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__92__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__92__name = VL_SFORMATF_NX("group %0d/%0d tile 5: no X/Z in requant_out",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__92__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__92__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__92__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__93__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__95__cond = (3U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__95__name = VL_SFORMATF_NX("group %0d/%0d tile 5: FUNCS looped back to PRELOAD",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__95__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__95__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__95__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__84__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__84__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__86__cond = (4U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__86__name = VL_SFORMATF_NX("group %0d/%0d tile 6: reached COMPUTE",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__86__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__87__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__87__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__89__cond = (6U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__89__name = VL_SFORMATF_NX("group %0d/%0d tile 6: tile_count advanced to 6 on the COMPUTE->DRAIN edge",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__89__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__89__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__89__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__90__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__90__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__92__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__92__name = VL_SFORMATF_NX("group %0d/%0d tile 6: no X/Z in requant_out",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__92__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__92__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__92__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__93__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__95__cond = (3U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__95__name = VL_SFORMATF_NX("group %0d/%0d tile 6: FUNCS looped back to PRELOAD",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__95__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__95__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__95__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__84__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__84__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__86__cond = (4U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__86__name = VL_SFORMATF_NX("group %0d/%0d tile 7: reached COMPUTE",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__86__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__87__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__87__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__89__cond = (7U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__89__name = VL_SFORMATF_NX("group %0d/%0d tile 7: tile_count advanced to 7 on the COMPUTE->DRAIN edge",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__89__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__89__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__89__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__90__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__90__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__92__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__92__name = VL_SFORMATF_NX("group %0d/%0d tile 7: no X/Z in requant_out",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__92__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__92__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__92__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__93__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__95__cond = (3U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__95__name = VL_SFORMATF_NX("group %0d/%0d tile 7: FUNCS looped back to PRELOAD",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__95__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__95__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__95__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__84__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__84__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__86__cond = (4U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__86__name = VL_SFORMATF_NX("group %0d/%0d tile 8: reached COMPUTE",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__86__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__87__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__87__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__89__cond = (8U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__89__name = VL_SFORMATF_NX("group %0d/%0d tile 8: tile_count advanced to 8 on the COMPUTE->DRAIN edge",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__89__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__89__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__89__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__90__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__90__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__92__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__92__name = VL_SFORMATF_NX("group %0d/%0d tile 8: no X/Z in requant_out",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__92__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__92__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__92__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__96__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__96__target = 0U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__96__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__96__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__96__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__96__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__96__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__96__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__96__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__98__cond = (0U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__98__name = VL_SFORMATF_NX("group %0d/%0d: all 8 tiles completed and FSM returned to IDLE (took %0d cycles)",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__n) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__98__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__98__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__98__name));
    }
    __Vtask_tb_tpu_top__DOT__check__99__cond = (0U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__99__name = VL_SFORMATF_NX("group %0d/%0d: DONE's tile_clr reset tile_count back to 0",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__99__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__99__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__99__name));
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials = 5U;
    __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num = 5U;
    __Vtask_tb_tpu_top__DOT__pulse_opcode__77__opcode = 1U;
    vlSelf->tb_tpu_top__DOT__uio_in = __Vtask_tb_tpu_top__DOT__pulse_opcode__77__opcode;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       105);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       105);
    vlSelf->tb_tpu_top__DOT__uio_in = 0U;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       105);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       105);
    __Vtask_tb_tpu_top__DOT__check__80__cond = (1U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__80__name = VL_SFORMATF_NX("group %0d/%0d: start pulse moves IDLE -> LOAD_DMA",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__80__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__80__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__80__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__81__max_cycles = 0x12cU;
    __Vtask_tb_tpu_top__DOT__wait_for_state__81__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__81__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__81__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__81__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__81__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__81__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__81__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__81__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__83__cond = (3U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__83__name = VL_SFORMATF_NX("group %0d/%0d: reached PRELOAD within budget (took %0d cycles)",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__n) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__83__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__83__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__83__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__84__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__84__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__86__cond = (4U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__86__name = VL_SFORMATF_NX("group %0d/%0d tile 1: reached COMPUTE",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__86__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__87__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__87__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__89__cond = (1U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__89__name = VL_SFORMATF_NX("group %0d/%0d tile 1: tile_count advanced to 1 on the COMPUTE->DRAIN edge",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__89__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__89__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__89__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__90__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__90__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__92__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__92__name = VL_SFORMATF_NX("group %0d/%0d tile 1: no X/Z in requant_out",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__92__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__92__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__92__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__93__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__95__cond = (3U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__95__name = VL_SFORMATF_NX("group %0d/%0d tile 1: FUNCS looped back to PRELOAD",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__95__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__95__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__95__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__84__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__84__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__86__cond = (4U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__86__name = VL_SFORMATF_NX("group %0d/%0d tile 2: reached COMPUTE",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__86__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__87__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__87__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__89__cond = (2U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__89__name = VL_SFORMATF_NX("group %0d/%0d tile 2: tile_count advanced to 2 on the COMPUTE->DRAIN edge",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__89__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__89__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__89__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__90__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__90__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__92__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__92__name = VL_SFORMATF_NX("group %0d/%0d tile 2: no X/Z in requant_out",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__92__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__92__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__92__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__93__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__95__cond = (3U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__95__name = VL_SFORMATF_NX("group %0d/%0d tile 2: FUNCS looped back to PRELOAD",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__95__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__95__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__95__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__84__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__84__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__86__cond = (4U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__86__name = VL_SFORMATF_NX("group %0d/%0d tile 3: reached COMPUTE",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__86__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__87__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__87__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__89__cond = (3U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__89__name = VL_SFORMATF_NX("group %0d/%0d tile 3: tile_count advanced to 3 on the COMPUTE->DRAIN edge",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__89__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__89__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__89__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__90__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__90__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__92__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__92__name = VL_SFORMATF_NX("group %0d/%0d tile 3: no X/Z in requant_out",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__92__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__92__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__92__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__93__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__95__cond = (3U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__95__name = VL_SFORMATF_NX("group %0d/%0d tile 3: FUNCS looped back to PRELOAD",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__95__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__95__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__95__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__84__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__84__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__86__cond = (4U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__86__name = VL_SFORMATF_NX("group %0d/%0d tile 4: reached COMPUTE",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__86__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__87__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__87__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__89__cond = (4U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__89__name = VL_SFORMATF_NX("group %0d/%0d tile 4: tile_count advanced to 4 on the COMPUTE->DRAIN edge",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__89__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__89__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__89__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__90__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__90__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__92__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__92__name = VL_SFORMATF_NX("group %0d/%0d tile 4: no X/Z in requant_out",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__92__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__92__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__92__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__93__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__95__cond = (3U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__95__name = VL_SFORMATF_NX("group %0d/%0d tile 4: FUNCS looped back to PRELOAD",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__95__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__95__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__95__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__84__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__84__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__86__cond = (4U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__86__name = VL_SFORMATF_NX("group %0d/%0d tile 5: reached COMPUTE",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__86__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__87__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__87__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__89__cond = (5U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__89__name = VL_SFORMATF_NX("group %0d/%0d tile 5: tile_count advanced to 5 on the COMPUTE->DRAIN edge",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__89__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__89__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__89__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__90__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__90__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__92__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__92__name = VL_SFORMATF_NX("group %0d/%0d tile 5: no X/Z in requant_out",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__92__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__92__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__92__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__93__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__95__cond = (3U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__95__name = VL_SFORMATF_NX("group %0d/%0d tile 5: FUNCS looped back to PRELOAD",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__95__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__95__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__95__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__84__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__84__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__86__cond = (4U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__86__name = VL_SFORMATF_NX("group %0d/%0d tile 6: reached COMPUTE",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__86__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__87__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__87__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__89__cond = (6U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__89__name = VL_SFORMATF_NX("group %0d/%0d tile 6: tile_count advanced to 6 on the COMPUTE->DRAIN edge",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__89__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__89__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__89__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__90__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__90__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__92__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__92__name = VL_SFORMATF_NX("group %0d/%0d tile 6: no X/Z in requant_out",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__92__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__92__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__92__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__93__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__95__cond = (3U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__95__name = VL_SFORMATF_NX("group %0d/%0d tile 6: FUNCS looped back to PRELOAD",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__95__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__95__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__95__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__84__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__84__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__86__cond = (4U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__86__name = VL_SFORMATF_NX("group %0d/%0d tile 7: reached COMPUTE",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__86__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__87__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__87__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__89__cond = (7U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__89__name = VL_SFORMATF_NX("group %0d/%0d tile 7: tile_count advanced to 7 on the COMPUTE->DRAIN edge",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__89__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__89__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__89__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__90__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__90__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__92__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__92__name = VL_SFORMATF_NX("group %0d/%0d tile 7: no X/Z in requant_out",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__92__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__92__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__92__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__93__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__95__cond = (3U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__95__name = VL_SFORMATF_NX("group %0d/%0d tile 7: FUNCS looped back to PRELOAD",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__95__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__95__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__95__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__84__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__84__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__84__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__86__cond = (4U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__86__name = VL_SFORMATF_NX("group %0d/%0d tile 8: reached COMPUTE",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__86__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__87__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__87__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__87__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__89__cond = (8U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__89__name = VL_SFORMATF_NX("group %0d/%0d tile 8: tile_count advanced to 8 on the COMPUTE->DRAIN edge",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__89__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__89__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__89__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__90__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__90__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__90__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__92__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__92__name = VL_SFORMATF_NX("group %0d/%0d tile 8: no X/Z in requant_out",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__92__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__92__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__92__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__96__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__96__target = 0U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__96__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__96__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__96__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__96__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           105);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           105);
        __Vtask_tb_tpu_top__DOT__wait_for_state__96__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__96__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__76__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__96__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__98__cond = (0U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__98__name = VL_SFORMATF_NX("group %0d/%0d: all 8 tiles completed and FSM returned to IDLE (took %0d cycles)",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__n) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__98__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__98__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__98__name));
    }
    __Vtask_tb_tpu_top__DOT__check__99__cond = (0U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__99__name = VL_SFORMATF_NX("group %0d/%0d: DONE's tile_clr reset tile_count back to 0",
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__trial_num,
                                                              32,
                                                              __Vtask_tb_tpu_top__DOT__run_group_test__76__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__99__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__99__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__99__name));
    }
    VL_WRITEF("==== SUMMARY ====\ntpu_top: %0d/%0d checks passed\n",
              32,(vlSelf->tb_tpu_top__DOT__checks - vlSelf->tb_tpu_top__DOT__errors),
              32,vlSelf->tb_tpu_top__DOT__checks);
    VL_FINISH_MT("tb/tb_tpu_top.sv", 319, "");
}
