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
    IData/*31:0*/ tb_tpu_top__DOT__last_group_row;
    tb_tpu_top__DOT__last_group_row = 0;
    IData/*31:0*/ tb_tpu_top__DOT__unnamedblk2__DOT__n;
    tb_tpu_top__DOT__unnamedblk2__DOT__n = 0;
    IData/*31:0*/ tb_tpu_top__DOT__unnamedblk2__DOT__group1_row;
    tb_tpu_top__DOT__unnamedblk2__DOT__group1_row = 0;
    IData/*31:0*/ tb_tpu_top__DOT__unnamedblk2__DOT__unnamedblk5__DOT__trial;
    tb_tpu_top__DOT__unnamedblk2__DOT__unnamedblk5__DOT__trial = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__1__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__1__cond;
    __Vtask_tb_tpu_top__DOT__check__1__cond = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__2__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__2__cond;
    __Vtask_tb_tpu_top__DOT__check__2__cond = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__3__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__3__cond;
    __Vtask_tb_tpu_top__DOT__check__3__cond = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__5__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__5__cond;
    __Vtask_tb_tpu_top__DOT__check__5__cond = 0;
    CData/*4:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__6__target;
    __Vtask_tb_tpu_top__DOT__wait_for_state__6__target = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__6__max_cycles;
    __Vtask_tb_tpu_top__DOT__wait_for_state__6__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__6__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__6__cycles_taken = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__8__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__8__cond;
    __Vtask_tb_tpu_top__DOT__check__8__cond = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__9__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__9__cond;
    __Vtask_tb_tpu_top__DOT__check__9__cond = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__10__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__10__cond;
    __Vtask_tb_tpu_top__DOT__check__10__cond = 0;
    CData/*4:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__11__target;
    __Vtask_tb_tpu_top__DOT__wait_for_state__11__target = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__11__max_cycles;
    __Vtask_tb_tpu_top__DOT__wait_for_state__11__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__11__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__11__cycles_taken = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__13__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__13__cond;
    __Vtask_tb_tpu_top__DOT__check__13__cond = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__14__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__14__cond;
    __Vtask_tb_tpu_top__DOT__check__14__cond = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__15__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__15__cond;
    __Vtask_tb_tpu_top__DOT__check__15__cond = 0;
    VlWide<5>/*131:0*/ __Vfunc_tb_tpu_top__DOT__pack_weight_row__16__Vfuncout;
    VL_ZERO_W(132, __Vfunc_tb_tpu_top__DOT__pack_weight_row__16__Vfuncout);
    IData/*31:0*/ __Vfunc_tb_tpu_top__DOT__pack_weight_row__16__row;
    __Vfunc_tb_tpu_top__DOT__pack_weight_row__16__row = 0;
    CData/*4:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__17__target;
    __Vtask_tb_tpu_top__DOT__wait_for_state__17__target = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__17__max_cycles;
    __Vtask_tb_tpu_top__DOT__wait_for_state__17__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__17__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__17__cycles_taken = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__19__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__19__cond;
    __Vtask_tb_tpu_top__DOT__check__19__cond = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__20__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__20__cond;
    __Vtask_tb_tpu_top__DOT__check__20__cond = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__21__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__21__cond;
    __Vtask_tb_tpu_top__DOT__check__21__cond = 0;
    CData/*4:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__22__target;
    __Vtask_tb_tpu_top__DOT__wait_for_state__22__target = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__22__max_cycles;
    __Vtask_tb_tpu_top__DOT__wait_for_state__22__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__22__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__22__cycles_taken = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__24__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__24__cond;
    __Vtask_tb_tpu_top__DOT__check__24__cond = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__25__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__25__cond;
    __Vtask_tb_tpu_top__DOT__check__25__cond = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__26__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__26__cond;
    __Vtask_tb_tpu_top__DOT__check__26__cond = 0;
    CData/*4:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__27__target;
    __Vtask_tb_tpu_top__DOT__wait_for_state__27__target = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__27__max_cycles;
    __Vtask_tb_tpu_top__DOT__wait_for_state__27__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__27__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__27__cycles_taken = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__29__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__29__cond;
    __Vtask_tb_tpu_top__DOT__check__29__cond = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__30__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__30__cond;
    __Vtask_tb_tpu_top__DOT__check__30__cond = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__31__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__31__cond;
    __Vtask_tb_tpu_top__DOT__check__31__cond = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__32__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__32__cond;
    __Vtask_tb_tpu_top__DOT__check__32__cond = 0;
    CData/*4:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__33__target;
    __Vtask_tb_tpu_top__DOT__wait_for_state__33__target = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__33__max_cycles;
    __Vtask_tb_tpu_top__DOT__wait_for_state__33__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__33__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__33__cycles_taken = 0;
    CData/*4:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__35__target;
    __Vtask_tb_tpu_top__DOT__wait_for_state__35__target = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__35__max_cycles;
    __Vtask_tb_tpu_top__DOT__wait_for_state__35__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__35__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__35__cycles_taken = 0;
    CData/*4:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__37__target;
    __Vtask_tb_tpu_top__DOT__wait_for_state__37__target = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__37__max_cycles;
    __Vtask_tb_tpu_top__DOT__wait_for_state__37__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__37__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__37__cycles_taken = 0;
    CData/*4:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__39__target;
    __Vtask_tb_tpu_top__DOT__wait_for_state__39__target = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__39__max_cycles;
    __Vtask_tb_tpu_top__DOT__wait_for_state__39__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__39__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__39__cycles_taken = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__41__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__41__cond;
    __Vtask_tb_tpu_top__DOT__check__41__cond = 0;
    CData/*4:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__42__target;
    __Vtask_tb_tpu_top__DOT__wait_for_state__42__target = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__42__max_cycles;
    __Vtask_tb_tpu_top__DOT__wait_for_state__42__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__42__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__42__cycles_taken = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__44__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__44__cond;
    __Vtask_tb_tpu_top__DOT__check__44__cond = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__45__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__45__cond;
    __Vtask_tb_tpu_top__DOT__check__45__cond = 0;
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
    CData/*4:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__52__target;
    __Vtask_tb_tpu_top__DOT__wait_for_state__52__target = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__52__max_cycles;
    __Vtask_tb_tpu_top__DOT__wait_for_state__52__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__52__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__52__cycles_taken = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__54__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__54__cond;
    __Vtask_tb_tpu_top__DOT__check__54__cond = 0;
    CData/*4:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__55__target;
    __Vtask_tb_tpu_top__DOT__wait_for_state__55__target = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__55__max_cycles;
    __Vtask_tb_tpu_top__DOT__wait_for_state__55__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__55__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__55__cycles_taken = 0;
    CData/*4:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__57__target;
    __Vtask_tb_tpu_top__DOT__wait_for_state__57__target = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__57__max_cycles;
    __Vtask_tb_tpu_top__DOT__wait_for_state__57__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__57__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__57__cycles_taken = 0;
    CData/*4:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__59__target;
    __Vtask_tb_tpu_top__DOT__wait_for_state__59__target = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__59__max_cycles;
    __Vtask_tb_tpu_top__DOT__wait_for_state__59__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__59__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__59__cycles_taken = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__61__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__61__cond;
    __Vtask_tb_tpu_top__DOT__check__61__cond = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__62__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__62__cond;
    __Vtask_tb_tpu_top__DOT__check__62__cond = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__run_random_group_test__63__trial_num;
    __Vtask_tb_tpu_top__DOT__run_random_group_test__63__trial_num = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__run_random_group_test__63__num_trials;
    __Vtask_tb_tpu_top__DOT__run_random_group_test__63__num_trials = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__run_random_group_test__63__grow;
    __Vtask_tb_tpu_top__DOT__run_random_group_test__63__grow = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__run_random_group_test__63__cap_before;
    __Vtask_tb_tpu_top__DOT__run_random_group_test__63__cap_before = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__65__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__65__cond;
    __Vtask_tb_tpu_top__DOT__check__65__cond = 0;
    CData/*4:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__66__target;
    __Vtask_tb_tpu_top__DOT__wait_for_state__66__target = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__66__max_cycles;
    __Vtask_tb_tpu_top__DOT__wait_for_state__66__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__66__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__66__cycles_taken = 0;
    CData/*4:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__68__target;
    __Vtask_tb_tpu_top__DOT__wait_for_state__68__target = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__68__max_cycles;
    __Vtask_tb_tpu_top__DOT__wait_for_state__68__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__68__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__68__cycles_taken = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__70__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__70__cond;
    __Vtask_tb_tpu_top__DOT__check__70__cond = 0;
    VlWide<5>/*131:0*/ __Vfunc_tb_tpu_top__DOT__pack_weight_row__71__Vfuncout;
    VL_ZERO_W(132, __Vfunc_tb_tpu_top__DOT__pack_weight_row__71__Vfuncout);
    IData/*31:0*/ __Vfunc_tb_tpu_top__DOT__pack_weight_row__71__row;
    __Vfunc_tb_tpu_top__DOT__pack_weight_row__71__row = 0;
    VlWide<5>/*131:0*/ __Vfunc_tb_tpu_top__DOT__pack_weight_row__72__Vfuncout;
    VL_ZERO_W(132, __Vfunc_tb_tpu_top__DOT__pack_weight_row__72__Vfuncout);
    IData/*31:0*/ __Vfunc_tb_tpu_top__DOT__pack_weight_row__72__row;
    __Vfunc_tb_tpu_top__DOT__pack_weight_row__72__row = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__73__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__73__cond;
    __Vtask_tb_tpu_top__DOT__check__73__cond = 0;
    CData/*4:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__74__target;
    __Vtask_tb_tpu_top__DOT__wait_for_state__74__target = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__74__max_cycles;
    __Vtask_tb_tpu_top__DOT__wait_for_state__74__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__74__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__74__cycles_taken = 0;
    CData/*4:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__76__target;
    __Vtask_tb_tpu_top__DOT__wait_for_state__76__target = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__76__max_cycles;
    __Vtask_tb_tpu_top__DOT__wait_for_state__76__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__76__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__76__cycles_taken = 0;
    CData/*4:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__78__target;
    __Vtask_tb_tpu_top__DOT__wait_for_state__78__target = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__78__max_cycles;
    __Vtask_tb_tpu_top__DOT__wait_for_state__78__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__78__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__78__cycles_taken = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__80__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__80__cond;
    __Vtask_tb_tpu_top__DOT__check__80__cond = 0;
    CData/*4:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__81__target;
    __Vtask_tb_tpu_top__DOT__wait_for_state__81__target = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__81__max_cycles;
    __Vtask_tb_tpu_top__DOT__wait_for_state__81__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__81__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__81__cycles_taken = 0;
    CData/*4:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__83__target;
    __Vtask_tb_tpu_top__DOT__wait_for_state__83__target = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__83__max_cycles;
    __Vtask_tb_tpu_top__DOT__wait_for_state__83__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__83__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__83__cycles_taken = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__85__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__85__cond;
    __Vtask_tb_tpu_top__DOT__check__85__cond = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__86__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__86__cond;
    __Vtask_tb_tpu_top__DOT__check__86__cond = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__87__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__87__cond;
    __Vtask_tb_tpu_top__DOT__check__87__cond = 0;
    VlWide<5>/*159:0*/ __Vtemp_25;
    VlWide<5>/*159:0*/ __Vtemp_156;
    VlWide<5>/*159:0*/ __Vtemp_159;
    // Body
    vlSelf->tb_tpu_top__DOT__rst_n = 0U;
    vlSelf->tb_tpu_top__DOT__start = 0U;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       52);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       52);
    vlSelf->tb_tpu_top__DOT__rst_n = 1U;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       54);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       54);
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
    __Vtask_tb_tpu_top__DOT__check__3__cond = (0U == vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__capture_count);
    __Vtask_tb_tpu_top__DOT__check__3__name = std::string{"reset: DMA has captured nothing yet"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__3__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__3__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__3__name));
    }
    VL_WRITEF("==== tpu_top: tile 1 - PREFILL ====\n");
    vlSelf->tb_tpu_top__DOT__start = 1U;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       58);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       58);
    vlSelf->tb_tpu_top__DOT__start = 0U;
    __Vtask_tb_tpu_top__DOT__check__5__cond = (1U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__5__name = std::string{"start pulse moves IDLE -> PREFILL"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__5__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__5__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__5__name));
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__group1_row = vlSelf->tb_tpu_top__DOT__dut__DOT__weight_bank_out;
    __Vtask_tb_tpu_top__DOT__wait_for_state__6__max_cycles = 0x28U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__6__target = 2U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__6__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__6__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__6__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__6__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           58);
        __Vtask_tb_tpu_top__DOT__wait_for_state__6__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__6__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__6__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__8__cond = (2U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__8__name = VL_SFORMATF_NX("reached PRELOAD within budget (took %0d cycles)",
                                                             32,
                                                             tb_tpu_top__DOT__unnamedblk2__DOT__n) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__8__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__8__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__8__name));
    }
    __Vtask_tb_tpu_top__DOT__check__9__cond = (0x10U 
                                               == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__prefill_count));
    __Vtask_tb_tpu_top__DOT__check__9__name = std::string{"PREFILL ran the full 16 cycles (prefill_count saturated)"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__9__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__9__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__9__name));
    }
    __Vtask_tb_tpu_top__DOT__check__10__cond = (0U 
                                                != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__count));
    __Vtask_tb_tpu_top__DOT__check__10__name = std::string{"dummy DMA's weight stream was accepted into the weight FIFO"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__10__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__10__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__10__name));
    }
    VL_WRITEF("==== tpu_top: tile 1 - PRELOAD -> COMPUTE ====\n");
    __Vtask_tb_tpu_top__DOT__wait_for_state__11__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__11__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__11__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__11__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__11__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__11__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           58);
        __Vtask_tb_tpu_top__DOT__wait_for_state__11__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__11__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__11__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__13__cond = (3U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__13__name = VL_SFORMATF_NX("reached COMPUTE within budget (took %0d cycles)",
                                                              32,
                                                              tb_tpu_top__DOT__unnamedblk2__DOT__n) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__13__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__13__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__13__name));
    }
    __Vtask_tb_tpu_top__DOT__check__14__cond = (0U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__count));
    __Vtask_tb_tpu_top__DOT__check__14__name = std::string{"weight FIFO fully drained by the end of PRELOAD"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__14__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__14__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__14__name));
    }
    VL_WRITEF("[INFO] product_array after PRELOAD (row 3 = product_array[3]): %0# %0# %0# %0#\n",
              33,(0x1ffffffffULL & (((QData)((IData)(
                                                     vlSelf->__VdfgTmp_hfccefdc9__0[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->__VdfgTmp_hfccefdc9__0[0U])))),
              33,(0x1ffffffffULL & (((QData)((IData)(
                                                     vlSelf->__VdfgTmp_hfccefdc9__0[2U])) 
                                     << 0x1fU) | ((QData)((IData)(
                                                                  vlSelf->__VdfgTmp_hfccefdc9__0[1U])) 
                                                  >> 1U))),
              33,(0x1ffffffffULL & (((QData)((IData)(
                                                     vlSelf->__VdfgTmp_hfccefdc9__0[3U])) 
                                     << 0x1eU) | ((QData)((IData)(
                                                                  vlSelf->__VdfgTmp_hfccefdc9__0[2U])) 
                                                  >> 2U))),
              33,(0x1ffffffffULL & ((QData)((IData)(
                                                    vlSelf->__VdfgTmp_hfccefdc9__0[3U])) 
                                    >> 3U)));
    __Vtemp_25[0U] = vlSelf->__VdfgTmp_hfccefdc9__0[0U];
    __Vtemp_25[1U] = vlSelf->__VdfgTmp_hfccefdc9__0[1U];
    __Vtemp_25[2U] = vlSelf->__VdfgTmp_hfccefdc9__0[2U];
    __Vtemp_25[3U] = vlSelf->__VdfgTmp_hfccefdc9__0[3U];
    __Vtemp_25[4U] = 0U;
    __Vtask_tb_tpu_top__DOT__check__15__cond = VL_EQ_W(5, __Vtemp_25, 
                                                       ([&]() {
                __Vfunc_tb_tpu_top__DOT__pack_weight_row__16__row 
                    = tb_tpu_top__DOT__unnamedblk2__DOT__group1_row;
                __Vfunc_tb_tpu_top__DOT__pack_weight_row__16__Vfuncout[0U] 
                    = (IData)((QData)((IData)((0xffU 
                                               & __Vfunc_tb_tpu_top__DOT__pack_weight_row__16__row))));
                __Vfunc_tb_tpu_top__DOT__pack_weight_row__16__Vfuncout[1U] 
                    = (((IData)((QData)((IData)((0xffU 
                                                 & (__Vfunc_tb_tpu_top__DOT__pack_weight_row__16__row 
                                                    >> 8U))))) 
                        << 1U) | (IData)(((QData)((IData)(
                                                          (0xffU 
                                                           & __Vfunc_tb_tpu_top__DOT__pack_weight_row__16__row))) 
                                          >> 0x20U)));
                __Vfunc_tb_tpu_top__DOT__pack_weight_row__16__Vfuncout[2U] 
                    = ((0xfffffffcU & __Vfunc_tb_tpu_top__DOT__pack_weight_row__16__Vfuncout[2U]) 
                       | (((IData)((QData)((IData)(
                                                   (0xffU 
                                                    & (__Vfunc_tb_tpu_top__DOT__pack_weight_row__16__row 
                                                       >> 8U))))) 
                           >> 0x1fU) | ((IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (__Vfunc_tb_tpu_top__DOT__pack_weight_row__16__row 
                                                                     >> 8U)))) 
                                                 >> 0x20U)) 
                                        << 1U)));
                __Vfunc_tb_tpu_top__DOT__pack_weight_row__16__Vfuncout[2U] 
                    = ((3U & __Vfunc_tb_tpu_top__DOT__pack_weight_row__16__Vfuncout[2U]) 
                       | ((IData)((QData)((IData)((0xffU 
                                                   & (__Vfunc_tb_tpu_top__DOT__pack_weight_row__16__row 
                                                      >> 0x10U))))) 
                          << 2U));
                __Vfunc_tb_tpu_top__DOT__pack_weight_row__16__Vfuncout[3U] 
                    = (((IData)((QData)((IData)((0xffU 
                                                 & (__Vfunc_tb_tpu_top__DOT__pack_weight_row__16__row 
                                                    >> 0x10U))))) 
                        >> 0x1eU) | (((IData)((QData)((IData)(
                                                              (__Vfunc_tb_tpu_top__DOT__pack_weight_row__16__row 
                                                               >> 0x18U)))) 
                                      << 3U) | ((IData)(
                                                        ((QData)((IData)(
                                                                         (0xffU 
                                                                          & (__Vfunc_tb_tpu_top__DOT__pack_weight_row__16__row 
                                                                             >> 0x10U)))) 
                                                         >> 0x20U)) 
                                                << 2U)));
                __Vfunc_tb_tpu_top__DOT__pack_weight_row__16__Vfuncout[4U] 
                    = (0xfU & (((3U & ((IData)((QData)((IData)(
                                                               (__Vfunc_tb_tpu_top__DOT__pack_weight_row__16__row 
                                                                >> 0x18U)))) 
                                       >> 0x1dU)) | 
                                ((IData)(((QData)((IData)(
                                                          (0xffU 
                                                           & (__Vfunc_tb_tpu_top__DOT__pack_weight_row__16__row 
                                                              >> 0x10U)))) 
                                          >> 0x20U)) 
                                 >> 0x1eU)) | ((4U 
                                                & ((IData)((QData)((IData)(
                                                                           (__Vfunc_tb_tpu_top__DOT__pack_weight_row__16__row 
                                                                            >> 0x18U)))) 
                                                   >> 0x1dU)) 
                                               | ((IData)(
                                                          ((QData)((IData)(
                                                                           (__Vfunc_tb_tpu_top__DOT__pack_weight_row__16__row 
                                                                            >> 0x18U))) 
                                                           >> 0x20U)) 
                                                  << 3U))));
            }(), __Vfunc_tb_tpu_top__DOT__pack_weight_row__16__Vfuncout));
    __Vtask_tb_tpu_top__DOT__check__15__name = VL_SFORMATF_NX("preload_max=8 gives PE_array's down_out chain enough cycles to carry the DMA's weight row (%0#,%0#,%0#,%0#) all the way to row 3 before COMPUTE starts",
                                                              8,
                                                              (0xffU 
                                                               & tb_tpu_top__DOT__unnamedblk2__DOT__group1_row),
                                                              8,
                                                              (0xffU 
                                                               & (tb_tpu_top__DOT__unnamedblk2__DOT__group1_row 
                                                                  >> 8U)),
                                                              8,
                                                              (0xffU 
                                                               & (tb_tpu_top__DOT__unnamedblk2__DOT__group1_row 
                                                                  >> 0x10U)),
                                                              8,
                                                              (tb_tpu_top__DOT__unnamedblk2__DOT__group1_row 
                                                               >> 0x18U)) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__15__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__15__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__15__name));
    }
    VL_WRITEF("==== tpu_top: tile 1 - COMPUTE -> DRAIN ====\n");
    __Vtask_tb_tpu_top__DOT__wait_for_state__17__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__17__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__17__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__17__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__17__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__17__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           58);
        __Vtask_tb_tpu_top__DOT__wait_for_state__17__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__17__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__17__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__19__cond = (4U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__19__name = VL_SFORMATF_NX("reached DRAIN within budget (took %0d cycles)",
                                                              32,
                                                              tb_tpu_top__DOT__unnamedblk2__DOT__n) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__19__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__19__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__19__name));
    }
    __Vtask_tb_tpu_top__DOT__check__20__cond = (7U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__compute_count));
    __Vtask_tb_tpu_top__DOT__check__20__name = std::string{"COMPUTE ran the full 7 cycles (compute_count saturated)"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__20__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__20__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__20__name));
    }
    __Vtask_tb_tpu_top__DOT__check__21__cond = (1U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__21__name = std::string{"tile_done pulsed on the COMPUTE->DRAIN edge (tile_count advanced to 1)"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__21__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__21__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__21__name));
    }
    VL_WRITEF("==== tpu_top: tile 1 - DRAIN -> FUNCS ====\n");
    __Vtask_tb_tpu_top__DOT__wait_for_state__22__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__22__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__22__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__22__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__22__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__22__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           58);
        __Vtask_tb_tpu_top__DOT__wait_for_state__22__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__22__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__22__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__24__cond = (5U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__24__name = VL_SFORMATF_NX("reached FUNCS within budget (took %0d cycles)",
                                                              32,
                                                              tb_tpu_top__DOT__unnamedblk2__DOT__n) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__24__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__24__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__24__name));
    }
    __Vtask_tb_tpu_top__DOT__check__25__cond = (4U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__drain_count));
    __Vtask_tb_tpu_top__DOT__check__25__name = std::string{"DRAIN ran the full 4 cycles (drain_count saturated)"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__25__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__25__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__25__name));
    }
    __Vtask_tb_tpu_top__DOT__check__26__cond = (0U 
                                                < vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__capture_count);
    __Vtask_tb_tpu_top__DOT__check__26__name = std::string{"requant_out_valid pulsed at some point in tile 1's drain/funcs window"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__26__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__26__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__26__name));
    }
    VL_WRITEF("==== tpu_top: tile 1 - FUNCS -> back to PRELOAD (tile 1 of 8, not yet tile_complete) ====\n");
    __Vtask_tb_tpu_top__DOT__wait_for_state__27__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__27__target = 2U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__27__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__27__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__27__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__27__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           58);
        __Vtask_tb_tpu_top__DOT__wait_for_state__27__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__27__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__27__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__29__cond = (2U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__29__name = VL_SFORMATF_NX("FUNCS looped back to PRELOAD for tile 2/8 (took %0d cycles)",
                                                              32,
                                                              tb_tpu_top__DOT__unnamedblk2__DOT__n) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__29__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__29__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__29__name));
    }
    __Vtask_tb_tpu_top__DOT__check__30__cond = (3U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__funcs_count));
    __Vtask_tb_tpu_top__DOT__check__30__name = std::string{"FUNCS ran the full 3 cycles (funcs_count saturated)"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__30__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__30__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__30__name));
    }
    __Vtask_tb_tpu_top__DOT__check__31__cond = (0U 
                                                < vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__capture_count);
    __Vtask_tb_tpu_top__DOT__check__31__name = std::string{"DMA captured at least one requant result from tile 1's drain/funcs window"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__31__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__31__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__31__name));
    }
    VL_WRITEF("==== tpu_top: DMA weight pattern changed for tile 2 (tile_idx bumped on preload_state's rising edge) ====\n");
    __Vtask_tb_tpu_top__DOT__check__32__cond = (1U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__tile_idx));
    __Vtask_tb_tpu_top__DOT__check__32__name = std::string{"dummy DMA presents a different weight row for tile 2 (tile_idx advanced)"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__32__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__32__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__32__name));
    }
    VL_WRITEF("==== tpu_top: running tiles 2-8 to reach tiles_complete ====\n");
    __Vtask_tb_tpu_top__DOT__wait_for_state__33__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__33__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__33__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__33__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__33__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__33__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           58);
        __Vtask_tb_tpu_top__DOT__wait_for_state__33__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__33__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__33__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__35__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__35__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__35__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__35__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__35__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__35__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           58);
        __Vtask_tb_tpu_top__DOT__wait_for_state__35__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__35__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__35__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__37__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__37__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__37__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__37__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__37__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__37__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           58);
        __Vtask_tb_tpu_top__DOT__wait_for_state__37__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__37__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__37__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__39__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__39__target = 2U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__39__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__39__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__39__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__39__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           58);
        __Vtask_tb_tpu_top__DOT__wait_for_state__39__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__39__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__39__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__41__cond = (2U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__41__name = std::string{"tile 2/8: FUNCS looped back to PRELOAD"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__41__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__41__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__41__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__33__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__33__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__33__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__33__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__33__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__33__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           58);
        __Vtask_tb_tpu_top__DOT__wait_for_state__33__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__33__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__33__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__35__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__35__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__35__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__35__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__35__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__35__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           58);
        __Vtask_tb_tpu_top__DOT__wait_for_state__35__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__35__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__35__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__37__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__37__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__37__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__37__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__37__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__37__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           58);
        __Vtask_tb_tpu_top__DOT__wait_for_state__37__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__37__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__37__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__39__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__39__target = 2U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__39__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__39__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__39__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__39__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           58);
        __Vtask_tb_tpu_top__DOT__wait_for_state__39__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__39__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__39__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__41__cond = (2U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__41__name = std::string{"tile 3/8: FUNCS looped back to PRELOAD"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__41__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__41__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__41__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__33__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__33__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__33__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__33__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__33__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__33__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           58);
        __Vtask_tb_tpu_top__DOT__wait_for_state__33__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__33__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__33__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__35__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__35__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__35__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__35__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__35__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__35__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           58);
        __Vtask_tb_tpu_top__DOT__wait_for_state__35__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__35__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__35__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__37__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__37__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__37__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__37__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__37__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__37__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           58);
        __Vtask_tb_tpu_top__DOT__wait_for_state__37__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__37__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__37__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__39__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__39__target = 2U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__39__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__39__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__39__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__39__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           58);
        __Vtask_tb_tpu_top__DOT__wait_for_state__39__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__39__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__39__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__41__cond = (2U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__41__name = std::string{"tile 4/8: FUNCS looped back to PRELOAD"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__41__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__41__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__41__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__33__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__33__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__33__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__33__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__33__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__33__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           58);
        __Vtask_tb_tpu_top__DOT__wait_for_state__33__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__33__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__33__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__35__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__35__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__35__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__35__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__35__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__35__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           58);
        __Vtask_tb_tpu_top__DOT__wait_for_state__35__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__35__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__35__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__37__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__37__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__37__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__37__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__37__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__37__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           58);
        __Vtask_tb_tpu_top__DOT__wait_for_state__37__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__37__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__37__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__39__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__39__target = 2U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__39__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__39__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__39__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__39__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           58);
        __Vtask_tb_tpu_top__DOT__wait_for_state__39__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__39__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__39__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__41__cond = (2U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__41__name = std::string{"tile 5/8: FUNCS looped back to PRELOAD"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__41__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__41__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__41__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__33__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__33__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__33__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__33__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__33__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__33__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           58);
        __Vtask_tb_tpu_top__DOT__wait_for_state__33__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__33__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__33__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__35__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__35__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__35__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__35__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__35__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__35__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           58);
        __Vtask_tb_tpu_top__DOT__wait_for_state__35__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__35__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__35__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__37__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__37__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__37__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__37__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__37__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__37__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           58);
        __Vtask_tb_tpu_top__DOT__wait_for_state__37__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__37__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__37__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__39__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__39__target = 2U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__39__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__39__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__39__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__39__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           58);
        __Vtask_tb_tpu_top__DOT__wait_for_state__39__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__39__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__39__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__41__cond = (2U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__41__name = std::string{"tile 6/8: FUNCS looped back to PRELOAD"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__41__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__41__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__41__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__33__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__33__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__33__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__33__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__33__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__33__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           58);
        __Vtask_tb_tpu_top__DOT__wait_for_state__33__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__33__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__33__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__35__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__35__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__35__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__35__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__35__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__35__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           58);
        __Vtask_tb_tpu_top__DOT__wait_for_state__35__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__35__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__35__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__37__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__37__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__37__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__37__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__37__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__37__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           58);
        __Vtask_tb_tpu_top__DOT__wait_for_state__37__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__37__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__37__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__39__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__39__target = 2U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__39__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__39__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__39__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__39__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           58);
        __Vtask_tb_tpu_top__DOT__wait_for_state__39__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__39__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__39__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__41__cond = (2U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__41__name = std::string{"tile 7/8: FUNCS looped back to PRELOAD"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__41__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__41__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__41__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__33__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__33__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__33__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__33__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__33__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__33__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           58);
        __Vtask_tb_tpu_top__DOT__wait_for_state__33__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__33__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__33__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__35__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__35__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__35__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__35__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__35__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__35__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           58);
        __Vtask_tb_tpu_top__DOT__wait_for_state__35__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__35__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__35__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__37__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__37__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__37__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__37__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__37__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__37__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           58);
        __Vtask_tb_tpu_top__DOT__wait_for_state__37__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__37__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__37__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__42__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__42__target = 0U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__42__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__42__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__42__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__42__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           58);
        __Vtask_tb_tpu_top__DOT__wait_for_state__42__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__42__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__42__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__44__cond = (0U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__44__name = VL_SFORMATF_NX("after 8 tiles: FUNCS saw tile_complete and returned to IDLE (took %0d cycles)",
                                                              32,
                                                              tb_tpu_top__DOT__unnamedblk2__DOT__n) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__44__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__44__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__44__name));
    }
    __Vtask_tb_tpu_top__DOT__check__45__cond = (0U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__45__name = std::string{"DONE's tile_clr reset tile_count back to 0 on the way to IDLE"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__45__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__45__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__45__name));
    }
    VL_WRITEF("[INFO] total requant results captured by dummy DMA across tile group 1: %0#\n==== tpu_top: tile group 2 (does a fresh 8-tile group actually complete?) ====\n",
              32,vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__capture_count);
    vlSelf->tb_tpu_top__DOT__start = 1U;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       58);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       58);
    vlSelf->tb_tpu_top__DOT__start = 0U;
    __Vtask_tb_tpu_top__DOT__check__47__cond = (1U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__47__name = std::string{"group 2: start pulse moves IDLE -> PREFILL"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__47__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__47__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__47__name));
    }
    tb_tpu_top__DOT__last_group_row = vlSelf->tb_tpu_top__DOT__dut__DOT__weight_bank_out;
    __Vtask_tb_tpu_top__DOT__wait_for_state__48__max_cycles = 0x28U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__48__target = 2U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__48__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__48__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__48__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__48__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           58);
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
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           58);
        __Vtask_tb_tpu_top__DOT__wait_for_state__50__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__50__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__50__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__52__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__52__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__52__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__52__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__52__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__52__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           58);
        __Vtask_tb_tpu_top__DOT__wait_for_state__52__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__52__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__52__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__54__cond = (1U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__54__name = std::string{"group 2 tile 1: tile_count advanced correctly"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__54__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__54__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__54__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__55__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__55__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__55__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__55__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__55__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__55__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           58);
        __Vtask_tb_tpu_top__DOT__wait_for_state__55__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__55__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__55__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__57__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__57__target = 2U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__57__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__57__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__57__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__57__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           58);
        __Vtask_tb_tpu_top__DOT__wait_for_state__57__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__57__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__57__cycles_taken;
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
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           58);
        __Vtask_tb_tpu_top__DOT__wait_for_state__50__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__50__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__50__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__52__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__52__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__52__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__52__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__52__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__52__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           58);
        __Vtask_tb_tpu_top__DOT__wait_for_state__52__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__52__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__52__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__54__cond = (2U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__54__name = std::string{"group 2 tile 2: tile_count advanced correctly"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__54__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__54__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__54__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__55__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__55__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__55__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__55__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__55__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__55__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           58);
        __Vtask_tb_tpu_top__DOT__wait_for_state__55__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__55__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__55__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__57__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__57__target = 2U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__57__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__57__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__57__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__57__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           58);
        __Vtask_tb_tpu_top__DOT__wait_for_state__57__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__57__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__57__cycles_taken;
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
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           58);
        __Vtask_tb_tpu_top__DOT__wait_for_state__50__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__50__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__50__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__52__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__52__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__52__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__52__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__52__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__52__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           58);
        __Vtask_tb_tpu_top__DOT__wait_for_state__52__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__52__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__52__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__54__cond = (3U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__54__name = std::string{"group 2 tile 3: tile_count advanced correctly"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__54__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__54__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__54__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__55__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__55__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__55__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__55__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__55__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__55__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           58);
        __Vtask_tb_tpu_top__DOT__wait_for_state__55__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__55__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__55__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__57__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__57__target = 2U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__57__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__57__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__57__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__57__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           58);
        __Vtask_tb_tpu_top__DOT__wait_for_state__57__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__57__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__57__cycles_taken;
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
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           58);
        __Vtask_tb_tpu_top__DOT__wait_for_state__50__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__50__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__50__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__52__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__52__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__52__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__52__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__52__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__52__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           58);
        __Vtask_tb_tpu_top__DOT__wait_for_state__52__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__52__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__52__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__54__cond = (4U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__54__name = std::string{"group 2 tile 4: tile_count advanced correctly"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__54__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__54__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__54__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__55__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__55__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__55__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__55__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__55__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__55__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           58);
        __Vtask_tb_tpu_top__DOT__wait_for_state__55__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__55__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__55__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__57__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__57__target = 2U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__57__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__57__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__57__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__57__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           58);
        __Vtask_tb_tpu_top__DOT__wait_for_state__57__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__57__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__57__cycles_taken;
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
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           58);
        __Vtask_tb_tpu_top__DOT__wait_for_state__50__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__50__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__50__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__52__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__52__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__52__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__52__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__52__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__52__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           58);
        __Vtask_tb_tpu_top__DOT__wait_for_state__52__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__52__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__52__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__54__cond = (5U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__54__name = std::string{"group 2 tile 5: tile_count advanced correctly"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__54__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__54__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__54__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__55__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__55__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__55__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__55__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__55__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__55__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           58);
        __Vtask_tb_tpu_top__DOT__wait_for_state__55__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__55__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__55__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__57__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__57__target = 2U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__57__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__57__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__57__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__57__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           58);
        __Vtask_tb_tpu_top__DOT__wait_for_state__57__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__57__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__57__cycles_taken;
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
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           58);
        __Vtask_tb_tpu_top__DOT__wait_for_state__50__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__50__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__50__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__52__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__52__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__52__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__52__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__52__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__52__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           58);
        __Vtask_tb_tpu_top__DOT__wait_for_state__52__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__52__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__52__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__54__cond = (6U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__54__name = std::string{"group 2 tile 6: tile_count advanced correctly"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__54__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__54__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__54__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__55__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__55__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__55__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__55__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__55__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__55__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           58);
        __Vtask_tb_tpu_top__DOT__wait_for_state__55__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__55__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__55__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__57__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__57__target = 2U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__57__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__57__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__57__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__57__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           58);
        __Vtask_tb_tpu_top__DOT__wait_for_state__57__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__57__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__57__cycles_taken;
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
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           58);
        __Vtask_tb_tpu_top__DOT__wait_for_state__50__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__50__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__50__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__52__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__52__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__52__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__52__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__52__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__52__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           58);
        __Vtask_tb_tpu_top__DOT__wait_for_state__52__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__52__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__52__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__54__cond = (7U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__54__name = std::string{"group 2 tile 7: tile_count advanced correctly"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__54__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__54__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__54__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__55__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__55__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__55__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__55__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__55__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__55__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           58);
        __Vtask_tb_tpu_top__DOT__wait_for_state__55__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__55__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__55__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__57__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__57__target = 2U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__57__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__57__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__57__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__57__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           58);
        __Vtask_tb_tpu_top__DOT__wait_for_state__57__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__57__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__57__cycles_taken;
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
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           58);
        __Vtask_tb_tpu_top__DOT__wait_for_state__50__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__50__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__50__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__52__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__52__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__52__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__52__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__52__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__52__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           58);
        __Vtask_tb_tpu_top__DOT__wait_for_state__52__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__52__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__52__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__54__cond = (8U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__54__name = std::string{"group 2 tile 8: tile_count advanced correctly"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__54__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__54__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__54__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__55__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__55__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__55__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__55__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__55__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__55__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           58);
        __Vtask_tb_tpu_top__DOT__wait_for_state__55__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__55__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__55__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__59__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__59__target = 0U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__59__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__59__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__59__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__59__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           58);
        __Vtask_tb_tpu_top__DOT__wait_for_state__59__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__59__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__59__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__61__cond = (0U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__61__name = VL_SFORMATF_NX("group 2 also reached tiles_complete and returned to IDLE (took %0d cycles)",
                                                              32,
                                                              tb_tpu_top__DOT__unnamedblk2__DOT__n) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__61__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__61__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__61__name));
    }
    __Vtask_tb_tpu_top__DOT__check__62__cond = (0U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__62__name = std::string{"group 2: tile_count cleared back to 0 again"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__62__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__62__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__62__name));
    }
    VL_WRITEF("==== tpu_top: 20 randomized full-chip tile-group tests ====\n");
    tb_tpu_top__DOT__unnamedblk2__DOT__unnamedblk5__DOT__trial = 1U;
    while (VL_GTES_III(32, 0x14U, tb_tpu_top__DOT__unnamedblk2__DOT__unnamedblk5__DOT__trial)) {
        __Vtask_tb_tpu_top__DOT__run_random_group_test__63__num_trials = 0x14U;
        __Vtask_tb_tpu_top__DOT__run_random_group_test__63__trial_num 
            = tb_tpu_top__DOT__unnamedblk2__DOT__unnamedblk5__DOT__trial;
        vlSelf->tb_tpu_top__DOT__start = 1U;
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           58);
        vlSelf->tb_tpu_top__DOT__start = 0U;
        __Vtask_tb_tpu_top__DOT__check__65__cond = 
            (1U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
        __Vtask_tb_tpu_top__DOT__check__65__name = VL_SFORMATF_NX("random matrix %0d/%0d: start pulse moves IDLE -> PREFILL",
                                                                  32,
                                                                  __Vtask_tb_tpu_top__DOT__run_random_group_test__63__trial_num,
                                                                  32,
                                                                  __Vtask_tb_tpu_top__DOT__run_random_group_test__63__num_trials) ;
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (__Vtask_tb_tpu_top__DOT__check__65__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__65__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__65__name));
        }
        __Vtask_tb_tpu_top__DOT__run_random_group_test__63__grow 
            = vlSelf->tb_tpu_top__DOT__dut__DOT__weight_bank_out;
        __Vtask_tb_tpu_top__DOT__wait_for_state__66__max_cycles = 0x28U;
        __Vtask_tb_tpu_top__DOT__wait_for_state__66__target = 2U;
        __Vtask_tb_tpu_top__DOT__wait_for_state__66__cycles_taken = 0U;
        while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
                 != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__66__target)) 
                & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__66__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__66__max_cycles))) {
            co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_tpu_top.clk)", 
                                                               "tb/tb_tpu_top.sv", 
                                                               58);
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "tb/tb_tpu_top.sv", 
                                               58);
            __Vtask_tb_tpu_top__DOT__wait_for_state__66__cycles_taken 
                = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__66__cycles_taken);
        }
        __Vtask_tb_tpu_top__DOT__wait_for_state__68__max_cycles = 0x14U;
        __Vtask_tb_tpu_top__DOT__wait_for_state__68__target = 3U;
        __Vtask_tb_tpu_top__DOT__wait_for_state__68__cycles_taken = 0U;
        while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
                 != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__68__target)) 
                & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__68__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__68__max_cycles))) {
            co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_tpu_top.clk)", 
                                                               "tb/tb_tpu_top.sv", 
                                                               58);
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "tb/tb_tpu_top.sv", 
                                               58);
            __Vtask_tb_tpu_top__DOT__wait_for_state__68__cycles_taken 
                = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__68__cycles_taken);
        }
        __Vtemp_156[0U] = vlSelf->__VdfgTmp_hfccefdc9__0[0U];
        __Vtemp_156[1U] = vlSelf->__VdfgTmp_hfccefdc9__0[1U];
        __Vtemp_156[2U] = vlSelf->__VdfgTmp_hfccefdc9__0[2U];
        __Vtemp_156[3U] = vlSelf->__VdfgTmp_hfccefdc9__0[3U];
        __Vtemp_156[4U] = 0U;
        __Vtemp_159[0U] = vlSelf->__VdfgTmp_hfccefdc9__0[0U];
        __Vtemp_159[1U] = vlSelf->__VdfgTmp_hfccefdc9__0[1U];
        __Vtemp_159[2U] = vlSelf->__VdfgTmp_hfccefdc9__0[2U];
        __Vtemp_159[3U] = vlSelf->__VdfgTmp_hfccefdc9__0[3U];
        __Vtemp_159[4U] = 0U;
        __Vtask_tb_tpu_top__DOT__check__70__cond = 
            (VL_EQ_W(5, __Vtemp_156, ([&]() {
                        __Vfunc_tb_tpu_top__DOT__pack_weight_row__71__row 
                            = __Vtask_tb_tpu_top__DOT__run_random_group_test__63__grow;
                        __Vfunc_tb_tpu_top__DOT__pack_weight_row__71__Vfuncout[0U] 
                            = (IData)((QData)((IData)(
                                                      (0xffU 
                                                       & __Vfunc_tb_tpu_top__DOT__pack_weight_row__71__row))));
                        __Vfunc_tb_tpu_top__DOT__pack_weight_row__71__Vfuncout[1U] 
                            = (((IData)((QData)((IData)(
                                                        (0xffU 
                                                         & (__Vfunc_tb_tpu_top__DOT__pack_weight_row__71__row 
                                                            >> 8U))))) 
                                << 1U) | (IData)(((QData)((IData)(
                                                                  (0xffU 
                                                                   & __Vfunc_tb_tpu_top__DOT__pack_weight_row__71__row))) 
                                                  >> 0x20U)));
                        __Vfunc_tb_tpu_top__DOT__pack_weight_row__71__Vfuncout[2U] 
                            = ((0xfffffffcU & __Vfunc_tb_tpu_top__DOT__pack_weight_row__71__Vfuncout[2U]) 
                               | (((IData)((QData)((IData)(
                                                           (0xffU 
                                                            & (__Vfunc_tb_tpu_top__DOT__pack_weight_row__71__row 
                                                               >> 8U))))) 
                                   >> 0x1fU) | ((IData)(
                                                        ((QData)((IData)(
                                                                         (0xffU 
                                                                          & (__Vfunc_tb_tpu_top__DOT__pack_weight_row__71__row 
                                                                             >> 8U)))) 
                                                         >> 0x20U)) 
                                                << 1U)));
                        __Vfunc_tb_tpu_top__DOT__pack_weight_row__71__Vfuncout[2U] 
                            = ((3U & __Vfunc_tb_tpu_top__DOT__pack_weight_row__71__Vfuncout[2U]) 
                               | ((IData)((QData)((IData)(
                                                          (0xffU 
                                                           & (__Vfunc_tb_tpu_top__DOT__pack_weight_row__71__row 
                                                              >> 0x10U))))) 
                                  << 2U));
                        __Vfunc_tb_tpu_top__DOT__pack_weight_row__71__Vfuncout[3U] 
                            = (((IData)((QData)((IData)(
                                                        (0xffU 
                                                         & (__Vfunc_tb_tpu_top__DOT__pack_weight_row__71__row 
                                                            >> 0x10U))))) 
                                >> 0x1eU) | (((IData)((QData)((IData)(
                                                                      (__Vfunc_tb_tpu_top__DOT__pack_weight_row__71__row 
                                                                       >> 0x18U)))) 
                                              << 3U) 
                                             | ((IData)(
                                                        ((QData)((IData)(
                                                                         (0xffU 
                                                                          & (__Vfunc_tb_tpu_top__DOT__pack_weight_row__71__row 
                                                                             >> 0x10U)))) 
                                                         >> 0x20U)) 
                                                << 2U)));
                        __Vfunc_tb_tpu_top__DOT__pack_weight_row__71__Vfuncout[4U] 
                            = (0xfU & (((3U & ((IData)((QData)((IData)(
                                                                       (__Vfunc_tb_tpu_top__DOT__pack_weight_row__71__row 
                                                                        >> 0x18U)))) 
                                               >> 0x1dU)) 
                                        | ((IData)(
                                                   ((QData)((IData)(
                                                                    (0xffU 
                                                                     & (__Vfunc_tb_tpu_top__DOT__pack_weight_row__71__row 
                                                                        >> 0x10U)))) 
                                                    >> 0x20U)) 
                                           >> 0x1eU)) 
                                       | ((4U & ((IData)((QData)((IData)(
                                                                         (__Vfunc_tb_tpu_top__DOT__pack_weight_row__71__row 
                                                                          >> 0x18U)))) 
                                                 >> 0x1dU)) 
                                          | ((IData)(
                                                     ((QData)((IData)(
                                                                      (__Vfunc_tb_tpu_top__DOT__pack_weight_row__71__row 
                                                                       >> 0x18U))) 
                                                      >> 0x20U)) 
                                             << 3U))));
                    }(), __Vfunc_tb_tpu_top__DOT__pack_weight_row__71__Vfuncout)) 
             | VL_EQ_W(5, __Vtemp_159, ([&]() {
                        __Vfunc_tb_tpu_top__DOT__pack_weight_row__72__row 
                            = tb_tpu_top__DOT__last_group_row;
                        __Vfunc_tb_tpu_top__DOT__pack_weight_row__72__Vfuncout[0U] 
                            = (IData)((QData)((IData)(
                                                      (0xffU 
                                                       & __Vfunc_tb_tpu_top__DOT__pack_weight_row__72__row))));
                        __Vfunc_tb_tpu_top__DOT__pack_weight_row__72__Vfuncout[1U] 
                            = (((IData)((QData)((IData)(
                                                        (0xffU 
                                                         & (__Vfunc_tb_tpu_top__DOT__pack_weight_row__72__row 
                                                            >> 8U))))) 
                                << 1U) | (IData)(((QData)((IData)(
                                                                  (0xffU 
                                                                   & __Vfunc_tb_tpu_top__DOT__pack_weight_row__72__row))) 
                                                  >> 0x20U)));
                        __Vfunc_tb_tpu_top__DOT__pack_weight_row__72__Vfuncout[2U] 
                            = ((0xfffffffcU & __Vfunc_tb_tpu_top__DOT__pack_weight_row__72__Vfuncout[2U]) 
                               | (((IData)((QData)((IData)(
                                                           (0xffU 
                                                            & (__Vfunc_tb_tpu_top__DOT__pack_weight_row__72__row 
                                                               >> 8U))))) 
                                   >> 0x1fU) | ((IData)(
                                                        ((QData)((IData)(
                                                                         (0xffU 
                                                                          & (__Vfunc_tb_tpu_top__DOT__pack_weight_row__72__row 
                                                                             >> 8U)))) 
                                                         >> 0x20U)) 
                                                << 1U)));
                        __Vfunc_tb_tpu_top__DOT__pack_weight_row__72__Vfuncout[2U] 
                            = ((3U & __Vfunc_tb_tpu_top__DOT__pack_weight_row__72__Vfuncout[2U]) 
                               | ((IData)((QData)((IData)(
                                                          (0xffU 
                                                           & (__Vfunc_tb_tpu_top__DOT__pack_weight_row__72__row 
                                                              >> 0x10U))))) 
                                  << 2U));
                        __Vfunc_tb_tpu_top__DOT__pack_weight_row__72__Vfuncout[3U] 
                            = (((IData)((QData)((IData)(
                                                        (0xffU 
                                                         & (__Vfunc_tb_tpu_top__DOT__pack_weight_row__72__row 
                                                            >> 0x10U))))) 
                                >> 0x1eU) | (((IData)((QData)((IData)(
                                                                      (__Vfunc_tb_tpu_top__DOT__pack_weight_row__72__row 
                                                                       >> 0x18U)))) 
                                              << 3U) 
                                             | ((IData)(
                                                        ((QData)((IData)(
                                                                         (0xffU 
                                                                          & (__Vfunc_tb_tpu_top__DOT__pack_weight_row__72__row 
                                                                             >> 0x10U)))) 
                                                         >> 0x20U)) 
                                                << 2U)));
                        __Vfunc_tb_tpu_top__DOT__pack_weight_row__72__Vfuncout[4U] 
                            = (0xfU & (((3U & ((IData)((QData)((IData)(
                                                                       (__Vfunc_tb_tpu_top__DOT__pack_weight_row__72__row 
                                                                        >> 0x18U)))) 
                                               >> 0x1dU)) 
                                        | ((IData)(
                                                   ((QData)((IData)(
                                                                    (0xffU 
                                                                     & (__Vfunc_tb_tpu_top__DOT__pack_weight_row__72__row 
                                                                        >> 0x10U)))) 
                                                    >> 0x20U)) 
                                           >> 0x1eU)) 
                                       | ((4U & ((IData)((QData)((IData)(
                                                                         (__Vfunc_tb_tpu_top__DOT__pack_weight_row__72__row 
                                                                          >> 0x18U)))) 
                                                 >> 0x1dU)) 
                                          | ((IData)(
                                                     ((QData)((IData)(
                                                                      (__Vfunc_tb_tpu_top__DOT__pack_weight_row__72__row 
                                                                       >> 0x18U))) 
                                                      >> 0x20U)) 
                                             << 3U))));
                    }(), __Vfunc_tb_tpu_top__DOT__pack_weight_row__72__Vfuncout)));
        __Vtask_tb_tpu_top__DOT__check__70__name = VL_SFORMATF_NX("random matrix %0d/%0d (row=%0#,%0#,%0#,%0#, prev row=%0#,%0#,%0#,%0#): PE_array preloaded either this group's or the prior group's weight row bit-exact (see KNOWN GAP above)",
                                                                  32,
                                                                  __Vtask_tb_tpu_top__DOT__run_random_group_test__63__trial_num,
                                                                  32,
                                                                  __Vtask_tb_tpu_top__DOT__run_random_group_test__63__num_trials,
                                                                  8,
                                                                  (0xffU 
                                                                   & __Vtask_tb_tpu_top__DOT__run_random_group_test__63__grow),
                                                                  8,
                                                                  (0xffU 
                                                                   & (__Vtask_tb_tpu_top__DOT__run_random_group_test__63__grow 
                                                                      >> 8U)),
                                                                  8,
                                                                  (0xffU 
                                                                   & (__Vtask_tb_tpu_top__DOT__run_random_group_test__63__grow 
                                                                      >> 0x10U)),
                                                                  8,
                                                                  (__Vtask_tb_tpu_top__DOT__run_random_group_test__63__grow 
                                                                   >> 0x18U),
                                                                  8,
                                                                  (0xffU 
                                                                   & tb_tpu_top__DOT__last_group_row),
                                                                  8,
                                                                  (0xffU 
                                                                   & (tb_tpu_top__DOT__last_group_row 
                                                                      >> 8U)),
                                                                  8,
                                                                  (0xffU 
                                                                   & (tb_tpu_top__DOT__last_group_row 
                                                                      >> 0x10U)),
                                                                  8,
                                                                  (tb_tpu_top__DOT__last_group_row 
                                                                   >> 0x18U)) ;
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (__Vtask_tb_tpu_top__DOT__check__70__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__70__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__70__name));
        }
        tb_tpu_top__DOT__last_group_row = __Vtask_tb_tpu_top__DOT__run_random_group_test__63__grow;
        __Vtask_tb_tpu_top__DOT__check__73__cond = 1U;
        __Vtask_tb_tpu_top__DOT__check__73__name = VL_SFORMATF_NX("random matrix %0d/%0d: no X/Z in product_out after preload",
                                                                  32,
                                                                  __Vtask_tb_tpu_top__DOT__run_random_group_test__63__trial_num,
                                                                  32,
                                                                  __Vtask_tb_tpu_top__DOT__run_random_group_test__63__num_trials) ;
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (__Vtask_tb_tpu_top__DOT__check__73__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__73__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__73__name));
        }
        __Vtask_tb_tpu_top__DOT__run_random_group_test__63__cap_before 
            = vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__capture_count;
        __Vtask_tb_tpu_top__DOT__wait_for_state__76__max_cycles = 0x14U;
        __Vtask_tb_tpu_top__DOT__wait_for_state__76__target = 4U;
        __Vtask_tb_tpu_top__DOT__wait_for_state__76__cycles_taken = 0U;
        while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
                 != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__76__target)) 
                & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__76__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__76__max_cycles))) {
            co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_tpu_top.clk)", 
                                                               "tb/tb_tpu_top.sv", 
                                                               58);
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "tb/tb_tpu_top.sv", 
                                               58);
            __Vtask_tb_tpu_top__DOT__wait_for_state__76__cycles_taken 
                = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__76__cycles_taken);
        }
        __Vtask_tb_tpu_top__DOT__wait_for_state__78__max_cycles = 0x14U;
        __Vtask_tb_tpu_top__DOT__wait_for_state__78__target = 5U;
        __Vtask_tb_tpu_top__DOT__wait_for_state__78__cycles_taken = 0U;
        while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
                 != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__78__target)) 
                & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__78__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__78__max_cycles))) {
            co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_tpu_top.clk)", 
                                                               "tb/tb_tpu_top.sv", 
                                                               58);
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "tb/tb_tpu_top.sv", 
                                               58);
            __Vtask_tb_tpu_top__DOT__wait_for_state__78__cycles_taken 
                = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__78__cycles_taken);
        }
        __Vtask_tb_tpu_top__DOT__check__80__cond = 1U;
        __Vtask_tb_tpu_top__DOT__check__80__name = VL_SFORMATF_NX("random matrix %0d/%0d tile 1: no X/Z in requant_out",
                                                                  32,
                                                                  __Vtask_tb_tpu_top__DOT__run_random_group_test__63__trial_num,
                                                                  32,
                                                                  __Vtask_tb_tpu_top__DOT__run_random_group_test__63__num_trials) ;
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (__Vtask_tb_tpu_top__DOT__check__80__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__80__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__80__name));
        }
        __Vtask_tb_tpu_top__DOT__wait_for_state__81__max_cycles = 0x14U;
        __Vtask_tb_tpu_top__DOT__wait_for_state__81__target = 2U;
        __Vtask_tb_tpu_top__DOT__wait_for_state__81__cycles_taken = 0U;
        while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
                 != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__81__target)) 
                & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__81__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__81__max_cycles))) {
            co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_tpu_top.clk)", 
                                                               "tb/tb_tpu_top.sv", 
                                                               58);
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "tb/tb_tpu_top.sv", 
                                               58);
            __Vtask_tb_tpu_top__DOT__wait_for_state__81__cycles_taken 
                = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__81__cycles_taken);
        }
        __Vtask_tb_tpu_top__DOT__wait_for_state__74__max_cycles = 0x14U;
        __Vtask_tb_tpu_top__DOT__wait_for_state__74__target = 3U;
        __Vtask_tb_tpu_top__DOT__wait_for_state__74__cycles_taken = 0U;
        while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
                 != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__74__target)) 
                & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__74__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__74__max_cycles))) {
            co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_tpu_top.clk)", 
                                                               "tb/tb_tpu_top.sv", 
                                                               58);
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "tb/tb_tpu_top.sv", 
                                               58);
            __Vtask_tb_tpu_top__DOT__wait_for_state__74__cycles_taken 
                = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__74__cycles_taken);
        }
        __Vtask_tb_tpu_top__DOT__wait_for_state__76__max_cycles = 0x14U;
        __Vtask_tb_tpu_top__DOT__wait_for_state__76__target = 4U;
        __Vtask_tb_tpu_top__DOT__wait_for_state__76__cycles_taken = 0U;
        while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
                 != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__76__target)) 
                & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__76__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__76__max_cycles))) {
            co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_tpu_top.clk)", 
                                                               "tb/tb_tpu_top.sv", 
                                                               58);
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "tb/tb_tpu_top.sv", 
                                               58);
            __Vtask_tb_tpu_top__DOT__wait_for_state__76__cycles_taken 
                = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__76__cycles_taken);
        }
        __Vtask_tb_tpu_top__DOT__wait_for_state__78__max_cycles = 0x14U;
        __Vtask_tb_tpu_top__DOT__wait_for_state__78__target = 5U;
        __Vtask_tb_tpu_top__DOT__wait_for_state__78__cycles_taken = 0U;
        while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
                 != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__78__target)) 
                & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__78__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__78__max_cycles))) {
            co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_tpu_top.clk)", 
                                                               "tb/tb_tpu_top.sv", 
                                                               58);
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "tb/tb_tpu_top.sv", 
                                               58);
            __Vtask_tb_tpu_top__DOT__wait_for_state__78__cycles_taken 
                = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__78__cycles_taken);
        }
        __Vtask_tb_tpu_top__DOT__check__80__cond = 1U;
        __Vtask_tb_tpu_top__DOT__check__80__name = VL_SFORMATF_NX("random matrix %0d/%0d tile 2: no X/Z in requant_out",
                                                                  32,
                                                                  __Vtask_tb_tpu_top__DOT__run_random_group_test__63__trial_num,
                                                                  32,
                                                                  __Vtask_tb_tpu_top__DOT__run_random_group_test__63__num_trials) ;
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (__Vtask_tb_tpu_top__DOT__check__80__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__80__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__80__name));
        }
        __Vtask_tb_tpu_top__DOT__wait_for_state__81__max_cycles = 0x14U;
        __Vtask_tb_tpu_top__DOT__wait_for_state__81__target = 2U;
        __Vtask_tb_tpu_top__DOT__wait_for_state__81__cycles_taken = 0U;
        while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
                 != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__81__target)) 
                & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__81__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__81__max_cycles))) {
            co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_tpu_top.clk)", 
                                                               "tb/tb_tpu_top.sv", 
                                                               58);
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "tb/tb_tpu_top.sv", 
                                               58);
            __Vtask_tb_tpu_top__DOT__wait_for_state__81__cycles_taken 
                = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__81__cycles_taken);
        }
        __Vtask_tb_tpu_top__DOT__wait_for_state__74__max_cycles = 0x14U;
        __Vtask_tb_tpu_top__DOT__wait_for_state__74__target = 3U;
        __Vtask_tb_tpu_top__DOT__wait_for_state__74__cycles_taken = 0U;
        while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
                 != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__74__target)) 
                & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__74__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__74__max_cycles))) {
            co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_tpu_top.clk)", 
                                                               "tb/tb_tpu_top.sv", 
                                                               58);
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "tb/tb_tpu_top.sv", 
                                               58);
            __Vtask_tb_tpu_top__DOT__wait_for_state__74__cycles_taken 
                = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__74__cycles_taken);
        }
        __Vtask_tb_tpu_top__DOT__wait_for_state__76__max_cycles = 0x14U;
        __Vtask_tb_tpu_top__DOT__wait_for_state__76__target = 4U;
        __Vtask_tb_tpu_top__DOT__wait_for_state__76__cycles_taken = 0U;
        while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
                 != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__76__target)) 
                & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__76__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__76__max_cycles))) {
            co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_tpu_top.clk)", 
                                                               "tb/tb_tpu_top.sv", 
                                                               58);
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "tb/tb_tpu_top.sv", 
                                               58);
            __Vtask_tb_tpu_top__DOT__wait_for_state__76__cycles_taken 
                = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__76__cycles_taken);
        }
        __Vtask_tb_tpu_top__DOT__wait_for_state__78__max_cycles = 0x14U;
        __Vtask_tb_tpu_top__DOT__wait_for_state__78__target = 5U;
        __Vtask_tb_tpu_top__DOT__wait_for_state__78__cycles_taken = 0U;
        while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
                 != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__78__target)) 
                & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__78__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__78__max_cycles))) {
            co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_tpu_top.clk)", 
                                                               "tb/tb_tpu_top.sv", 
                                                               58);
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "tb/tb_tpu_top.sv", 
                                               58);
            __Vtask_tb_tpu_top__DOT__wait_for_state__78__cycles_taken 
                = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__78__cycles_taken);
        }
        __Vtask_tb_tpu_top__DOT__check__80__cond = 1U;
        __Vtask_tb_tpu_top__DOT__check__80__name = VL_SFORMATF_NX("random matrix %0d/%0d tile 3: no X/Z in requant_out",
                                                                  32,
                                                                  __Vtask_tb_tpu_top__DOT__run_random_group_test__63__trial_num,
                                                                  32,
                                                                  __Vtask_tb_tpu_top__DOT__run_random_group_test__63__num_trials) ;
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (__Vtask_tb_tpu_top__DOT__check__80__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__80__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__80__name));
        }
        __Vtask_tb_tpu_top__DOT__wait_for_state__81__max_cycles = 0x14U;
        __Vtask_tb_tpu_top__DOT__wait_for_state__81__target = 2U;
        __Vtask_tb_tpu_top__DOT__wait_for_state__81__cycles_taken = 0U;
        while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
                 != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__81__target)) 
                & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__81__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__81__max_cycles))) {
            co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_tpu_top.clk)", 
                                                               "tb/tb_tpu_top.sv", 
                                                               58);
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "tb/tb_tpu_top.sv", 
                                               58);
            __Vtask_tb_tpu_top__DOT__wait_for_state__81__cycles_taken 
                = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__81__cycles_taken);
        }
        __Vtask_tb_tpu_top__DOT__wait_for_state__74__max_cycles = 0x14U;
        __Vtask_tb_tpu_top__DOT__wait_for_state__74__target = 3U;
        __Vtask_tb_tpu_top__DOT__wait_for_state__74__cycles_taken = 0U;
        while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
                 != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__74__target)) 
                & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__74__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__74__max_cycles))) {
            co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_tpu_top.clk)", 
                                                               "tb/tb_tpu_top.sv", 
                                                               58);
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "tb/tb_tpu_top.sv", 
                                               58);
            __Vtask_tb_tpu_top__DOT__wait_for_state__74__cycles_taken 
                = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__74__cycles_taken);
        }
        __Vtask_tb_tpu_top__DOT__wait_for_state__76__max_cycles = 0x14U;
        __Vtask_tb_tpu_top__DOT__wait_for_state__76__target = 4U;
        __Vtask_tb_tpu_top__DOT__wait_for_state__76__cycles_taken = 0U;
        while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
                 != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__76__target)) 
                & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__76__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__76__max_cycles))) {
            co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_tpu_top.clk)", 
                                                               "tb/tb_tpu_top.sv", 
                                                               58);
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "tb/tb_tpu_top.sv", 
                                               58);
            __Vtask_tb_tpu_top__DOT__wait_for_state__76__cycles_taken 
                = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__76__cycles_taken);
        }
        __Vtask_tb_tpu_top__DOT__wait_for_state__78__max_cycles = 0x14U;
        __Vtask_tb_tpu_top__DOT__wait_for_state__78__target = 5U;
        __Vtask_tb_tpu_top__DOT__wait_for_state__78__cycles_taken = 0U;
        while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
                 != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__78__target)) 
                & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__78__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__78__max_cycles))) {
            co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_tpu_top.clk)", 
                                                               "tb/tb_tpu_top.sv", 
                                                               58);
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "tb/tb_tpu_top.sv", 
                                               58);
            __Vtask_tb_tpu_top__DOT__wait_for_state__78__cycles_taken 
                = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__78__cycles_taken);
        }
        __Vtask_tb_tpu_top__DOT__check__80__cond = 1U;
        __Vtask_tb_tpu_top__DOT__check__80__name = VL_SFORMATF_NX("random matrix %0d/%0d tile 4: no X/Z in requant_out",
                                                                  32,
                                                                  __Vtask_tb_tpu_top__DOT__run_random_group_test__63__trial_num,
                                                                  32,
                                                                  __Vtask_tb_tpu_top__DOT__run_random_group_test__63__num_trials) ;
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (__Vtask_tb_tpu_top__DOT__check__80__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__80__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__80__name));
        }
        __Vtask_tb_tpu_top__DOT__wait_for_state__81__max_cycles = 0x14U;
        __Vtask_tb_tpu_top__DOT__wait_for_state__81__target = 2U;
        __Vtask_tb_tpu_top__DOT__wait_for_state__81__cycles_taken = 0U;
        while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
                 != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__81__target)) 
                & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__81__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__81__max_cycles))) {
            co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_tpu_top.clk)", 
                                                               "tb/tb_tpu_top.sv", 
                                                               58);
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "tb/tb_tpu_top.sv", 
                                               58);
            __Vtask_tb_tpu_top__DOT__wait_for_state__81__cycles_taken 
                = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__81__cycles_taken);
        }
        __Vtask_tb_tpu_top__DOT__wait_for_state__74__max_cycles = 0x14U;
        __Vtask_tb_tpu_top__DOT__wait_for_state__74__target = 3U;
        __Vtask_tb_tpu_top__DOT__wait_for_state__74__cycles_taken = 0U;
        while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
                 != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__74__target)) 
                & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__74__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__74__max_cycles))) {
            co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_tpu_top.clk)", 
                                                               "tb/tb_tpu_top.sv", 
                                                               58);
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "tb/tb_tpu_top.sv", 
                                               58);
            __Vtask_tb_tpu_top__DOT__wait_for_state__74__cycles_taken 
                = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__74__cycles_taken);
        }
        __Vtask_tb_tpu_top__DOT__wait_for_state__76__max_cycles = 0x14U;
        __Vtask_tb_tpu_top__DOT__wait_for_state__76__target = 4U;
        __Vtask_tb_tpu_top__DOT__wait_for_state__76__cycles_taken = 0U;
        while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
                 != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__76__target)) 
                & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__76__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__76__max_cycles))) {
            co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_tpu_top.clk)", 
                                                               "tb/tb_tpu_top.sv", 
                                                               58);
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "tb/tb_tpu_top.sv", 
                                               58);
            __Vtask_tb_tpu_top__DOT__wait_for_state__76__cycles_taken 
                = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__76__cycles_taken);
        }
        __Vtask_tb_tpu_top__DOT__wait_for_state__78__max_cycles = 0x14U;
        __Vtask_tb_tpu_top__DOT__wait_for_state__78__target = 5U;
        __Vtask_tb_tpu_top__DOT__wait_for_state__78__cycles_taken = 0U;
        while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
                 != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__78__target)) 
                & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__78__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__78__max_cycles))) {
            co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_tpu_top.clk)", 
                                                               "tb/tb_tpu_top.sv", 
                                                               58);
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "tb/tb_tpu_top.sv", 
                                               58);
            __Vtask_tb_tpu_top__DOT__wait_for_state__78__cycles_taken 
                = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__78__cycles_taken);
        }
        __Vtask_tb_tpu_top__DOT__check__80__cond = 1U;
        __Vtask_tb_tpu_top__DOT__check__80__name = VL_SFORMATF_NX("random matrix %0d/%0d tile 5: no X/Z in requant_out",
                                                                  32,
                                                                  __Vtask_tb_tpu_top__DOT__run_random_group_test__63__trial_num,
                                                                  32,
                                                                  __Vtask_tb_tpu_top__DOT__run_random_group_test__63__num_trials) ;
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (__Vtask_tb_tpu_top__DOT__check__80__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__80__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__80__name));
        }
        __Vtask_tb_tpu_top__DOT__wait_for_state__81__max_cycles = 0x14U;
        __Vtask_tb_tpu_top__DOT__wait_for_state__81__target = 2U;
        __Vtask_tb_tpu_top__DOT__wait_for_state__81__cycles_taken = 0U;
        while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
                 != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__81__target)) 
                & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__81__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__81__max_cycles))) {
            co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_tpu_top.clk)", 
                                                               "tb/tb_tpu_top.sv", 
                                                               58);
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "tb/tb_tpu_top.sv", 
                                               58);
            __Vtask_tb_tpu_top__DOT__wait_for_state__81__cycles_taken 
                = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__81__cycles_taken);
        }
        __Vtask_tb_tpu_top__DOT__wait_for_state__74__max_cycles = 0x14U;
        __Vtask_tb_tpu_top__DOT__wait_for_state__74__target = 3U;
        __Vtask_tb_tpu_top__DOT__wait_for_state__74__cycles_taken = 0U;
        while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
                 != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__74__target)) 
                & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__74__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__74__max_cycles))) {
            co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_tpu_top.clk)", 
                                                               "tb/tb_tpu_top.sv", 
                                                               58);
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "tb/tb_tpu_top.sv", 
                                               58);
            __Vtask_tb_tpu_top__DOT__wait_for_state__74__cycles_taken 
                = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__74__cycles_taken);
        }
        __Vtask_tb_tpu_top__DOT__wait_for_state__76__max_cycles = 0x14U;
        __Vtask_tb_tpu_top__DOT__wait_for_state__76__target = 4U;
        __Vtask_tb_tpu_top__DOT__wait_for_state__76__cycles_taken = 0U;
        while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
                 != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__76__target)) 
                & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__76__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__76__max_cycles))) {
            co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_tpu_top.clk)", 
                                                               "tb/tb_tpu_top.sv", 
                                                               58);
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "tb/tb_tpu_top.sv", 
                                               58);
            __Vtask_tb_tpu_top__DOT__wait_for_state__76__cycles_taken 
                = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__76__cycles_taken);
        }
        __Vtask_tb_tpu_top__DOT__wait_for_state__78__max_cycles = 0x14U;
        __Vtask_tb_tpu_top__DOT__wait_for_state__78__target = 5U;
        __Vtask_tb_tpu_top__DOT__wait_for_state__78__cycles_taken = 0U;
        while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
                 != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__78__target)) 
                & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__78__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__78__max_cycles))) {
            co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_tpu_top.clk)", 
                                                               "tb/tb_tpu_top.sv", 
                                                               58);
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "tb/tb_tpu_top.sv", 
                                               58);
            __Vtask_tb_tpu_top__DOT__wait_for_state__78__cycles_taken 
                = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__78__cycles_taken);
        }
        __Vtask_tb_tpu_top__DOT__check__80__cond = 1U;
        __Vtask_tb_tpu_top__DOT__check__80__name = VL_SFORMATF_NX("random matrix %0d/%0d tile 6: no X/Z in requant_out",
                                                                  32,
                                                                  __Vtask_tb_tpu_top__DOT__run_random_group_test__63__trial_num,
                                                                  32,
                                                                  __Vtask_tb_tpu_top__DOT__run_random_group_test__63__num_trials) ;
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (__Vtask_tb_tpu_top__DOT__check__80__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__80__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__80__name));
        }
        __Vtask_tb_tpu_top__DOT__wait_for_state__81__max_cycles = 0x14U;
        __Vtask_tb_tpu_top__DOT__wait_for_state__81__target = 2U;
        __Vtask_tb_tpu_top__DOT__wait_for_state__81__cycles_taken = 0U;
        while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
                 != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__81__target)) 
                & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__81__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__81__max_cycles))) {
            co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_tpu_top.clk)", 
                                                               "tb/tb_tpu_top.sv", 
                                                               58);
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "tb/tb_tpu_top.sv", 
                                               58);
            __Vtask_tb_tpu_top__DOT__wait_for_state__81__cycles_taken 
                = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__81__cycles_taken);
        }
        __Vtask_tb_tpu_top__DOT__wait_for_state__74__max_cycles = 0x14U;
        __Vtask_tb_tpu_top__DOT__wait_for_state__74__target = 3U;
        __Vtask_tb_tpu_top__DOT__wait_for_state__74__cycles_taken = 0U;
        while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
                 != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__74__target)) 
                & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__74__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__74__max_cycles))) {
            co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_tpu_top.clk)", 
                                                               "tb/tb_tpu_top.sv", 
                                                               58);
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "tb/tb_tpu_top.sv", 
                                               58);
            __Vtask_tb_tpu_top__DOT__wait_for_state__74__cycles_taken 
                = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__74__cycles_taken);
        }
        __Vtask_tb_tpu_top__DOT__wait_for_state__76__max_cycles = 0x14U;
        __Vtask_tb_tpu_top__DOT__wait_for_state__76__target = 4U;
        __Vtask_tb_tpu_top__DOT__wait_for_state__76__cycles_taken = 0U;
        while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
                 != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__76__target)) 
                & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__76__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__76__max_cycles))) {
            co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_tpu_top.clk)", 
                                                               "tb/tb_tpu_top.sv", 
                                                               58);
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "tb/tb_tpu_top.sv", 
                                               58);
            __Vtask_tb_tpu_top__DOT__wait_for_state__76__cycles_taken 
                = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__76__cycles_taken);
        }
        __Vtask_tb_tpu_top__DOT__wait_for_state__78__max_cycles = 0x14U;
        __Vtask_tb_tpu_top__DOT__wait_for_state__78__target = 5U;
        __Vtask_tb_tpu_top__DOT__wait_for_state__78__cycles_taken = 0U;
        while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
                 != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__78__target)) 
                & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__78__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__78__max_cycles))) {
            co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_tpu_top.clk)", 
                                                               "tb/tb_tpu_top.sv", 
                                                               58);
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "tb/tb_tpu_top.sv", 
                                               58);
            __Vtask_tb_tpu_top__DOT__wait_for_state__78__cycles_taken 
                = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__78__cycles_taken);
        }
        __Vtask_tb_tpu_top__DOT__check__80__cond = 1U;
        __Vtask_tb_tpu_top__DOT__check__80__name = VL_SFORMATF_NX("random matrix %0d/%0d tile 7: no X/Z in requant_out",
                                                                  32,
                                                                  __Vtask_tb_tpu_top__DOT__run_random_group_test__63__trial_num,
                                                                  32,
                                                                  __Vtask_tb_tpu_top__DOT__run_random_group_test__63__num_trials) ;
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (__Vtask_tb_tpu_top__DOT__check__80__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__80__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__80__name));
        }
        __Vtask_tb_tpu_top__DOT__wait_for_state__81__max_cycles = 0x14U;
        __Vtask_tb_tpu_top__DOT__wait_for_state__81__target = 2U;
        __Vtask_tb_tpu_top__DOT__wait_for_state__81__cycles_taken = 0U;
        while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
                 != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__81__target)) 
                & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__81__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__81__max_cycles))) {
            co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_tpu_top.clk)", 
                                                               "tb/tb_tpu_top.sv", 
                                                               58);
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "tb/tb_tpu_top.sv", 
                                               58);
            __Vtask_tb_tpu_top__DOT__wait_for_state__81__cycles_taken 
                = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__81__cycles_taken);
        }
        __Vtask_tb_tpu_top__DOT__wait_for_state__74__max_cycles = 0x14U;
        __Vtask_tb_tpu_top__DOT__wait_for_state__74__target = 3U;
        __Vtask_tb_tpu_top__DOT__wait_for_state__74__cycles_taken = 0U;
        while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
                 != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__74__target)) 
                & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__74__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__74__max_cycles))) {
            co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_tpu_top.clk)", 
                                                               "tb/tb_tpu_top.sv", 
                                                               58);
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "tb/tb_tpu_top.sv", 
                                               58);
            __Vtask_tb_tpu_top__DOT__wait_for_state__74__cycles_taken 
                = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__74__cycles_taken);
        }
        __Vtask_tb_tpu_top__DOT__wait_for_state__76__max_cycles = 0x14U;
        __Vtask_tb_tpu_top__DOT__wait_for_state__76__target = 4U;
        __Vtask_tb_tpu_top__DOT__wait_for_state__76__cycles_taken = 0U;
        while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
                 != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__76__target)) 
                & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__76__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__76__max_cycles))) {
            co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_tpu_top.clk)", 
                                                               "tb/tb_tpu_top.sv", 
                                                               58);
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "tb/tb_tpu_top.sv", 
                                               58);
            __Vtask_tb_tpu_top__DOT__wait_for_state__76__cycles_taken 
                = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__76__cycles_taken);
        }
        __Vtask_tb_tpu_top__DOT__wait_for_state__78__max_cycles = 0x14U;
        __Vtask_tb_tpu_top__DOT__wait_for_state__78__target = 5U;
        __Vtask_tb_tpu_top__DOT__wait_for_state__78__cycles_taken = 0U;
        while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
                 != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__78__target)) 
                & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__78__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__78__max_cycles))) {
            co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_tpu_top.clk)", 
                                                               "tb/tb_tpu_top.sv", 
                                                               58);
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "tb/tb_tpu_top.sv", 
                                               58);
            __Vtask_tb_tpu_top__DOT__wait_for_state__78__cycles_taken 
                = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__78__cycles_taken);
        }
        __Vtask_tb_tpu_top__DOT__check__80__cond = 1U;
        __Vtask_tb_tpu_top__DOT__check__80__name = VL_SFORMATF_NX("random matrix %0d/%0d tile 8: no X/Z in requant_out",
                                                                  32,
                                                                  __Vtask_tb_tpu_top__DOT__run_random_group_test__63__trial_num,
                                                                  32,
                                                                  __Vtask_tb_tpu_top__DOT__run_random_group_test__63__num_trials) ;
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (__Vtask_tb_tpu_top__DOT__check__80__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__80__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__80__name));
        }
        __Vtask_tb_tpu_top__DOT__wait_for_state__83__max_cycles = 0x14U;
        __Vtask_tb_tpu_top__DOT__wait_for_state__83__target = 0U;
        __Vtask_tb_tpu_top__DOT__wait_for_state__83__cycles_taken = 0U;
        while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
                 != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__83__target)) 
                & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__83__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__83__max_cycles))) {
            co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_tpu_top.clk)", 
                                                               "tb/tb_tpu_top.sv", 
                                                               58);
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "tb/tb_tpu_top.sv", 
                                               58);
            __Vtask_tb_tpu_top__DOT__wait_for_state__83__cycles_taken 
                = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__83__cycles_taken);
        }
        __Vtask_tb_tpu_top__DOT__check__85__cond = 
            (0U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
        __Vtask_tb_tpu_top__DOT__check__85__name = VL_SFORMATF_NX("random matrix %0d/%0d: group completed all 8 tiles and returned to IDLE",
                                                                  32,
                                                                  __Vtask_tb_tpu_top__DOT__run_random_group_test__63__trial_num,
                                                                  32,
                                                                  __Vtask_tb_tpu_top__DOT__run_random_group_test__63__num_trials) ;
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (__Vtask_tb_tpu_top__DOT__check__85__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__85__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__85__name));
        }
        __Vtask_tb_tpu_top__DOT__check__86__cond = 
            (0U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
        __Vtask_tb_tpu_top__DOT__check__86__name = VL_SFORMATF_NX("random matrix %0d/%0d: tile_count cleared back to 0",
                                                                  32,
                                                                  __Vtask_tb_tpu_top__DOT__run_random_group_test__63__trial_num,
                                                                  32,
                                                                  __Vtask_tb_tpu_top__DOT__run_random_group_test__63__num_trials) ;
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (__Vtask_tb_tpu_top__DOT__check__86__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
        }
        __Vtask_tb_tpu_top__DOT__check__87__cond = 
            (vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__capture_count 
             > __Vtask_tb_tpu_top__DOT__run_random_group_test__63__cap_before);
        __Vtask_tb_tpu_top__DOT__check__87__name = VL_SFORMATF_NX("random matrix %0d/%0d: DMA captured new requant results this group",
                                                                  32,
                                                                  __Vtask_tb_tpu_top__DOT__run_random_group_test__63__trial_num,
                                                                  32,
                                                                  __Vtask_tb_tpu_top__DOT__run_random_group_test__63__num_trials) ;
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (__Vtask_tb_tpu_top__DOT__check__87__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__87__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__87__name));
        }
        tb_tpu_top__DOT__unnamedblk2__DOT__unnamedblk5__DOT__trial 
            = ((IData)(1U) + tb_tpu_top__DOT__unnamedblk2__DOT__unnamedblk5__DOT__trial);
    }
    VL_WRITEF("==== SUMMARY ====\ntpu_top: %0d/%0d checks passed\n",
              32,(vlSelf->tb_tpu_top__DOT__checks - vlSelf->tb_tpu_top__DOT__errors),
              32,vlSelf->tb_tpu_top__DOT__checks);
    VL_FINISH_MT("tb/tb_tpu_top.sv", 308, "");
}

