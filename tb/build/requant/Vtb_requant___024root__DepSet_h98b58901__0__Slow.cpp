// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_requant.h for the primary calling header

#include "Vtb_requant__pch.h"
#include "Vtb_requant___024root.h"

VL_ATTR_COLD void Vtb_requant___024root___eval_static__TOP(Vtb_requant___024root* vlSelf);

VL_ATTR_COLD void Vtb_requant___024root___eval_static(Vtb_requant___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_requant__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_requant___024root___eval_static\n"); );
    // Body
    Vtb_requant___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vtb_requant___024root___eval_static__TOP(Vtb_requant___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_requant__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_requant___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->tb_requant__DOT__errors = 0U;
    vlSelf->tb_requant__DOT__checks = 0U;
    vlSelf->tb_requant__DOT__clk = 0U;
}

VL_ATTR_COLD void Vtb_requant___024root___eval_final(Vtb_requant___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_requant__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_requant___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtb_requant___024root___eval_settle(Vtb_requant___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_requant__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_requant___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_requant___024root___dump_triggers__act(Vtb_requant___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_requant__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_requant___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_requant.clk or negedge tb_requant.rst_n)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge tb_requant.clk)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_requant___024root___dump_triggers__nba(Vtb_requant___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_requant__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_requant___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_requant.clk or negedge tb_requant.rst_n)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge tb_requant.clk)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_requant___024root___ctor_var_reset(Vtb_requant___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_requant__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_requant___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->tb_requant__DOT__errors = 0;
    vlSelf->tb_requant__DOT__checks = 0;
    vlSelf->tb_requant__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_requant__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->tb_requant__DOT__valid = VL_RAND_RESET_I(1);
    vlSelf->tb_requant__DOT__drain_state = VL_RAND_RESET_I(1);
    vlSelf->tb_requant__DOT__accum_state = VL_RAND_RESET_I(1);
    vlSelf->tb_requant__DOT__out_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_requant__DOT____Vcellout__dut__out = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__tb_requant__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_requant__DOT__rst_n__0 = VL_RAND_RESET_I(1);
}
