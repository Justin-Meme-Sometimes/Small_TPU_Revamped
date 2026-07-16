// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_activation_buffer.h for the primary calling header

#include "Vtb_activation_buffer__pch.h"
#include "Vtb_activation_buffer__Syms.h"
#include "Vtb_activation_buffer___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_activation_buffer___024root___dump_triggers__act(Vtb_activation_buffer___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_activation_buffer___024root___eval_triggers__act(Vtb_activation_buffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_activation_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_activation_buffer___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->tb_activation_buffer__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_activation_buffer__DOT__clk__0))) 
                                     | ((~ (IData)(vlSelf->tb_activation_buffer__DOT__ib_rst_n)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_activation_buffer__DOT__ib_rst_n__0))));
    vlSelf->__VactTriggered.set(1U, (((~ (IData)(vlSelf->tb_activation_buffer__DOT__bf_rst_n)) 
                                      & (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_activation_buffer__DOT__bf_rst_n__0)) 
                                     | ((IData)(vlSelf->tb_activation_buffer__DOT__clk) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_activation_buffer__DOT__clk__0)))));
    vlSelf->__VactTriggered.set(2U, (((~ (IData)(vlSelf->tb_activation_buffer__DOT__act_rst_n)) 
                                      & (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_activation_buffer__DOT__act_rst_n__0)) 
                                     | ((IData)(vlSelf->tb_activation_buffer__DOT__clk) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_activation_buffer__DOT__clk__0)))));
    vlSelf->__VactTriggered.set(3U, ((IData)(vlSelf->tb_activation_buffer__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_activation_buffer__DOT__clk__0))));
    vlSelf->__VactTriggered.set(4U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__tb_activation_buffer__DOT__clk__0 
        = vlSelf->tb_activation_buffer__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__tb_activation_buffer__DOT__ib_rst_n__0 
        = vlSelf->tb_activation_buffer__DOT__ib_rst_n;
    vlSelf->__Vtrigprevexpr___TOP__tb_activation_buffer__DOT__bf_rst_n__0 
        = vlSelf->tb_activation_buffer__DOT__bf_rst_n;
    vlSelf->__Vtrigprevexpr___TOP__tb_activation_buffer__DOT__act_rst_n__0 
        = vlSelf->tb_activation_buffer__DOT__act_rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_activation_buffer___024root___dump_triggers__act(vlSelf);
    }
#endif
}