VL_INLINE_OPT VlCoroutine Vtb_tpu_top___024root___eval_initial__TOP__Vtiming__1(Vtb_tpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_tpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tpu_top___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           38);
        vlSelf->tb_tpu_top__DOT__clk = (1U & (~ (IData)(vlSelf->tb_tpu_top__DOT__clk)));
    }
}

VL_INLINE_OPT void Vtb_tpu_top___024root___act_comb__TOP__0(Vtb_tpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_tpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tpu_top___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->tb_tpu_top__DOT__dut__DOT__next_state = vlSelf->tb_tpu_top__DOT__dut__DOT__current_state;
    if ((0U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state))) {
        vlSelf->tb_tpu_top__DOT__dut__DOT__next_state 
            = ((IData)(vlSelf->tb_tpu_top__DOT__start)
                ? 1U : 0U);
    } else if ((1U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state))) {
        vlSelf->tb_tpu_top__DOT__dut__DOT__next_state 
            = ((0x10U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__prefill_count))
                ? 2U : 1U);
    } else if ((2U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state))) {
        vlSelf->tb_tpu_top__DOT__dut__DOT__next_state 
            = ((8U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__preload_count))
                ? 3U : 2U);
    } else if ((3U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state))) {
        vlSelf->tb_tpu_top__DOT__dut__DOT__next_state 
            = ((7U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__compute_count))
                ? 4U : 3U);
    } else if ((4U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state))) {
        vlSelf->tb_tpu_top__DOT__dut__DOT__next_state 
            = ((4U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__drain_count))
                ? 5U : 4U);
    } else if ((5U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state))) {
        vlSelf->tb_tpu_top__DOT__dut__DOT__next_state 
            = ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT____VdfgExtracted_hf6a6c9db__0)
                ? 2U : ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT____VdfgExtracted_h621a341a__0)
                         ? 6U : 5U));
    } else if ((6U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state))) {
        vlSelf->tb_tpu_top__DOT__dut__DOT__next_state = 0U;
    }
}

