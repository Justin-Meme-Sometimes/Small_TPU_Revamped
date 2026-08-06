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
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__load_bias_via_opcode__19__check_plumbing;
    __Vtask_tb_tpu_top__DOT__load_bias_via_opcode__19__check_plumbing = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__21__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__21__cond;
    __Vtask_tb_tpu_top__DOT__check__21__cond = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__23__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__23__cond;
    __Vtask_tb_tpu_top__DOT__check__23__cond = 0;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__load_activations_via_opcode__24__check_plumbing;
    __Vtask_tb_tpu_top__DOT__load_activations_via_opcode__24__check_plumbing = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__26__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__26__cond;
    __Vtask_tb_tpu_top__DOT__check__26__cond = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__28__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__28__cond;
    __Vtask_tb_tpu_top__DOT__check__28__cond = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__29__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__29__cond;
    __Vtask_tb_tpu_top__DOT__check__29__cond = 0;
    CData/*7:0*/ __Vtask_tb_tpu_top__DOT__pulse_opcode__30__opcode;
    __Vtask_tb_tpu_top__DOT__pulse_opcode__30__opcode = 0;
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
    std::string __Vtask_tb_tpu_top__DOT__check__45__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__45__cond;
    __Vtask_tb_tpu_top__DOT__check__45__cond = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__46__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__46__cond;
    __Vtask_tb_tpu_top__DOT__check__46__cond = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__47__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__47__cond;
    __Vtask_tb_tpu_top__DOT__check__47__cond = 0;
    CData/*4:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__48__target;
    __Vtask_tb_tpu_top__DOT__wait_for_state__48__target = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__48__max_cycles;
    __Vtask_tb_tpu_top__DOT__wait_for_state__48__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__48__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__48__cycles_taken = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__50__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__50__cond;
    __Vtask_tb_tpu_top__DOT__check__50__cond = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__51__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__51__cond;
    __Vtask_tb_tpu_top__DOT__check__51__cond = 0;
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
    CData/*4:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__62__target;
    __Vtask_tb_tpu_top__DOT__wait_for_state__62__target = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__62__max_cycles;
    __Vtask_tb_tpu_top__DOT__wait_for_state__62__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__62__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__62__cycles_taken = 0;
    CData/*4:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__64__target;
    __Vtask_tb_tpu_top__DOT__wait_for_state__64__target = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__64__max_cycles;
    __Vtask_tb_tpu_top__DOT__wait_for_state__64__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__64__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__64__cycles_taken = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__66__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__66__cond;
    __Vtask_tb_tpu_top__DOT__check__66__cond = 0;
    CData/*4:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__67__target;
    __Vtask_tb_tpu_top__DOT__wait_for_state__67__target = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__67__max_cycles;
    __Vtask_tb_tpu_top__DOT__wait_for_state__67__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__67__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__67__cycles_taken = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__69__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__69__cond;
    __Vtask_tb_tpu_top__DOT__check__69__cond = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__70__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__70__cond;
    __Vtask_tb_tpu_top__DOT__check__70__cond = 0;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__load_weights_via_opcode__72__check_plumbing;
    __Vtask_tb_tpu_top__DOT__load_weights_via_opcode__72__check_plumbing = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__74__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__74__cond;
    __Vtask_tb_tpu_top__DOT__check__74__cond = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__76__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__76__cond;
    __Vtask_tb_tpu_top__DOT__check__76__cond = 0;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__load_bias_via_opcode__77__check_plumbing;
    __Vtask_tb_tpu_top__DOT__load_bias_via_opcode__77__check_plumbing = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__79__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__79__cond;
    __Vtask_tb_tpu_top__DOT__check__79__cond = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__81__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__81__cond;
    __Vtask_tb_tpu_top__DOT__check__81__cond = 0;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__load_activations_via_opcode__82__check_plumbing;
    __Vtask_tb_tpu_top__DOT__load_activations_via_opcode__82__check_plumbing = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__84__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__84__cond;
    __Vtask_tb_tpu_top__DOT__check__84__cond = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__86__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__86__cond;
    __Vtask_tb_tpu_top__DOT__check__86__cond = 0;
    CData/*7:0*/ __Vtask_tb_tpu_top__DOT__pulse_opcode__87__opcode;
    __Vtask_tb_tpu_top__DOT__pulse_opcode__87__opcode = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__90__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__90__cond;
    __Vtask_tb_tpu_top__DOT__check__90__cond = 0;
    CData/*4:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__91__target;
    __Vtask_tb_tpu_top__DOT__wait_for_state__91__target = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__91__max_cycles;
    __Vtask_tb_tpu_top__DOT__wait_for_state__91__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__91__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__91__cycles_taken = 0;
    CData/*4:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__93__target;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__target = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken = 0;
    CData/*4:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__95__target;
    __Vtask_tb_tpu_top__DOT__wait_for_state__95__target = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__95__max_cycles;
    __Vtask_tb_tpu_top__DOT__wait_for_state__95__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__95__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__95__cycles_taken = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__97__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__97__cond;
    __Vtask_tb_tpu_top__DOT__check__97__cond = 0;
    CData/*4:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__98__target;
    __Vtask_tb_tpu_top__DOT__wait_for_state__98__target = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__98__max_cycles;
    __Vtask_tb_tpu_top__DOT__wait_for_state__98__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__98__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__98__cycles_taken = 0;
    CData/*4:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__100__target;
    __Vtask_tb_tpu_top__DOT__wait_for_state__100__target = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__100__max_cycles;
    __Vtask_tb_tpu_top__DOT__wait_for_state__100__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__100__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__100__cycles_taken = 0;
    CData/*4:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__102__target;
    __Vtask_tb_tpu_top__DOT__wait_for_state__102__target = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__102__max_cycles;
    __Vtask_tb_tpu_top__DOT__wait_for_state__102__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__102__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__102__cycles_taken = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__104__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__104__cond;
    __Vtask_tb_tpu_top__DOT__check__104__cond = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__105__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__105__cond;
    __Vtask_tb_tpu_top__DOT__check__105__cond = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__run_group_test__106__n;
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n = 0;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__load_weights_via_opcode__108__check_plumbing;
    __Vtask_tb_tpu_top__DOT__load_weights_via_opcode__108__check_plumbing = 0;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__load_bias_via_opcode__113__check_plumbing;
    __Vtask_tb_tpu_top__DOT__load_bias_via_opcode__113__check_plumbing = 0;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__load_activations_via_opcode__118__check_plumbing;
    __Vtask_tb_tpu_top__DOT__load_activations_via_opcode__118__check_plumbing = 0;
    CData/*7:0*/ __Vtask_tb_tpu_top__DOT__pulse_opcode__123__opcode;
    __Vtask_tb_tpu_top__DOT__pulse_opcode__123__opcode = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__126__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__126__cond;
    __Vtask_tb_tpu_top__DOT__check__126__cond = 0;
    CData/*4:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__127__target;
    __Vtask_tb_tpu_top__DOT__wait_for_state__127__target = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__127__max_cycles;
    __Vtask_tb_tpu_top__DOT__wait_for_state__127__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__127__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__127__cycles_taken = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__129__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__129__cond;
    __Vtask_tb_tpu_top__DOT__check__129__cond = 0;
    CData/*4:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__130__target;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__target = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__132__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__132__cond;
    __Vtask_tb_tpu_top__DOT__check__132__cond = 0;
    CData/*4:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__133__target;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__target = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken = 0;
    CData/*4:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__136__target;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__target = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__138__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__138__cond;
    __Vtask_tb_tpu_top__DOT__check__138__cond = 0;
    CData/*4:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__139__target;
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__target = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__139__max_cycles;
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__141__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__141__cond;
    __Vtask_tb_tpu_top__DOT__check__141__cond = 0;
    CData/*4:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__142__target;
    __Vtask_tb_tpu_top__DOT__wait_for_state__142__target = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__142__max_cycles;
    __Vtask_tb_tpu_top__DOT__wait_for_state__142__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__142__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__142__cycles_taken = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__144__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__144__cond;
    __Vtask_tb_tpu_top__DOT__check__144__cond = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__145__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__145__cond;
    __Vtask_tb_tpu_top__DOT__check__145__cond = 0;
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
        __Vtask_tb_tpu_top__DOT__check__16__cond = 
            ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__weight_fsm_start) 
             & (1U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__bank)));
        __Vtask_tb_tpu_top__DOT__check__16__name = 
            std::string{"OP_LOAD_WEIGHTS asserts weight_fsm_start and routes bank=1"};
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
    tb_tpu_top__DOT____Vrepeat0 = 0x118U;
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
        __Vtask_tb_tpu_top__DOT__check__18__cond = 
            (0U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__w_fsm__DOT__current_state));
        __Vtask_tb_tpu_top__DOT__check__18__name = 
            std::string{"weight FSM (inside DMA) finished loading and returned to IDLE"};
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
    __Vtask_tb_tpu_top__DOT__load_bias_via_opcode__19__check_plumbing = 1U;
    vlSelf->tb_tpu_top__DOT__uio_in = 7U;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    if (__Vtask_tb_tpu_top__DOT__load_bias_via_opcode__19__check_plumbing) {
        __Vtask_tb_tpu_top__DOT__check__21__cond = 
            ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__bias_fsm_start) 
             & (2U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__bank)));
        __Vtask_tb_tpu_top__DOT__check__21__name = 
            std::string{"OP_LOAD_BIAS asserts bias_fsm_start and routes bank=2 (DMA.sv's bias bank)"};
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (__Vtask_tb_tpu_top__DOT__check__21__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__21__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__21__name));
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
    if (__Vtask_tb_tpu_top__DOT__load_bias_via_opcode__19__check_plumbing) {
        __Vtask_tb_tpu_top__DOT__check__23__cond = 
            (0U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__b_fsm__DOT__current_state));
        __Vtask_tb_tpu_top__DOT__check__23__name = 
            std::string{"bias FSM (inside DMA) finished loading and returned to IDLE"};
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
    __Vtask_tb_tpu_top__DOT__load_activations_via_opcode__24__check_plumbing = 1U;
    vlSelf->tb_tpu_top__DOT__uio_in = 6U;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    if (__Vtask_tb_tpu_top__DOT__load_activations_via_opcode__24__check_plumbing) {
        __Vtask_tb_tpu_top__DOT__check__26__cond = 
            ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__activation_fsm_start) 
             & (3U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__bank)));
        __Vtask_tb_tpu_top__DOT__check__26__name = 
            std::string{"OP_LOAD_ACTIVATIONS asserts activation_fsm_start and routes bank=3 (DMA.sv's activation bank)"};
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (__Vtask_tb_tpu_top__DOT__check__26__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__26__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__26__name));
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
    if (__Vtask_tb_tpu_top__DOT__load_activations_via_opcode__24__check_plumbing) {
        __Vtask_tb_tpu_top__DOT__check__28__cond = 
            (0U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__a_fsm__DOT__current_state));
        __Vtask_tb_tpu_top__DOT__check__28__name = 
            std::string{"activation FSM (inside DMA) finished loading and returned to IDLE"};
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (__Vtask_tb_tpu_top__DOT__check__28__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__28__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__28__name));
        }
    }
    __Vtask_tb_tpu_top__DOT__check__29__cond = (0U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__29__name = std::string{"FSM still IDLE after all three load opcodes"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__29__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__29__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__29__name));
    }
    VL_WRITEF("==== tpu_top: tile group 1 - PREFILL ====\n");
    __Vtask_tb_tpu_top__DOT__pulse_opcode__30__opcode = 1U;
    vlSelf->tb_tpu_top__DOT__uio_in = __Vtask_tb_tpu_top__DOT__pulse_opcode__30__opcode;
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
    __Vtask_tb_tpu_top__DOT__check__33__cond = (2U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__33__name = std::string{"start pulse moves IDLE -> PREFILL"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__33__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__33__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__33__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__34__max_cycles = 0x1eU;
    __Vtask_tb_tpu_top__DOT__wait_for_state__34__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__34__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__34__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__34__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__34__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__34__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__34__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__34__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__36__cond = (3U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__36__name = VL_SFORMATF_NX("reached PRELOAD within budget (took %0d cycles)",
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
    __Vtask_tb_tpu_top__DOT__check__37__cond = (0x10U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__prefill_count));
    __Vtask_tb_tpu_top__DOT__check__37__name = std::string{"PREFILL ran the full 16 cycles (prefill_count saturated)"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__37__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__37__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__37__name));
    }
    __Vtask_tb_tpu_top__DOT__check__38__cond = (0U 
                                                != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__count));
    __Vtask_tb_tpu_top__DOT__check__38__name = std::string{"weight_fifo received weight data during PREFILL (non-empty right as PRELOAD begins)"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__38__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__38__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__38__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__39__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__39__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__39__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__39__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__39__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__39__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__39__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__39__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__39__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__41__cond = (4U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__41__name = VL_SFORMATF_NX("reached COMPUTE within budget (took %0d cycles)",
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
    __Vtask_tb_tpu_top__DOT__check__42__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__42__name = std::string{"no X/Z in product_out entering COMPUTE"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__42__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__42__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__42__name));
    }
    VL_WRITEF("==== tpu_top: tile group 1 - COMPUTE -> DRAIN ====\n");
    __Vtask_tb_tpu_top__DOT__wait_for_state__43__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__43__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__43__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__43__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__43__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__43__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__43__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__43__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__43__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__45__cond = (5U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__45__name = VL_SFORMATF_NX("reached DRAIN within budget (took %0d cycles)",
                                                              32,
                                                              tb_tpu_top__DOT__unnamedblk2__DOT__n) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__45__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__45__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__45__name));
    }
    __Vtask_tb_tpu_top__DOT__check__46__cond = (7U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__compute_count));
    __Vtask_tb_tpu_top__DOT__check__46__name = std::string{"COMPUTE ran the full 7 cycles (compute_count saturated)"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__46__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__46__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__46__name));
    }
    __Vtask_tb_tpu_top__DOT__check__47__cond = (1U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__47__name = std::string{"tile_done pulsed on the COMPUTE->DRAIN edge (tile_count advanced to 1)"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__47__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__47__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__47__name));
    }
    VL_WRITEF("==== tpu_top: tile group 1 - DRAIN -> FUNCS ====\n");
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
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__48__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__48__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__48__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__50__cond = (6U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__50__name = VL_SFORMATF_NX("reached FUNCS within budget (took %0d cycles)",
                                                              32,
                                                              tb_tpu_top__DOT__unnamedblk2__DOT__n) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__50__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__50__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__50__name));
    }
    __Vtask_tb_tpu_top__DOT__check__51__cond = (4U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__drain_count));
    __Vtask_tb_tpu_top__DOT__check__51__name = std::string{"DRAIN ran the full 4 cycles (drain_count saturated)"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__51__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__51__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__51__name));
    }
    __Vtask_tb_tpu_top__DOT__check__52__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__52__name = std::string{"no X/Z in requant_out during drain/funcs window"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__52__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__52__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__52__name));
    }
    VL_WRITEF("==== tpu_top: tile group 1 - FUNCS -> back to PRELOAD (tile 1 of 8, not yet tile_complete) ====\n");
    __Vtask_tb_tpu_top__DOT__wait_for_state__53__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__53__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__53__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__53__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__53__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__53__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__53__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__53__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__53__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__55__cond = (3U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__55__name = VL_SFORMATF_NX("FUNCS looped back to PRELOAD for tile 2/8 (took %0d cycles)",
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
    __Vtask_tb_tpu_top__DOT__check__56__cond = (3U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__funcs_count));
    __Vtask_tb_tpu_top__DOT__check__56__name = std::string{"FUNCS ran the full 3 cycles (funcs_count saturated)"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__56__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__56__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__56__name));
    }
    VL_WRITEF("==== tpu_top: running tiles 2-8 to reach tiles_complete ====\n");
    __Vtask_tb_tpu_top__DOT__wait_for_state__57__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__57__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__57__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__57__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__57__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__57__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__57__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__57__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__57__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__59__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__59__target = 5U;
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
    __Vtask_tb_tpu_top__DOT__check__61__cond = (2U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__61__name = std::string{"tile 2/8: tile_count advanced correctly"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__61__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__61__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__61__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__62__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__62__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__62__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__62__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__62__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__62__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__62__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__62__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__62__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__64__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__64__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__64__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__64__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__64__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__64__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__64__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__64__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__64__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__66__cond = (3U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__66__name = std::string{"tile 2/8: FUNCS looped back to PRELOAD"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__66__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__66__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__66__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__57__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__57__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__57__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__57__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__57__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__57__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__57__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__57__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__57__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__59__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__59__target = 5U;
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
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__61__name = std::string{"tile 3/8: tile_count advanced correctly"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__61__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__61__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__61__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__62__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__62__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__62__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__62__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__62__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__62__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__62__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__62__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__62__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__64__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__64__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__64__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__64__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__64__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__64__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__64__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__64__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__64__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__66__cond = (3U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__66__name = std::string{"tile 3/8: FUNCS looped back to PRELOAD"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__66__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__66__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__66__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__57__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__57__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__57__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__57__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__57__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__57__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__57__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__57__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__57__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__59__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__59__target = 5U;
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
    __Vtask_tb_tpu_top__DOT__check__61__cond = (4U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__61__name = std::string{"tile 4/8: tile_count advanced correctly"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__61__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__61__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__61__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__62__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__62__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__62__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__62__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__62__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__62__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__62__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__62__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__62__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__64__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__64__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__64__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__64__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__64__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__64__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__64__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__64__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__64__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__66__cond = (3U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__66__name = std::string{"tile 4/8: FUNCS looped back to PRELOAD"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__66__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__66__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__66__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__57__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__57__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__57__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__57__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__57__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__57__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__57__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__57__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__57__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__59__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__59__target = 5U;
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
    __Vtask_tb_tpu_top__DOT__check__61__cond = (5U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__61__name = std::string{"tile 5/8: tile_count advanced correctly"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__61__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__61__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__61__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__62__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__62__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__62__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__62__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__62__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__62__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__62__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__62__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__62__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__64__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__64__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__64__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__64__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__64__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__64__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__64__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__64__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__64__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__66__cond = (3U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__66__name = std::string{"tile 5/8: FUNCS looped back to PRELOAD"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__66__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__66__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__66__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__57__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__57__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__57__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__57__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__57__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__57__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__57__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__57__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__57__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__59__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__59__target = 5U;
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
    __Vtask_tb_tpu_top__DOT__check__61__cond = (6U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__61__name = std::string{"tile 6/8: tile_count advanced correctly"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__61__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__61__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__61__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__62__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__62__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__62__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__62__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__62__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__62__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__62__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__62__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__62__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__64__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__64__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__64__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__64__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__64__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__64__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__64__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__64__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__64__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__66__cond = (3U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__66__name = std::string{"tile 6/8: FUNCS looped back to PRELOAD"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__66__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__66__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__66__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__57__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__57__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__57__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__57__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__57__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__57__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__57__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__57__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__57__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__59__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__59__target = 5U;
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
    __Vtask_tb_tpu_top__DOT__check__61__cond = (7U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__61__name = std::string{"tile 7/8: tile_count advanced correctly"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__61__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__61__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__61__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__62__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__62__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__62__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__62__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__62__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__62__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__62__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__62__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__62__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__64__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__64__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__64__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__64__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__64__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__64__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__64__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__64__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__64__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__66__cond = (3U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__66__name = std::string{"tile 7/8: FUNCS looped back to PRELOAD"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__66__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__66__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__66__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__57__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__57__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__57__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__57__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__57__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__57__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__57__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__57__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__57__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__59__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__59__target = 5U;
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
    __Vtask_tb_tpu_top__DOT__check__61__cond = (8U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__61__name = std::string{"tile 8/8: tile_count advanced correctly"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__61__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__61__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__61__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__62__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__62__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__62__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__62__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__62__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__62__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__62__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__62__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__62__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__67__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__67__target = 0U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__67__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__67__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__67__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__67__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__67__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__67__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__67__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__69__cond = (0U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__69__name = VL_SFORMATF_NX("after 8 tiles: FUNCS saw tile_complete and returned to IDLE (took %0d cycles)",
                                                              32,
                                                              tb_tpu_top__DOT__unnamedblk2__DOT__n) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__69__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__69__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__69__name));
    }
    __Vtask_tb_tpu_top__DOT__check__70__cond = (0U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__70__name = std::string{"DONE's tile_clr reset tile_count back to 0 on the way to IDLE"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__70__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__70__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__70__name));
    }
    VL_WRITEF("==== tpu_top: tile group 2 (does a fresh 8-tile group actually complete?) ====\n");
    __Vtask_tb_tpu_top__DOT__load_weights_via_opcode__72__check_plumbing = 0U;
    vlSelf->tb_tpu_top__DOT__uio_in = 5U;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    if (__Vtask_tb_tpu_top__DOT__load_weights_via_opcode__72__check_plumbing) {
        __Vtask_tb_tpu_top__DOT__check__74__cond = 
            ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__weight_fsm_start) 
             & (1U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__bank)));
        __Vtask_tb_tpu_top__DOT__check__74__name = 
            std::string{"OP_LOAD_WEIGHTS asserts weight_fsm_start and routes bank=1"};
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (__Vtask_tb_tpu_top__DOT__check__74__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__74__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__74__name));
        }
    }
    vlSelf->tb_tpu_top__DOT__uio_in = 0U;
    tb_tpu_top__DOT____Vrepeat0 = 0x118U;
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
    if (__Vtask_tb_tpu_top__DOT__load_weights_via_opcode__72__check_plumbing) {
        __Vtask_tb_tpu_top__DOT__check__76__cond = 
            (0U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__w_fsm__DOT__current_state));
        __Vtask_tb_tpu_top__DOT__check__76__name = 
            std::string{"weight FSM (inside DMA) finished loading and returned to IDLE"};
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (__Vtask_tb_tpu_top__DOT__check__76__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__76__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__76__name));
        }
    }
    __Vtask_tb_tpu_top__DOT__load_bias_via_opcode__77__check_plumbing = 0U;
    vlSelf->tb_tpu_top__DOT__uio_in = 7U;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    if (__Vtask_tb_tpu_top__DOT__load_bias_via_opcode__77__check_plumbing) {
        __Vtask_tb_tpu_top__DOT__check__79__cond = 
            ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__bias_fsm_start) 
             & (2U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__bank)));
        __Vtask_tb_tpu_top__DOT__check__79__name = 
            std::string{"OP_LOAD_BIAS asserts bias_fsm_start and routes bank=2 (DMA.sv's bias bank)"};
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (__Vtask_tb_tpu_top__DOT__check__79__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__79__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__79__name));
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
    if (__Vtask_tb_tpu_top__DOT__load_bias_via_opcode__77__check_plumbing) {
        __Vtask_tb_tpu_top__DOT__check__81__cond = 
            (0U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__b_fsm__DOT__current_state));
        __Vtask_tb_tpu_top__DOT__check__81__name = 
            std::string{"bias FSM (inside DMA) finished loading and returned to IDLE"};
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (__Vtask_tb_tpu_top__DOT__check__81__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__81__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__81__name));
        }
    }
    __Vtask_tb_tpu_top__DOT__load_activations_via_opcode__82__check_plumbing = 0U;
    vlSelf->tb_tpu_top__DOT__uio_in = 6U;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    if (__Vtask_tb_tpu_top__DOT__load_activations_via_opcode__82__check_plumbing) {
        __Vtask_tb_tpu_top__DOT__check__84__cond = 
            ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__activation_fsm_start) 
             & (3U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__bank)));
        __Vtask_tb_tpu_top__DOT__check__84__name = 
            std::string{"OP_LOAD_ACTIVATIONS asserts activation_fsm_start and routes bank=3 (DMA.sv's activation bank)"};
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
    vlSelf->tb_tpu_top__DOT__uio_in = 0U;
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
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    if (__Vtask_tb_tpu_top__DOT__load_activations_via_opcode__82__check_plumbing) {
        __Vtask_tb_tpu_top__DOT__check__86__cond = 
            (0U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__a_fsm__DOT__current_state));
        __Vtask_tb_tpu_top__DOT__check__86__name = 
            std::string{"activation FSM (inside DMA) finished loading and returned to IDLE"};
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (__Vtask_tb_tpu_top__DOT__check__86__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__86__name));
        }
    }
    __Vtask_tb_tpu_top__DOT__pulse_opcode__87__opcode = 1U;
    vlSelf->tb_tpu_top__DOT__uio_in = __Vtask_tb_tpu_top__DOT__pulse_opcode__87__opcode;
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
    __Vtask_tb_tpu_top__DOT__check__90__cond = (2U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__90__name = std::string{"group 2: start pulse moves IDLE -> PREFILL"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__90__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__90__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__90__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__91__max_cycles = 0x1eU;
    __Vtask_tb_tpu_top__DOT__wait_for_state__91__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__91__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__91__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__91__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__91__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__91__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__91__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__91__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__93__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__95__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__95__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__95__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__95__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__95__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__95__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__95__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__95__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__95__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__97__cond = (1U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__97__name = std::string{"group 2 tile 1: tile_count advanced correctly"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__97__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__97__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__97__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__98__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__98__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__98__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__98__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__98__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__98__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__98__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__98__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__98__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__100__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__100__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__100__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__100__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__100__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__100__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__100__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__100__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__100__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__93__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__95__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__95__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__95__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__95__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__95__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__95__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__95__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__95__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__95__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__97__cond = (2U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__97__name = std::string{"group 2 tile 2: tile_count advanced correctly"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__97__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__97__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__97__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__98__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__98__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__98__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__98__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__98__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__98__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__98__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__98__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__98__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__100__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__100__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__100__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__100__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__100__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__100__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__100__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__100__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__100__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__93__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__95__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__95__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__95__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__95__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__95__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__95__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__95__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__95__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__95__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__97__cond = (3U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__97__name = std::string{"group 2 tile 3: tile_count advanced correctly"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__97__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__97__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__97__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__98__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__98__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__98__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__98__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__98__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__98__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__98__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__98__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__98__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__100__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__100__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__100__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__100__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__100__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__100__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__100__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__100__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__100__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__93__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__95__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__95__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__95__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__95__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__95__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__95__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__95__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__95__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__95__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__97__cond = (4U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__97__name = std::string{"group 2 tile 4: tile_count advanced correctly"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__97__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__97__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__97__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__98__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__98__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__98__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__98__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__98__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__98__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__98__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__98__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__98__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__100__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__100__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__100__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__100__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__100__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__100__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__100__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__100__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__100__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__93__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__95__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__95__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__95__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__95__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__95__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__95__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__95__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__95__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__95__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__97__cond = (5U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__97__name = std::string{"group 2 tile 5: tile_count advanced correctly"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__97__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__97__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__97__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__98__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__98__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__98__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__98__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__98__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__98__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__98__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__98__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__98__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__100__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__100__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__100__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__100__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__100__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__100__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__100__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__100__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__100__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__93__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__95__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__95__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__95__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__95__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__95__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__95__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__95__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__95__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__95__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__97__cond = (6U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__97__name = std::string{"group 2 tile 6: tile_count advanced correctly"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__97__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__97__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__97__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__98__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__98__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__98__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__98__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__98__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__98__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__98__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__98__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__98__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__100__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__100__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__100__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__100__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__100__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__100__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__100__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__100__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__100__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__93__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__95__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__95__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__95__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__95__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__95__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__95__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__95__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__95__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__95__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__97__cond = (7U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__97__name = std::string{"group 2 tile 7: tile_count advanced correctly"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__97__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__97__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__97__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__98__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__98__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__98__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__98__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__98__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__98__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__98__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__98__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__98__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__100__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__100__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__100__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__100__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__100__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__100__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__100__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__100__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__100__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__93__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__93__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__93__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__95__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__95__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__95__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__95__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__95__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__95__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__95__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__95__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__95__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__97__cond = (8U 
                                                == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__97__name = std::string{"group 2 tile 8: tile_count advanced correctly"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__97__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__97__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__97__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__98__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__98__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__98__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__98__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__98__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__98__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__98__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__98__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__98__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__102__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__102__target = 0U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__102__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__102__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__102__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__102__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__102__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__102__cycles_taken);
    }
    tb_tpu_top__DOT__unnamedblk2__DOT__n = __Vtask_tb_tpu_top__DOT__wait_for_state__102__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__104__cond = (0U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__104__name = VL_SFORMATF_NX("group 2 also reached tiles_complete and returned to IDLE (took %0d cycles)",
                                                               32,
                                                               tb_tpu_top__DOT__unnamedblk2__DOT__n) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__104__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__104__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__104__name));
    }
    __Vtask_tb_tpu_top__DOT__check__105__cond = (0U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__105__name = std::string{"group 2: tile_count cleared back to 0 again"};
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__105__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__105__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__105__name));
    }
    VL_WRITEF("==== tpu_top: 5 more back-to-back tile groups (control-path stress) ====\n");
    vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials = 5U;
    vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num = 1U;
    __Vtask_tb_tpu_top__DOT__load_weights_via_opcode__108__check_plumbing = 0U;
    vlSelf->tb_tpu_top__DOT__uio_in = 5U;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    if (__Vtask_tb_tpu_top__DOT__load_weights_via_opcode__108__check_plumbing) {
        vlSelf->__Vtask_tb_tpu_top__DOT__check__110__cond 
            = ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__weight_fsm_start) 
               & (1U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__bank)));
        vlSelf->__Vtask_tb_tpu_top__DOT__check__110__name = 
            std::string{"OP_LOAD_WEIGHTS asserts weight_fsm_start and routes bank=1"};
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (vlSelf->__Vtask_tb_tpu_top__DOT__check__110__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__110__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__110__name));
        }
    }
    vlSelf->tb_tpu_top__DOT__uio_in = 0U;
    tb_tpu_top__DOT____Vrepeat0 = 0x118U;
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
    if (__Vtask_tb_tpu_top__DOT__load_weights_via_opcode__108__check_plumbing) {
        vlSelf->__Vtask_tb_tpu_top__DOT__check__112__cond 
            = (0U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__w_fsm__DOT__current_state));
        vlSelf->__Vtask_tb_tpu_top__DOT__check__112__name = 
            std::string{"weight FSM (inside DMA) finished loading and returned to IDLE"};
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (vlSelf->__Vtask_tb_tpu_top__DOT__check__112__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__112__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__112__name));
        }
    }
    __Vtask_tb_tpu_top__DOT__load_bias_via_opcode__113__check_plumbing = 0U;
    vlSelf->tb_tpu_top__DOT__uio_in = 7U;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    if (__Vtask_tb_tpu_top__DOT__load_bias_via_opcode__113__check_plumbing) {
        vlSelf->__Vtask_tb_tpu_top__DOT__check__115__cond 
            = ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__bias_fsm_start) 
               & (2U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__bank)));
        vlSelf->__Vtask_tb_tpu_top__DOT__check__115__name = 
            std::string{"OP_LOAD_BIAS asserts bias_fsm_start and routes bank=2 (DMA.sv's bias bank)"};
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (vlSelf->__Vtask_tb_tpu_top__DOT__check__115__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__115__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__115__name));
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
    if (__Vtask_tb_tpu_top__DOT__load_bias_via_opcode__113__check_plumbing) {
        vlSelf->__Vtask_tb_tpu_top__DOT__check__117__cond 
            = (0U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__b_fsm__DOT__current_state));
        vlSelf->__Vtask_tb_tpu_top__DOT__check__117__name = 
            std::string{"bias FSM (inside DMA) finished loading and returned to IDLE"};
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (vlSelf->__Vtask_tb_tpu_top__DOT__check__117__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__117__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__117__name));
        }
    }
    __Vtask_tb_tpu_top__DOT__load_activations_via_opcode__118__check_plumbing = 0U;
    vlSelf->tb_tpu_top__DOT__uio_in = 6U;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    if (__Vtask_tb_tpu_top__DOT__load_activations_via_opcode__118__check_plumbing) {
        vlSelf->__Vtask_tb_tpu_top__DOT__check__120__cond 
            = ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__activation_fsm_start) 
               & (3U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__bank)));
        vlSelf->__Vtask_tb_tpu_top__DOT__check__120__name = 
            std::string{"OP_LOAD_ACTIVATIONS asserts activation_fsm_start and routes bank=3 (DMA.sv's activation bank)"};
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (vlSelf->__Vtask_tb_tpu_top__DOT__check__120__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__120__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__120__name));
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
    if (__Vtask_tb_tpu_top__DOT__load_activations_via_opcode__118__check_plumbing) {
        vlSelf->__Vtask_tb_tpu_top__DOT__check__122__cond 
            = (0U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__a_fsm__DOT__current_state));
        vlSelf->__Vtask_tb_tpu_top__DOT__check__122__name = 
            std::string{"activation FSM (inside DMA) finished loading and returned to IDLE"};
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
    __Vtask_tb_tpu_top__DOT__pulse_opcode__123__opcode = 1U;
    vlSelf->tb_tpu_top__DOT__uio_in = __Vtask_tb_tpu_top__DOT__pulse_opcode__123__opcode;
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
    __Vtask_tb_tpu_top__DOT__check__126__cond = (2U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__126__name = VL_SFORMATF_NX("group %0d/%0d: start pulse moves IDLE -> PREFILL",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__126__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__126__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__126__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__127__max_cycles = 0x1eU;
    __Vtask_tb_tpu_top__DOT__wait_for_state__127__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__127__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__127__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__127__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__127__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__127__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__127__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__127__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__129__cond = (3U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__129__name = VL_SFORMATF_NX("group %0d/%0d: reached PRELOAD within budget (took %0d cycles)",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials,
                                                               32,
                                                               __Vtask_tb_tpu_top__DOT__run_group_test__106__n) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__129__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__129__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__129__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__130__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__132__cond = (4U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__132__name = VL_SFORMATF_NX("group %0d/%0d tile 1: reached COMPUTE",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__132__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__132__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__132__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__133__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken;
    vlSelf->__Vtask_tb_tpu_top__DOT__check__135__cond 
        = (1U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name 
        = VL_SFORMATF_NX("group %0d/%0d tile 1: tile_count advanced to 1 on the COMPUTE->DRAIN edge",
                         32,vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                         32,vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (vlSelf->__Vtask_tb_tpu_top__DOT__check__135__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__136__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__138__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__138__name = VL_SFORMATF_NX("group %0d/%0d tile 1: no X/Z in requant_out",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__138__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__138__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__138__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__139__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__139__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__141__cond = (3U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__141__name = VL_SFORMATF_NX("group %0d/%0d tile 1: FUNCS looped back to PRELOAD",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__141__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__141__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__141__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__130__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__132__cond = (4U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__132__name = VL_SFORMATF_NX("group %0d/%0d tile 2: reached COMPUTE",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__132__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__132__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__132__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__133__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken;
    vlSelf->__Vtask_tb_tpu_top__DOT__check__135__cond 
        = (2U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name 
        = VL_SFORMATF_NX("group %0d/%0d tile 2: tile_count advanced to 2 on the COMPUTE->DRAIN edge",
                         32,vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                         32,vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (vlSelf->__Vtask_tb_tpu_top__DOT__check__135__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__136__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__138__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__138__name = VL_SFORMATF_NX("group %0d/%0d tile 2: no X/Z in requant_out",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__138__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__138__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__138__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__139__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__139__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__141__cond = (3U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__141__name = VL_SFORMATF_NX("group %0d/%0d tile 2: FUNCS looped back to PRELOAD",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__141__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__141__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__141__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__130__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__132__cond = (4U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__132__name = VL_SFORMATF_NX("group %0d/%0d tile 3: reached COMPUTE",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__132__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__132__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__132__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__133__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken;
    vlSelf->__Vtask_tb_tpu_top__DOT__check__135__cond 
        = (3U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name 
        = VL_SFORMATF_NX("group %0d/%0d tile 3: tile_count advanced to 3 on the COMPUTE->DRAIN edge",
                         32,vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                         32,vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (vlSelf->__Vtask_tb_tpu_top__DOT__check__135__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__136__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__138__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__138__name = VL_SFORMATF_NX("group %0d/%0d tile 3: no X/Z in requant_out",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__138__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__138__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__138__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__139__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__139__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__141__cond = (3U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__141__name = VL_SFORMATF_NX("group %0d/%0d tile 3: FUNCS looped back to PRELOAD",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__141__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__141__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__141__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__130__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__132__cond = (4U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__132__name = VL_SFORMATF_NX("group %0d/%0d tile 4: reached COMPUTE",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__132__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__132__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__132__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__133__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken;
    vlSelf->__Vtask_tb_tpu_top__DOT__check__135__cond 
        = (4U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name 
        = VL_SFORMATF_NX("group %0d/%0d tile 4: tile_count advanced to 4 on the COMPUTE->DRAIN edge",
                         32,vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                         32,vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (vlSelf->__Vtask_tb_tpu_top__DOT__check__135__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__136__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__138__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__138__name = VL_SFORMATF_NX("group %0d/%0d tile 4: no X/Z in requant_out",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__138__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__138__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__138__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__139__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__139__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__141__cond = (3U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__141__name = VL_SFORMATF_NX("group %0d/%0d tile 4: FUNCS looped back to PRELOAD",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__141__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__141__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__141__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__130__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__132__cond = (4U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__132__name = VL_SFORMATF_NX("group %0d/%0d tile 5: reached COMPUTE",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__132__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__132__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__132__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__133__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken;
    vlSelf->__Vtask_tb_tpu_top__DOT__check__135__cond 
        = (5U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name 
        = VL_SFORMATF_NX("group %0d/%0d tile 5: tile_count advanced to 5 on the COMPUTE->DRAIN edge",
                         32,vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                         32,vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (vlSelf->__Vtask_tb_tpu_top__DOT__check__135__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__136__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__138__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__138__name = VL_SFORMATF_NX("group %0d/%0d tile 5: no X/Z in requant_out",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__138__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__138__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__138__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__139__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__139__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__141__cond = (3U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__141__name = VL_SFORMATF_NX("group %0d/%0d tile 5: FUNCS looped back to PRELOAD",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__141__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__141__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__141__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__130__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__132__cond = (4U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__132__name = VL_SFORMATF_NX("group %0d/%0d tile 6: reached COMPUTE",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__132__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__132__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__132__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__133__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken;
    vlSelf->__Vtask_tb_tpu_top__DOT__check__135__cond 
        = (6U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name 
        = VL_SFORMATF_NX("group %0d/%0d tile 6: tile_count advanced to 6 on the COMPUTE->DRAIN edge",
                         32,vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                         32,vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (vlSelf->__Vtask_tb_tpu_top__DOT__check__135__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__136__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__138__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__138__name = VL_SFORMATF_NX("group %0d/%0d tile 6: no X/Z in requant_out",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__138__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__138__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__138__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__139__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__139__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__141__cond = (3U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__141__name = VL_SFORMATF_NX("group %0d/%0d tile 6: FUNCS looped back to PRELOAD",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__141__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__141__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__141__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__130__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__132__cond = (4U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__132__name = VL_SFORMATF_NX("group %0d/%0d tile 7: reached COMPUTE",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__132__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__132__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__132__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__133__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken;
    vlSelf->__Vtask_tb_tpu_top__DOT__check__135__cond 
        = (7U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name 
        = VL_SFORMATF_NX("group %0d/%0d tile 7: tile_count advanced to 7 on the COMPUTE->DRAIN edge",
                         32,vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                         32,vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (vlSelf->__Vtask_tb_tpu_top__DOT__check__135__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__136__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__138__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__138__name = VL_SFORMATF_NX("group %0d/%0d tile 7: no X/Z in requant_out",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__138__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__138__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__138__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__139__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__139__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__141__cond = (3U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__141__name = VL_SFORMATF_NX("group %0d/%0d tile 7: FUNCS looped back to PRELOAD",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__141__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__141__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__141__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__130__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__132__cond = (4U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__132__name = VL_SFORMATF_NX("group %0d/%0d tile 8: reached COMPUTE",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__132__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__132__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__132__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__133__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken;
    vlSelf->__Vtask_tb_tpu_top__DOT__check__135__cond 
        = (8U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name 
        = VL_SFORMATF_NX("group %0d/%0d tile 8: tile_count advanced to 8 on the COMPUTE->DRAIN edge",
                         32,vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                         32,vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (vlSelf->__Vtask_tb_tpu_top__DOT__check__135__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__136__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__138__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__138__name = VL_SFORMATF_NX("group %0d/%0d tile 8: no X/Z in requant_out",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__138__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__138__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__138__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__142__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__142__target = 0U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__142__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__142__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__142__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__142__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__142__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__142__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__142__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__144__cond = (0U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__144__name = VL_SFORMATF_NX("group %0d/%0d: all 8 tiles completed and FSM returned to IDLE (took %0d cycles)",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials,
                                                               32,
                                                               __Vtask_tb_tpu_top__DOT__run_group_test__106__n) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__144__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__144__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__144__name));
    }
    __Vtask_tb_tpu_top__DOT__check__145__cond = (0U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__145__name = VL_SFORMATF_NX("group %0d/%0d: DONE's tile_clr reset tile_count back to 0",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__145__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__145__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__145__name));
    }
    vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials = 5U;
    vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num = 2U;
    __Vtask_tb_tpu_top__DOT__load_weights_via_opcode__108__check_plumbing = 0U;
    vlSelf->tb_tpu_top__DOT__uio_in = 5U;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    if (__Vtask_tb_tpu_top__DOT__load_weights_via_opcode__108__check_plumbing) {
        vlSelf->__Vtask_tb_tpu_top__DOT__check__110__cond 
            = ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__weight_fsm_start) 
               & (1U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__bank)));
        vlSelf->__Vtask_tb_tpu_top__DOT__check__110__name = 
            std::string{"OP_LOAD_WEIGHTS asserts weight_fsm_start and routes bank=1"};
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (vlSelf->__Vtask_tb_tpu_top__DOT__check__110__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__110__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__110__name));
        }
    }
    vlSelf->tb_tpu_top__DOT__uio_in = 0U;
    tb_tpu_top__DOT____Vrepeat0 = 0x118U;
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
    if (__Vtask_tb_tpu_top__DOT__load_weights_via_opcode__108__check_plumbing) {
        vlSelf->__Vtask_tb_tpu_top__DOT__check__112__cond 
            = (0U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__w_fsm__DOT__current_state));
        vlSelf->__Vtask_tb_tpu_top__DOT__check__112__name = 
            std::string{"weight FSM (inside DMA) finished loading and returned to IDLE"};
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (vlSelf->__Vtask_tb_tpu_top__DOT__check__112__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__112__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__112__name));
        }
    }
    __Vtask_tb_tpu_top__DOT__load_bias_via_opcode__113__check_plumbing = 0U;
    vlSelf->tb_tpu_top__DOT__uio_in = 7U;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    if (__Vtask_tb_tpu_top__DOT__load_bias_via_opcode__113__check_plumbing) {
        vlSelf->__Vtask_tb_tpu_top__DOT__check__115__cond 
            = ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__bias_fsm_start) 
               & (2U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__bank)));
        vlSelf->__Vtask_tb_tpu_top__DOT__check__115__name = 
            std::string{"OP_LOAD_BIAS asserts bias_fsm_start and routes bank=2 (DMA.sv's bias bank)"};
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (vlSelf->__Vtask_tb_tpu_top__DOT__check__115__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__115__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__115__name));
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
    if (__Vtask_tb_tpu_top__DOT__load_bias_via_opcode__113__check_plumbing) {
        vlSelf->__Vtask_tb_tpu_top__DOT__check__117__cond 
            = (0U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__b_fsm__DOT__current_state));
        vlSelf->__Vtask_tb_tpu_top__DOT__check__117__name = 
            std::string{"bias FSM (inside DMA) finished loading and returned to IDLE"};
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (vlSelf->__Vtask_tb_tpu_top__DOT__check__117__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__117__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__117__name));
        }
    }
    __Vtask_tb_tpu_top__DOT__load_activations_via_opcode__118__check_plumbing = 0U;
    vlSelf->tb_tpu_top__DOT__uio_in = 6U;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    if (__Vtask_tb_tpu_top__DOT__load_activations_via_opcode__118__check_plumbing) {
        vlSelf->__Vtask_tb_tpu_top__DOT__check__120__cond 
            = ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__activation_fsm_start) 
               & (3U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__bank)));
        vlSelf->__Vtask_tb_tpu_top__DOT__check__120__name = 
            std::string{"OP_LOAD_ACTIVATIONS asserts activation_fsm_start and routes bank=3 (DMA.sv's activation bank)"};
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (vlSelf->__Vtask_tb_tpu_top__DOT__check__120__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__120__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__120__name));
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
    if (__Vtask_tb_tpu_top__DOT__load_activations_via_opcode__118__check_plumbing) {
        vlSelf->__Vtask_tb_tpu_top__DOT__check__122__cond 
            = (0U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__a_fsm__DOT__current_state));
        vlSelf->__Vtask_tb_tpu_top__DOT__check__122__name = 
            std::string{"activation FSM (inside DMA) finished loading and returned to IDLE"};
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
    __Vtask_tb_tpu_top__DOT__pulse_opcode__123__opcode = 1U;
    vlSelf->tb_tpu_top__DOT__uio_in = __Vtask_tb_tpu_top__DOT__pulse_opcode__123__opcode;
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
    __Vtask_tb_tpu_top__DOT__check__126__cond = (2U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__126__name = VL_SFORMATF_NX("group %0d/%0d: start pulse moves IDLE -> PREFILL",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__126__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__126__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__126__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__127__max_cycles = 0x1eU;
    __Vtask_tb_tpu_top__DOT__wait_for_state__127__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__127__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__127__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__127__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__127__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__127__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__127__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__127__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__129__cond = (3U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__129__name = VL_SFORMATF_NX("group %0d/%0d: reached PRELOAD within budget (took %0d cycles)",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials,
                                                               32,
                                                               __Vtask_tb_tpu_top__DOT__run_group_test__106__n) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__129__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__129__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__129__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__130__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__132__cond = (4U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__132__name = VL_SFORMATF_NX("group %0d/%0d tile 1: reached COMPUTE",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__132__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__132__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__132__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__133__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken;
    vlSelf->__Vtask_tb_tpu_top__DOT__check__135__cond 
        = (1U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name 
        = VL_SFORMATF_NX("group %0d/%0d tile 1: tile_count advanced to 1 on the COMPUTE->DRAIN edge",
                         32,vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                         32,vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (vlSelf->__Vtask_tb_tpu_top__DOT__check__135__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__136__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__138__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__138__name = VL_SFORMATF_NX("group %0d/%0d tile 1: no X/Z in requant_out",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__138__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__138__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__138__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__139__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__139__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__141__cond = (3U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__141__name = VL_SFORMATF_NX("group %0d/%0d tile 1: FUNCS looped back to PRELOAD",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__141__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__141__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__141__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__130__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__132__cond = (4U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__132__name = VL_SFORMATF_NX("group %0d/%0d tile 2: reached COMPUTE",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__132__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__132__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__132__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__133__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken;
    vlSelf->__Vtask_tb_tpu_top__DOT__check__135__cond 
        = (2U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name 
        = VL_SFORMATF_NX("group %0d/%0d tile 2: tile_count advanced to 2 on the COMPUTE->DRAIN edge",
                         32,vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                         32,vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (vlSelf->__Vtask_tb_tpu_top__DOT__check__135__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__136__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__138__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__138__name = VL_SFORMATF_NX("group %0d/%0d tile 2: no X/Z in requant_out",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__138__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__138__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__138__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__139__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__139__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__141__cond = (3U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__141__name = VL_SFORMATF_NX("group %0d/%0d tile 2: FUNCS looped back to PRELOAD",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__141__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__141__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__141__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__130__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__132__cond = (4U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__132__name = VL_SFORMATF_NX("group %0d/%0d tile 3: reached COMPUTE",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__132__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__132__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__132__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__133__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken;
    vlSelf->__Vtask_tb_tpu_top__DOT__check__135__cond 
        = (3U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name 
        = VL_SFORMATF_NX("group %0d/%0d tile 3: tile_count advanced to 3 on the COMPUTE->DRAIN edge",
                         32,vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                         32,vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (vlSelf->__Vtask_tb_tpu_top__DOT__check__135__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__136__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__138__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__138__name = VL_SFORMATF_NX("group %0d/%0d tile 3: no X/Z in requant_out",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__138__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__138__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__138__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__139__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__139__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__141__cond = (3U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__141__name = VL_SFORMATF_NX("group %0d/%0d tile 3: FUNCS looped back to PRELOAD",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__141__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__141__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__141__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__130__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__132__cond = (4U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__132__name = VL_SFORMATF_NX("group %0d/%0d tile 4: reached COMPUTE",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__132__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__132__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__132__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__133__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken;
    vlSelf->__Vtask_tb_tpu_top__DOT__check__135__cond 
        = (4U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name 
        = VL_SFORMATF_NX("group %0d/%0d tile 4: tile_count advanced to 4 on the COMPUTE->DRAIN edge",
                         32,vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                         32,vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (vlSelf->__Vtask_tb_tpu_top__DOT__check__135__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__136__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__138__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__138__name = VL_SFORMATF_NX("group %0d/%0d tile 4: no X/Z in requant_out",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__138__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__138__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__138__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__139__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__139__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__141__cond = (3U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__141__name = VL_SFORMATF_NX("group %0d/%0d tile 4: FUNCS looped back to PRELOAD",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__141__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__141__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__141__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__130__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__132__cond = (4U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__132__name = VL_SFORMATF_NX("group %0d/%0d tile 5: reached COMPUTE",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__132__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__132__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__132__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__133__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken;
    vlSelf->__Vtask_tb_tpu_top__DOT__check__135__cond 
        = (5U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name 
        = VL_SFORMATF_NX("group %0d/%0d tile 5: tile_count advanced to 5 on the COMPUTE->DRAIN edge",
                         32,vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                         32,vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (vlSelf->__Vtask_tb_tpu_top__DOT__check__135__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__136__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__138__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__138__name = VL_SFORMATF_NX("group %0d/%0d tile 5: no X/Z in requant_out",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__138__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__138__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__138__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__139__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__139__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__141__cond = (3U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__141__name = VL_SFORMATF_NX("group %0d/%0d tile 5: FUNCS looped back to PRELOAD",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__141__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__141__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__141__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__130__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__132__cond = (4U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__132__name = VL_SFORMATF_NX("group %0d/%0d tile 6: reached COMPUTE",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__132__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__132__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__132__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__133__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken;
    vlSelf->__Vtask_tb_tpu_top__DOT__check__135__cond 
        = (6U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name 
        = VL_SFORMATF_NX("group %0d/%0d tile 6: tile_count advanced to 6 on the COMPUTE->DRAIN edge",
                         32,vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                         32,vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (vlSelf->__Vtask_tb_tpu_top__DOT__check__135__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__136__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__138__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__138__name = VL_SFORMATF_NX("group %0d/%0d tile 6: no X/Z in requant_out",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__138__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__138__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__138__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__139__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__139__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__141__cond = (3U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__141__name = VL_SFORMATF_NX("group %0d/%0d tile 6: FUNCS looped back to PRELOAD",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__141__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__141__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__141__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__130__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__132__cond = (4U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__132__name = VL_SFORMATF_NX("group %0d/%0d tile 7: reached COMPUTE",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__132__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__132__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__132__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__133__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken;
    vlSelf->__Vtask_tb_tpu_top__DOT__check__135__cond 
        = (7U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name 
        = VL_SFORMATF_NX("group %0d/%0d tile 7: tile_count advanced to 7 on the COMPUTE->DRAIN edge",
                         32,vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                         32,vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (vlSelf->__Vtask_tb_tpu_top__DOT__check__135__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__136__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__138__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__138__name = VL_SFORMATF_NX("group %0d/%0d tile 7: no X/Z in requant_out",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__138__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__138__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__138__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__139__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__139__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__141__cond = (3U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__141__name = VL_SFORMATF_NX("group %0d/%0d tile 7: FUNCS looped back to PRELOAD",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__141__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__141__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__141__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__130__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__132__cond = (4U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__132__name = VL_SFORMATF_NX("group %0d/%0d tile 8: reached COMPUTE",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__132__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__132__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__132__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__133__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken;
    vlSelf->__Vtask_tb_tpu_top__DOT__check__135__cond 
        = (8U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name 
        = VL_SFORMATF_NX("group %0d/%0d tile 8: tile_count advanced to 8 on the COMPUTE->DRAIN edge",
                         32,vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                         32,vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (vlSelf->__Vtask_tb_tpu_top__DOT__check__135__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__136__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__138__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__138__name = VL_SFORMATF_NX("group %0d/%0d tile 8: no X/Z in requant_out",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__138__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__138__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__138__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__142__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__142__target = 0U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__142__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__142__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__142__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__142__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__142__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__142__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__142__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__144__cond = (0U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__144__name = VL_SFORMATF_NX("group %0d/%0d: all 8 tiles completed and FSM returned to IDLE (took %0d cycles)",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials,
                                                               32,
                                                               __Vtask_tb_tpu_top__DOT__run_group_test__106__n) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__144__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__144__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__144__name));
    }
    __Vtask_tb_tpu_top__DOT__check__145__cond = (0U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__145__name = VL_SFORMATF_NX("group %0d/%0d: DONE's tile_clr reset tile_count back to 0",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__145__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__145__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__145__name));
    }
    vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials = 5U;
    vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num = 3U;
    __Vtask_tb_tpu_top__DOT__load_weights_via_opcode__108__check_plumbing = 0U;
    vlSelf->tb_tpu_top__DOT__uio_in = 5U;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    if (__Vtask_tb_tpu_top__DOT__load_weights_via_opcode__108__check_plumbing) {
        vlSelf->__Vtask_tb_tpu_top__DOT__check__110__cond 
            = ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__weight_fsm_start) 
               & (1U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__bank)));
        vlSelf->__Vtask_tb_tpu_top__DOT__check__110__name = 
            std::string{"OP_LOAD_WEIGHTS asserts weight_fsm_start and routes bank=1"};
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (vlSelf->__Vtask_tb_tpu_top__DOT__check__110__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__110__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__110__name));
        }
    }
    vlSelf->tb_tpu_top__DOT__uio_in = 0U;
    tb_tpu_top__DOT____Vrepeat0 = 0x118U;
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
    if (__Vtask_tb_tpu_top__DOT__load_weights_via_opcode__108__check_plumbing) {
        vlSelf->__Vtask_tb_tpu_top__DOT__check__112__cond 
            = (0U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__w_fsm__DOT__current_state));
        vlSelf->__Vtask_tb_tpu_top__DOT__check__112__name = 
            std::string{"weight FSM (inside DMA) finished loading and returned to IDLE"};
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (vlSelf->__Vtask_tb_tpu_top__DOT__check__112__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__112__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__112__name));
        }
    }
    __Vtask_tb_tpu_top__DOT__load_bias_via_opcode__113__check_plumbing = 0U;
    vlSelf->tb_tpu_top__DOT__uio_in = 7U;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    if (__Vtask_tb_tpu_top__DOT__load_bias_via_opcode__113__check_plumbing) {
        vlSelf->__Vtask_tb_tpu_top__DOT__check__115__cond 
            = ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__bias_fsm_start) 
               & (2U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__bank)));
        vlSelf->__Vtask_tb_tpu_top__DOT__check__115__name = 
            std::string{"OP_LOAD_BIAS asserts bias_fsm_start and routes bank=2 (DMA.sv's bias bank)"};
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (vlSelf->__Vtask_tb_tpu_top__DOT__check__115__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__115__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__115__name));
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
    if (__Vtask_tb_tpu_top__DOT__load_bias_via_opcode__113__check_plumbing) {
        vlSelf->__Vtask_tb_tpu_top__DOT__check__117__cond 
            = (0U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__b_fsm__DOT__current_state));
        vlSelf->__Vtask_tb_tpu_top__DOT__check__117__name = 
            std::string{"bias FSM (inside DMA) finished loading and returned to IDLE"};
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (vlSelf->__Vtask_tb_tpu_top__DOT__check__117__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__117__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__117__name));
        }
    }
    __Vtask_tb_tpu_top__DOT__load_activations_via_opcode__118__check_plumbing = 0U;
    vlSelf->tb_tpu_top__DOT__uio_in = 6U;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    if (__Vtask_tb_tpu_top__DOT__load_activations_via_opcode__118__check_plumbing) {
        vlSelf->__Vtask_tb_tpu_top__DOT__check__120__cond 
            = ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__activation_fsm_start) 
               & (3U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__bank)));
        vlSelf->__Vtask_tb_tpu_top__DOT__check__120__name = 
            std::string{"OP_LOAD_ACTIVATIONS asserts activation_fsm_start and routes bank=3 (DMA.sv's activation bank)"};
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (vlSelf->__Vtask_tb_tpu_top__DOT__check__120__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__120__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__120__name));
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
    if (__Vtask_tb_tpu_top__DOT__load_activations_via_opcode__118__check_plumbing) {
        vlSelf->__Vtask_tb_tpu_top__DOT__check__122__cond 
            = (0U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__a_fsm__DOT__current_state));
        vlSelf->__Vtask_tb_tpu_top__DOT__check__122__name = 
            std::string{"activation FSM (inside DMA) finished loading and returned to IDLE"};
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
    __Vtask_tb_tpu_top__DOT__pulse_opcode__123__opcode = 1U;
    vlSelf->tb_tpu_top__DOT__uio_in = __Vtask_tb_tpu_top__DOT__pulse_opcode__123__opcode;
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
    __Vtask_tb_tpu_top__DOT__check__126__cond = (2U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__126__name = VL_SFORMATF_NX("group %0d/%0d: start pulse moves IDLE -> PREFILL",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__126__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__126__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__126__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__127__max_cycles = 0x1eU;
    __Vtask_tb_tpu_top__DOT__wait_for_state__127__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__127__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__127__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__127__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__127__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__127__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__127__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__127__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__129__cond = (3U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__129__name = VL_SFORMATF_NX("group %0d/%0d: reached PRELOAD within budget (took %0d cycles)",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials,
                                                               32,
                                                               __Vtask_tb_tpu_top__DOT__run_group_test__106__n) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__129__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__129__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__129__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__130__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__132__cond = (4U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__132__name = VL_SFORMATF_NX("group %0d/%0d tile 1: reached COMPUTE",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__132__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__132__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__132__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__133__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken;
    vlSelf->__Vtask_tb_tpu_top__DOT__check__135__cond 
        = (1U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name 
        = VL_SFORMATF_NX("group %0d/%0d tile 1: tile_count advanced to 1 on the COMPUTE->DRAIN edge",
                         32,vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                         32,vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (vlSelf->__Vtask_tb_tpu_top__DOT__check__135__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__136__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__138__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__138__name = VL_SFORMATF_NX("group %0d/%0d tile 1: no X/Z in requant_out",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__138__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__138__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__138__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__139__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__139__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__141__cond = (3U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__141__name = VL_SFORMATF_NX("group %0d/%0d tile 1: FUNCS looped back to PRELOAD",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__141__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__141__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__141__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__130__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__132__cond = (4U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__132__name = VL_SFORMATF_NX("group %0d/%0d tile 2: reached COMPUTE",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__132__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__132__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__132__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__133__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken;
    vlSelf->__Vtask_tb_tpu_top__DOT__check__135__cond 
        = (2U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name 
        = VL_SFORMATF_NX("group %0d/%0d tile 2: tile_count advanced to 2 on the COMPUTE->DRAIN edge",
                         32,vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                         32,vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (vlSelf->__Vtask_tb_tpu_top__DOT__check__135__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__136__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__138__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__138__name = VL_SFORMATF_NX("group %0d/%0d tile 2: no X/Z in requant_out",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__138__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__138__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__138__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__139__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__139__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__141__cond = (3U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__141__name = VL_SFORMATF_NX("group %0d/%0d tile 2: FUNCS looped back to PRELOAD",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__141__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__141__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__141__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__130__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__132__cond = (4U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__132__name = VL_SFORMATF_NX("group %0d/%0d tile 3: reached COMPUTE",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__132__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__132__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__132__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__133__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken;
    vlSelf->__Vtask_tb_tpu_top__DOT__check__135__cond 
        = (3U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name 
        = VL_SFORMATF_NX("group %0d/%0d tile 3: tile_count advanced to 3 on the COMPUTE->DRAIN edge",
                         32,vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                         32,vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (vlSelf->__Vtask_tb_tpu_top__DOT__check__135__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__136__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__138__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__138__name = VL_SFORMATF_NX("group %0d/%0d tile 3: no X/Z in requant_out",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__138__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__138__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__138__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__139__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__139__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__141__cond = (3U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__141__name = VL_SFORMATF_NX("group %0d/%0d tile 3: FUNCS looped back to PRELOAD",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__141__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__141__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__141__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__130__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__132__cond = (4U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__132__name = VL_SFORMATF_NX("group %0d/%0d tile 4: reached COMPUTE",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__132__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__132__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__132__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__133__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken;
    vlSelf->__Vtask_tb_tpu_top__DOT__check__135__cond 
        = (4U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name 
        = VL_SFORMATF_NX("group %0d/%0d tile 4: tile_count advanced to 4 on the COMPUTE->DRAIN edge",
                         32,vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                         32,vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (vlSelf->__Vtask_tb_tpu_top__DOT__check__135__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__136__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__138__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__138__name = VL_SFORMATF_NX("group %0d/%0d tile 4: no X/Z in requant_out",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__138__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__138__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__138__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__139__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__139__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__141__cond = (3U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__141__name = VL_SFORMATF_NX("group %0d/%0d tile 4: FUNCS looped back to PRELOAD",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__141__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__141__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__141__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__130__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__132__cond = (4U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__132__name = VL_SFORMATF_NX("group %0d/%0d tile 5: reached COMPUTE",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__132__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__132__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__132__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__133__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken;
    vlSelf->__Vtask_tb_tpu_top__DOT__check__135__cond 
        = (5U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name 
        = VL_SFORMATF_NX("group %0d/%0d tile 5: tile_count advanced to 5 on the COMPUTE->DRAIN edge",
                         32,vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                         32,vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
}
