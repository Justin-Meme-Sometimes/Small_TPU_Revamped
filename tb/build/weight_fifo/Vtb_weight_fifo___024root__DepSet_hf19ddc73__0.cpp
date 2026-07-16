// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_weight_fifo.h for the primary calling header

#include "Vtb_weight_fifo__pch.h"
#include "Vtb_weight_fifo__Syms.h"
#include "Vtb_weight_fifo___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_weight_fifo___024root___dump_triggers__act(Vtb_weight_fifo___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_weight_fifo___024root___eval_triggers__act(Vtb_weight_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_weight_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_weight_fifo___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->tb_weight_fifo__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_weight_fifo__DOT__clk__0))) 
                                     | ((~ (IData)(vlSelf->tb_weight_fifo__DOT__reset_n)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_weight_fifo__DOT__reset_n__0))));
    vlSelf->__VactTriggered.set(1U, (((IData)(vlSelf->tb_weight_fifo__DOT__clk2) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_weight_fifo__DOT__clk2__0))) 
                                     | ((~ (IData)(vlSelf->tb_weight_fifo__DOT__rst_n2)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_weight_fifo__DOT__rst_n2__0))));
    vlSelf->__VactTriggered.set(2U, ((IData)(vlSelf->tb_weight_fifo__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_weight_fifo__DOT__clk__0))));
    vlSelf->__VactTriggered.set(3U, ((~ (IData)(vlSelf->tb_weight_fifo__DOT__clk)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_weight_fifo__DOT__clk__0)));
    vlSelf->__VactTriggered.set(4U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(5U, ((IData)(vlSelf->tb_weight_fifo__DOT__clk2) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_weight_fifo__DOT__clk2__0))));
    vlSelf->__Vtrigprevexpr___TOP__tb_weight_fifo__DOT__clk__0 
        = vlSelf->tb_weight_fifo__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__tb_weight_fifo__DOT__reset_n__0 
        = vlSelf->tb_weight_fifo__DOT__reset_n;
    vlSelf->__Vtrigprevexpr___TOP__tb_weight_fifo__DOT__clk2__0 
        = vlSelf->tb_weight_fifo__DOT__clk2;
    vlSelf->__Vtrigprevexpr___TOP__tb_weight_fifo__DOT__rst_n2__0 
        = vlSelf->tb_weight_fifo__DOT__rst_n2;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_weight_fifo___024root___dump_triggers__act(vlSelf);
    }
#endif
}