void Vtb_tpu_top___024root___eval_act(Vtb_tpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_tpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tpu_top___024root___eval_act\n"); );
    // Body
    if ((6ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_tpu_top___024root___act_comb__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*4:0*/, 128> Vtb_tpu_top__ConstPool__TABLE_h73872590_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_tpu_top__ConstPool__TABLE_h95214b9c_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_tpu_top__ConstPool__TABLE_he5d58018_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_tpu_top__ConstPool__TABLE_h26d33955_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_tpu_top__ConstPool__TABLE_hfc07e341_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_tpu_top__ConstPool__TABLE_h25f53c5b_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_tpu_top__ConstPool__TABLE_hb598fdfd_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_tpu_top__ConstPool__TABLE_h2fe71d6b_0;

VL_INLINE_OPT void Vtb_tpu_top___024root___nba_sequent__TOP__0(Vtb_tpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_tpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tpu_top___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__compute_state;
    tb_tpu_top__DOT__dut__DOT__compute_state = 0;
    CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__a_buff__DOT__first_pass_a;
    tb_tpu_top__DOT__dut__DOT__a_buff__DOT__first_pass_a = 0;
    CData/*7:0*/ __Vfunc_tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_lane__88__Vfuncout;
    __Vfunc_tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_lane__88__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_lane__88__idx;
    __Vfunc_tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_lane__88__idx = 0;
    CData/*7:0*/ __Vfunc_tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_lane__89__Vfuncout;
    __Vfunc_tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_lane__89__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_lane__89__idx;
    __Vfunc_tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_lane__89__idx = 0;
    CData/*7:0*/ __Vfunc_tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_lane__90__Vfuncout;
    __Vfunc_tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_lane__90__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_lane__90__idx;
    __Vfunc_tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_lane__90__idx = 0;
    CData/*7:0*/ __Vfunc_tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_lane__91__Vfuncout;
    __Vfunc_tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_lane__91__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_lane__91__idx;
    __Vfunc_tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_lane__91__idx = 0;
    CData/*3:0*/ __Vfunc_tb_tpu_top__DOT__dut__DOT__dma__DOT__act_lane__92__Vfuncout;
    __Vfunc_tb_tpu_top__DOT__dut__DOT__dma__DOT__act_lane__92__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_tpu_top__DOT__dut__DOT__dma__DOT__act_lane__92__idx;
    __Vfunc_tb_tpu_top__DOT__dut__DOT__dma__DOT__act_lane__92__idx = 0;
    CData/*3:0*/ __Vfunc_tb_tpu_top__DOT__dut__DOT__dma__DOT__act_lane__93__Vfuncout;
    __Vfunc_tb_tpu_top__DOT__dut__DOT__dma__DOT__act_lane__93__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_tpu_top__DOT__dut__DOT__dma__DOT__act_lane__93__idx;
    __Vfunc_tb_tpu_top__DOT__dut__DOT__dma__DOT__act_lane__93__idx = 0;
    CData/*3:0*/ __Vfunc_tb_tpu_top__DOT__dut__DOT__dma__DOT__act_lane__94__Vfuncout;
    __Vfunc_tb_tpu_top__DOT__dut__DOT__dma__DOT__act_lane__94__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_tpu_top__DOT__dut__DOT__dma__DOT__act_lane__94__idx;
    __Vfunc_tb_tpu_top__DOT__dut__DOT__dma__DOT__act_lane__94__idx = 0;
    CData/*3:0*/ __Vfunc_tb_tpu_top__DOT__dut__DOT__dma__DOT__act_lane__95__Vfuncout;
    __Vfunc_tb_tpu_top__DOT__dut__DOT__dma__DOT__act_lane__95__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_tpu_top__DOT__dut__DOT__dma__DOT__act_lane__95__idx;
    __Vfunc_tb_tpu_top__DOT__dut__DOT__dma__DOT__act_lane__95__idx = 0;
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*7:0*/ __Vdly__tb_tpu_top__DOT__dut__DOT__prefill_count;
    __Vdly__tb_tpu_top__DOT__dut__DOT__prefill_count = 0;
    CData/*7:0*/ __Vdly__tb_tpu_top__DOT__dut__DOT__preload_count;
    __Vdly__tb_tpu_top__DOT__dut__DOT__preload_count = 0;
    CData/*7:0*/ __Vdly__tb_tpu_top__DOT__dut__DOT__compute_count;
    __Vdly__tb_tpu_top__DOT__dut__DOT__compute_count = 0;
    CData/*7:0*/ __Vdly__tb_tpu_top__DOT__dut__DOT__drain_count;
    __Vdly__tb_tpu_top__DOT__dut__DOT__drain_count = 0;
    CData/*7:0*/ __Vdly__tb_tpu_top__DOT__dut__DOT__funcs_count;
    __Vdly__tb_tpu_top__DOT__dut__DOT__funcs_count = 0;
    CData/*7:0*/ __Vdly__tb_tpu_top__DOT__dut__DOT__tile_count;
    __Vdly__tb_tpu_top__DOT__dut__DOT__tile_count = 0;
    CData/*3:0*/ __Vdly__tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__count;
    __Vdly__tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__count = 0;
    CData/*1:0*/ __Vdly__tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__getPtr;
    __Vdly__tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__getPtr = 0;
    CData/*1:0*/ __Vdly__tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__putPtr;
    __Vdly__tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__putPtr = 0;
    CData/*4:0*/ __Vdlyvdim0__tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q__v0;
    __Vdlyvdim0__tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q__v0 = 0;
    IData/*31:0*/ __Vdlyvval__tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q__v0;
    __Vdlyvval__tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q__v0;
    __Vdlyvset__tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q__v1;
    __Vdlyvdim0__tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q__v1 = 0;
    IData/*31:0*/ __Vdlyvval__tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q__v1;
    __Vdlyvval__tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q__v1 = 0;
    CData/*0:0*/ __Vdlyvset__tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q__v1;
    __Vdlyvset__tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q__v1 = 0;
    SData/*9:0*/ __Vdly__tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__curr_count;
    __Vdly__tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__curr_count = 0;
    VlWide<4>/*127:0*/ __Vdly__tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__buff;
    VL_ZERO_W(128, __Vdly__tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__buff);
    SData/*9:0*/ __Vdly__tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__curr_count;
    __Vdly__tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__curr_count = 0;
    VlWide<4>/*127:0*/ __Vdly__tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__buff;
    VL_ZERO_W(128, __Vdly__tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__buff);
    SData/*15:0*/ __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_0__DOT__product_reg;
    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_0__DOT__product_reg = 0;
    IData/*31:0*/ __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_0__DOT__accum_reg;
    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_0__DOT__accum_reg = 0;
    SData/*15:0*/ __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_1__DOT__product_reg;
    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_1__DOT__product_reg = 0;
    IData/*31:0*/ __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_1__DOT__accum_reg;
    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_1__DOT__accum_reg = 0;
    SData/*15:0*/ __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_2__DOT__product_reg;
    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_2__DOT__product_reg = 0;
    IData/*31:0*/ __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_2__DOT__accum_reg;
    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_2__DOT__accum_reg = 0;
    SData/*15:0*/ __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_3__DOT__product_reg;
    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_3__DOT__product_reg = 0;
    IData/*31:0*/ __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_3__DOT__accum_reg;
    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_3__DOT__accum_reg = 0;
    SData/*15:0*/ __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_0__DOT__product_reg;
    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_0__DOT__product_reg = 0;
    IData/*31:0*/ __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_0__DOT__accum_reg;
    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_0__DOT__accum_reg = 0;
    SData/*15:0*/ __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_1__DOT__product_reg;
    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_1__DOT__product_reg = 0;
    IData/*31:0*/ __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_1__DOT__accum_reg;
    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_1__DOT__accum_reg = 0;
    SData/*15:0*/ __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_2__DOT__product_reg;
    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_2__DOT__product_reg = 0;
    IData/*31:0*/ __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_2__DOT__accum_reg;
    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_2__DOT__accum_reg = 0;
    SData/*15:0*/ __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_3__DOT__product_reg;
    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_3__DOT__product_reg = 0;
    IData/*31:0*/ __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_3__DOT__accum_reg;
    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_3__DOT__accum_reg = 0;
    SData/*15:0*/ __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_0__DOT__product_reg;
    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_0__DOT__product_reg = 0;
    IData/*31:0*/ __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_0__DOT__accum_reg;
    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_0__DOT__accum_reg = 0;
    SData/*15:0*/ __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_1__DOT__product_reg;
    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_1__DOT__product_reg = 0;
    IData/*31:0*/ __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_1__DOT__accum_reg;
    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_1__DOT__accum_reg = 0;
    SData/*15:0*/ __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_2__DOT__product_reg;
    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_2__DOT__product_reg = 0;
    IData/*31:0*/ __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_2__DOT__accum_reg;
    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_2__DOT__accum_reg = 0;
    SData/*15:0*/ __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_3__DOT__product_reg;
    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_3__DOT__product_reg = 0;
    IData/*31:0*/ __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_3__DOT__accum_reg;
    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_3__DOT__accum_reg = 0;
    SData/*15:0*/ __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_0__DOT__product_reg;
    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_0__DOT__product_reg = 0;
    IData/*31:0*/ __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_0__DOT__accum_reg;
    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_0__DOT__accum_reg = 0;
    SData/*15:0*/ __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_1__DOT__product_reg;
    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_1__DOT__product_reg = 0;
    IData/*31:0*/ __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_1__DOT__accum_reg;
    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_1__DOT__accum_reg = 0;
    SData/*15:0*/ __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_2__DOT__product_reg;
    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_2__DOT__product_reg = 0;
    IData/*31:0*/ __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_2__DOT__accum_reg;
    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_2__DOT__accum_reg = 0;
    SData/*15:0*/ __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_3__DOT__product_reg;
    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_3__DOT__product_reg = 0;
    IData/*31:0*/ __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_3__DOT__accum_reg;
    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_3__DOT__accum_reg = 0;
    // Body
    __Vdly__tb_tpu_top__DOT__dut__DOT__prefill_count 
        = vlSelf->tb_tpu_top__DOT__dut__DOT__prefill_count;
    __Vdly__tb_tpu_top__DOT__dut__DOT__drain_count 
        = vlSelf->tb_tpu_top__DOT__dut__DOT__drain_count;
    __Vdly__tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__getPtr 
        = vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__getPtr;
    __Vdly__tb_tpu_top__DOT__dut__DOT__preload_count 
        = vlSelf->tb_tpu_top__DOT__dut__DOT__preload_count;
    __Vdly__tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__count 
        = vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__count;
    __Vdly__tb_tpu_top__DOT__dut__DOT__funcs_count 
        = vlSelf->tb_tpu_top__DOT__dut__DOT__funcs_count;
    __Vdly__tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__putPtr 
        = vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__putPtr;
    __Vdly__tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__buff[0U] 
        = vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__buff[0U];
    __Vdly__tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__buff[1U] 
        = vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__buff[1U];
    __Vdly__tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__buff[2U] 
        = vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__buff[2U];
    __Vdly__tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__buff[3U] 
        = vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__buff[3U];
    __Vdly__tb_tpu_top__DOT__dut__DOT__compute_count 
        = vlSelf->tb_tpu_top__DOT__dut__DOT__compute_count;
    __Vdlyvset__tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q__v0 = 0U;
    __Vdlyvset__tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q__v1 = 0U;
    __Vdly__tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__curr_count 
        = vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__curr_count;
    __Vdly__tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__buff[0U] 
        = vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__buff[0U];
    __Vdly__tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__buff[1U] 
        = vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__buff[1U];
    __Vdly__tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__buff[2U] 
        = vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__buff[2U];
    __Vdly__tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__buff[3U] 
        = vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__buff[3U];
    __Vdly__tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__curr_count 
        = vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__curr_count;
    __Vdly__tb_tpu_top__DOT__dut__DOT__tile_count = vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count;
    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_3__DOT__accum_reg 
        = vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_3__DOT__accum_reg;
    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_3__DOT__product_reg 
        = vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_3__DOT__product_reg;
    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_2__DOT__accum_reg 
        = vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_2__DOT__accum_reg;
    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_2__DOT__product_reg 
        = vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_2__DOT__product_reg;
    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_1__DOT__accum_reg 
        = vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_1__DOT__accum_reg;
    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_1__DOT__product_reg 
        = vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_1__DOT__product_reg;
    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_3__DOT__accum_reg 
        = vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_3__DOT__accum_reg;
    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_3__DOT__product_reg 
        = vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_3__DOT__product_reg;
    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_2__DOT__accum_reg 
        = vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_2__DOT__accum_reg;
    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_2__DOT__product_reg 
        = vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_2__DOT__product_reg;
    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_1__DOT__accum_reg 
        = vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_1__DOT__accum_reg;
    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_1__DOT__product_reg 
        = vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_1__DOT__product_reg;
    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_3__DOT__accum_reg 
        = vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_3__DOT__accum_reg;
    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_3__DOT__product_reg 
        = vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_3__DOT__product_reg;
    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_2__DOT__accum_reg 
        = vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_2__DOT__accum_reg;
    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_2__DOT__product_reg 
        = vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_2__DOT__product_reg;
    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_1__DOT__accum_reg 
        = vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_1__DOT__accum_reg;
    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_1__DOT__product_reg 
        = vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_1__DOT__product_reg;
    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_3__DOT__accum_reg 
        = vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_3__DOT__accum_reg;
    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_3__DOT__product_reg 
        = vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_3__DOT__product_reg;
    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_2__DOT__accum_reg 
        = vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_2__DOT__accum_reg;
    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_2__DOT__product_reg 
        = vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_2__DOT__product_reg;
    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_1__DOT__accum_reg 
        = vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_1__DOT__accum_reg;
    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_1__DOT__product_reg 
        = vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_1__DOT__product_reg;
    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_0__DOT__accum_reg 
        = vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_0__DOT__accum_reg;
    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_0__DOT__product_reg 
        = vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_0__DOT__product_reg;
    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_0__DOT__accum_reg 
        = vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_0__DOT__accum_reg;
    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_0__DOT__product_reg 
        = vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_0__DOT__product_reg;
    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_0__DOT__accum_reg 
        = vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_0__DOT__accum_reg;
    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_0__DOT__product_reg 
        = vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_0__DOT__product_reg;
    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_0__DOT__accum_reg 
        = vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_0__DOT__accum_reg;
    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_0__DOT__product_reg 
        = vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_0__DOT__product_reg;
    if (vlSelf->tb_tpu_top__DOT__rst_n) {
        if (vlSelf->tb_tpu_top__DOT__dut__DOT__prefill_clr) {
            __Vdly__tb_tpu_top__DOT__dut__DOT__prefill_count = 0U;
        } else if (vlSelf->tb_tpu_top__DOT__dut__DOT__prefill_en) {
            __Vdly__tb_tpu_top__DOT__dut__DOT__prefill_count 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__prefill_count)));
        }
        if (vlSelf->tb_tpu_top__DOT__dut__DOT__drain_clr) {
            __Vdly__tb_tpu_top__DOT__dut__DOT__drain_count = 0U;
        } else if (vlSelf->tb_tpu_top__DOT__dut__DOT__drain_en) {
            __Vdly__tb_tpu_top__DOT__dut__DOT__drain_count 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__drain_count)));
        }
        if (vlSelf->tb_tpu_top__DOT__dut__DOT__preload_clr) {
            __Vdly__tb_tpu_top__DOT__dut__DOT__preload_count = 0U;
        } else if (vlSelf->tb_tpu_top__DOT__dut__DOT__preload_en) {
            __Vdly__tb_tpu_top__DOT__dut__DOT__preload_count 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__preload_count)));
        }
        if (vlSelf->tb_tpu_top__DOT__dut__DOT__func_clr) {
            __Vdly__tb_tpu_top__DOT__dut__DOT__funcs_count = 0U;
        } else if (vlSelf->tb_tpu_top__DOT__dut__DOT__func_en) {
            __Vdly__tb_tpu_top__DOT__dut__DOT__funcs_count 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__funcs_count)));
        }
        if (vlSelf->tb_tpu_top__DOT__dut__DOT__compute_clr) {
            __Vdly__tb_tpu_top__DOT__dut__DOT__compute_count = 0U;
        } else if (vlSelf->tb_tpu_top__DOT__dut__DOT__compute_en) {
            __Vdly__tb_tpu_top__DOT__dut__DOT__compute_count 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__compute_count)));
        }
        if (vlSelf->tb_tpu_top__DOT__dut__DOT__tile_clr) {
            __Vdly__tb_tpu_top__DOT__dut__DOT__tile_count = 0U;
        } else if (vlSelf->tb_tpu_top__DOT__dut__DOT__tile_done) {
            __Vdly__tb_tpu_top__DOT__dut__DOT__tile_count 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count)));
        }
        if (vlSelf->tb_tpu_top__DOT__dut__DOT__requant_out_valid) {
            vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__capture_count 
                = ((IData)(1U) + vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__capture_count);
        }
        if (((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__preload_state) 
             & (~ (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__preload_state_d)))) {
            vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__tile_idx 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__tile_idx)));
        }
        vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__current_state 
            = vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__next_state;
        vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__v_fsm_1__DOT__current_state 
            = vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__v_fsm_1__DOT__next_state;
        vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__e_fsm_1__DOT__current_state 
            = vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__e_fsm_1__DOT__next_state;
        if (vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__clr_b) {
            vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__re_valid_b = 0U;
            __Vdly__tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__curr_count = 0U;
        } else if (vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__we_b) {
            if (((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__we_valid_b) 
                 & (0x10U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__curr_count)))) {
                vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__re_valid_b = 0U;
            }
            if (((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__we_valid_b) 
                 & (~ (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__buff_b_full)))) {
                VL_ASSIGNSEL_WI(128,8,(0x7fU & VL_SHIFTL_III(7,32,32, (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__curr_count), 3U)), __Vdly__tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__buff, 
                                (0xfU & vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__write_in_b[0U]));
                VL_ASSIGNSEL_WI(128,8,(0x7fU & VL_SHIFTL_III(7,32,32, 
                                                             ((IData)(1U) 
                                                              + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__curr_count)), 3U)), __Vdly__tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__buff, 
                                (0xfU & (vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__write_in_b[0U] 
                                         >> 4U)));
                VL_ASSIGNSEL_WI(128,8,(0x7fU & VL_SHIFTL_III(7,32,32, 
                                                             ((IData)(2U) 
                                                              + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__curr_count)), 3U)), __Vdly__tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__buff, 
                                (0xfU & (vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__write_in_b[0U] 
                                         >> 8U)));
                VL_ASSIGNSEL_WI(128,8,(0x7fU & VL_SHIFTL_III(7,32,32, 
                                                             ((IData)(3U) 
                                                              + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__curr_count)), 3U)), __Vdly__tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__buff, 
                                (0xfU & (vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__write_in_b[0U] 
                                         >> 0xcU)));
                __Vdly__tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__curr_count 
                    = (0x3ffU & ((IData)(4U) + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__curr_count)));
            }
        } else if (vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__re_b) {
            vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__re_valid_b 
                = (0U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__curr_count));
            if ((1U & (~ (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__buff_b_empty)))) {
                vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__re_out_b[0U] 
                    = ((0xfffffff0U & vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__re_out_b[0U]) 
                       | (0xfU & (((0U == (0x1fU & 
                                           VL_SHIFTL_III(7,32,32, 
                                                         ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__curr_count) 
                                                          - (IData)(4U)), 3U)))
                                    ? 0U : (vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__buff[
                                            (((IData)(3U) 
                                              + (0x7fU 
                                                 & VL_SHIFTL_III(7,32,32, 
                                                                 ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__curr_count) 
                                                                  - (IData)(4U)), 3U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__curr_count) 
                                                                    - (IData)(4U)), 3U))))) 
                                  | (vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__buff[
                                     (3U & (VL_SHIFTL_III(7,32,32, 
                                                          ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__curr_count) 
                                                           - (IData)(4U)), 3U) 
                                            >> 5U))] 
                                     >> (0x1fU & VL_SHIFTL_III(7,32,32, 
                                                               ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__curr_count) 
                                                                - (IData)(4U)), 3U))))));
                vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__re_out_b[0U] 
                    = ((0xffffff0fU & vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__re_out_b[0U]) 
                       | (0xf0U & ((((0U == (0x1fU 
                                             & VL_SHIFTL_III(7,32,32, 
                                                             ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__curr_count) 
                                                              - (IData)(3U)), 3U)))
                                      ? 0U : (vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__buff[
                                              (((IData)(3U) 
                                                + (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__curr_count) 
                                                                    - (IData)(3U)), 3U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__curr_count) 
                                                                    - (IData)(3U)), 3U))))) 
                                    | (vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__buff[
                                       (3U & (VL_SHIFTL_III(7,32,32, 
                                                            ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__curr_count) 
                                                             - (IData)(3U)), 3U) 
                                              >> 5U))] 
                                       >> (0x1fU & 
                                           VL_SHIFTL_III(7,32,32, 
                                                         ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__curr_count) 
                                                          - (IData)(3U)), 3U)))) 
                                   << 4U)));
                vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__re_out_b[0U] 
                    = ((0xfffff0ffU & vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__re_out_b[0U]) 
                       | (0xf00U & ((((0U == (0x1fU 
                                              & VL_SHIFTL_III(7,32,32, 
                                                              ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__curr_count) 
                                                               - (IData)(2U)), 3U)))
                                       ? 0U : (vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__buff[
                                               (((IData)(3U) 
                                                 + 
                                                 (0x7fU 
                                                  & VL_SHIFTL_III(7,32,32, 
                                                                  ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__curr_count) 
                                                                   - (IData)(2U)), 3U))) 
                                                >> 5U)] 
                                               << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(7,32,32, 
                                                                    ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__curr_count) 
                                                                     - (IData)(2U)), 3U))))) 
                                     | (vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__buff[
                                        (3U & (VL_SHIFTL_III(7,32,32, 
                                                             ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__curr_count) 
                                                              - (IData)(2U)), 3U) 
                                               >> 5U))] 
                                        >> (0x1fU & 
                                            VL_SHIFTL_III(7,32,32, 
                                                          ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__curr_count) 
                                                           - (IData)(2U)), 3U)))) 
                                    << 8U)));
                vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__re_out_b[0U] 
                    = ((0xffff0fffU & vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__re_out_b[0U]) 
                       | (0xf000U & ((((0U == (0x1fU 
                                               & VL_SHIFTL_III(7,32,32, 
                                                               ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__curr_count) 
                                                                - (IData)(1U)), 3U)))
                                        ? 0U : (vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__buff[
                                                (((IData)(3U) 
                                                  + 
                                                  (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__curr_count) 
                                                                    - (IData)(1U)), 3U))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(7,32,32, 
                                                                  ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__curr_count) 
                                                                   - (IData)(1U)), 3U))))) 
                                      | (vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__buff[
                                         (3U & (VL_SHIFTL_III(7,32,32, 
                                                              ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__curr_count) 
                                                               - (IData)(1U)), 3U) 
                                                >> 5U))] 
                                         >> (0x1fU 
                                             & VL_SHIFTL_III(7,32,32, 
                                                             ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__curr_count) 
                                                              - (IData)(1U)), 3U)))) 
                                     << 0xcU)));
                __Vdly__tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__curr_count 
                    = (0x3ffU & ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__curr_count) 
                                 - (IData)(4U)));
            }
        }
        vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__B__DOT__current_state 
            = vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__B__DOT__next_state;
        if (vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__clr_a) {
            vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__re_valid_a = 0U;
            __Vdly__tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__curr_count = 0U;
        } else if (vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__we_a) {
            if (((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__we_valid_a) 
                 & (0x10U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__curr_count)))) {
                vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__re_valid_a = 0U;
            }
            if (((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__we_valid_a) 
                 & (~ (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__buff_a_full)))) {
                VL_ASSIGNSEL_WI(128,8,(0x7fU & VL_SHIFTL_III(7,32,32, (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__curr_count), 3U)), __Vdly__tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__buff, 
                                (0xfU & vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__write_in_a[0U]));
                VL_ASSIGNSEL_WI(128,8,(0x7fU & VL_SHIFTL_III(7,32,32, 
                                                             ((IData)(1U) 
                                                              + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__curr_count)), 3U)), __Vdly__tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__buff, 
                                (0xfU & (vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__write_in_a[0U] 
                                         >> 4U)));
                VL_ASSIGNSEL_WI(128,8,(0x7fU & VL_SHIFTL_III(7,32,32, 
                                                             ((IData)(2U) 
                                                              + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__curr_count)), 3U)), __Vdly__tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__buff, 
                                (0xfU & (vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__write_in_a[0U] 
                                         >> 8U)));
                VL_ASSIGNSEL_WI(128,8,(0x7fU & VL_SHIFTL_III(7,32,32, 
                                                             ((IData)(3U) 
                                                              + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__curr_count)), 3U)), __Vdly__tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__buff, 
                                (0xfU & (vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__write_in_a[0U] 
                                         >> 0xcU)));
                __Vdly__tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__curr_count 
                    = (0x3ffU & ((IData)(4U) + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__curr_count)));
            }
        } else if (vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__re_a) {
            vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__re_valid_a 
                = (0U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__curr_count));
            if ((1U & (~ (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__buff_a_empty)))) {
                vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__re_out_a[0U] 
                    = ((0xfffffff0U & vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__re_out_a[0U]) 
                       | (0xfU & (((0U == (0x1fU & 
                                           VL_SHIFTL_III(7,32,32, 
                                                         ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__curr_count) 
                                                          - (IData)(4U)), 3U)))
                                    ? 0U : (vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__buff[
                                            (((IData)(3U) 
                                              + (0x7fU 
                                                 & VL_SHIFTL_III(7,32,32, 
                                                                 ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__curr_count) 
                                                                  - (IData)(4U)), 3U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__curr_count) 
                                                                    - (IData)(4U)), 3U))))) 
                                  | (vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__buff[
                                     (3U & (VL_SHIFTL_III(7,32,32, 
                                                          ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__curr_count) 
                                                           - (IData)(4U)), 3U) 
                                            >> 5U))] 
                                     >> (0x1fU & VL_SHIFTL_III(7,32,32, 
                                                               ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__curr_count) 
                                                                - (IData)(4U)), 3U))))));
                vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__re_out_a[0U] 
                    = ((0xffffff0fU & vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__re_out_a[0U]) 
                       | (0xf0U & ((((0U == (0x1fU 
                                             & VL_SHIFTL_III(7,32,32, 
                                                             ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__curr_count) 
                                                              - (IData)(3U)), 3U)))
                                      ? 0U : (vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__buff[
                                              (((IData)(3U) 
                                                + (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__curr_count) 
                                                                    - (IData)(3U)), 3U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__curr_count) 
                                                                    - (IData)(3U)), 3U))))) 
                                    | (vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__buff[
                                       (3U & (VL_SHIFTL_III(7,32,32, 
                                                            ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__curr_count) 
                                                             - (IData)(3U)), 3U) 
                                              >> 5U))] 
                                       >> (0x1fU & 
                                           VL_SHIFTL_III(7,32,32, 
                                                         ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__curr_count) 
                                                          - (IData)(3U)), 3U)))) 
                                   << 4U)));
                vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__re_out_a[0U] 
                    = ((0xfffff0ffU & vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__re_out_a[0U]) 
                       | (0xf00U & ((((0U == (0x1fU 
                                              & VL_SHIFTL_III(7,32,32, 
                                                              ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__curr_count) 
                                                               - (IData)(2U)), 3U)))
                                       ? 0U : (vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__buff[
                                               (((IData)(3U) 
                                                 + 
                                                 (0x7fU 
                                                  & VL_SHIFTL_III(7,32,32, 
                                                                  ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__curr_count) 
                                                                   - (IData)(2U)), 3U))) 
                                                >> 5U)] 
                                               << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(7,32,32, 
                                                                    ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__curr_count) 
                                                                     - (IData)(2U)), 3U))))) 
                                     | (vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__buff[
                                        (3U & (VL_SHIFTL_III(7,32,32, 
                                                             ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__curr_count) 
                                                              - (IData)(2U)), 3U) 
                                               >> 5U))] 
                                        >> (0x1fU & 
                                            VL_SHIFTL_III(7,32,32, 
                                                          ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__curr_count) 
                                                           - (IData)(2U)), 3U)))) 
                                    << 8U)));
                vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__re_out_a[0U] 
                    = ((0xffff0fffU & vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__re_out_a[0U]) 
                       | (0xf000U & ((((0U == (0x1fU 
                                               & VL_SHIFTL_III(7,32,32, 
                                                               ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__curr_count) 
                                                                - (IData)(1U)), 3U)))
                                        ? 0U : (vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__buff[
                                                (((IData)(3U) 
                                                  + 
                                                  (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__curr_count) 
                                                                    - (IData)(1U)), 3U))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(7,32,32, 
                                                                  ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__curr_count) 
                                                                   - (IData)(1U)), 3U))))) 
                                      | (vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__buff[
                                         (3U & (VL_SHIFTL_III(7,32,32, 
                                                              ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__curr_count) 
                                                               - (IData)(1U)), 3U) 
                                                >> 5U))] 
                                         >> (0x1fU 
                                             & VL_SHIFTL_III(7,32,32, 
                                                             ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__curr_count) 
                                                              - (IData)(1U)), 3U)))) 
                                     << 0xcU)));
                __Vdly__tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__curr_count 
                    = (0x3ffU & ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__curr_count) 
                                 - (IData)(4U)));
            }
        }
        vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__A__DOT__current_state 
            = vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__A__DOT__next_state;
        vlSelf->tb_tpu_top__DOT__dut__DOT__current_state 
            = vlSelf->tb_tpu_top__DOT__dut__DOT__next_state;
        if (vlSelf->tb_tpu_top__DOT__dut__DOT__tile_done) {
            __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_3__DOT__product_reg = 0U;
            if ((1U & ((~ (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__h_en_3)) 
                       & (~ (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__drain_state))))) {
                __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_3__DOT__accum_reg = 0U;
                __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_3__DOT__accum_reg = 0U;
                __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_3__DOT__accum_reg = 0U;
                __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_3__DOT__accum_reg = 0U;
            }
            vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_0_3__down_out = 0U;
            __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_2__DOT__product_reg = 0U;
            if ((1U & ((~ (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__h_en_2)) 
                       & (~ (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__drain_state))))) {
                __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_2__DOT__accum_reg = 0U;
                __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_2__DOT__accum_reg = 0U;
                __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_2__DOT__accum_reg = 0U;
                __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_2__DOT__accum_reg = 0U;
            }
            vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_0_2__down_out = 0U;
            __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_1__DOT__product_reg = 0U;
            if ((1U & ((~ (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__h_en_1)) 
                       & (~ (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__drain_state))))) {
                __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_1__DOT__accum_reg = 0U;
                __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_1__DOT__accum_reg = 0U;
                __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_1__DOT__accum_reg = 0U;
                __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_1__DOT__accum_reg = 0U;
            }
            vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_0_1__down_out = 0U;
            __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_3__DOT__product_reg = 0U;
            vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_3_3__down_out = 0U;
            __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_2__DOT__product_reg = 0U;
            vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_3_2__down_out = 0U;
            __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_1__DOT__product_reg = 0U;
            vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_3_1__down_out = 0U;
            __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_3__DOT__product_reg = 0U;
            vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_2_3__down_out = 0U;
            __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_2__DOT__product_reg = 0U;
            vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_2_2__down_out = 0U;
            __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_1__DOT__product_reg = 0U;
            vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_2_1__down_out = 0U;
            __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_3__DOT__product_reg = 0U;
            vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_1_3__down_out = 0U;
            __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_2__DOT__product_reg = 0U;
            vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_1_2__down_out = 0U;
            __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_1__DOT__product_reg = 0U;
            vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_1_1__down_out = 0U;
            __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_0__DOT__product_reg = 0U;
            if ((1U & ((~ (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__h_en_0)) 
                       & (~ (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__drain_state))))) {
                __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_0__DOT__accum_reg = 0U;
                __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_0__DOT__accum_reg = 0U;
                __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_0__DOT__accum_reg = 0U;
                __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_0__DOT__accum_reg = 0U;
            }
            vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_0_0__down_out = 0U;
            __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_0__DOT__product_reg = 0U;
            vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_3_0__down_out = 0U;
            __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_0__DOT__product_reg = 0U;
            vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_2_0__down_out = 0U;
            __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_0__DOT__product_reg = 0U;
            vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_1_0__down_out = 0U;
            if (vlSelf->tb_tpu_top__DOT__dut__DOT__tile_done) {
                vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_3__DOT__b_reg = 0U;
                vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_2__DOT__b_reg = 0U;
                vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_1__DOT__b_reg = 0U;
                vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_3__DOT__b_reg = 0U;
                vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_2__DOT__b_reg = 0U;
                vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_1__DOT__b_reg = 0U;
                vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_3__DOT__b_reg = 0U;
                vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_2__DOT__b_reg = 0U;
                vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_1__DOT__b_reg = 0U;
                vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_3__DOT__b_reg = 0U;
                vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_2__DOT__b_reg = 0U;
                vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_1__DOT__b_reg = 0U;
                vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_0__DOT__b_reg = 0U;
                vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_0__DOT__b_reg = 0U;
                vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_0__DOT__b_reg = 0U;
                vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_0__DOT__b_reg = 0U;
            }
            vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_3__DOT__a_reg = 0U;
            vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_2__DOT__a_reg = 0U;
            vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_1__DOT__a_reg = 0U;
            vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_3__DOT__a_reg = 0U;
            vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_2__DOT__a_reg = 0U;
            vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_1__DOT__a_reg = 0U;
            vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_3__DOT__a_reg = 0U;
            vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_2__DOT__a_reg = 0U;
            vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_1__DOT__a_reg = 0U;
            vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_3__DOT__a_reg = 0U;
            vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_2__DOT__a_reg = 0U;
            vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_1__DOT__a_reg = 0U;
            vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_0__DOT__a_reg = 0U;
            vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_0__DOT__a_reg = 0U;
            vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_0__DOT__a_reg = 0U;
            vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_0__DOT__a_reg = 0U;
        } else {
            if (vlSelf->tb_tpu_top__DOT__dut__DOT__preload_state) {
                vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_0_3__down_out 
                    = vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_3__DOT__b_reg;
                vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_0_2__down_out 
                    = vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_2__DOT__b_reg;
                vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_0_1__down_out 
                    = vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_1__DOT__b_reg;
                vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_3_3__down_out 
                    = vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_3__DOT__b_reg;
                vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_3_2__down_out 
                    = vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_2__DOT__b_reg;
                vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_3_1__down_out 
                    = vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_1__DOT__b_reg;
                vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_2_3__down_out 
                    = vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_3__DOT__b_reg;
                vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_2_2__down_out 
                    = vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_2__DOT__b_reg;
                vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_2_1__down_out 
                    = vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_1__DOT__b_reg;
                vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_1_3__down_out 
                    = vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_3__DOT__b_reg;
                vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_1_2__down_out 
                    = vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_2__DOT__b_reg;
                vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_1_1__down_out 
                    = vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_1__DOT__b_reg;
                vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_0_0__down_out 
                    = vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_0__DOT__b_reg;
                vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_3_0__down_out 
                    = vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_0__DOT__b_reg;
                vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_2_0__down_out 
                    = vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_0__DOT__b_reg;
                vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_1_0__down_out 
                    = vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_0__DOT__b_reg;
                vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_3__DOT__b_reg 
                    = (vlSelf->tb_tpu_top__DOT__dut__DOT__weight_data_out 
                       >> 0x18U);
                vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_2__DOT__b_reg 
                    = (0xffU & (vlSelf->tb_tpu_top__DOT__dut__DOT__weight_data_out 
                                >> 0x10U));
                vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_1__DOT__b_reg 
                    = (0xffU & (vlSelf->tb_tpu_top__DOT__dut__DOT__weight_data_out 
                                >> 8U));
                vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_3__DOT__b_reg 
                    = (0xffU & (vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[5U] 
                                >> 0x10U));
                vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_2__DOT__b_reg 
                    = (0xffU & vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[5U]);
                vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_1__DOT__b_reg 
                    = (0xffU & (vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[4U] 
                                >> 0x10U));
                vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_3__DOT__b_reg 
                    = (0xffU & (vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[3U] 
                                >> 0x10U));
                vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_2__DOT__b_reg 
                    = (0xffU & vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[3U]);
                vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_1__DOT__b_reg 
                    = (0xffU & (vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[2U] 
                                >> 0x10U));
                vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_3__DOT__b_reg 
                    = (0xffU & (vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[1U] 
                                >> 0x10U));
                vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_2__DOT__b_reg 
                    = (0xffU & vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[1U]);
                vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_1__DOT__b_reg 
                    = (0xffU & (vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[0U] 
                                >> 0x10U));
                vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_0__DOT__b_reg 
                    = (0xffU & vlSelf->tb_tpu_top__DOT__dut__DOT__weight_data_out);
                vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_0__DOT__b_reg 
                    = (0xffU & vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[4U]);
                vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_0__DOT__b_reg 
                    = (0xffU & vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[2U]);
                vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_0__DOT__b_reg 
                    = (0xffU & vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[0U]);
            } else if (vlSelf->tb_tpu_top__DOT__dut__DOT__drain_state) {
                if (vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__v_en_0) {
                    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_3__DOT__accum_reg = 0U;
                    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_2__DOT__accum_reg = 0U;
                    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_1__DOT__accum_reg = 0U;
                    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_0__DOT__accum_reg = 0U;
                } else {
                    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_0_3__down_out 
                        = vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_3__DOT__accum_reg;
                    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_0_2__down_out 
                        = vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_2__DOT__accum_reg;
                    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_0_1__down_out 
                        = vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_1__DOT__accum_reg;
                    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_0_0__down_out 
                        = vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_0__DOT__accum_reg;
                }
                if (vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__v_en_3) {
                    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_3__DOT__accum_reg 
                        = (vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[5U] 
                           >> 0x10U);
                    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_2__DOT__accum_reg 
                        = (0xffffU & vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[5U]);
                    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_1__DOT__accum_reg 
                        = (vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[4U] 
                           >> 0x10U);
                    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_0__DOT__accum_reg 
                        = (0xffffU & vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[4U]);
                } else {
                    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_3_3__down_out 
                        = vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_3__DOT__accum_reg;
                    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_3_2__down_out 
                        = vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_2__DOT__accum_reg;
                    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_3_1__down_out 
                        = vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_1__DOT__accum_reg;
                    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_3_0__down_out 
                        = vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_0__DOT__accum_reg;
                }
                if (vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__v_en_2) {
                    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_3__DOT__accum_reg 
                        = (vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[3U] 
                           >> 0x10U);
                    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_2__DOT__accum_reg 
                        = (0xffffU & vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[3U]);
                    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_1__DOT__accum_reg 
                        = (vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[2U] 
                           >> 0x10U);
                    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_0__DOT__accum_reg 
                        = (0xffffU & vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[2U]);
                } else {
                    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_2_3__down_out 
                        = vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_3__DOT__accum_reg;
                    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_2_2__down_out 
                        = vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_2__DOT__accum_reg;
                    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_2_1__down_out 
                        = vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_1__DOT__accum_reg;
                    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_2_0__down_out 
                        = vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_0__DOT__accum_reg;
                }
                if (vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__v_en_1) {
                    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_3__DOT__accum_reg 
                        = (vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[1U] 
                           >> 0x10U);
                    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_2__DOT__accum_reg 
                        = (0xffffU & vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[1U]);
                    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_1__DOT__accum_reg 
                        = (vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[0U] 
                           >> 0x10U);
                    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_0__DOT__accum_reg 
                        = (0xffffU & vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[0U]);
                } else {
                    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_1_3__down_out 
                        = vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_3__DOT__accum_reg;
                    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_1_2__down_out 
                        = vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_2__DOT__accum_reg;
                    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_1_1__down_out 
                        = vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_1__DOT__accum_reg;
                    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_1_0__down_out 
                        = vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_0__DOT__accum_reg;
                }
            } else {
                if (vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__h_en_3) {
                    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_3__DOT__product_reg 
                        = (0xffffU & (((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_3__DOT__a_reg) 
                                       * (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_3__DOT__b_reg)) 
                                      + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_3__DOT__product_reg)));
                    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_3__DOT__accum_reg 
                        = (vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_3__DOT__accum_reg 
                           + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_3__DOT__product_reg));
                    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_0_3__right_out 
                        = vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_3__DOT__a_reg;
                    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_0_3__down_out = 0U;
                    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_3__DOT__product_reg 
                        = (0xffffU & (((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_3__DOT__a_reg) 
                                       * (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_3__DOT__b_reg)) 
                                      + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_3__DOT__product_reg)));
                    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_3__DOT__accum_reg 
                        = (vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_3__DOT__accum_reg 
                           + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_3__DOT__product_reg));
                    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_3_3__right_out 
                        = vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_3__DOT__a_reg;
                    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_3_3__down_out = 0U;
                    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_3__DOT__product_reg 
                        = (0xffffU & (((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_3__DOT__a_reg) 
                                       * (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_3__DOT__b_reg)) 
                                      + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_3__DOT__product_reg)));
                    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_3__DOT__accum_reg 
                        = (vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_3__DOT__accum_reg 
                           + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_3__DOT__product_reg));
                    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_2_3__right_out 
                        = vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_3__DOT__a_reg;
                    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_2_3__down_out = 0U;
                    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_3__DOT__product_reg 
                        = (0xffffU & (((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_3__DOT__a_reg) 
                                       * (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_3__DOT__b_reg)) 
                                      + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_3__DOT__product_reg)));
                    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_3__DOT__accum_reg 
                        = (vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_3__DOT__accum_reg 
                           + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_3__DOT__product_reg));
                    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_1_3__right_out 
                        = vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_3__DOT__a_reg;
                    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_1_3__down_out = 0U;
                }
                if (vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__h_en_2) {
                    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_2__DOT__product_reg 
                        = (0xffffU & (((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_2__DOT__a_reg) 
                                       * (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_2__DOT__b_reg)) 
                                      + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_2__DOT__product_reg)));
                    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_2__DOT__accum_reg 
                        = (vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_2__DOT__accum_reg 
                           + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_2__DOT__product_reg));
                    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_0_2__right_out 
                        = vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_2__DOT__a_reg;
                    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_0_2__down_out = 0U;
                    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_2__DOT__product_reg 
                        = (0xffffU & (((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_2__DOT__a_reg) 
                                       * (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_2__DOT__b_reg)) 
                                      + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_2__DOT__product_reg)));
                    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_2__DOT__accum_reg 
                        = (vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_2__DOT__accum_reg 
                           + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_2__DOT__product_reg));
                    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_3_2__right_out 
                        = vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_2__DOT__a_reg;
                    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_3_2__down_out = 0U;
                    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_2__DOT__product_reg 
                        = (0xffffU & (((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_2__DOT__a_reg) 
                                       * (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_2__DOT__b_reg)) 
                                      + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_2__DOT__product_reg)));
                    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_2__DOT__accum_reg 
                        = (vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_2__DOT__accum_reg 
                           + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_2__DOT__product_reg));
                    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_2_2__right_out 
                        = vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_2__DOT__a_reg;
                    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_2_2__down_out = 0U;
                    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_2__DOT__product_reg 
                        = (0xffffU & (((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_2__DOT__a_reg) 
                                       * (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_2__DOT__b_reg)) 
                                      + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_2__DOT__product_reg)));
                    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_2__DOT__accum_reg 
                        = (vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_2__DOT__accum_reg 
                           + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_2__DOT__product_reg));
                    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_1_2__right_out 
                        = vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_2__DOT__a_reg;
                    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_1_2__down_out = 0U;
                }
                if (vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__h_en_1) {
                    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_1__DOT__product_reg 
                        = (0xffffU & (((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_1__DOT__a_reg) 
                                       * (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_1__DOT__b_reg)) 
                                      + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_1__DOT__product_reg)));
                    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_1__DOT__accum_reg 
                        = (vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_1__DOT__accum_reg 
                           + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_1__DOT__product_reg));
                    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_0_1__right_out 
                        = vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_1__DOT__a_reg;
                    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_0_1__down_out = 0U;
                    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_1__DOT__product_reg 
                        = (0xffffU & (((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_1__DOT__a_reg) 
                                       * (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_1__DOT__b_reg)) 
                                      + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_1__DOT__product_reg)));
                    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_1__DOT__accum_reg 
                        = (vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_1__DOT__accum_reg 
                           + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_1__DOT__product_reg));
                    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_3_1__right_out 
                        = vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_1__DOT__a_reg;
                    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_3_1__down_out = 0U;
                    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_1__DOT__product_reg 
                        = (0xffffU & (((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_1__DOT__a_reg) 
                                       * (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_1__DOT__b_reg)) 
                                      + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_1__DOT__product_reg)));
                    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_1__DOT__accum_reg 
                        = (vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_1__DOT__accum_reg 
                           + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_1__DOT__product_reg));
                    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_2_1__right_out 
                        = vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_1__DOT__a_reg;
                    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_2_1__down_out = 0U;
                    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_1__DOT__product_reg 
                        = (0xffffU & (((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_1__DOT__a_reg) 
                                       * (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_1__DOT__b_reg)) 
                                      + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_1__DOT__product_reg)));
                    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_1__DOT__accum_reg 
                        = (vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_1__DOT__accum_reg 
                           + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_1__DOT__product_reg));
                    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_1_1__right_out 
                        = vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_1__DOT__a_reg;
                    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_1_1__down_out = 0U;
                }
                if (vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__h_en_0) {
                    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_0__DOT__product_reg 
                        = (0xffffU & (((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_0__DOT__a_reg) 
                                       * (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_0__DOT__b_reg)) 
                                      + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_0__DOT__product_reg)));
                    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_0__DOT__accum_reg 
                        = (vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_0__DOT__accum_reg 
                           + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_0__DOT__product_reg));
                    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_0_0__right_out 
                        = vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_0__DOT__a_reg;
                    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_0_0__down_out = 0U;
                    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_0__DOT__product_reg 
                        = (0xffffU & (((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_0__DOT__a_reg) 
                                       * (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_0__DOT__b_reg)) 
                                      + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_0__DOT__product_reg)));
                    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_0__DOT__accum_reg 
                        = (vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_0__DOT__accum_reg 
                           + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_0__DOT__product_reg));
                    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_3_0__right_out 
                        = vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_0__DOT__a_reg;
                    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_3_0__down_out = 0U;
                    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_0__DOT__product_reg 
                        = (0xffffU & (((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_0__DOT__a_reg) 
                                       * (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_0__DOT__b_reg)) 
                                      + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_0__DOT__product_reg)));
                    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_0__DOT__accum_reg 
                        = (vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_0__DOT__accum_reg 
                           + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_0__DOT__product_reg));
                    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_2_0__right_out 
                        = vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_0__DOT__a_reg;
                    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_2_0__down_out = 0U;
                    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_0__DOT__product_reg 
                        = (0xffffU & (((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_0__DOT__a_reg) 
                                       * (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_0__DOT__b_reg)) 
                                      + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_0__DOT__product_reg)));
                    __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_0__DOT__accum_reg 
                        = (vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_0__DOT__accum_reg 
                           + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_0__DOT__product_reg));
                    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_1_0__right_out 
                        = vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_0__DOT__a_reg;
                    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_1_0__down_out = 0U;
                }
            }
            if ((1U & (~ (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__preload_state)))) {
                if ((1U & (~ (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__drain_state)))) {
                    if (vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__h_en_3) {
                        vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_3__DOT__a_reg 
                            = (0xffU & vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_right_out[1U]);
                        vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_3__DOT__a_reg 
                            = (0xffU & vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_right_out[7U]);
                        vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_3__DOT__a_reg 
                            = (0xffU & vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_right_out[5U]);
                        vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_3__DOT__a_reg 
                            = (0xffU & vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_right_out[3U]);
                    }
                    if (vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__h_en_2) {
                        vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_2__DOT__a_reg 
                            = (0xffU & (vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_right_out[0U] 
                                        >> 0x10U));
                        vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_2__DOT__a_reg 
                            = (0xffU & (vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_right_out[6U] 
                                        >> 0x10U));
                        vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_2__DOT__a_reg 
                            = (0xffU & (vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_right_out[4U] 
                                        >> 0x10U));
                        vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_2__DOT__a_reg 
                            = (0xffU & (vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_right_out[2U] 
                                        >> 0x10U));
                    }
                    if (vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__h_en_1) {
                        vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_1__DOT__a_reg 
                            = (0xffU & vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_right_out[0U]);
                        vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_1__DOT__a_reg 
                            = (0xffU & vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_right_out[6U]);
                        vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_1__DOT__a_reg 
                            = (0xffU & vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_right_out[4U]);
                        vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_1__DOT__a_reg 
                            = (0xffU & vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_right_out[2U]);
                    }
                    if (vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__h_en_0) {
                        vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_0__DOT__a_reg 
                            = (0xffU & vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__val_act_in);
                        vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_0__DOT__a_reg 
                            = (vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__val_act_in 
                               >> 0x18U);
                        vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_0__DOT__a_reg 
                            = (0xffU & (vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__val_act_in 
                                        >> 0x10U));
                        vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_0__DOT__a_reg 
                            = (0xffU & (vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__val_act_in 
                                        >> 8U));
                    }
                }
            }
        }
        if (vlSelf->tb_tpu_top__DOT__dut__DOT__systolic_act_in_valid) {
            vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__val_act_in 
                = vlSelf->tb_tpu_top__DOT__dut__DOT____Vcellout__a_buff__output_buff[0U];
        }
    } else {
        __Vdly__tb_tpu_top__DOT__dut__DOT__prefill_count = 0U;
        __Vdly__tb_tpu_top__DOT__dut__DOT__drain_count = 0U;
        __Vdly__tb_tpu_top__DOT__dut__DOT__preload_count = 0U;
        __Vdly__tb_tpu_top__DOT__dut__DOT__funcs_count = 0U;
        __Vdly__tb_tpu_top__DOT__dut__DOT__compute_count = 0U;
        __Vdly__tb_tpu_top__DOT__dut__DOT__tile_count = 0U;
        vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__capture_count = 0U;
        vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__tile_idx = 0U;
        vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__current_state = 0U;
        vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__v_fsm_1__DOT__current_state = 0U;
        vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__e_fsm_1__DOT__current_state = 0U;
        vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__B__DOT__current_state = 0U;
        __Vdly__tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__curr_count = 0U;
        __Vdly__tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__buff[0U] = 0U;
        __Vdly__tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__buff[1U] = 0U;
        __Vdly__tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__buff[2U] = 0U;
        __Vdly__tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__buff[3U] = 0U;
        vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__A__DOT__current_state = 0U;
        __Vdly__tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__curr_count = 0U;
        __Vdly__tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__buff[0U] = 0U;
        __Vdly__tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__buff[1U] = 0U;
        __Vdly__tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__buff[2U] = 0U;
        __Vdly__tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__buff[3U] = 0U;
        vlSelf->tb_tpu_top__DOT__dut__DOT__current_state = 0U;
        __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_3__DOT__product_reg = 0U;
        __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_3__DOT__accum_reg = 0U;
        __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_2__DOT__product_reg = 0U;
        __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_2__DOT__accum_reg = 0U;
        __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_1__DOT__product_reg = 0U;
        __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_1__DOT__accum_reg = 0U;
        __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_3__DOT__product_reg = 0U;
        __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_3__DOT__accum_reg = 0U;
        __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_2__DOT__product_reg = 0U;
        __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_2__DOT__accum_reg = 0U;
        __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_1__DOT__product_reg = 0U;
        __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_1__DOT__accum_reg = 0U;
        __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_3__DOT__product_reg = 0U;
        __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_3__DOT__accum_reg = 0U;
        __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_2__DOT__product_reg = 0U;
        __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_2__DOT__accum_reg = 0U;
        __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_1__DOT__product_reg = 0U;
        __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_1__DOT__accum_reg = 0U;
        __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_3__DOT__product_reg = 0U;
        __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_3__DOT__accum_reg = 0U;
        __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_2__DOT__product_reg = 0U;
        __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_2__DOT__accum_reg = 0U;
        __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_1__DOT__product_reg = 0U;
        __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_1__DOT__accum_reg = 0U;
        __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_0__DOT__product_reg = 0U;
        __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_0__DOT__accum_reg = 0U;
        __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_0__DOT__product_reg = 0U;
        __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_0__DOT__accum_reg = 0U;
        __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_0__DOT__product_reg = 0U;
        __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_0__DOT__accum_reg = 0U;
        __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_0__DOT__product_reg = 0U;
        __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_0__DOT__accum_reg = 0U;
        vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_3__DOT__b_reg = 0U;
        vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_3__DOT__a_reg = 0U;
        vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_2__DOT__b_reg = 0U;
        vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_2__DOT__a_reg = 0U;
        vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_1__DOT__b_reg = 0U;
        vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_1__DOT__a_reg = 0U;
        vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_3__DOT__b_reg = 0U;
        vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_3__DOT__a_reg = 0U;
        vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_2__DOT__b_reg = 0U;
        vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_2__DOT__a_reg = 0U;
        vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_1__DOT__b_reg = 0U;
        vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_1__DOT__a_reg = 0U;
        vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_3__DOT__b_reg = 0U;
        vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_3__DOT__a_reg = 0U;
        vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_2__DOT__b_reg = 0U;
        vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_2__DOT__a_reg = 0U;
        vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_1__DOT__b_reg = 0U;
        vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_1__DOT__a_reg = 0U;
        vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_3__DOT__b_reg = 0U;
        vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_3__DOT__a_reg = 0U;
        vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_2__DOT__b_reg = 0U;
        vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_2__DOT__a_reg = 0U;
        vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_1__DOT__b_reg = 0U;
        vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_1__DOT__a_reg = 0U;
        vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_0__DOT__b_reg = 0U;
        vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_0__DOT__a_reg = 0U;
        vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_0__DOT__b_reg = 0U;
        vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_0__DOT__a_reg = 0U;
        vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_0__DOT__b_reg = 0U;
        vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_0__DOT__a_reg = 0U;
        vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_0__DOT__b_reg = 0U;
        vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_0__DOT__a_reg = 0U;
        vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__val_act_in = 0U;
    }
    if ((1U & (~ (IData)(vlSelf->tb_tpu_top__DOT__rst_n)))) {
        __Vdly__tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__getPtr = 0U;
        __Vdly__tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__count = 0U;
        __Vdly__tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__putPtr = 0U;
    }
    if (((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__fifo_we) 
           & (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__fifo_re)) 
          & (0U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__count))) 
         & (4U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__count)))) {
        __Vdly__tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__getPtr 
            = (3U & ((IData)(1U) + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__getPtr)));
        __Vdlyvval__tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q__v0 
            = vlSelf->tb_tpu_top__DOT__dut__DOT__weight_bank_out;
        __Vdlyvset__tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q__v0 = 1U;
        __Vdlyvdim0__tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q__v0 
            = vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__putPtr;
        __Vdly__tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__putPtr 
            = (3U & ((IData)(1U) + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__putPtr)));
    } else {
        if (((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__fifo_re) 
             & (0U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__count)))) {
            __Vdly__tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__getPtr 
                = (3U & ((IData)(1U) + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__getPtr)));
        }
        if ((1U & (~ ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__fifo_re) 
                      & (0U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__count)))))) {
            if (((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__fifo_we) 
                 & (4U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__count)))) {
                __Vdlyvval__tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q__v1 
                    = vlSelf->tb_tpu_top__DOT__dut__DOT__weight_bank_out;
                __Vdlyvset__tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q__v1 = 1U;
                __Vdlyvdim0__tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q__v1 
                    = vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__putPtr;
                __Vdly__tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__putPtr 
                    = (3U & ((IData)(1U) + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__putPtr)));
            }
        }
    }
    if ((1U & (~ ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__fifo_we) 
                    & (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__fifo_re)) 
                   & (~ (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__weight_fifo_empty))) 
                  & (~ (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__weight_fifo_full)))))) {
        if (((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__fifo_re) 
             & (~ (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__weight_fifo_empty)))) {
            __Vdly__tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__count 
                = (0xfU & ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__count) 
                           - (IData)(1U)));
        } else if (((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__fifo_we) 
                    & (~ (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__weight_fifo_full)))) {
            __Vdly__tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__count 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__count)));
        }
    }
    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__B__DOT__o_bank_reg 
        = ((IData)(vlSelf->tb_tpu_top__DOT__rst_n) 
           && (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__buff_a_active));
    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__A__DOT__o_bank_reg 
        = ((IData)(vlSelf->tb_tpu_top__DOT__rst_n) 
           && (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__buff_b_active));
    vlSelf->tb_tpu_top__DOT__dut__DOT__prefill_count 
        = __Vdly__tb_tpu_top__DOT__dut__DOT__prefill_count;
    vlSelf->tb_tpu_top__DOT__dut__DOT__drain_count 
        = __Vdly__tb_tpu_top__DOT__dut__DOT__drain_count;
    vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__getPtr 
        = __Vdly__tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__getPtr;
    vlSelf->tb_tpu_top__DOT__dut__DOT__preload_count 
        = __Vdly__tb_tpu_top__DOT__dut__DOT__preload_count;
    vlSelf->tb_tpu_top__DOT__dut__DOT__funcs_count 
        = __Vdly__tb_tpu_top__DOT__dut__DOT__funcs_count;
    vlSelf->tb_tpu_top__DOT__dut__DOT__compute_count 
        = __Vdly__tb_tpu_top__DOT__dut__DOT__compute_count;
    vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__putPtr 
        = __Vdly__tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__putPtr;
    if (__Vdlyvset__tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q__v0) {
        vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q[__Vdlyvdim0__tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q__v0] 
            = __Vdlyvval__tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q__v0;
    }
    if (__Vdlyvset__tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q__v1) {
        vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q[__Vdlyvdim0__tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q__v1] 
            = __Vdlyvval__tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q__v1;
    }
    vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__count 
        = __Vdly__tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__count;
    vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count = __Vdly__tb_tpu_top__DOT__dut__DOT__tile_count;
    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__buff[0U] 
        = __Vdly__tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__buff[0U];
    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__buff[1U] 
        = __Vdly__tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__buff[1U];
    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__buff[2U] 
        = __Vdly__tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__buff[2U];
    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__buff[3U] 
        = __Vdly__tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__buff[3U];
    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__curr_count 
        = __Vdly__tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__curr_count;
    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__buff[0U] 
        = __Vdly__tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__buff[0U];
    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__buff[1U] 
        = __Vdly__tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__buff[1U];
    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__buff[2U] 
        = __Vdly__tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__buff[2U];
    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__buff[3U] 
        = __Vdly__tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__buff[3U];
    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__curr_count 
        = __Vdly__tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__curr_count;
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_3__DOT__product_reg 
        = __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_3__DOT__product_reg;
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_3__DOT__accum_reg 
        = __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_3__DOT__accum_reg;
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_2__DOT__product_reg 
        = __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_2__DOT__product_reg;
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_2__DOT__accum_reg 
        = __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_2__DOT__accum_reg;
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_1__DOT__product_reg 
        = __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_1__DOT__product_reg;
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_1__DOT__accum_reg 
        = __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_1__DOT__accum_reg;
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_3__DOT__product_reg 
        = __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_3__DOT__product_reg;
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_3__DOT__accum_reg 
        = __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_3__DOT__accum_reg;
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_2__DOT__product_reg 
        = __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_2__DOT__product_reg;
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_2__DOT__accum_reg 
        = __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_2__DOT__accum_reg;
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_1__DOT__product_reg 
        = __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_1__DOT__product_reg;
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_1__DOT__accum_reg 
        = __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_1__DOT__accum_reg;
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_3__DOT__product_reg 
        = __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_3__DOT__product_reg;
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_3__DOT__accum_reg 
        = __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_3__DOT__accum_reg;
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_2__DOT__product_reg 
        = __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_2__DOT__product_reg;
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_2__DOT__accum_reg 
        = __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_2__DOT__accum_reg;
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_1__DOT__product_reg 
        = __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_1__DOT__product_reg;
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_1__DOT__accum_reg 
        = __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_1__DOT__accum_reg;
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_3__DOT__product_reg 
        = __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_3__DOT__product_reg;
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_3__DOT__accum_reg 
        = __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_3__DOT__accum_reg;
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_2__DOT__product_reg 
        = __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_2__DOT__product_reg;
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_2__DOT__accum_reg 
        = __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_2__DOT__accum_reg;
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_1__DOT__product_reg 
        = __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_1__DOT__product_reg;
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_1__DOT__accum_reg 
        = __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_1__DOT__accum_reg;
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_0__DOT__product_reg 
        = __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_0__DOT__product_reg;
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_0__DOT__accum_reg 
        = __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_0__DOT__accum_reg;
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_0__DOT__product_reg 
        = __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_0__DOT__product_reg;
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_0__DOT__accum_reg 
        = __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_0__DOT__accum_reg;
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_0__DOT__product_reg 
        = __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_0__DOT__product_reg;
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_0__DOT__accum_reg 
        = __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_0__DOT__accum_reg;
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_0__DOT__product_reg 
        = __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_0__DOT__product_reg;
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_0__DOT__accum_reg 
        = __Vdly__tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_0__DOT__accum_reg;
    vlSelf->tb_tpu_top__DOT__dut__DOT__weight_fifo_empty 
        = (0U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__count));
    vlSelf->tb_tpu_top__DOT__dut__DOT__weight_fifo_full 
        = (4U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__count));
    vlSelf->tb_tpu_top__DOT__dut__DOT____VdfgExtracted_hf6a6c9db__0 
        = ((8U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count)) 
           & (3U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__funcs_count)));
    vlSelf->tb_tpu_top__DOT__dut__DOT____VdfgExtracted_h621a341a__0 
        = ((3U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__funcs_count)) 
           & (8U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count)));
    vlSelf->tb_tpu_top__DOT__dut__DOT__requant_out_valid 
        = ((IData)(vlSelf->tb_tpu_top__DOT__rst_n) 
           && (((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__relu_out_valid) 
                & ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__drain_state) 
                   | (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__accum_state))) 
               && (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__relu_out_valid)));
    __Vfunc_tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_lane__88__idx 
        = vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__tile_idx;
    __Vfunc_tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_lane__88__Vfuncout 
        = (0xffU & ((IData)(0xaU) + ((IData)(0x29U) 
                                     * (IData)(__Vfunc_tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_lane__88__idx))));
    vlSelf->tb_tpu_top__DOT__dut__DOT__weight_bank_out 
        = ((0xffffff00U & vlSelf->tb_tpu_top__DOT__dut__DOT__weight_bank_out) 
           | (IData)(__Vfunc_tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_lane__88__Vfuncout));
    __Vfunc_tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_lane__89__idx 
        = vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__tile_idx;
    __Vfunc_tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_lane__89__Vfuncout 
        = (0xffU & ((IData)(0x19U) + ((IData)(0x29U) 
                                      * (IData)(__Vfunc_tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_lane__89__idx))));
    vlSelf->tb_tpu_top__DOT__dut__DOT__weight_bank_out 
        = ((0xffff00ffU & vlSelf->tb_tpu_top__DOT__dut__DOT__weight_bank_out) 
           | ((IData)(__Vfunc_tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_lane__89__Vfuncout) 
              << 8U));
    __Vfunc_tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_lane__90__idx 
        = vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__tile_idx;
    __Vfunc_tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_lane__90__Vfuncout 
        = (0xffU & ((IData)(0x28U) + ((IData)(0x29U) 
                                      * (IData)(__Vfunc_tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_lane__90__idx))));
    vlSelf->tb_tpu_top__DOT__dut__DOT__weight_bank_out 
        = ((0xff00ffffU & vlSelf->tb_tpu_top__DOT__dut__DOT__weight_bank_out) 
           | ((IData)(__Vfunc_tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_lane__90__Vfuncout) 
              << 0x10U));
    __Vfunc_tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_lane__91__idx 
        = vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__tile_idx;
    __Vfunc_tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_lane__91__Vfuncout 
        = (0xffU & ((IData)(0x37U) + ((IData)(0x29U) 
                                      * (IData)(__Vfunc_tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_lane__91__idx))));
    vlSelf->tb_tpu_top__DOT__dut__DOT__weight_bank_out 
        = ((0xffffffU & vlSelf->tb_tpu_top__DOT__dut__DOT__weight_bank_out) 
           | ((IData)(__Vfunc_tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_lane__91__Vfuncout) 
              << 0x18U));
    __Vfunc_tb_tpu_top__DOT__dut__DOT__dma__DOT__act_lane__92__idx 
        = vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__tile_idx;
    __Vfunc_tb_tpu_top__DOT__dut__DOT__dma__DOT__act_lane__92__Vfuncout 
        = (0xfU & ((IData)(1U) + ((IData)(7U) * (0xfU 
                                                 & (IData)(__Vfunc_tb_tpu_top__DOT__dut__DOT__dma__DOT__act_lane__92__idx)))));
    vlSelf->tb_tpu_top__DOT__dut__DOT__activation_bank_out[0U] 
        = ((0xfffffff0U & vlSelf->tb_tpu_top__DOT__dut__DOT__activation_bank_out[0U]) 
           | (IData)(__Vfunc_tb_tpu_top__DOT__dut__DOT__dma__DOT__act_lane__92__Vfuncout));
    __Vfunc_tb_tpu_top__DOT__dut__DOT__dma__DOT__act_lane__93__idx 
        = vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__tile_idx;
    __Vfunc_tb_tpu_top__DOT__dut__DOT__dma__DOT__act_lane__93__Vfuncout 
        = (0xfU & ((IData)(4U) + ((IData)(7U) * (0xfU 
                                                 & (IData)(__Vfunc_tb_tpu_top__DOT__dut__DOT__dma__DOT__act_lane__93__idx)))));
    vlSelf->tb_tpu_top__DOT__dut__DOT__activation_bank_out[0U] 
        = ((0xffffff0fU & vlSelf->tb_tpu_top__DOT__dut__DOT__activation_bank_out[0U]) 
           | ((IData)(__Vfunc_tb_tpu_top__DOT__dut__DOT__dma__DOT__act_lane__93__Vfuncout) 
              << 4U));
    __Vfunc_tb_tpu_top__DOT__dut__DOT__dma__DOT__act_lane__94__idx 
        = vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__tile_idx;
    __Vfunc_tb_tpu_top__DOT__dut__DOT__dma__DOT__act_lane__94__Vfuncout 
        = (0xfU & ((IData)(7U) + ((IData)(7U) * (0xfU 
                                                 & (IData)(__Vfunc_tb_tpu_top__DOT__dut__DOT__dma__DOT__act_lane__94__idx)))));
    vlSelf->tb_tpu_top__DOT__dut__DOT__activation_bank_out[0U] 
        = ((0xfffff0ffU & vlSelf->tb_tpu_top__DOT__dut__DOT__activation_bank_out[0U]) 
           | ((IData)(__Vfunc_tb_tpu_top__DOT__dut__DOT__dma__DOT__act_lane__94__Vfuncout) 
              << 8U));
    __Vfunc_tb_tpu_top__DOT__dut__DOT__dma__DOT__act_lane__95__idx 
        = vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__tile_idx;
    __Vfunc_tb_tpu_top__DOT__dut__DOT__dma__DOT__act_lane__95__Vfuncout 
        = (0xfU & ((IData)(0xaU) + ((IData)(7U) * (0xfU 
                                                   & (IData)(__Vfunc_tb_tpu_top__DOT__dut__DOT__dma__DOT__act_lane__95__idx)))));
    vlSelf->tb_tpu_top__DOT__dut__DOT__activation_bank_out[0U] 
        = ((0xffff0fffU & vlSelf->tb_tpu_top__DOT__dut__DOT__activation_bank_out[0U]) 
           | ((IData)(__Vfunc_tb_tpu_top__DOT__dut__DOT__dma__DOT__act_lane__95__Vfuncout) 
              << 0xcU));
    vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__preload_state_d 
        = ((IData)(vlSelf->tb_tpu_top__DOT__rst_n) 
           && (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__preload_state));
    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__clr_b = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__buff_b_full 
        = (0x10U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__curr_count));
    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__buff_b_empty 
        = (0U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__curr_count));
    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__clr_a = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__buff_a_full 
        = (0x10U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__curr_count));
    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__buff_a_empty 
        = (0U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__curr_count));
    vlSelf->tb_tpu_top__DOT__dut__DOT__tile_clr = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__func_clr = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__prefill_en = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__prefill_clr = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__preload_clr = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__compute_clr = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__preload_en = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__compute_en = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__drain_en = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__fifo_we = 0U;
    tb_tpu_top__DOT__dut__DOT__compute_state = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__drain_clr = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__func_en = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_right_out[0U] 
        = (IData)((((QData)((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_0_3__right_out)) 
                    << 0x30U) | (((QData)((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_0_2__right_out)) 
                                  << 0x20U) | (QData)((IData)(
                                                              (((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_0_1__right_out) 
                                                                << 0x10U) 
                                                               | (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_0_0__right_out)))))));
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_right_out[1U] 
        = (IData)(((((QData)((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_0_3__right_out)) 
                     << 0x30U) | (((QData)((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_0_2__right_out)) 
                                   << 0x20U) | (QData)((IData)(
                                                               (((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_0_1__right_out) 
                                                                 << 0x10U) 
                                                                | (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_0_0__right_out)))))) 
                   >> 0x20U));
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_right_out[2U] 
        = (((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_1_1__right_out) 
            << 0x10U) | (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_1_0__right_out));
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_right_out[3U] 
        = (((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_1_3__right_out) 
            << 0x10U) | (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_1_2__right_out));
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_right_out[4U] 
        = (((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_2_1__right_out) 
            << 0x10U) | (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_2_0__right_out));
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_right_out[5U] 
        = (((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_2_3__right_out) 
            << 0x10U) | (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_2_2__right_out));
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_right_out[6U] 
        = (((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_3_1__right_out) 
            << 0x10U) | (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_3_0__right_out));
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_right_out[7U] 
        = (((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_3_3__right_out) 
            << 0x10U) | (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_3_2__right_out));
    if ((0U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__count))) {
        vlSelf->tb_tpu_top__DOT__dut__DOT__weight_data_out 
            = vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q
            [vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__getPtr];
    }
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[0U] 
        = ((vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_0_1__down_out 
            << 0x10U) | (0xffffU & vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_0_0__down_out));
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[1U] 
        = ((0xffffU & vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_0_2__down_out) 
           | (vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_0_3__down_out 
              << 0x10U));
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[2U] 
        = ((0xffffU & vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_1_0__down_out) 
           | (vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_1_1__down_out 
              << 0x10U));
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[3U] 
        = ((0xffffU & vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_1_2__down_out) 
           | (vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_1_3__down_out 
              << 0x10U));
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[4U] 
        = ((0xffffU & vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_2_0__down_out) 
           | (vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_2_1__down_out 
              << 0x10U));
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[5U] 
        = ((0xffffU & vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_2_2__down_out) 
           | ((IData)((((QData)((IData)(((vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_3_2__down_out 
                                          << 0x10U) 
                                         | (0xffffU 
                                            & vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_3_1__down_out)))) 
                        << 0x20U) | (QData)((IData)(
                                                    ((vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_3_0__down_out 
                                                      << 0x10U) 
                                                     | (0xffffU 
                                                        & vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_2_3__down_out)))))) 
              << 0x10U));
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[6U] 
        = (((IData)((((QData)((IData)(((vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_3_2__down_out 
                                        << 0x10U) | 
                                       (0xffffU & vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_3_1__down_out)))) 
                      << 0x20U) | (QData)((IData)((
                                                   (vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_3_0__down_out 
                                                    << 0x10U) 
                                                   | (0xffffU 
                                                      & vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_2_3__down_out)))))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(
                                                    ((vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_3_2__down_out 
                                                      << 0x10U) 
                                                     | (0xffffU 
                                                        & vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_3_1__down_out)))) 
                                    << 0x20U) | (QData)((IData)(
                                                                ((vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_3_0__down_out 
                                                                  << 0x10U) 
                                                                 | (0xffffU 
                                                                    & vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_2_3__down_out))))) 
                                  >> 0x20U)) << 0x10U));
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[7U] 
        = ((vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_3_3__down_out 
            << 0x10U) | ((IData)(((((QData)((IData)(
                                                    ((vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_3_2__down_out 
                                                      << 0x10U) 
                                                     | (0xffffU 
                                                        & vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_3_1__down_out)))) 
                                    << 0x20U) | (QData)((IData)(
                                                                ((vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_3_0__down_out 
                                                                  << 0x10U) 
                                                                 | (0xffffU 
                                                                    & vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_2_3__down_out))))) 
                                  >> 0x20U)) >> 0x10U));
    vlSelf->tb_tpu_top__DOT__dut__DOT__tile_done = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__preload_state = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__relu_out_valid 
        = ((IData)(vlSelf->tb_tpu_top__DOT__rst_n) 
           && ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__drain_state) 
               & ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__drain_state) 
                  | (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__accum_state))));
    vlSelf->__VdfgTmp_hfccefdc9__0[0U] = (IData)((((QData)((IData)(
                                                                   (vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[6U] 
                                                                    >> 0x10U))) 
                                                   << 0x21U) 
                                                  | (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[6U])))));
    vlSelf->__VdfgTmp_hfccefdc9__0[1U] = (IData)(((
                                                   ((QData)((IData)(
                                                                    (vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[6U] 
                                                                     >> 0x10U))) 
                                                    << 0x21U) 
                                                   | (QData)((IData)(
                                                                     (0xffffU 
                                                                      & vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[6U])))) 
                                                  >> 0x20U));
    vlSelf->__VdfgTmp_hfccefdc9__0[2U] = (0x3fffcU 
                                          & (vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[7U] 
                                             << 2U));
    vlSelf->__VdfgTmp_hfccefdc9__0[3U] = (0x7fff8U 
                                          & (vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out[7U] 
                                             >> 0xdU));
    if ((0U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state))) {
        if ((1U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state))) {
            if ((2U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state))) {
                if ((3U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state))) {
                    if ((4U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state))) {
                        if ((5U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state))) {
                            if ((6U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state))) {
                                vlSelf->tb_tpu_top__DOT__dut__DOT__tile_clr = 1U;
                            }
                        }
                        if ((5U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state))) {
                            if ((1U & (~ (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT____VdfgExtracted_hf6a6c9db__0)))) {
                                if ((1U & (~ (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT____VdfgExtracted_h621a341a__0)))) {
                                    vlSelf->tb_tpu_top__DOT__dut__DOT__drain_clr = 1U;
                                    vlSelf->tb_tpu_top__DOT__dut__DOT__func_en = 1U;
                                }
                            }
                        }
                    }
                    if ((4U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state))) {
                        if ((4U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__drain_count))) {
                            vlSelf->tb_tpu_top__DOT__dut__DOT__compute_clr = 1U;
                            vlSelf->tb_tpu_top__DOT__dut__DOT__drain_en = 1U;
                        }
                    }
                }
                if ((3U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state))) {
                    if ((7U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__compute_count))) {
                        vlSelf->tb_tpu_top__DOT__dut__DOT__preload_clr = 1U;
                        vlSelf->tb_tpu_top__DOT__dut__DOT__compute_en = 1U;
                    }
                    tb_tpu_top__DOT__dut__DOT__compute_state = 1U;
                    if ((7U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__compute_count))) {
                        vlSelf->tb_tpu_top__DOT__dut__DOT__tile_done = 1U;
                    }
                }
            }
            if ((2U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state))) {
                if ((8U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__preload_count))) {
                    vlSelf->tb_tpu_top__DOT__dut__DOT__func_clr = 1U;
                    vlSelf->tb_tpu_top__DOT__dut__DOT__prefill_clr = 1U;
                    vlSelf->tb_tpu_top__DOT__dut__DOT__preload_en = 1U;
                }
            }
        }
        if ((1U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state))) {
            if ((0x10U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__prefill_count))) {
                vlSelf->tb_tpu_top__DOT__dut__DOT__prefill_en = 1U;
            }
        }
    }
    __Vtableidx1 = (((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_done) 
                     << 6U) | (((IData)(tb_tpu_top__DOT__dut__DOT__compute_state) 
                                << 5U) | (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__e_fsm_1__DOT__current_state)));
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__e_fsm_1__DOT__next_state 
        = Vtb_tpu_top__ConstPool__TABLE_h73872590_0
        [__Vtableidx1];
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__h_en_3 
        = Vtb_tpu_top__ConstPool__TABLE_h95214b9c_0
        [__Vtableidx1];
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__h_en_2 
        = Vtb_tpu_top__ConstPool__TABLE_he5d58018_0
        [__Vtableidx1];
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__h_en_1 
        = Vtb_tpu_top__ConstPool__TABLE_h26d33955_0
        [__Vtableidx1];
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__h_en_0 
        = Vtb_tpu_top__ConstPool__TABLE_hfc07e341_0
        [__Vtableidx1];
    __Vtableidx2 = (((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_done) 
                     << 6U) | (((IData)(tb_tpu_top__DOT__dut__DOT__compute_state) 
                                << 5U) | (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__v_fsm_1__DOT__current_state)));
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__v_fsm_1__DOT__next_state 
        = Vtb_tpu_top__ConstPool__TABLE_h73872590_0
        [__Vtableidx2];
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__v_en_3 
        = Vtb_tpu_top__ConstPool__TABLE_h95214b9c_0
        [__Vtableidx2];
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__v_en_2 
        = Vtb_tpu_top__ConstPool__TABLE_h25f53c5b_0
        [__Vtableidx2];
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__v_en_1 
        = Vtb_tpu_top__ConstPool__TABLE_hb598fdfd_0
        [__Vtableidx2];
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__v_en_0 
        = Vtb_tpu_top__ConstPool__TABLE_h2fe71d6b_0
        [__Vtableidx2];
    vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__fifo_re = 0U;
    if ((0U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__current_state))) {
        if ((1U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__current_state))) {
            if (((4U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__count)) 
                 & (1U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state)))) {
                vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__fifo_we = 1U;
            }
        }
    }
    if ((0U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state))) {
        if ((1U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state))) {
            if ((2U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state))) {
                vlSelf->tb_tpu_top__DOT__dut__DOT__preload_state = 1U;
            }
        }
    }
    if ((0U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__current_state))) {
        if ((1U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__current_state))) {
            if ((2U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__current_state))) {
                if (((0U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__count)) 
                     & (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__preload_state))) {
                    vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__fifo_re = 1U;
                }
            }
        }
    }
    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__we_a = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__we_b = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__next_state 
        = vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__current_state;
    if ((0U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__current_state))) {
        vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__next_state 
            = (((1U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state)) 
                | (8U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count)))
                ? 1U : 0U);
    } else if ((1U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__current_state))) {
        vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__next_state 
            = (((4U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__count)) 
                & (1U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state)))
                ? 1U : 2U);
    } else if ((2U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__current_state))) {
        vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__next_state 
            = (((0U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__count)) 
                & (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__preload_state))
                ? 2U : 0U);
    }
    tb_tpu_top__DOT__dut__DOT__a_buff__DOT__first_pass_a = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__accum_state = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__drain_state = 0U;
    if ((0U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state))) {
        if ((1U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state))) {
            if ((2U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state))) {
                if ((3U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state))) {
                    if ((4U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state))) {
                        if ((5U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state))) {
                            vlSelf->tb_tpu_top__DOT__dut__DOT__accum_state = 1U;
                        }
                    }
                    if ((4U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state))) {
                        vlSelf->tb_tpu_top__DOT__dut__DOT__drain_state = 1U;
                    }
                }
            }
        }
    }
    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__re_a = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__re_b = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__B__DOT__next_state 
        = vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__B__DOT__current_state;
    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__buff_b_active = 0U;
    if (((((((((0U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__B__DOT__current_state)) 
               | (1U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__B__DOT__current_state))) 
              | (2U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__B__DOT__current_state))) 
             | (3U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__B__DOT__current_state))) 
            | (4U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__B__DOT__current_state))) 
           | (5U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__B__DOT__current_state))) 
          | (6U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__B__DOT__current_state))) 
         | (7U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__B__DOT__current_state)))) {
        if ((0U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__B__DOT__current_state))) {
            if ((1U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__B__DOT__current_state))) {
                if ((2U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__B__DOT__current_state))) {
                    if ((3U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__B__DOT__current_state))) {
                        if ((4U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__B__DOT__current_state))) {
                            if ((5U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__B__DOT__current_state))) {
                                if ((6U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__B__DOT__current_state))) {
                                    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__clr_b = 1U;
                                }
                            }
                        }
                    }
                    if ((3U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__B__DOT__current_state))) {
                        if ((((0U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__curr_count)) 
                              & ((IData)(tb_tpu_top__DOT__dut__DOT__compute_state) 
                                 | (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__drain_state))) 
                             & (~ (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__B__DOT__o_bank_reg)))) {
                            vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__re_b = 1U;
                        }
                    }
                }
            }
        }
        if ((0U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__B__DOT__current_state))) {
            if ((1U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state))) {
                vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__we_b = 1U;
                vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__B__DOT__next_state = 4U;
            } else {
                vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__B__DOT__next_state = 0U;
            }
        } else if ((1U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__B__DOT__current_state))) {
            if ((0x10U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__curr_count))) {
                vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__we_b = 1U;
            }
            vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__B__DOT__next_state 
                = ((0x10U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__curr_count))
                    ? 2U : 1U);
        } else if ((2U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__B__DOT__current_state))) {
            if ((1U & (~ (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__preload_state)))) {
                vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__we_b = 1U;
            }
            vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__B__DOT__next_state 
                = ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__preload_state)
                    ? 3U : 2U);
        } else {
            if ((3U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__B__DOT__current_state))) {
                if ((4U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__B__DOT__current_state))) {
                    if ((5U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__B__DOT__current_state))) {
                        vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__we_b = 1U;
                    }
                }
            }
            if ((3U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__B__DOT__current_state))) {
                if ((((0U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__curr_count)) 
                      & ((IData)(tb_tpu_top__DOT__dut__DOT__compute_state) 
                         | (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__drain_state))) 
                     & (~ (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__B__DOT__o_bank_reg)))) {
                    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__B__DOT__next_state = 3U;
                    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__buff_b_active = 1U;
                } else if ((((8U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count)) 
                             & (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__B__DOT__o_bank_reg)) 
                            & (~ (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__buff_b_active)))) {
                    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__B__DOT__next_state = 5U;
                } else if ((8U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count))) {
                    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__B__DOT__next_state = 7U;
                }
            } else if ((4U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__B__DOT__current_state))) {
                vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__B__DOT__next_state 
                    = ((IData)(tb_tpu_top__DOT__dut__DOT__compute_state)
                        ? 5U : 4U);
            } else if ((5U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__B__DOT__current_state))) {
                if ((((IData)(tb_tpu_top__DOT__dut__DOT__compute_state) 
                      | (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__drain_state)) 
                     & (0x10U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__curr_count)))) {
                    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__B__DOT__next_state = 6U;
                    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__buff_b_active = 1U;
                } else if ((0x10U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__curr_count))) {
                    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__B__DOT__next_state = 5U;
                }
            } else if ((6U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__B__DOT__current_state))) {
                vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__B__DOT__next_state = 3U;
                vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__buff_b_active = 1U;
            } else {
                vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__B__DOT__next_state = 0U;
            }
        }
    }
    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__A__DOT__next_state 
        = vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__A__DOT__current_state;
    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__buff_a_active = 0U;
    if (((((((((0U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__A__DOT__current_state)) 
               | (1U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__A__DOT__current_state))) 
              | (2U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__A__DOT__current_state))) 
             | (3U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__A__DOT__current_state))) 
            | (4U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__A__DOT__current_state))) 
           | (5U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__A__DOT__current_state))) 
          | (6U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__A__DOT__current_state))) 
         | (7U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__A__DOT__current_state)))) {
        if ((0U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__A__DOT__current_state))) {
            if ((1U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__A__DOT__current_state))) {
                if ((2U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__A__DOT__current_state))) {
                    if ((3U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__A__DOT__current_state))) {
                        if ((4U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__A__DOT__current_state))) {
                            if ((5U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__A__DOT__current_state))) {
                                if ((6U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__A__DOT__current_state))) {
                                    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__clr_a = 1U;
                                }
                            }
                        }
                    }
                    if ((3U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__A__DOT__current_state))) {
                        if ((((0U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__curr_count)) 
                              & ((IData)(tb_tpu_top__DOT__dut__DOT__compute_state) 
                                 | (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__drain_state))) 
                             & (~ (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__A__DOT__o_bank_reg)))) {
                            vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__re_a = 1U;
                        }
                    }
                }
            }
        }
        if ((0U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__A__DOT__current_state))) {
            if ((1U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state))) {
                vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__we_a = 1U;
                tb_tpu_top__DOT__dut__DOT__a_buff__DOT__first_pass_a = 1U;
                vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__A__DOT__next_state = 1U;
            } else {
                vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__A__DOT__next_state = 0U;
            }
        } else if ((1U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__A__DOT__current_state))) {
            if ((0x10U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__curr_count))) {
                vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__we_a = 1U;
                tb_tpu_top__DOT__dut__DOT__a_buff__DOT__first_pass_a = 1U;
            }
            vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__A__DOT__next_state 
                = ((0x10U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__curr_count))
                    ? 2U : 1U);
        } else if ((2U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__A__DOT__current_state))) {
            if ((1U & (~ (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__preload_state)))) {
                vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__we_a = 1U;
                tb_tpu_top__DOT__dut__DOT__a_buff__DOT__first_pass_a = 1U;
            }
            vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__A__DOT__next_state 
                = ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__preload_state)
                    ? 3U : 2U);
        } else {
            if ((3U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__A__DOT__current_state))) {
                if ((4U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__A__DOT__current_state))) {
                    if ((5U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__A__DOT__current_state))) {
                        vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__we_a = 1U;
                    }
                }
            }
            if ((3U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__A__DOT__current_state))) {
                if ((((0U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__curr_count)) 
                      & ((IData)(tb_tpu_top__DOT__dut__DOT__compute_state) 
                         | (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__drain_state))) 
                     & (~ (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__A__DOT__o_bank_reg)))) {
                    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__A__DOT__next_state = 3U;
                    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__buff_a_active = 1U;
                } else if ((((8U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count)) 
                             & (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__A__DOT__o_bank_reg)) 
                            & (~ (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__buff_a_active)))) {
                    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__A__DOT__next_state = 5U;
                } else if ((8U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count))) {
                    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__A__DOT__next_state = 7U;
                }
            } else if ((4U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__A__DOT__current_state))) {
                vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__A__DOT__next_state 
                    = ((IData)(tb_tpu_top__DOT__dut__DOT__compute_state)
                        ? 5U : 4U);
            } else if ((5U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__A__DOT__current_state))) {
                if ((((IData)(tb_tpu_top__DOT__dut__DOT__compute_state) 
                      | (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__drain_state)) 
                     & (0x10U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__curr_count)))) {
                    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__A__DOT__next_state = 6U;
                    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__buff_a_active = 1U;
                } else if ((0x10U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__curr_count))) {
                    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__A__DOT__next_state = 5U;
                }
            } else if ((6U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__A__DOT__current_state))) {
                vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__A__DOT__next_state = 3U;
                vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__buff_a_active = 1U;
            } else {
                vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__A__DOT__next_state = 0U;
            }
        }
    }
    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__we_valid_b = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__write_in_b[0U] = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__write_in_b[1U] = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__write_in_b[2U] = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__write_in_b[3U] = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__we_valid_a = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__write_in_a[0U] = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__write_in_a[1U] = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__write_in_a[2U] = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__write_in_a[3U] = 0U;
    if (tb_tpu_top__DOT__dut__DOT__a_buff__DOT__first_pass_a) {
        vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__we_valid_a = 1U;
    }
    if ((1U & (~ (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__buff_a_active)))) {
        if (vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__buff_b_active) {
            vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__we_valid_a = 1U;
        }
    }
    if (tb_tpu_top__DOT__dut__DOT__a_buff__DOT__first_pass_a) {
        vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__write_in_a[0U] 
            = vlSelf->tb_tpu_top__DOT__dut__DOT__activation_bank_out[0U];
        vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__write_in_a[1U] 
            = vlSelf->tb_tpu_top__DOT__dut__DOT__activation_bank_out[1U];
        vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__write_in_a[2U] 
            = vlSelf->tb_tpu_top__DOT__dut__DOT__activation_bank_out[2U];
        vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__write_in_a[3U] 
            = vlSelf->tb_tpu_top__DOT__dut__DOT__activation_bank_out[3U];
    }
    if ((1U & (~ (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__buff_a_active)))) {
        if (vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__buff_b_active) {
            vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__write_in_a[0U] 
                = vlSelf->tb_tpu_top__DOT__dut__DOT__activation_bank_out[0U];
            vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__write_in_a[1U] 
                = vlSelf->tb_tpu_top__DOT__dut__DOT__activation_bank_out[1U];
            vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__write_in_a[2U] 
                = vlSelf->tb_tpu_top__DOT__dut__DOT__activation_bank_out[2U];
            vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__write_in_a[3U] 
                = vlSelf->tb_tpu_top__DOT__dut__DOT__activation_bank_out[3U];
        }
    }
    vlSelf->tb_tpu_top__DOT__dut__DOT__systolic_act_in_valid = 0U;
    if (tb_tpu_top__DOT__dut__DOT__a_buff__DOT__first_pass_a) {
        vlSelf->tb_tpu_top__DOT__dut__DOT____Vcellout__a_buff__output_buff[0U] = 0U;
        vlSelf->tb_tpu_top__DOT__dut__DOT____Vcellout__a_buff__output_buff[1U] = 0U;
        vlSelf->tb_tpu_top__DOT__dut__DOT____Vcellout__a_buff__output_buff[2U] = 0U;
        vlSelf->tb_tpu_top__DOT__dut__DOT____Vcellout__a_buff__output_buff[3U] = 0U;
        if (vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__re_valid_a) {
            vlSelf->tb_tpu_top__DOT__dut__DOT__systolic_act_in_valid = 0U;
            vlSelf->tb_tpu_top__DOT__dut__DOT____Vcellout__a_buff__output_buff[0U] = 0U;
            vlSelf->tb_tpu_top__DOT__dut__DOT____Vcellout__a_buff__output_buff[1U] = 0U;
            vlSelf->tb_tpu_top__DOT__dut__DOT____Vcellout__a_buff__output_buff[2U] = 0U;
            vlSelf->tb_tpu_top__DOT__dut__DOT____Vcellout__a_buff__output_buff[3U] = 0U;
        }
    } else {
        vlSelf->tb_tpu_top__DOT__dut__DOT____Vcellout__a_buff__output_buff[0U] = 0U;
        vlSelf->tb_tpu_top__DOT__dut__DOT____Vcellout__a_buff__output_buff[1U] = 0U;
        vlSelf->tb_tpu_top__DOT__dut__DOT____Vcellout__a_buff__output_buff[2U] = 0U;
        vlSelf->tb_tpu_top__DOT__dut__DOT____Vcellout__a_buff__output_buff[3U] = 0U;
    }
    if (vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__buff_a_active) {
        vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__we_valid_b = 1U;
        vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__write_in_b[0U] 
            = vlSelf->tb_tpu_top__DOT__dut__DOT__activation_bank_out[0U];
        vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__write_in_b[1U] 
            = vlSelf->tb_tpu_top__DOT__dut__DOT__activation_bank_out[1U];
        vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__write_in_b[2U] 
            = vlSelf->tb_tpu_top__DOT__dut__DOT__activation_bank_out[2U];
        vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__write_in_b[3U] 
            = vlSelf->tb_tpu_top__DOT__dut__DOT__activation_bank_out[3U];
        if (vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__re_valid_a) {
            vlSelf->tb_tpu_top__DOT__dut__DOT__systolic_act_in_valid 
                = vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__re_valid_a;
            vlSelf->tb_tpu_top__DOT__dut__DOT____Vcellout__a_buff__output_buff[0U] 
                = vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__re_out_a[0U];
            vlSelf->tb_tpu_top__DOT__dut__DOT____Vcellout__a_buff__output_buff[1U] 
                = vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__re_out_a[1U];
            vlSelf->tb_tpu_top__DOT__dut__DOT____Vcellout__a_buff__output_buff[2U] 
                = vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__re_out_a[2U];
            vlSelf->tb_tpu_top__DOT__dut__DOT____Vcellout__a_buff__output_buff[3U] 
                = vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__re_out_a[3U];
        }
    } else if (vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__buff_b_active) {
        if (vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__re_valid_b) {
            vlSelf->tb_tpu_top__DOT__dut__DOT__systolic_act_in_valid 
                = vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__re_valid_b;
            vlSelf->tb_tpu_top__DOT__dut__DOT____Vcellout__a_buff__output_buff[0U] 
                = vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__re_out_b[0U];
            vlSelf->tb_tpu_top__DOT__dut__DOT____Vcellout__a_buff__output_buff[1U] 
                = vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__re_out_b[1U];
            vlSelf->tb_tpu_top__DOT__dut__DOT____Vcellout__a_buff__output_buff[2U] 
                = vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__re_out_b[2U];
            vlSelf->tb_tpu_top__DOT__dut__DOT____Vcellout__a_buff__output_buff[3U] 
                = vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__re_out_b[3U];
        }
    }
}

