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

VlCoroutine Vtb_tpu_top___024root___eval_initial__TOP__Vtiming__0__0(Vtb_tpu_top___024root* vlSelf);
VlCoroutine Vtb_tpu_top___024root___eval_initial__TOP__Vtiming__0__1(Vtb_tpu_top___024root* vlSelf);

VL_INLINE_OPT VlCoroutine Vtb_tpu_top___024root___eval_initial__TOP__Vtiming__0(Vtb_tpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_tpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tpu_top___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    co_await Vtb_tpu_top___024root___eval_initial__TOP__Vtiming__0__0(vlSelf);
    co_await Vtb_tpu_top___024root___eval_initial__TOP__Vtiming__0__1(vlSelf);
}

VlCoroutine Vtb_tpu_top___024root___eval_initial__TOP__Vtiming__0__0(Vtb_tpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_tpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tpu_top___024root___eval_initial__TOP__Vtiming__0__0\n"); );
    // Init
    IData/*31:0*/ tb_tpu_top__DOT____Vrepeat0;
    tb_tpu_top__DOT____Vrepeat0 = 0;
    IData/*31:0*/ tb_tpu_top__DOT____Vrepeat3;
    tb_tpu_top__DOT____Vrepeat3 = 0;
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
    std::string __Vtask_tb_tpu_top__DOT__check__13__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__13__cond;
    __Vtask_tb_tpu_top__DOT__check__13__cond = 0;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__load_weights_via_opcode__14__check_plumbing;
    __Vtask_tb_tpu_top__DOT__load_weights_via_opcode__14__check_plumbing = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__16__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__16__cond;
    __Vtask_tb_tpu_top__DOT__check__16__cond = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__18__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__18__cond;
    __Vtask_tb_tpu_top__DOT__check__18__cond = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__20__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__20__cond;
    __Vtask_tb_tpu_top__DOT__check__20__cond = 0;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__load_bias_via_opcode__21__check_plumbing;
    __Vtask_tb_tpu_top__DOT__load_bias_via_opcode__21__check_plumbing = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__23__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__23__cond;
    __Vtask_tb_tpu_top__DOT__check__23__cond = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__25__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__25__cond;
    __Vtask_tb_tpu_top__DOT__check__25__cond = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__27__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__27__cond;
    __Vtask_tb_tpu_top__DOT__check__27__cond = 0;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__load_activations_via_opcode__28__check_plumbing;
    __Vtask_tb_tpu_top__DOT__load_activations_via_opcode__28__check_plumbing = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__30__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__30__cond;
    __Vtask_tb_tpu_top__DOT__check__30__cond = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__32__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__32__cond;
    __Vtask_tb_tpu_top__DOT__check__32__cond = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__34__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__34__cond;
    __Vtask_tb_tpu_top__DOT__check__34__cond = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__35__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__35__cond;
    __Vtask_tb_tpu_top__DOT__check__35__cond = 0;
    CData/*7:0*/ __Vtask_tb_tpu_top__DOT__pulse_opcode__36__opcode;
    __Vtask_tb_tpu_top__DOT__pulse_opcode__36__opcode = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__39__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__39__cond;
    __Vtask_tb_tpu_top__DOT__check__39__cond = 0;
    CData/*4:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__40__target;
    __Vtask_tb_tpu_top__DOT__wait_for_state__40__target = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__40__max_cycles;
    __Vtask_tb_tpu_top__DOT__wait_for_state__40__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__40__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__40__cycles_taken = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__42__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__42__cond;
    __Vtask_tb_tpu_top__DOT__check__42__cond = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__43__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__43__cond;
    __Vtask_tb_tpu_top__DOT__check__43__cond = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__44__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__44__cond;
    __Vtask_tb_tpu_top__DOT__check__44__cond = 0;
    CData/*4:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__45__target;
    __Vtask_tb_tpu_top__DOT__wait_for_state__45__target = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__45__max_cycles;
    __Vtask_tb_tpu_top__DOT__wait_for_state__45__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__45__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__45__cycles_taken = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__47__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__47__cond;
    __Vtask_tb_tpu_top__DOT__check__47__cond = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__48__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__48__cond;
    __Vtask_tb_tpu_top__DOT__check__48__cond = 0;
    CData/*4:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__49__target;
    __Vtask_tb_tpu_top__DOT__wait_for_state__49__target = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__49__max_cycles;
    __Vtask_tb_tpu_top__DOT__wait_for_state__49__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__49__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__49__cycles_taken = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__51__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__51__cond;
    __Vtask_tb_tpu_top__DOT__check__51__cond = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__52__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__52__cond;
    __Vtask_tb_tpu_top__DOT__check__52__cond = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__53__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__53__cond;
    __Vtask_tb_tpu_top__DOT__check__53__cond = 0;
    CData/*4:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__54__target;
    __Vtask_tb_tpu_top__DOT__wait_for_state__54__target = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__54__max_cycles;
    __Vtask_tb_tpu_top__DOT__wait_for_state__54__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__54__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__54__cycles_taken = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__56__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__56__cond;
    __Vtask_tb_tpu_top__DOT__check__56__cond = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__57__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__57__cond;
    __Vtask_tb_tpu_top__DOT__check__57__cond = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__58__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__58__cond;
    __Vtask_tb_tpu_top__DOT__check__58__cond = 0;
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
    std::string __Vtask_tb_tpu_top__DOT__check__72__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__72__cond;
    __Vtask_tb_tpu_top__DOT__check__72__cond = 0;
    CData/*4:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__73__target;
    __Vtask_tb_tpu_top__DOT__wait_for_state__73__target = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__73__max_cycles;
    __Vtask_tb_tpu_top__DOT__wait_for_state__73__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__73__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__73__cycles_taken = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__75__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__75__cond;
    __Vtask_tb_tpu_top__DOT__check__75__cond = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__76__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__76__cond;
    __Vtask_tb_tpu_top__DOT__check__76__cond = 0;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__load_weights_via_opcode__78__check_plumbing;
    __Vtask_tb_tpu_top__DOT__load_weights_via_opcode__78__check_plumbing = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__80__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__80__cond;
    __Vtask_tb_tpu_top__DOT__check__80__cond = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__82__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__82__cond;
    __Vtask_tb_tpu_top__DOT__check__82__cond = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__84__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__84__cond;
    __Vtask_tb_tpu_top__DOT__check__84__cond = 0;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__load_bias_via_opcode__85__check_plumbing;
    __Vtask_tb_tpu_top__DOT__load_bias_via_opcode__85__check_plumbing = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__87__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__87__cond;
    __Vtask_tb_tpu_top__DOT__check__87__cond = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__89__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__89__cond;
    __Vtask_tb_tpu_top__DOT__check__89__cond = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__91__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__91__cond;
    __Vtask_tb_tpu_top__DOT__check__91__cond = 0;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__load_activations_via_opcode__92__check_plumbing;
    __Vtask_tb_tpu_top__DOT__load_activations_via_opcode__92__check_plumbing = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__94__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__94__cond;
    __Vtask_tb_tpu_top__DOT__check__94__cond = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__96__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__96__cond;
    __Vtask_tb_tpu_top__DOT__check__96__cond = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__98__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__98__cond;
    __Vtask_tb_tpu_top__DOT__check__98__cond = 0;
    CData/*7:0*/ __Vtask_tb_tpu_top__DOT__pulse_opcode__99__opcode;
    __Vtask_tb_tpu_top__DOT__pulse_opcode__99__opcode = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__102__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__102__cond;
    __Vtask_tb_tpu_top__DOT__check__102__cond = 0;
    CData/*4:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__103__target;
    __Vtask_tb_tpu_top__DOT__wait_for_state__103__target = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__103__max_cycles;
    __Vtask_tb_tpu_top__DOT__wait_for_state__103__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__103__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__103__cycles_taken = 0;
    CData/*4:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__105__target;
    __Vtask_tb_tpu_top__DOT__wait_for_state__105__target = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__105__max_cycles;
    __Vtask_tb_tpu_top__DOT__wait_for_state__105__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__105__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__105__cycles_taken = 0;
    CData/*4:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__107__target;
    __Vtask_tb_tpu_top__DOT__wait_for_state__107__target = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__107__max_cycles;
    __Vtask_tb_tpu_top__DOT__wait_for_state__107__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__107__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__107__cycles_taken = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__109__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__109__cond;
    __Vtask_tb_tpu_top__DOT__check__109__cond = 0;
    CData/*4:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__110__target;
    __Vtask_tb_tpu_top__DOT__wait_for_state__110__target = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__110__max_cycles;
    __Vtask_tb_tpu_top__DOT__wait_for_state__110__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__110__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__110__cycles_taken = 0;
    CData/*4:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__112__target;
    __Vtask_tb_tpu_top__DOT__wait_for_state__112__target = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__112__max_cycles;
    __Vtask_tb_tpu_top__DOT__wait_for_state__112__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__112__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__112__cycles_taken = 0;
    CData/*4:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__114__target;
    __Vtask_tb_tpu_top__DOT__wait_for_state__114__target = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__114__max_cycles;
    __Vtask_tb_tpu_top__DOT__wait_for_state__114__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__114__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__114__cycles_taken = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__116__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__116__cond;
    __Vtask_tb_tpu_top__DOT__check__116__cond = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__117__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__117__cond;
    __Vtask_tb_tpu_top__DOT__check__117__cond = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__run_group_test__118__n;
    __Vtask_tb_tpu_top__DOT__run_group_test__118__n = 0;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__load_weights_via_opcode__120__check_plumbing;
    __Vtask_tb_tpu_top__DOT__load_weights_via_opcode__120__check_plumbing = 0;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__load_bias_via_opcode__127__check_plumbing;
    __Vtask_tb_tpu_top__DOT__load_bias_via_opcode__127__check_plumbing = 0;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__load_activations_via_opcode__134__check_plumbing;
    __Vtask_tb_tpu_top__DOT__load_activations_via_opcode__134__check_plumbing = 0;
    CData/*7:0*/ __Vtask_tb_tpu_top__DOT__pulse_opcode__141__opcode;
    __Vtask_tb_tpu_top__DOT__pulse_opcode__141__opcode = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__144__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__144__cond;
    __Vtask_tb_tpu_top__DOT__check__144__cond = 0;
    CData/*4:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__145__target;
    __Vtask_tb_tpu_top__DOT__wait_for_state__145__target = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__145__max_cycles;
    __Vtask_tb_tpu_top__DOT__wait_for_state__145__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__145__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__145__cycles_taken = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__147__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__147__cond;
    __Vtask_tb_tpu_top__DOT__check__147__cond = 0;
    CData/*4:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__148__target;
    __Vtask_tb_tpu_top__DOT__wait_for_state__148__target = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__148__max_cycles;
    __Vtask_tb_tpu_top__DOT__wait_for_state__148__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__150__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__150__cond;
    __Vtask_tb_tpu_top__DOT__check__150__cond = 0;
    CData/*4:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__151__target;
    __Vtask_tb_tpu_top__DOT__wait_for_state__151__target = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__151__max_cycles;
    __Vtask_tb_tpu_top__DOT__wait_for_state__151__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__153__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__153__cond;
    __Vtask_tb_tpu_top__DOT__check__153__cond = 0;
    CData/*4:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__154__target;
    __Vtask_tb_tpu_top__DOT__wait_for_state__154__target = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__154__max_cycles;
    __Vtask_tb_tpu_top__DOT__wait_for_state__154__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__156__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__156__cond;
    __Vtask_tb_tpu_top__DOT__check__156__cond = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__159__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__159__cond;
    __Vtask_tb_tpu_top__DOT__check__159__cond = 0;
    CData/*4:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__160__target;
    __Vtask_tb_tpu_top__DOT__wait_for_state__160__target = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__160__max_cycles;
    __Vtask_tb_tpu_top__DOT__wait_for_state__160__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__160__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__160__cycles_taken = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__162__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__162__cond;
    __Vtask_tb_tpu_top__DOT__check__162__cond = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__163__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__163__cond;
    __Vtask_tb_tpu_top__DOT__check__163__cond = 0;
    // Body
    vlSelf->tb_tpu_top__DOT__rst_n = 0U;
    vlSelf->tb_tpu_top__DOT__uio_in = 0U;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       112);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       112);
    vlSelf->tb_tpu_top__DOT__rst_n = 1U;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       114);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       114);
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
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    tb_tpu_top__DOT__unnamedblk2__DOT__unnamedblk3__DOT__sampled_u_in 
        = vlSelf->tb_tpu_top__DOT__u_in;
    vlSelf->tb_tpu_top__DOT__uio_in = 0U;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
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
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
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
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
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
    tb_tpu_top__DOT____Vrepeat3 = 0x46U;
    while (VL_LTS_III(32, 0U, tb_tpu_top__DOT____Vrepeat3)) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        tb_tpu_top__DOT____Vrepeat3 = (tb_tpu_top__DOT____Vrepeat3 
                                       - (IData)(1U));
    }
    __Vtask_tb_tpu_top__DOT__check__13__cond = (0U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__r_fsm__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__13__name = std::string{"DMA's read FSM settled back to IDLE (result_buf was empty)"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__13__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__13__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__13__name));
    }
    VL_WRITEF("==== tpu_top: opcode decode + load (OP_LOAD_WEIGHTS / OP_LOAD_BIAS / OP_LOAD_ACTIVATIONS) ====\n");
    __Vtask_tb_tpu_top__DOT__load_weights_via_opcode__14__check_plumbing = 1U;
    vlSelf->tb_tpu_top__DOT__uio_in = 5U;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    if (__Vtask_tb_tpu_top__DOT__load_weights_via_opcode__14__check_plumbing) {
        __Vtask_tb_tpu_top__DOT__check__16__cond = vlSelf->tb_tpu_top__DOT__dut__DOT__weight_fsm_start;
        __Vtask_tb_tpu_top__DOT__check__16__name = 
            std::string{"OP_LOAD_WEIGHTS asserts weight_fsm_start"};
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (__Vtask_tb_tpu_top__DOT__check__16__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__16__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__16__name));
        }
    }
    vlSelf->tb_tpu_top__DOT__uio_in = 0U;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    if (__Vtask_tb_tpu_top__DOT__load_weights_via_opcode__14__check_plumbing) {
        __Vtask_tb_tpu_top__DOT__check__18__cond = 
            (1U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__bank));
        __Vtask_tb_tpu_top__DOT__check__18__name = 
            std::string{"OP_LOAD_WEIGHTS routes bank=1 (registered, settles one cycle later)"};
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (__Vtask_tb_tpu_top__DOT__check__18__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__18__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__18__name));
        }
    }
    tb_tpu_top__DOT____Vrepeat0 = 0x117U;
    while (VL_LTS_III(32, 0U, tb_tpu_top__DOT____Vrepeat0)) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        tb_tpu_top__DOT____Vrepeat0 = (tb_tpu_top__DOT____Vrepeat0 
                                       - (IData)(1U));
    }
    if (__Vtask_tb_tpu_top__DOT__load_weights_via_opcode__14__check_plumbing) {
        __Vtask_tb_tpu_top__DOT__check__20__cond = 
            (0U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__w_fsm__DOT__current_state));
        __Vtask_tb_tpu_top__DOT__check__20__name = 
            std::string{"weight FSM (inside DMA) finished loading and returned to IDLE"};
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (__Vtask_tb_tpu_top__DOT__check__20__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__20__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__20__name));
        }
    }
    __Vtask_tb_tpu_top__DOT__load_bias_via_opcode__21__check_plumbing = 1U;
    vlSelf->tb_tpu_top__DOT__uio_in = 7U;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    if (__Vtask_tb_tpu_top__DOT__load_bias_via_opcode__21__check_plumbing) {
        __Vtask_tb_tpu_top__DOT__check__23__cond = vlSelf->tb_tpu_top__DOT__dut__DOT__bias_fsm_start;
        __Vtask_tb_tpu_top__DOT__check__23__name = 
            std::string{"OP_LOAD_BIAS asserts bias_fsm_start"};
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (__Vtask_tb_tpu_top__DOT__check__23__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__23__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__23__name));
        }
    }
    vlSelf->tb_tpu_top__DOT__uio_in = 0U;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    if (__Vtask_tb_tpu_top__DOT__load_bias_via_opcode__21__check_plumbing) {
        __Vtask_tb_tpu_top__DOT__check__25__cond = 
            (2U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__bank));
        __Vtask_tb_tpu_top__DOT__check__25__name = 
            std::string{"OP_LOAD_BIAS routes bank=2 (DMA.sv's bias bank, registered)"};
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (__Vtask_tb_tpu_top__DOT__check__25__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__25__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__25__name));
        }
    }
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    if (__Vtask_tb_tpu_top__DOT__load_bias_via_opcode__21__check_plumbing) {
        __Vtask_tb_tpu_top__DOT__check__27__cond = 
            (0U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__b_fsm__DOT__current_state));
        __Vtask_tb_tpu_top__DOT__check__27__name = 
            std::string{"bias FSM (inside DMA) finished loading and returned to IDLE"};
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (__Vtask_tb_tpu_top__DOT__check__27__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__27__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__27__name));
        }
    }
    __Vtask_tb_tpu_top__DOT__load_activations_via_opcode__28__check_plumbing = 1U;
    vlSelf->tb_tpu_top__DOT__uio_in = 6U;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    if (__Vtask_tb_tpu_top__DOT__load_activations_via_opcode__28__check_plumbing) {
        __Vtask_tb_tpu_top__DOT__check__30__cond = vlSelf->tb_tpu_top__DOT__dut__DOT__activation_fsm_start;
        __Vtask_tb_tpu_top__DOT__check__30__name = 
            std::string{"OP_LOAD_ACTIVATIONS asserts activation_fsm_start"};
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (__Vtask_tb_tpu_top__DOT__check__30__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__30__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__30__name));
        }
    }
    vlSelf->tb_tpu_top__DOT__uio_in = 0U;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    if (__Vtask_tb_tpu_top__DOT__load_activations_via_opcode__28__check_plumbing) {
        __Vtask_tb_tpu_top__DOT__check__32__cond = 
            (3U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__bank));
        __Vtask_tb_tpu_top__DOT__check__32__name = 
            std::string{"OP_LOAD_ACTIVATIONS routes bank=3 (DMA.sv's activation bank, registered)"};
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (__Vtask_tb_tpu_top__DOT__check__32__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__32__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__32__name));
        }
    }
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    if (__Vtask_tb_tpu_top__DOT__load_activations_via_opcode__28__check_plumbing) {
        __Vtask_tb_tpu_top__DOT__check__34__cond = 
            (0U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__a_fsm__DOT__current_state));
        __Vtask_tb_tpu_top__DOT__check__34__name = 
            std::string{"activation FSM (inside DMA) finished loading and returned to IDLE"};
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (__Vtask_tb_tpu_top__DOT__check__34__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__34__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__34__name));
        }
    }
    __Vtask_tb_tpu_top__DOT__check__35__cond = (0U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__35__name = std::string{"FSM still IDLE after all three load opcodes"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__35__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__35__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__35__name));
    }
    VL_WRITEF("==== tpu_top: tile group 1 - PREFILL ====\n");
    __Vtask_tb_tpu_top__DOT__pulse_opcode__36__opcode = 1U;
    vlSelf->tb_tpu_top__DOT__uio_in = __Vtask_tb_tpu_top__DOT__pulse_opcode__36__opcode;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    vlSelf->tb_tpu_top__DOT__uio_in = 0U;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    __Vtask_tb_tpu_top__DOT__check__39__cond = (2U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__39__name = std::string{"start pulse moves IDLE -> PREFILL"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__39__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__39__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__39__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__40__max_cycles = 0x1eU;
    __Vtask_tb_tpu_top__DOT__wait_for_state__40__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__40__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__40__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__40__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__40__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__40__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__40__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__40__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__42__cond = (3U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__42__name = VL_SFORMATF_NX("reached PRELOAD within budget (took %0d cycles)",
                                                              32,
                                                              tb_tpu_top__DOT__unnamedblk2__DOT__n) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__42__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__42__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__42__name));
    }
    __Vtask_tb_tpu_top__DOT__check__43__cond = (0x10U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__prefill_count));
    __Vtask_tb_tpu_top__DOT__check__43__name = std::string{"PREFILL ran the full 16 cycles (prefill_count saturated)"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__43__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__43__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__43__name));
    }
    __Vtask_tb_tpu_top__DOT__check__44__cond = (0U 
                                                != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__count));
    __Vtask_tb_tpu_top__DOT__check__44__name = std::string{"weight_fifo received weight data during PREFILL (non-empty right as PRELOAD begins)"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__44__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__44__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__44__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__45__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__45__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__45__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__45__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__45__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__45__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__45__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__45__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__45__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__47__cond = (4U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__47__name = VL_SFORMATF_NX("reached COMPUTE within budget (took %0d cycles)",
                                                              32,
                                                              tb_tpu_top__DOT__unnamedblk2__DOT__n) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__47__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__47__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__47__name));
    }
    __Vtask_tb_tpu_top__DOT__check__48__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__48__name = std::string{"no X/Z in product_out entering COMPUTE"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__48__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__48__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__48__name));
    }
    VL_WRITEF("==== tpu_top: tile group 1 - COMPUTE -> DRAIN ====\n");
    __Vtask_tb_tpu_top__DOT__wait_for_state__49__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__49__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__49__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__49__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__49__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__49__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__49__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__49__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__49__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__51__cond = (5U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__51__name = VL_SFORMATF_NX("reached DRAIN within budget (took %0d cycles)",
                                                              32,
                                                              tb_tpu_top__DOT__unnamedblk2__DOT__n) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__51__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__51__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__51__name));
    }
    __Vtask_tb_tpu_top__DOT__check__52__cond = (7U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__compute_count));
    __Vtask_tb_tpu_top__DOT__check__52__name = std::string{"COMPUTE ran the full 7 cycles (compute_count saturated)"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__52__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__52__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__52__name));
    }
    __Vtask_tb_tpu_top__DOT__check__53__cond = (1U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__53__name = std::string{"tile_done pulsed on the COMPUTE->DRAIN edge (tile_count advanced to 1)"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__53__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__53__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__53__name));
    }
    VL_WRITEF("==== tpu_top: tile group 1 - DRAIN -> FUNCS ====\n");
    __Vtask_tb_tpu_top__DOT__wait_for_state__54__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__54__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__54__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__54__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__54__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__54__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__54__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__54__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__54__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__56__cond = (6U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__56__name = VL_SFORMATF_NX("reached FUNCS within budget (took %0d cycles)",
                                                              32,
                                                              tb_tpu_top__DOT__unnamedblk2__DOT__n) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__56__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__56__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__56__name));
    }
    __Vtask_tb_tpu_top__DOT__check__57__cond = (4U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__drain_count));
    __Vtask_tb_tpu_top__DOT__check__57__name = std::string{"DRAIN ran the full 4 cycles (drain_count saturated)"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__57__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__57__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__57__name));
    }
    __Vtask_tb_tpu_top__DOT__check__58__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__58__name = std::string{"no X/Z in requant_out during drain/funcs window"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__58__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__58__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__58__name));
    }
    VL_WRITEF("==== tpu_top: tile group 1 - FUNCS -> back to PRELOAD (tile 1 of 8, not yet tile_complete) ====\n");
    __Vtask_tb_tpu_top__DOT__wait_for_state__59__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__59__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__59__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__59__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__59__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__59__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__59__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__59__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__59__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__61__cond = (3U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__61__name = VL_SFORMATF_NX("FUNCS looped back to PRELOAD for tile 2/8 (took %0d cycles)",
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
    __Vtask_tb_tpu_top__DOT__check__62__cond = (3U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__funcs_count));
    __Vtask_tb_tpu_top__DOT__check__62__name = std::string{"FUNCS ran the full 3 cycles (funcs_count saturated)"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__62__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__62__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__62__name));
    }
    VL_WRITEF("==== tpu_top: running tiles 2-8 to reach tiles_complete ====\n");
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
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
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
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__65__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__65__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__65__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__67__cond = (2U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__67__name = std::string{"tile 2/8: tile_count advanced correctly"};
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
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
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
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__70__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__70__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__70__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__72__cond = (3U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__72__name = std::string{"tile 2/8: FUNCS looped back to PRELOAD"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__72__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__72__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__72__name));
    }
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
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
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
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__65__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__65__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__65__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__67__cond = (3U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__67__name = std::string{"tile 3/8: tile_count advanced correctly"};
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
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
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
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__70__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__70__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__70__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__72__cond = (3U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__72__name = std::string{"tile 3/8: FUNCS looped back to PRELOAD"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__72__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__72__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__72__name));
    }
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
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
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
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__65__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__65__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__65__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__67__cond = (4U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__67__name = std::string{"tile 4/8: tile_count advanced correctly"};
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
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
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
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__70__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__70__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__70__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__72__cond = (3U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__72__name = std::string{"tile 4/8: FUNCS looped back to PRELOAD"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__72__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__72__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__72__name));
    }
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
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
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
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__65__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__65__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__65__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__67__cond = (5U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__67__name = std::string{"tile 5/8: tile_count advanced correctly"};
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
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
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
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__70__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__70__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__70__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__72__cond = (3U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__72__name = std::string{"tile 5/8: FUNCS looped back to PRELOAD"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__72__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__72__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__72__name));
    }
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
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
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
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__65__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__65__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__65__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__67__cond = (6U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__67__name = std::string{"tile 6/8: tile_count advanced correctly"};
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
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
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
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__70__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__70__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__70__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__72__cond = (3U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__72__name = std::string{"tile 6/8: FUNCS looped back to PRELOAD"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__72__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__72__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__72__name));
    }
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
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
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
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__65__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__65__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__65__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__67__cond = (7U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__67__name = std::string{"tile 7/8: tile_count advanced correctly"};
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
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
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
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__70__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__70__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__70__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__72__cond = (3U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__72__name = std::string{"tile 7/8: FUNCS looped back to PRELOAD"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__72__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__72__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__72__name));
    }
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
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
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
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__65__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__65__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__65__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__67__cond = (8U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__67__name = std::string{"tile 8/8: tile_count advanced correctly"};
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
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__68__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__68__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__68__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__73__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__73__target = 0U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__73__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__73__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__73__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__73__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__73__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__73__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__73__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__75__cond = (0U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__75__name = VL_SFORMATF_NX("after 8 tiles: FUNCS saw tile_complete and returned to IDLE (took %0d cycles)",
                                                              32,
                                                              tb_tpu_top__DOT__unnamedblk2__DOT__n) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__75__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__75__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__75__name));
    }
    __Vtask_tb_tpu_top__DOT__check__76__cond = (0U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__76__name = std::string{"DONE's tile_clr reset tile_count back to 0 on the way to IDLE"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__76__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__76__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__76__name));
    }
    VL_WRITEF("==== tpu_top: tile group 2 (does a fresh 8-tile group actually complete?) ====\n");
    __Vtask_tb_tpu_top__DOT__load_weights_via_opcode__78__check_plumbing = 0U;
    vlSelf->tb_tpu_top__DOT__uio_in = 5U;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    if (__Vtask_tb_tpu_top__DOT__load_weights_via_opcode__78__check_plumbing) {
        __Vtask_tb_tpu_top__DOT__check__80__cond = vlSelf->tb_tpu_top__DOT__dut__DOT__weight_fsm_start;
        __Vtask_tb_tpu_top__DOT__check__80__name = 
            std::string{"OP_LOAD_WEIGHTS asserts weight_fsm_start"};
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (__Vtask_tb_tpu_top__DOT__check__80__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__80__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__80__name));
        }
    }
    vlSelf->tb_tpu_top__DOT__uio_in = 0U;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    if (__Vtask_tb_tpu_top__DOT__load_weights_via_opcode__78__check_plumbing) {
        __Vtask_tb_tpu_top__DOT__check__82__cond = 
            (1U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__bank));
        __Vtask_tb_tpu_top__DOT__check__82__name = 
            std::string{"OP_LOAD_WEIGHTS routes bank=1 (registered, settles one cycle later)"};
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (__Vtask_tb_tpu_top__DOT__check__82__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__82__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__82__name));
        }
    }
    tb_tpu_top__DOT____Vrepeat0 = 0x117U;
    while (VL_LTS_III(32, 0U, tb_tpu_top__DOT____Vrepeat0)) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        tb_tpu_top__DOT____Vrepeat0 = (tb_tpu_top__DOT____Vrepeat0 
                                       - (IData)(1U));
    }
    if (__Vtask_tb_tpu_top__DOT__load_weights_via_opcode__78__check_plumbing) {
        __Vtask_tb_tpu_top__DOT__check__84__cond = 
            (0U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__w_fsm__DOT__current_state));
        __Vtask_tb_tpu_top__DOT__check__84__name = 
            std::string{"weight FSM (inside DMA) finished loading and returned to IDLE"};
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (__Vtask_tb_tpu_top__DOT__check__84__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__84__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__84__name));
        }
    }
    __Vtask_tb_tpu_top__DOT__load_bias_via_opcode__85__check_plumbing = 0U;
    vlSelf->tb_tpu_top__DOT__uio_in = 7U;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    if (__Vtask_tb_tpu_top__DOT__load_bias_via_opcode__85__check_plumbing) {
        __Vtask_tb_tpu_top__DOT__check__87__cond = vlSelf->tb_tpu_top__DOT__dut__DOT__bias_fsm_start;
        __Vtask_tb_tpu_top__DOT__check__87__name = 
            std::string{"OP_LOAD_BIAS asserts bias_fsm_start"};
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (__Vtask_tb_tpu_top__DOT__check__87__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__87__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__87__name));
        }
    }
    vlSelf->tb_tpu_top__DOT__uio_in = 0U;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    if (__Vtask_tb_tpu_top__DOT__load_bias_via_opcode__85__check_plumbing) {
        __Vtask_tb_tpu_top__DOT__check__89__cond = 
            (2U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__bank));
        __Vtask_tb_tpu_top__DOT__check__89__name = 
            std::string{"OP_LOAD_BIAS routes bank=2 (DMA.sv's bias bank, registered)"};
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (__Vtask_tb_tpu_top__DOT__check__89__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__89__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__89__name));
        }
    }
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    if (__Vtask_tb_tpu_top__DOT__load_bias_via_opcode__85__check_plumbing) {
        __Vtask_tb_tpu_top__DOT__check__91__cond = 
            (0U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__b_fsm__DOT__current_state));
        __Vtask_tb_tpu_top__DOT__check__91__name = 
            std::string{"bias FSM (inside DMA) finished loading and returned to IDLE"};
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (__Vtask_tb_tpu_top__DOT__check__91__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__91__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__91__name));
        }
    }
    __Vtask_tb_tpu_top__DOT__load_activations_via_opcode__92__check_plumbing = 0U;
    vlSelf->tb_tpu_top__DOT__uio_in = 6U;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    if (__Vtask_tb_tpu_top__DOT__load_activations_via_opcode__92__check_plumbing) {
        __Vtask_tb_tpu_top__DOT__check__94__cond = vlSelf->tb_tpu_top__DOT__dut__DOT__activation_fsm_start;
        __Vtask_tb_tpu_top__DOT__check__94__name = 
            std::string{"OP_LOAD_ACTIVATIONS asserts activation_fsm_start"};
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (__Vtask_tb_tpu_top__DOT__check__94__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__94__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__94__name));
        }
    }
    vlSelf->tb_tpu_top__DOT__uio_in = 0U;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    if (__Vtask_tb_tpu_top__DOT__load_activations_via_opcode__92__check_plumbing) {
        __Vtask_tb_tpu_top__DOT__check__96__cond = 
            (3U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__bank));
        __Vtask_tb_tpu_top__DOT__check__96__name = 
            std::string{"OP_LOAD_ACTIVATIONS routes bank=3 (DMA.sv's activation bank, registered)"};
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (__Vtask_tb_tpu_top__DOT__check__96__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__96__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__96__name));
        }
    }
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    if (__Vtask_tb_tpu_top__DOT__load_activations_via_opcode__92__check_plumbing) {
        __Vtask_tb_tpu_top__DOT__check__98__cond = 
            (0U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__a_fsm__DOT__current_state));
        __Vtask_tb_tpu_top__DOT__check__98__name = 
            std::string{"activation FSM (inside DMA) finished loading and returned to IDLE"};
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (__Vtask_tb_tpu_top__DOT__check__98__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__98__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__98__name));
        }
    }
    __Vtask_tb_tpu_top__DOT__pulse_opcode__99__opcode = 1U;
    vlSelf->tb_tpu_top__DOT__uio_in = __Vtask_tb_tpu_top__DOT__pulse_opcode__99__opcode;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    vlSelf->tb_tpu_top__DOT__uio_in = 0U;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    __Vtask_tb_tpu_top__DOT__check__102__cond = (2U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__102__name = std::string{"group 2: start pulse moves IDLE -> PREFILL"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__102__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__102__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__102__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__103__max_cycles = 0x1eU;
    __Vtask_tb_tpu_top__DOT__wait_for_state__103__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__103__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__103__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__103__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__103__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__103__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__103__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__103__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__105__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__105__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__105__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__105__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__105__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__105__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__105__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__105__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__105__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__107__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__107__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__107__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__107__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__107__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__107__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__107__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__107__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__107__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__109__cond = (1U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__109__name = std::string{"group 2 tile 1: tile_count advanced correctly"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__109__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__109__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__109__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__110__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__110__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__110__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__110__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__110__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__110__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__110__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__110__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__110__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__112__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__112__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__112__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__112__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__112__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__112__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__112__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__112__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__112__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__105__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__105__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__105__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__105__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__105__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__105__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__105__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__105__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__105__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__107__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__107__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__107__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__107__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__107__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__107__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__107__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__107__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__107__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__109__cond = (2U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__109__name = std::string{"group 2 tile 2: tile_count advanced correctly"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__109__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__109__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__109__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__110__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__110__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__110__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__110__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__110__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__110__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__110__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__110__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__110__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__112__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__112__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__112__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__112__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__112__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__112__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__112__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__112__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__112__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__105__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__105__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__105__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__105__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__105__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__105__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__105__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__105__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__105__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__107__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__107__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__107__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__107__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__107__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__107__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__107__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__107__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__107__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__109__cond = (3U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__109__name = std::string{"group 2 tile 3: tile_count advanced correctly"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__109__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__109__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__109__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__110__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__110__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__110__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__110__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__110__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__110__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__110__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__110__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__110__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__112__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__112__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__112__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__112__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__112__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__112__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__112__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__112__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__112__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__105__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__105__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__105__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__105__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__105__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__105__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__105__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__105__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__105__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__107__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__107__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__107__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__107__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__107__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__107__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__107__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__107__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__107__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__109__cond = (4U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__109__name = std::string{"group 2 tile 4: tile_count advanced correctly"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__109__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__109__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__109__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__110__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__110__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__110__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__110__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__110__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__110__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__110__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__110__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__110__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__112__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__112__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__112__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__112__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__112__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__112__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__112__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__112__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__112__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__105__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__105__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__105__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__105__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__105__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__105__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__105__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__105__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__105__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__107__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__107__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__107__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__107__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__107__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__107__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__107__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__107__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__107__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__109__cond = (5U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__109__name = std::string{"group 2 tile 5: tile_count advanced correctly"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__109__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__109__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__109__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__110__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__110__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__110__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__110__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__110__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__110__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__110__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__110__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__110__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__112__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__112__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__112__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__112__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__112__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__112__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__112__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__112__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__112__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__105__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__105__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__105__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__105__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__105__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__105__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__105__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__105__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__105__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__107__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__107__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__107__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__107__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__107__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__107__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__107__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__107__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__107__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__109__cond = (6U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__109__name = std::string{"group 2 tile 6: tile_count advanced correctly"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__109__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__109__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__109__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__110__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__110__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__110__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__110__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__110__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__110__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__110__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__110__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__110__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__112__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__112__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__112__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__112__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__112__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__112__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__112__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__112__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__112__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__105__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__105__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__105__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__105__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__105__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__105__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__105__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__105__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__105__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__107__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__107__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__107__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__107__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__107__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__107__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__107__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__107__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__107__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__109__cond = (7U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__109__name = std::string{"group 2 tile 7: tile_count advanced correctly"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__109__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__109__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__109__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__110__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__110__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__110__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__110__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__110__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__110__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__110__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__110__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__110__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__112__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__112__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__112__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__112__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__112__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__112__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__112__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__112__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__112__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__105__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__105__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__105__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__105__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__105__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__105__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__105__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__105__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__105__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__107__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__107__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__107__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__107__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__107__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__107__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__107__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__107__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__107__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__109__cond = (8U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__109__name = std::string{"group 2 tile 8: tile_count advanced correctly"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__109__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__109__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__109__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__110__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__110__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__110__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__110__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__110__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__110__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__110__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__110__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__110__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__114__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__114__target = 0U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__114__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__114__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__114__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__114__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__114__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__114__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__114__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__116__cond = (0U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__116__name = VL_SFORMATF_NX("group 2 also reached tiles_complete and returned to IDLE (took %0d cycles)",
                                                               32,
                                                               tb_tpu_top__DOT__unnamedblk2__DOT__n) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__116__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__116__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__116__name));
    }
    __Vtask_tb_tpu_top__DOT__check__117__cond = (0U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__117__name = std::string{"group 2: tile_count cleared back to 0 again"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__117__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__117__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__117__name));
    }
    VL_WRITEF("==== tpu_top: 5 more back-to-back tile groups (control-path stress) ====\n");
    vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials = 5U;
    vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num = 1U;
    __Vtask_tb_tpu_top__DOT__load_weights_via_opcode__120__check_plumbing = 0U;
    vlSelf->tb_tpu_top__DOT__uio_in = 5U;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    if (__Vtask_tb_tpu_top__DOT__load_weights_via_opcode__120__check_plumbing) {
        vlSelf->__Vtask_tb_tpu_top__DOT__check__122__cond 
            = vlSelf->tb_tpu_top__DOT__dut__DOT__weight_fsm_start;
        vlSelf->__Vtask_tb_tpu_top__DOT__check__122__name = 
            std::string{"OP_LOAD_WEIGHTS asserts weight_fsm_start"};
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (vlSelf->__Vtask_tb_tpu_top__DOT__check__122__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__122__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__122__name));
        }
    }
    vlSelf->tb_tpu_top__DOT__uio_in = 0U;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    if (__Vtask_tb_tpu_top__DOT__load_weights_via_opcode__120__check_plumbing) {
        vlSelf->__Vtask_tb_tpu_top__DOT__check__124__cond 
            = (1U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__bank));
        vlSelf->__Vtask_tb_tpu_top__DOT__check__124__name = 
            std::string{"OP_LOAD_WEIGHTS routes bank=1 (registered, settles one cycle later)"};
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (vlSelf->__Vtask_tb_tpu_top__DOT__check__124__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__124__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__124__name));
        }
    }
    tb_tpu_top__DOT____Vrepeat0 = 0x117U;
    while (VL_LTS_III(32, 0U, tb_tpu_top__DOT____Vrepeat0)) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        tb_tpu_top__DOT____Vrepeat0 = (tb_tpu_top__DOT____Vrepeat0 
                                       - (IData)(1U));
    }
    if (__Vtask_tb_tpu_top__DOT__load_weights_via_opcode__120__check_plumbing) {
        vlSelf->__Vtask_tb_tpu_top__DOT__check__126__cond 
            = (0U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__w_fsm__DOT__current_state));
        vlSelf->__Vtask_tb_tpu_top__DOT__check__126__name = 
            std::string{"weight FSM (inside DMA) finished loading and returned to IDLE"};
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (vlSelf->__Vtask_tb_tpu_top__DOT__check__126__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__126__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__126__name));
        }
    }
    __Vtask_tb_tpu_top__DOT__load_bias_via_opcode__127__check_plumbing = 0U;
    vlSelf->tb_tpu_top__DOT__uio_in = 7U;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    if (__Vtask_tb_tpu_top__DOT__load_bias_via_opcode__127__check_plumbing) {
        vlSelf->__Vtask_tb_tpu_top__DOT__check__129__cond 
            = vlSelf->tb_tpu_top__DOT__dut__DOT__bias_fsm_start;
        vlSelf->__Vtask_tb_tpu_top__DOT__check__129__name = 
            std::string{"OP_LOAD_BIAS asserts bias_fsm_start"};
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (vlSelf->__Vtask_tb_tpu_top__DOT__check__129__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__129__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__129__name));
        }
    }
    vlSelf->tb_tpu_top__DOT__uio_in = 0U;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    if (__Vtask_tb_tpu_top__DOT__load_bias_via_opcode__127__check_plumbing) {
        vlSelf->__Vtask_tb_tpu_top__DOT__check__131__cond 
            = (2U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__bank));
        vlSelf->__Vtask_tb_tpu_top__DOT__check__131__name = 
            std::string{"OP_LOAD_BIAS routes bank=2 (DMA.sv's bias bank, registered)"};
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (vlSelf->__Vtask_tb_tpu_top__DOT__check__131__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__131__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__131__name));
        }
    }
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    if (__Vtask_tb_tpu_top__DOT__load_bias_via_opcode__127__check_plumbing) {
        vlSelf->__Vtask_tb_tpu_top__DOT__check__133__cond 
            = (0U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__b_fsm__DOT__current_state));
        vlSelf->__Vtask_tb_tpu_top__DOT__check__133__name = 
            std::string{"bias FSM (inside DMA) finished loading and returned to IDLE"};
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (vlSelf->__Vtask_tb_tpu_top__DOT__check__133__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__133__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__133__name));
        }
    }
    __Vtask_tb_tpu_top__DOT__load_activations_via_opcode__134__check_plumbing = 0U;
    vlSelf->tb_tpu_top__DOT__uio_in = 6U;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    if (__Vtask_tb_tpu_top__DOT__load_activations_via_opcode__134__check_plumbing) {
        vlSelf->__Vtask_tb_tpu_top__DOT__check__136__cond 
            = vlSelf->tb_tpu_top__DOT__dut__DOT__activation_fsm_start;
        vlSelf->__Vtask_tb_tpu_top__DOT__check__136__name = 
            std::string{"OP_LOAD_ACTIVATIONS asserts activation_fsm_start"};
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (vlSelf->__Vtask_tb_tpu_top__DOT__check__136__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__136__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__136__name));
        }
    }
    vlSelf->tb_tpu_top__DOT__uio_in = 0U;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    if (__Vtask_tb_tpu_top__DOT__load_activations_via_opcode__134__check_plumbing) {
        vlSelf->__Vtask_tb_tpu_top__DOT__check__138__cond 
            = (3U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__bank));
        vlSelf->__Vtask_tb_tpu_top__DOT__check__138__name = 
            std::string{"OP_LOAD_ACTIVATIONS routes bank=3 (DMA.sv's activation bank, registered)"};
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (vlSelf->__Vtask_tb_tpu_top__DOT__check__138__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__138__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__138__name));
        }
    }
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    if (__Vtask_tb_tpu_top__DOT__load_activations_via_opcode__134__check_plumbing) {
        vlSelf->__Vtask_tb_tpu_top__DOT__check__140__cond 
            = (0U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__a_fsm__DOT__current_state));
        vlSelf->__Vtask_tb_tpu_top__DOT__check__140__name = 
            std::string{"activation FSM (inside DMA) finished loading and returned to IDLE"};
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (vlSelf->__Vtask_tb_tpu_top__DOT__check__140__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__140__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__140__name));
        }
    }
    __Vtask_tb_tpu_top__DOT__pulse_opcode__141__opcode = 1U;
    vlSelf->tb_tpu_top__DOT__uio_in = __Vtask_tb_tpu_top__DOT__pulse_opcode__141__opcode;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    vlSelf->tb_tpu_top__DOT__uio_in = 0U;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    __Vtask_tb_tpu_top__DOT__check__144__cond = (2U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__144__name = VL_SFORMATF_NX("group %0d/%0d: start pulse moves IDLE -> PREFILL",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__144__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__144__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__144__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__145__max_cycles = 0x1eU;
    __Vtask_tb_tpu_top__DOT__wait_for_state__145__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__145__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__145__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__145__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__145__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__145__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__145__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__118__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__145__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__147__cond = (3U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__147__name = VL_SFORMATF_NX("group %0d/%0d: reached PRELOAD within budget (took %0d cycles)",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials,
                                                               32,
                                                               __Vtask_tb_tpu_top__DOT__run_group_test__118__n) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__147__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__147__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__147__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__148__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__148__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__148__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__148__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__118__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__150__cond = (4U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__150__name = VL_SFORMATF_NX("group %0d/%0d tile 1: reached COMPUTE",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__150__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__150__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__150__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__151__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__151__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__151__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__151__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__118__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__153__cond = (1U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__153__name = VL_SFORMATF_NX("group %0d/%0d tile 1: tile_count advanced to 1 on the COMPUTE->DRAIN edge",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__153__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__153__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__153__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__154__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__154__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__154__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__154__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__118__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__156__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__156__name = VL_SFORMATF_NX("group %0d/%0d tile 1: no X/Z in requant_out",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__156__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__156__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__156__name));
    }
    vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__max_cycles = 0x14U;
    vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__target = 3U;
    vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__target)) 
            & VL_LTS_III(32, vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__cycles_taken, vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__cycles_taken 
            = ((IData)(1U) + vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__118__n 
        = vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__159__cond = (3U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__159__name = VL_SFORMATF_NX("group %0d/%0d tile 1: FUNCS looped back to PRELOAD",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__159__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__159__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__159__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__148__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__148__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__148__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__148__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__118__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__150__cond = (4U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__150__name = VL_SFORMATF_NX("group %0d/%0d tile 2: reached COMPUTE",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__150__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__150__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__150__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__151__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__151__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__151__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__151__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__118__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__153__cond = (2U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__153__name = VL_SFORMATF_NX("group %0d/%0d tile 2: tile_count advanced to 2 on the COMPUTE->DRAIN edge",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__153__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__153__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__153__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__154__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__154__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__154__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__154__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__118__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__156__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__156__name = VL_SFORMATF_NX("group %0d/%0d tile 2: no X/Z in requant_out",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__156__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__156__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__156__name));
    }
    vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__max_cycles = 0x14U;
    vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__target = 3U;
    vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__target)) 
            & VL_LTS_III(32, vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__cycles_taken, vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__cycles_taken 
            = ((IData)(1U) + vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__118__n 
        = vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__159__cond = (3U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__159__name = VL_SFORMATF_NX("group %0d/%0d tile 2: FUNCS looped back to PRELOAD",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__159__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__159__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__159__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__148__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__148__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__148__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__148__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__118__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__150__cond = (4U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__150__name = VL_SFORMATF_NX("group %0d/%0d tile 3: reached COMPUTE",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__150__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__150__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__150__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__151__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__151__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__151__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__151__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__118__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__153__cond = (3U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__153__name = VL_SFORMATF_NX("group %0d/%0d tile 3: tile_count advanced to 3 on the COMPUTE->DRAIN edge",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__153__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__153__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__153__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__154__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__154__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__154__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__154__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__118__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__156__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__156__name = VL_SFORMATF_NX("group %0d/%0d tile 3: no X/Z in requant_out",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__156__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__156__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__156__name));
    }
    vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__max_cycles = 0x14U;
    vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__target = 3U;
    vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__target)) 
            & VL_LTS_III(32, vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__cycles_taken, vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__cycles_taken 
            = ((IData)(1U) + vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__118__n 
        = vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__159__cond = (3U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__159__name = VL_SFORMATF_NX("group %0d/%0d tile 3: FUNCS looped back to PRELOAD",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__159__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__159__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__159__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__148__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__148__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__148__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__148__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__118__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__150__cond = (4U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__150__name = VL_SFORMATF_NX("group %0d/%0d tile 4: reached COMPUTE",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__150__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__150__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__150__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__151__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__151__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__151__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__151__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__118__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__153__cond = (4U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__153__name = VL_SFORMATF_NX("group %0d/%0d tile 4: tile_count advanced to 4 on the COMPUTE->DRAIN edge",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__153__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__153__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__153__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__154__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__154__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__154__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__154__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__118__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__156__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__156__name = VL_SFORMATF_NX("group %0d/%0d tile 4: no X/Z in requant_out",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__156__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__156__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__156__name));
    }
    vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__max_cycles = 0x14U;
    vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__target = 3U;
    vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__target)) 
            & VL_LTS_III(32, vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__cycles_taken, vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__cycles_taken 
            = ((IData)(1U) + vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__118__n 
        = vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__159__cond = (3U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__159__name = VL_SFORMATF_NX("group %0d/%0d tile 4: FUNCS looped back to PRELOAD",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__159__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__159__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__159__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__148__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__148__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__148__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__148__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__118__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__150__cond = (4U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__150__name = VL_SFORMATF_NX("group %0d/%0d tile 5: reached COMPUTE",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__150__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__150__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__150__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__151__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__151__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__151__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__151__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__118__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__153__cond = (5U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__153__name = VL_SFORMATF_NX("group %0d/%0d tile 5: tile_count advanced to 5 on the COMPUTE->DRAIN edge",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__153__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__153__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__153__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__154__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__154__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__154__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__154__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__118__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__156__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__156__name = VL_SFORMATF_NX("group %0d/%0d tile 5: no X/Z in requant_out",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__156__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__156__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__156__name));
    }
    vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__max_cycles = 0x14U;
    vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__target = 3U;
    vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__target)) 
            & VL_LTS_III(32, vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__cycles_taken, vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__cycles_taken 
            = ((IData)(1U) + vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__118__n 
        = vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__159__cond = (3U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__159__name = VL_SFORMATF_NX("group %0d/%0d tile 5: FUNCS looped back to PRELOAD",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__159__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__159__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__159__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__148__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__148__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__148__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__148__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__118__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__150__cond = (4U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__150__name = VL_SFORMATF_NX("group %0d/%0d tile 6: reached COMPUTE",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__150__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__150__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__150__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__151__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__151__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__151__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__151__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__118__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__153__cond = (6U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__153__name = VL_SFORMATF_NX("group %0d/%0d tile 6: tile_count advanced to 6 on the COMPUTE->DRAIN edge",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__153__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__153__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__153__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__154__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__154__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__154__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__154__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__118__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__156__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__156__name = VL_SFORMATF_NX("group %0d/%0d tile 6: no X/Z in requant_out",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__156__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__156__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__156__name));
    }
    vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__max_cycles = 0x14U;
    vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__target = 3U;
    vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__target)) 
            & VL_LTS_III(32, vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__cycles_taken, vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__cycles_taken 
            = ((IData)(1U) + vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__118__n 
        = vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__159__cond = (3U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__159__name = VL_SFORMATF_NX("group %0d/%0d tile 6: FUNCS looped back to PRELOAD",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__159__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__159__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__159__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__148__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__148__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__148__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__148__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__118__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__150__cond = (4U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__150__name = VL_SFORMATF_NX("group %0d/%0d tile 7: reached COMPUTE",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__150__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__150__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__150__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__151__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__151__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__151__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__151__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__118__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__153__cond = (7U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__153__name = VL_SFORMATF_NX("group %0d/%0d tile 7: tile_count advanced to 7 on the COMPUTE->DRAIN edge",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__153__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__153__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__153__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__154__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__154__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__154__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__154__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__118__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__156__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__156__name = VL_SFORMATF_NX("group %0d/%0d tile 7: no X/Z in requant_out",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__156__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__156__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__156__name));
    }
    vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__max_cycles = 0x14U;
    vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__target = 3U;
    vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__target)) 
            & VL_LTS_III(32, vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__cycles_taken, vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__cycles_taken 
            = ((IData)(1U) + vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__118__n 
        = vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__159__cond = (3U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__159__name = VL_SFORMATF_NX("group %0d/%0d tile 7: FUNCS looped back to PRELOAD",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__159__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__159__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__159__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__148__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__148__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__148__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__148__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__118__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__150__cond = (4U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__150__name = VL_SFORMATF_NX("group %0d/%0d tile 8: reached COMPUTE",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__150__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__150__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__150__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__151__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__151__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__151__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__151__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__118__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__153__cond = (8U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__153__name = VL_SFORMATF_NX("group %0d/%0d tile 8: tile_count advanced to 8 on the COMPUTE->DRAIN edge",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__153__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__153__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__153__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__154__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__154__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__154__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__154__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__118__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__156__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__156__name = VL_SFORMATF_NX("group %0d/%0d tile 8: no X/Z in requant_out",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__156__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__156__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__156__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__160__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__160__target = 0U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__160__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__160__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__160__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__160__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__160__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__160__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__118__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__160__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__162__cond = (0U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__162__name = VL_SFORMATF_NX("group %0d/%0d: all 8 tiles completed and FSM returned to IDLE (took %0d cycles)",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials,
                                                               32,
                                                               __Vtask_tb_tpu_top__DOT__run_group_test__118__n) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__162__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__162__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__162__name));
    }
    __Vtask_tb_tpu_top__DOT__check__163__cond = (0U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__163__name = VL_SFORMATF_NX("group %0d/%0d: DONE's tile_clr reset tile_count back to 0",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__163__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__163__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__163__name));
    }
    vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials = 5U;
    vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num = 2U;
    __Vtask_tb_tpu_top__DOT__load_weights_via_opcode__120__check_plumbing = 0U;
    vlSelf->tb_tpu_top__DOT__uio_in = 5U;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    if (__Vtask_tb_tpu_top__DOT__load_weights_via_opcode__120__check_plumbing) {
        vlSelf->__Vtask_tb_tpu_top__DOT__check__122__cond 
            = vlSelf->tb_tpu_top__DOT__dut__DOT__weight_fsm_start;
        vlSelf->__Vtask_tb_tpu_top__DOT__check__122__name = 
            std::string{"OP_LOAD_WEIGHTS asserts weight_fsm_start"};
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (vlSelf->__Vtask_tb_tpu_top__DOT__check__122__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__122__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__122__name));
        }
    }
    vlSelf->tb_tpu_top__DOT__uio_in = 0U;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    if (__Vtask_tb_tpu_top__DOT__load_weights_via_opcode__120__check_plumbing) {
        vlSelf->__Vtask_tb_tpu_top__DOT__check__124__cond 
            = (1U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__bank));
        vlSelf->__Vtask_tb_tpu_top__DOT__check__124__name = 
            std::string{"OP_LOAD_WEIGHTS routes bank=1 (registered, settles one cycle later)"};
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (vlSelf->__Vtask_tb_tpu_top__DOT__check__124__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__124__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__124__name));
        }
    }
    tb_tpu_top__DOT____Vrepeat0 = 0x117U;
    while (VL_LTS_III(32, 0U, tb_tpu_top__DOT____Vrepeat0)) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        tb_tpu_top__DOT____Vrepeat0 = (tb_tpu_top__DOT____Vrepeat0 
                                       - (IData)(1U));
    }
    if (__Vtask_tb_tpu_top__DOT__load_weights_via_opcode__120__check_plumbing) {
        vlSelf->__Vtask_tb_tpu_top__DOT__check__126__cond 
            = (0U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__w_fsm__DOT__current_state));
        vlSelf->__Vtask_tb_tpu_top__DOT__check__126__name = 
            std::string{"weight FSM (inside DMA) finished loading and returned to IDLE"};
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (vlSelf->__Vtask_tb_tpu_top__DOT__check__126__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__126__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__126__name));
        }
    }
    __Vtask_tb_tpu_top__DOT__load_bias_via_opcode__127__check_plumbing = 0U;
    vlSelf->tb_tpu_top__DOT__uio_in = 7U;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    if (__Vtask_tb_tpu_top__DOT__load_bias_via_opcode__127__check_plumbing) {
        vlSelf->__Vtask_tb_tpu_top__DOT__check__129__cond 
            = vlSelf->tb_tpu_top__DOT__dut__DOT__bias_fsm_start;
        vlSelf->__Vtask_tb_tpu_top__DOT__check__129__name = 
            std::string{"OP_LOAD_BIAS asserts bias_fsm_start"};
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (vlSelf->__Vtask_tb_tpu_top__DOT__check__129__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__129__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__129__name));
        }
    }
    vlSelf->tb_tpu_top__DOT__uio_in = 0U;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    if (__Vtask_tb_tpu_top__DOT__load_bias_via_opcode__127__check_plumbing) {
        vlSelf->__Vtask_tb_tpu_top__DOT__check__131__cond 
            = (2U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__bank));
        vlSelf->__Vtask_tb_tpu_top__DOT__check__131__name = 
            std::string{"OP_LOAD_BIAS routes bank=2 (DMA.sv's bias bank, registered)"};
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (vlSelf->__Vtask_tb_tpu_top__DOT__check__131__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__131__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__131__name));
        }
    }
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    if (__Vtask_tb_tpu_top__DOT__load_bias_via_opcode__127__check_plumbing) {
        vlSelf->__Vtask_tb_tpu_top__DOT__check__133__cond 
            = (0U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__b_fsm__DOT__current_state));
        vlSelf->__Vtask_tb_tpu_top__DOT__check__133__name = 
            std::string{"bias FSM (inside DMA) finished loading and returned to IDLE"};
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (vlSelf->__Vtask_tb_tpu_top__DOT__check__133__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__133__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__133__name));
        }
    }
    __Vtask_tb_tpu_top__DOT__load_activations_via_opcode__134__check_plumbing = 0U;
    vlSelf->tb_tpu_top__DOT__uio_in = 6U;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    if (__Vtask_tb_tpu_top__DOT__load_activations_via_opcode__134__check_plumbing) {
        vlSelf->__Vtask_tb_tpu_top__DOT__check__136__cond 
            = vlSelf->tb_tpu_top__DOT__dut__DOT__activation_fsm_start;
        vlSelf->__Vtask_tb_tpu_top__DOT__check__136__name = 
            std::string{"OP_LOAD_ACTIVATIONS asserts activation_fsm_start"};
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (vlSelf->__Vtask_tb_tpu_top__DOT__check__136__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__136__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__136__name));
        }
    }
    vlSelf->tb_tpu_top__DOT__uio_in = 0U;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    if (__Vtask_tb_tpu_top__DOT__load_activations_via_opcode__134__check_plumbing) {
        vlSelf->__Vtask_tb_tpu_top__DOT__check__138__cond 
            = (3U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__bank));
        vlSelf->__Vtask_tb_tpu_top__DOT__check__138__name = 
            std::string{"OP_LOAD_ACTIVATIONS routes bank=3 (DMA.sv's activation bank, registered)"};
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (vlSelf->__Vtask_tb_tpu_top__DOT__check__138__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__138__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__138__name));
        }
    }
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    if (__Vtask_tb_tpu_top__DOT__load_activations_via_opcode__134__check_plumbing) {
        vlSelf->__Vtask_tb_tpu_top__DOT__check__140__cond 
            = (0U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__a_fsm__DOT__current_state));
        vlSelf->__Vtask_tb_tpu_top__DOT__check__140__name = 
            std::string{"activation FSM (inside DMA) finished loading and returned to IDLE"};
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (vlSelf->__Vtask_tb_tpu_top__DOT__check__140__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__140__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__140__name));
        }
    }
    __Vtask_tb_tpu_top__DOT__pulse_opcode__141__opcode = 1U;
    vlSelf->tb_tpu_top__DOT__uio_in = __Vtask_tb_tpu_top__DOT__pulse_opcode__141__opcode;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    vlSelf->tb_tpu_top__DOT__uio_in = 0U;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    __Vtask_tb_tpu_top__DOT__check__144__cond = (2U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__144__name = VL_SFORMATF_NX("group %0d/%0d: start pulse moves IDLE -> PREFILL",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__144__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__144__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__144__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__145__max_cycles = 0x1eU;
    __Vtask_tb_tpu_top__DOT__wait_for_state__145__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__145__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__145__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__145__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__145__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__145__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__145__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__118__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__145__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__147__cond = (3U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__147__name = VL_SFORMATF_NX("group %0d/%0d: reached PRELOAD within budget (took %0d cycles)",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials,
                                                               32,
                                                               __Vtask_tb_tpu_top__DOT__run_group_test__118__n) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__147__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__147__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__147__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__148__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__148__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__148__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__148__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__118__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__150__cond = (4U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__150__name = VL_SFORMATF_NX("group %0d/%0d tile 1: reached COMPUTE",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__150__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__150__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__150__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__151__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__151__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__151__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__151__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__118__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__153__cond = (1U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__153__name = VL_SFORMATF_NX("group %0d/%0d tile 1: tile_count advanced to 1 on the COMPUTE->DRAIN edge",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__153__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__153__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__153__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__154__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__154__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__154__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__154__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__118__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__156__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__156__name = VL_SFORMATF_NX("group %0d/%0d tile 1: no X/Z in requant_out",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__156__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__156__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__156__name));
    }
    vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__max_cycles = 0x14U;
    vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__target = 3U;
    vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__target)) 
            & VL_LTS_III(32, vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__cycles_taken, vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__cycles_taken 
            = ((IData)(1U) + vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__118__n 
        = vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__159__cond = (3U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__159__name = VL_SFORMATF_NX("group %0d/%0d tile 1: FUNCS looped back to PRELOAD",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__159__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__159__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__159__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__148__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__148__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__148__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__148__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__118__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__150__cond = (4U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__150__name = VL_SFORMATF_NX("group %0d/%0d tile 2: reached COMPUTE",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__150__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__150__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__150__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__151__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__151__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__151__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__151__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__118__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__153__cond = (2U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__153__name = VL_SFORMATF_NX("group %0d/%0d tile 2: tile_count advanced to 2 on the COMPUTE->DRAIN edge",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__153__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__153__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__153__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__154__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__154__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__154__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__154__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__118__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__156__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__156__name = VL_SFORMATF_NX("group %0d/%0d tile 2: no X/Z in requant_out",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__156__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__156__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__156__name));
    }
    vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__max_cycles = 0x14U;
    vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__target = 3U;
    vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__target)) 
            & VL_LTS_III(32, vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__cycles_taken, vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__cycles_taken 
            = ((IData)(1U) + vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__118__n 
        = vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__159__cond = (3U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__159__name = VL_SFORMATF_NX("group %0d/%0d tile 2: FUNCS looped back to PRELOAD",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__159__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__159__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__159__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__148__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__148__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__148__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__148__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__118__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__150__cond = (4U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__150__name = VL_SFORMATF_NX("group %0d/%0d tile 3: reached COMPUTE",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__150__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__150__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__150__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__151__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__151__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__151__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__151__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__118__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__153__cond = (3U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__153__name = VL_SFORMATF_NX("group %0d/%0d tile 3: tile_count advanced to 3 on the COMPUTE->DRAIN edge",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__153__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__153__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__153__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__154__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__154__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__154__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__154__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__118__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__156__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__156__name = VL_SFORMATF_NX("group %0d/%0d tile 3: no X/Z in requant_out",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__156__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__156__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__156__name));
    }
    vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__max_cycles = 0x14U;
    vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__target = 3U;
    vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__target)) 
            & VL_LTS_III(32, vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__cycles_taken, vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__cycles_taken 
            = ((IData)(1U) + vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__118__n 
        = vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__159__cond = (3U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__159__name = VL_SFORMATF_NX("group %0d/%0d tile 3: FUNCS looped back to PRELOAD",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__159__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__159__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__159__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__148__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__148__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__148__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__148__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__118__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__150__cond = (4U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__150__name = VL_SFORMATF_NX("group %0d/%0d tile 4: reached COMPUTE",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__150__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__150__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__150__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__151__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__151__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__151__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__151__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__118__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__153__cond = (4U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__153__name = VL_SFORMATF_NX("group %0d/%0d tile 4: tile_count advanced to 4 on the COMPUTE->DRAIN edge",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__153__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__153__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__153__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__154__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__154__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__154__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__154__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__118__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__156__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__156__name = VL_SFORMATF_NX("group %0d/%0d tile 4: no X/Z in requant_out",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__156__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__156__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__156__name));
    }
    vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__max_cycles = 0x14U;
    vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__target = 3U;
    vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__target)) 
            & VL_LTS_III(32, vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__cycles_taken, vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__cycles_taken 
            = ((IData)(1U) + vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__118__n 
        = vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__159__cond = (3U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__159__name = VL_SFORMATF_NX("group %0d/%0d tile 4: FUNCS looped back to PRELOAD",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__159__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__159__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__159__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__148__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__148__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__148__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__148__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__118__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__150__cond = (4U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__150__name = VL_SFORMATF_NX("group %0d/%0d tile 5: reached COMPUTE",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__150__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__150__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__150__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__151__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__151__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__151__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__151__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__118__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__153__cond = (5U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__153__name = VL_SFORMATF_NX("group %0d/%0d tile 5: tile_count advanced to 5 on the COMPUTE->DRAIN edge",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__153__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__153__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__153__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__154__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__154__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__154__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__154__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__118__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__156__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__156__name = VL_SFORMATF_NX("group %0d/%0d tile 5: no X/Z in requant_out",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__156__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__156__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__156__name));
    }
    vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__max_cycles = 0x14U;
    vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__target = 3U;
    vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__target)) 
            & VL_LTS_III(32, vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__cycles_taken, vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__cycles_taken 
            = ((IData)(1U) + vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__118__n 
        = vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__159__cond = (3U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__159__name = VL_SFORMATF_NX("group %0d/%0d tile 5: FUNCS looped back to PRELOAD",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__159__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__159__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__159__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__148__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__148__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__148__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__148__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__118__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__150__cond = (4U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__150__name = VL_SFORMATF_NX("group %0d/%0d tile 6: reached COMPUTE",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__150__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__150__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__150__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__151__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__151__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__151__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__151__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__118__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__153__cond = (6U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__153__name = VL_SFORMATF_NX("group %0d/%0d tile 6: tile_count advanced to 6 on the COMPUTE->DRAIN edge",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__153__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__153__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__153__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__154__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__154__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__154__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__154__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__118__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__156__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__156__name = VL_SFORMATF_NX("group %0d/%0d tile 6: no X/Z in requant_out",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__156__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__156__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__156__name));
    }
    vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__max_cycles = 0x14U;
    vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__target = 3U;
    vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__target)) 
            & VL_LTS_III(32, vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__cycles_taken, vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__cycles_taken 
            = ((IData)(1U) + vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__118__n 
        = vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__159__cond = (3U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__159__name = VL_SFORMATF_NX("group %0d/%0d tile 6: FUNCS looped back to PRELOAD",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__159__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__159__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__159__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__148__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__148__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__148__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__148__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__118__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__150__cond = (4U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__150__name = VL_SFORMATF_NX("group %0d/%0d tile 7: reached COMPUTE",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__150__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__150__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__150__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__151__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__151__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__151__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__151__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__118__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__153__cond = (7U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__153__name = VL_SFORMATF_NX("group %0d/%0d tile 7: tile_count advanced to 7 on the COMPUTE->DRAIN edge",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__153__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__153__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__153__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__154__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__154__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__154__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__154__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__118__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__156__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__156__name = VL_SFORMATF_NX("group %0d/%0d tile 7: no X/Z in requant_out",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__156__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__156__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__156__name));
    }
    vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__max_cycles = 0x14U;
    vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__target = 3U;
    vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__target)) 
            & VL_LTS_III(32, vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__cycles_taken, vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__cycles_taken 
            = ((IData)(1U) + vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__118__n 
        = vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__159__cond = (3U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__159__name = VL_SFORMATF_NX("group %0d/%0d tile 7: FUNCS looped back to PRELOAD",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__159__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__159__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__159__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__148__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__148__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__148__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__148__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__118__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__150__cond = (4U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__150__name = VL_SFORMATF_NX("group %0d/%0d tile 8: reached COMPUTE",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__150__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__150__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__150__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__151__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__151__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__151__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__151__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__118__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__153__cond = (8U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__153__name = VL_SFORMATF_NX("group %0d/%0d tile 8: tile_count advanced to 8 on the COMPUTE->DRAIN edge",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__153__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__153__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__153__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__154__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__154__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__154__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__154__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__118__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__156__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__156__name = VL_SFORMATF_NX("group %0d/%0d tile 8: no X/Z in requant_out",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__156__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__156__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__156__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__160__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__160__target = 0U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__160__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__160__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__160__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__160__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__160__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__160__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__118__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__160__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__162__cond = (0U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__162__name = VL_SFORMATF_NX("group %0d/%0d: all 8 tiles completed and FSM returned to IDLE (took %0d cycles)",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials,
                                                               32,
                                                               __Vtask_tb_tpu_top__DOT__run_group_test__118__n) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__162__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__162__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__162__name));
    }
    __Vtask_tb_tpu_top__DOT__check__163__cond = (0U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__163__name = VL_SFORMATF_NX("group %0d/%0d: DONE's tile_clr reset tile_count back to 0",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__163__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__163__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__163__name));
    }
    vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials = 5U;
    vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num = 3U;
    __Vtask_tb_tpu_top__DOT__load_weights_via_opcode__120__check_plumbing = 0U;
    vlSelf->tb_tpu_top__DOT__uio_in = 5U;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    if (__Vtask_tb_tpu_top__DOT__load_weights_via_opcode__120__check_plumbing) {
        vlSelf->__Vtask_tb_tpu_top__DOT__check__122__cond 
            = vlSelf->tb_tpu_top__DOT__dut__DOT__weight_fsm_start;
        vlSelf->__Vtask_tb_tpu_top__DOT__check__122__name = 
            std::string{"OP_LOAD_WEIGHTS asserts weight_fsm_start"};
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (vlSelf->__Vtask_tb_tpu_top__DOT__check__122__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__122__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__122__name));
        }
    }
    vlSelf->tb_tpu_top__DOT__uio_in = 0U;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    if (__Vtask_tb_tpu_top__DOT__load_weights_via_opcode__120__check_plumbing) {
        vlSelf->__Vtask_tb_tpu_top__DOT__check__124__cond 
            = (1U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__bank));
        vlSelf->__Vtask_tb_tpu_top__DOT__check__124__name = 
            std::string{"OP_LOAD_WEIGHTS routes bank=1 (registered, settles one cycle later)"};
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (vlSelf->__Vtask_tb_tpu_top__DOT__check__124__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__124__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__124__name));
        }
    }
    tb_tpu_top__DOT____Vrepeat0 = 0x117U;
    while (VL_LTS_III(32, 0U, tb_tpu_top__DOT____Vrepeat0)) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        tb_tpu_top__DOT____Vrepeat0 = (tb_tpu_top__DOT____Vrepeat0 
                                       - (IData)(1U));
    }
    if (__Vtask_tb_tpu_top__DOT__load_weights_via_opcode__120__check_plumbing) {
        vlSelf->__Vtask_tb_tpu_top__DOT__check__126__cond 
            = (0U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__w_fsm__DOT__current_state));
        vlSelf->__Vtask_tb_tpu_top__DOT__check__126__name = 
            std::string{"weight FSM (inside DMA) finished loading and returned to IDLE"};
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (vlSelf->__Vtask_tb_tpu_top__DOT__check__126__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__126__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__126__name));
        }
    }
    __Vtask_tb_tpu_top__DOT__load_bias_via_opcode__127__check_plumbing = 0U;
    vlSelf->tb_tpu_top__DOT__uio_in = 7U;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    if (__Vtask_tb_tpu_top__DOT__load_bias_via_opcode__127__check_plumbing) {
        vlSelf->__Vtask_tb_tpu_top__DOT__check__129__cond 
            = vlSelf->tb_tpu_top__DOT__dut__DOT__bias_fsm_start;
        vlSelf->__Vtask_tb_tpu_top__DOT__check__129__name = 
            std::string{"OP_LOAD_BIAS asserts bias_fsm_start"};
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (vlSelf->__Vtask_tb_tpu_top__DOT__check__129__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__129__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__129__name));
        }
    }
    vlSelf->tb_tpu_top__DOT__uio_in = 0U;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    if (__Vtask_tb_tpu_top__DOT__load_bias_via_opcode__127__check_plumbing) {
        vlSelf->__Vtask_tb_tpu_top__DOT__check__131__cond 
            = (2U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__bank));
        vlSelf->__Vtask_tb_tpu_top__DOT__check__131__name = 
            std::string{"OP_LOAD_BIAS routes bank=2 (DMA.sv's bias bank, registered)"};
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (vlSelf->__Vtask_tb_tpu_top__DOT__check__131__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__131__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__131__name));
        }
    }
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    if (__Vtask_tb_tpu_top__DOT__load_bias_via_opcode__127__check_plumbing) {
        vlSelf->__Vtask_tb_tpu_top__DOT__check__133__cond 
            = (0U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__b_fsm__DOT__current_state));
        vlSelf->__Vtask_tb_tpu_top__DOT__check__133__name = 
            std::string{"bias FSM (inside DMA) finished loading and returned to IDLE"};
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (vlSelf->__Vtask_tb_tpu_top__DOT__check__133__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__133__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__133__name));
        }
    }
    __Vtask_tb_tpu_top__DOT__load_activations_via_opcode__134__check_plumbing = 0U;
    vlSelf->tb_tpu_top__DOT__uio_in = 6U;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    if (__Vtask_tb_tpu_top__DOT__load_activations_via_opcode__134__check_plumbing) {
        vlSelf->__Vtask_tb_tpu_top__DOT__check__136__cond 
            = vlSelf->tb_tpu_top__DOT__dut__DOT__activation_fsm_start;
        vlSelf->__Vtask_tb_tpu_top__DOT__check__136__name = 
            std::string{"OP_LOAD_ACTIVATIONS asserts activation_fsm_start"};
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (vlSelf->__Vtask_tb_tpu_top__DOT__check__136__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__136__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__136__name));
        }
    }
    vlSelf->tb_tpu_top__DOT__uio_in = 0U;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    if (__Vtask_tb_tpu_top__DOT__load_activations_via_opcode__134__check_plumbing) {
        vlSelf->__Vtask_tb_tpu_top__DOT__check__138__cond 
            = (3U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__bank));
        vlSelf->__Vtask_tb_tpu_top__DOT__check__138__name = 
            std::string{"OP_LOAD_ACTIVATIONS routes bank=3 (DMA.sv's activation bank, registered)"};
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (vlSelf->__Vtask_tb_tpu_top__DOT__check__138__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__138__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__138__name));
        }
    }
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    if (__Vtask_tb_tpu_top__DOT__load_activations_via_opcode__134__check_plumbing) {
        vlSelf->__Vtask_tb_tpu_top__DOT__check__140__cond 
            = (0U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__a_fsm__DOT__current_state));
        vlSelf->__Vtask_tb_tpu_top__DOT__check__140__name = 
            std::string{"activation FSM (inside DMA) finished loading and returned to IDLE"};
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (vlSelf->__Vtask_tb_tpu_top__DOT__check__140__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__140__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__140__name));
        }
    }
    __Vtask_tb_tpu_top__DOT__pulse_opcode__141__opcode = 1U;
    vlSelf->tb_tpu_top__DOT__uio_in = __Vtask_tb_tpu_top__DOT__pulse_opcode__141__opcode;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    vlSelf->tb_tpu_top__DOT__uio_in = 0U;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    __Vtask_tb_tpu_top__DOT__check__144__cond = (2U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__144__name = VL_SFORMATF_NX("group %0d/%0d: start pulse moves IDLE -> PREFILL",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__144__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__144__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__144__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__145__max_cycles = 0x1eU;
    __Vtask_tb_tpu_top__DOT__wait_for_state__145__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__145__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__145__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__145__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__145__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__145__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__145__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__118__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__145__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__147__cond = (3U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__147__name = VL_SFORMATF_NX("group %0d/%0d: reached PRELOAD within budget (took %0d cycles)",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials,
                                                               32,
                                                               __Vtask_tb_tpu_top__DOT__run_group_test__118__n) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__147__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__147__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__147__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__148__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__148__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__148__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__148__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__118__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__150__cond = (4U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__150__name = VL_SFORMATF_NX("group %0d/%0d tile 1: reached COMPUTE",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__150__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__150__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__150__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__151__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__151__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__151__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__151__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__118__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__153__cond = (1U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__153__name = VL_SFORMATF_NX("group %0d/%0d tile 1: tile_count advanced to 1 on the COMPUTE->DRAIN edge",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__153__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__153__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__153__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__154__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__154__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__154__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__154__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__118__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__156__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__156__name = VL_SFORMATF_NX("group %0d/%0d tile 1: no X/Z in requant_out",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__156__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__156__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__156__name));
    }
    vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__max_cycles = 0x14U;
    vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__target = 3U;
    vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__target)) 
            & VL_LTS_III(32, vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__cycles_taken, vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__cycles_taken 
            = ((IData)(1U) + vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__118__n 
        = vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__159__cond = (3U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__159__name = VL_SFORMATF_NX("group %0d/%0d tile 1: FUNCS looped back to PRELOAD",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__159__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__159__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__159__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__148__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__148__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__148__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__148__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__118__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__150__cond = (4U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__150__name = VL_SFORMATF_NX("group %0d/%0d tile 2: reached COMPUTE",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__150__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__150__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__150__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__151__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__151__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__151__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__151__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__118__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__153__cond = (2U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__153__name = VL_SFORMATF_NX("group %0d/%0d tile 2: tile_count advanced to 2 on the COMPUTE->DRAIN edge",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__153__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__153__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__153__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__154__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__154__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__154__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__154__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__118__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__156__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__156__name = VL_SFORMATF_NX("group %0d/%0d tile 2: no X/Z in requant_out",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__156__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__156__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__156__name));
    }
    vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__max_cycles = 0x14U;
    vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__target = 3U;
    vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__target)) 
            & VL_LTS_III(32, vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__cycles_taken, vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__cycles_taken 
            = ((IData)(1U) + vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__118__n 
        = vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__159__cond = (3U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__159__name = VL_SFORMATF_NX("group %0d/%0d tile 2: FUNCS looped back to PRELOAD",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__159__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__159__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__159__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__148__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__148__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__148__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__148__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__118__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__148__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__150__cond = (4U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__150__name = VL_SFORMATF_NX("group %0d/%0d tile 3: reached COMPUTE",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__150__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__150__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__150__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__151__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__151__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__151__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__151__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__118__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__151__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__153__cond = (3U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__153__name = VL_SFORMATF_NX("group %0d/%0d tile 3: tile_count advanced to 3 on the COMPUTE->DRAIN edge",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__153__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__153__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__153__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__154__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__154__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__154__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__154__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__118__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__154__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__156__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__156__name = VL_SFORMATF_NX("group %0d/%0d tile 3: no X/Z in requant_out",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__156__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__156__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__156__name));
    }
    vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__max_cycles = 0x14U;
    vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__target = 3U;
    vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__cycles_taken = 0U;
}
