// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_tpu_top.h for the primary calling header

#include "Vtb_tpu_top__pch.h"
#include "Vtb_tpu_top__Syms.h"
#include "Vtb_tpu_top___024root.h"

VL_ATTR_COLD void Vtb_tpu_top___024root___eval_initial__TOP(Vtb_tpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_tpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tpu_top___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x5f746f70U;
    __Vtemp_1[2U] = 0x5f747075U;
    __Vtemp_1[3U] = 0x7462U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelf->tb_tpu_top__DOT__dut__DOT__activation_bank_out[0U] 
        = (0xffffU & vlSelf->tb_tpu_top__DOT__dut__DOT__activation_bank_out[0U]);
    vlSelf->tb_tpu_top__DOT__dut__DOT__activation_bank_out[1U] = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__activation_bank_out[2U] = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__activation_bank_out[3U] = 0U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_tpu_top___024root___dump_triggers__stl(Vtb_tpu_top___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_tpu_top___024root___eval_triggers__stl(Vtb_tpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_tpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tpu_top___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_tpu_top___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