void Vtb_tpu_top___024root___eval_nba(Vtb_tpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_tpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tpu_top___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_tpu_top___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_tpu_top___024root___act_comb__TOP__0(vlSelf);
    }
}

void Vtb_tpu_top___024root___timing_resume(Vtb_tpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_tpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tpu_top___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hee1e3e53__0.resume("@(posedge tb_tpu_top.clk)");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_tpu_top___024root___timing_commit(Vtb_tpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_tpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tpu_top___024root___timing_commit\n"); );
    // Body
    if ((! (2ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hee1e3e53__0.commit("@(posedge tb_tpu_top.clk)");
    }
}

void Vtb_tpu_top___024root___eval_triggers__act(Vtb_tpu_top___024root* vlSelf);

bool Vtb_tpu_top___024root___eval_phase__act(Vtb_tpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_tpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tpu_top___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_tpu_top___024root___eval_triggers__act(vlSelf);
    Vtb_tpu_top___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_tpu_top___024root___timing_resume(vlSelf);
        Vtb_tpu_top___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_tpu_top___024root___eval_phase__nba(Vtb_tpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_tpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tpu_top___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_tpu_top___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_tpu_top___024root___dump_triggers__nba(Vtb_tpu_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_tpu_top___024root___dump_triggers__act(Vtb_tpu_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_tpu_top___024root___eval(Vtb_tpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_tpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tpu_top___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_tpu_top___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/tb_tpu_top.sv", 22, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_tpu_top___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/tb_tpu_top.sv", 22, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_tpu_top___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_tpu_top___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_tpu_top___024root___eval_debug_assertions(Vtb_tpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_tpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tpu_top___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
