// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_tpu_top.h for the primary calling header

#include "Vtb_tpu_top__pch.h"
#include "Vtb_tpu_top___024root.h"

VL_ATTR_COLD void Vtb_tpu_top___024root___eval_static__TOP(Vtb_tpu_top___024root* vlSelf);

VL_ATTR_COLD void Vtb_tpu_top___024root___eval_static(Vtb_tpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_tpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tpu_top___024root___eval_static\n"); );
    // Body
    Vtb_tpu_top___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtb_tpu_top___024root___eval_static__TOP(Vtb_tpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_tpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tpu_top___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->tb_tpu_top__DOT__errors = 0U;
    vlSelf->tb_tpu_top__DOT__checks = 0U;
    vlSelf->tb_tpu_top__DOT__clk = 0U;
    vlSelf->tb_tpu_top__DOT__last_group_row = 0U;
}

VL_ATTR_COLD void Vtb_tpu_top___024root___eval_final(Vtb_tpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_tpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tpu_top___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_tpu_top___024root___dump_triggers__stl(Vtb_tpu_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_tpu_top___024root___eval_phase__stl(Vtb_tpu_top___024root* vlSelf);

VL_ATTR_COLD void Vtb_tpu_top___024root___eval_settle(Vtb_tpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_tpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tpu_top___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtb_tpu_top___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb/tb_tpu_top.sv", 22, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_tpu_top___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_tpu_top___024root___dump_triggers__stl(Vtb_tpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_tpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tpu_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*4:0*/, 128> Vtb_tpu_top__ConstPool__TABLE_h73872590_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_tpu_top__ConstPool__TABLE_h95214b9c_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_tpu_top__ConstPool__TABLE_he5d58018_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_tpu_top__ConstPool__TABLE_h26d33955_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_tpu_top__ConstPool__TABLE_hfc07e341_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_tpu_top__ConstPool__TABLE_h25f53c5b_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_tpu_top__ConstPool__TABLE_hb598fdfd_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_tpu_top__ConstPool__TABLE_h2fe71d6b_0;

VL_ATTR_COLD void Vtb_tpu_top___024root___stl_sequent__TOP__0(Vtb_tpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_tpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tpu_top___024root___stl_sequent__TOP__0\n"); );
    // Init
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
    // Body
    vlSelf->tb_tpu_top__DOT__dut__DOT__accum_state = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__tile_clr = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__clr_a = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__clr_b = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__weight_fifo_empty 
        = (0U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__count));
    vlSelf->tb_tpu_top__DOT__dut__DOT__weight_fifo_full 
        = (4U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__count));
    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__buff_a_full 
        = (0x10U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__curr_count));
    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__buff_a_empty 
        = (0U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__curr_count));
    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__buff_b_full 
        = (0x10U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__curr_count));
    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__buff_b_empty 
        = (0U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__curr_count));
    vlSelf->tb_tpu_top__DOT__dut__DOT__func_clr = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__prefill_en = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__prefill_clr = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__preload_clr = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__compute_clr = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__preload_en = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__compute_en = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__drain_en = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__fifo_we = 0U;
    if ((0U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__count))) {
        vlSelf->tb_tpu_top__DOT__dut__DOT__weight_data_out 
            = vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q
            [vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__getPtr];
    }
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
    vlSelf->tb_tpu_top__DOT__dut__DOT____VdfgExtracted_hf6a6c9db__0 
        = ((8U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count)) 
           & (3U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__funcs_count)));
    vlSelf->tb_tpu_top__DOT__dut__DOT____VdfgExtracted_h621a341a__0 
        = ((3U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__funcs_count)) 
           & (8U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count)));
    vlSelf->tb_tpu_top__DOT__dut__DOT__tile_done = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__drain_state = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__compute_state = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__preload_state = 0U;
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
    vlSelf->tb_tpu_top__DOT__dut__DOT__drain_clr = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__func_en = 0U;
    if ((0U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state))) {
        if ((1U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state))) {
            if ((2U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state))) {
                if ((3U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state))) {
                    if ((4U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state))) {
                        if ((5U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state))) {
                            vlSelf->tb_tpu_top__DOT__dut__DOT__accum_state = 1U;
                            if ((1U & (~ (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT____VdfgExtracted_hf6a6c9db__0)))) {
                                if ((1U & (~ (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT____VdfgExtracted_h621a341a__0)))) {
                                    vlSelf->tb_tpu_top__DOT__dut__DOT__drain_clr = 1U;
                                    vlSelf->tb_tpu_top__DOT__dut__DOT__func_en = 1U;
                                }
                            }
                        }
                        if ((5U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state))) {
                            if ((6U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state))) {
                                vlSelf->tb_tpu_top__DOT__dut__DOT__tile_clr = 1U;
                            }
                        }
                    }
                    if ((4U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state))) {
                        if ((4U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__drain_count))) {
                            vlSelf->tb_tpu_top__DOT__dut__DOT__compute_clr = 1U;
                            vlSelf->tb_tpu_top__DOT__dut__DOT__drain_en = 1U;
                        }
                        vlSelf->tb_tpu_top__DOT__dut__DOT__drain_state = 1U;
                    }
                }
                if ((3U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state))) {
                    if ((7U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__compute_count))) {
                        vlSelf->tb_tpu_top__DOT__dut__DOT__preload_clr = 1U;
                        vlSelf->tb_tpu_top__DOT__dut__DOT__compute_en = 1U;
                    }
                    if ((7U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__compute_count))) {
                        vlSelf->tb_tpu_top__DOT__dut__DOT__tile_done = 1U;
                    }
                    vlSelf->tb_tpu_top__DOT__dut__DOT__compute_state = 1U;
                }
            }
            if ((2U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state))) {
                if ((8U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__preload_count))) {
                    vlSelf->tb_tpu_top__DOT__dut__DOT__func_clr = 1U;
                    vlSelf->tb_tpu_top__DOT__dut__DOT__prefill_clr = 1U;
                    vlSelf->tb_tpu_top__DOT__dut__DOT__preload_en = 1U;
                }
                vlSelf->tb_tpu_top__DOT__dut__DOT__preload_state = 1U;
            }
        }
        if ((1U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state))) {
            if ((0x10U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__prefill_count))) {
                vlSelf->tb_tpu_top__DOT__dut__DOT__prefill_en = 1U;
            }
        }
    }
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
    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__re_a = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__re_b = 0U;
    __Vtableidx1 = (((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_done) 
                     << 6U) | (((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__compute_state) 
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
                     << 6U) | (((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__compute_state) 
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
    vlSelf->tb_tpu_top__DOT__dut__DOT__weight_data_valid = 0U;
    if ((0U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__current_state))) {
        if ((1U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__current_state))) {
            if (((4U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__count)) 
                 & (1U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state)))) {
                vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__fifo_we = 1U;
            }
        }
        if ((1U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__current_state))) {
            if ((2U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__current_state))) {
                if (((0U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__count)) 
                     & (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__preload_state))) {
                    vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__fifo_re = 1U;
                    vlSelf->tb_tpu_top__DOT__dut__DOT__weight_data_valid = 1U;
                }
            }
        }
    }
    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__first_pass_b = 0U;
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
    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__first_pass_a = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__B__DOT__next_state 
        = vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__B__DOT__current_state;
    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__buff_b_active = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__buff_b_bs = 0U;
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
                              & ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__compute_state) 
                                 | (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__drain_state))) 
                             & (~ (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__B__DOT__o_bank_reg)))) {
                            vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__re_b = 1U;
                        }
                    }
                }
            }
            if ((1U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__B__DOT__current_state))) {
                if ((0x10U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__curr_count))) {
                    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__first_pass_b = 1U;
                }
            } else if ((2U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__B__DOT__current_state))) {
                if ((1U & (~ (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__preload_state)))) {
                    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__first_pass_b = 1U;
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
                      & ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__compute_state) 
                         | (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__drain_state))) 
                     & (~ (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__B__DOT__o_bank_reg)))) {
                    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__B__DOT__next_state = 3U;
                    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__buff_b_active = 1U;
                } else if ((((8U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count)) 
                             & (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__B__DOT__o_bank_reg)) 
                            & (~ (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__buff_b_active)))) {
                    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__buff_b_bs = 1U;
                    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__B__DOT__next_state = 5U;
                } else if ((8U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count))) {
                    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__B__DOT__next_state = 7U;
                }
            } else if ((4U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__B__DOT__current_state))) {
                vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__B__DOT__next_state 
                    = ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__compute_state)
                        ? 5U : 4U);
            } else if ((5U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__B__DOT__current_state))) {
                if ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__compute_state) 
                      | (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__drain_state)) 
                     & (0x10U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__curr_count)))) {
                    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__B__DOT__next_state = 6U;
                    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__buff_b_bs = 1U;
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
    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__buff_a_bs = 0U;
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
                              & ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__compute_state) 
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
                vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__first_pass_a = 1U;
                vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__A__DOT__next_state = 1U;
            } else {
                vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__A__DOT__next_state = 0U;
            }
        } else if ((1U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__A__DOT__current_state))) {
            if ((0x10U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__curr_count))) {
                vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__we_a = 1U;
                vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__first_pass_a = 1U;
            }
            vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__A__DOT__next_state 
                = ((0x10U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__curr_count))
                    ? 2U : 1U);
        } else if ((2U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__A__DOT__current_state))) {
            if ((1U & (~ (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__preload_state)))) {
                vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__we_a = 1U;
                vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__first_pass_a = 1U;
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
                      & ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__compute_state) 
                         | (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__drain_state))) 
                     & (~ (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__A__DOT__o_bank_reg)))) {
                    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__A__DOT__next_state = 3U;
                    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__buff_a_active = 1U;
                } else if ((((8U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count)) 
                             & (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__A__DOT__o_bank_reg)) 
                            & (~ (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__buff_a_active)))) {
                    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__buff_a_bs = 1U;
                    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__A__DOT__next_state = 5U;
                } else if ((8U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count))) {
                    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__A__DOT__next_state = 7U;
                }
            } else if ((4U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__A__DOT__current_state))) {
                vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__A__DOT__next_state 
                    = ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__compute_state)
                        ? 5U : 4U);
            } else if ((5U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__A__DOT__current_state))) {
                if ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__compute_state) 
                      | (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__drain_state)) 
                     & (0x10U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__curr_count)))) {
                    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__A__DOT__next_state = 6U;
                    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__buff_a_bs = 1U;
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
    if (vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__first_pass_a) {
        vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__we_valid_a = 1U;
    }
    if ((1U & (~ (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__buff_a_active)))) {
        if (vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__buff_b_active) {
            vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__we_valid_a = 1U;
        }
    }
    if (vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__first_pass_a) {
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
    if (vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__first_pass_a) {
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

VL_ATTR_COLD void Vtb_tpu_top___024root___eval_stl(Vtb_tpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_tpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tpu_top___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_tpu_top___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vtb_tpu_top___024root___eval_triggers__stl(Vtb_tpu_top___024root* vlSelf);

VL_ATTR_COLD bool Vtb_tpu_top___024root___eval_phase__stl(Vtb_tpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_tpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tpu_top___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_tpu_top___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_tpu_top___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_tpu_top___024root___dump_triggers__act(Vtb_tpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_tpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tpu_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_tpu_top.clk or negedge tb_tpu_top.rst_n)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge tb_tpu_top.clk)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_tpu_top___024root___dump_triggers__nba(Vtb_tpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_tpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tpu_top___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_tpu_top.clk or negedge tb_tpu_top.rst_n)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge tb_tpu_top.clk)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_tpu_top___024root___ctor_var_reset(Vtb_tpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_tpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tpu_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->tb_tpu_top__DOT__errors = 0;
    vlSelf->tb_tpu_top__DOT__checks = 0;
    vlSelf->tb_tpu_top__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_tpu_top__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->tb_tpu_top__DOT__start = VL_RAND_RESET_I(1);
    vlSelf->tb_tpu_top__DOT__tpu_in = VL_RAND_RESET_I(32);
    vlSelf->tb_tpu_top__DOT__op_code = VL_RAND_RESET_I(32);
    vlSelf->tb_tpu_top__DOT__last_group_row = VL_RAND_RESET_I(32);
    vlSelf->tb_tpu_top__DOT__unnamedblk2__DOT__n = 0;
    vlSelf->tb_tpu_top__DOT__unnamedblk2__DOT__group1_row = VL_RAND_RESET_I(32);
    vlSelf->tb_tpu_top__DOT__unnamedblk2__DOT__unnamedblk3__DOT__t = 0;
    vlSelf->tb_tpu_top__DOT__unnamedblk2__DOT__unnamedblk4__DOT__t = 0;
    vlSelf->tb_tpu_top__DOT__unnamedblk2__DOT__unnamedblk5__DOT__trial = 0;
    vlSelf->tb_tpu_top__DOT__dut__DOT__preload_state = VL_RAND_RESET_I(1);
    vlSelf->tb_tpu_top__DOT__dut__DOT__weight_fifo_full = VL_RAND_RESET_I(1);
    vlSelf->tb_tpu_top__DOT__dut__DOT__weight_fifo_empty = VL_RAND_RESET_I(1);
    vlSelf->tb_tpu_top__DOT__dut__DOT__weight_data_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_tpu_top__DOT__dut__DOT__weight_data_out = VL_RAND_RESET_I(32);
    vlSelf->tb_tpu_top__DOT__dut__DOT__weight_bank_out = VL_RAND_RESET_I(32);
    vlSelf->tb_tpu_top__DOT__dut__DOT__compute_state = VL_RAND_RESET_I(1);
    vlSelf->tb_tpu_top__DOT__dut__DOT__drain_state = VL_RAND_RESET_I(1);
    vlSelf->tb_tpu_top__DOT__dut__DOT__tile_done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->tb_tpu_top__DOT__dut__DOT__activation_bank_out);
    vlSelf->tb_tpu_top__DOT__dut__DOT__systolic_act_in_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_tpu_top__DOT__dut__DOT__relu_drain_state = VL_RAND_RESET_I(1);
    vlSelf->tb_tpu_top__DOT__dut__DOT__relu_accum_state = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->tb_tpu_top__DOT__dut__DOT__relu_out);
    vlSelf->tb_tpu_top__DOT__dut__DOT__relu_out_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_tpu_top__DOT__dut__DOT__accum_state = VL_RAND_RESET_I(1);
    vlSelf->tb_tpu_top__DOT__dut__DOT__requant_out_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_tpu_top__DOT__dut__DOT__current_state = VL_RAND_RESET_I(5);
    vlSelf->tb_tpu_top__DOT__dut__DOT__next_state = VL_RAND_RESET_I(5);
    vlSelf->tb_tpu_top__DOT__dut__DOT__prefill_en = VL_RAND_RESET_I(1);
    vlSelf->tb_tpu_top__DOT__dut__DOT__prefill_clr = VL_RAND_RESET_I(1);
    vlSelf->tb_tpu_top__DOT__dut__DOT__preload_en = VL_RAND_RESET_I(1);
    vlSelf->tb_tpu_top__DOT__dut__DOT__preload_clr = VL_RAND_RESET_I(1);
    vlSelf->tb_tpu_top__DOT__dut__DOT__compute_en = VL_RAND_RESET_I(1);
    vlSelf->tb_tpu_top__DOT__dut__DOT__compute_clr = VL_RAND_RESET_I(1);
    vlSelf->tb_tpu_top__DOT__dut__DOT__drain_en = VL_RAND_RESET_I(1);
    vlSelf->tb_tpu_top__DOT__dut__DOT__drain_clr = VL_RAND_RESET_I(1);
    vlSelf->tb_tpu_top__DOT__dut__DOT__func_en = VL_RAND_RESET_I(1);
    vlSelf->tb_tpu_top__DOT__dut__DOT__func_clr = VL_RAND_RESET_I(1);
    vlSelf->tb_tpu_top__DOT__dut__DOT__tile_en = VL_RAND_RESET_I(1);
    vlSelf->tb_tpu_top__DOT__dut__DOT__tile_clr = VL_RAND_RESET_I(1);
    vlSelf->tb_tpu_top__DOT__dut__DOT__prefill_count = VL_RAND_RESET_I(8);
    vlSelf->tb_tpu_top__DOT__dut__DOT__preload_count = VL_RAND_RESET_I(8);
    vlSelf->tb_tpu_top__DOT__dut__DOT__compute_count = VL_RAND_RESET_I(8);
    vlSelf->tb_tpu_top__DOT__dut__DOT__drain_count = VL_RAND_RESET_I(8);
    vlSelf->tb_tpu_top__DOT__dut__DOT__funcs_count = VL_RAND_RESET_I(8);
    vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(128, vlSelf->tb_tpu_top__DOT__dut__DOT____Vcellout__a_buff__output_buff);
    vlSelf->tb_tpu_top__DOT__dut__DOT____Vcellout__req__out = VL_RAND_RESET_I(32);
    vlSelf->tb_tpu_top__DOT__dut__DOT____VdfgExtracted_hf6a6c9db__0 = VL_RAND_RESET_I(1);
    vlSelf->tb_tpu_top__DOT__dut__DOT____VdfgExtracted_h621a341a__0 = VL_RAND_RESET_I(1);
    vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__fifo_re = VL_RAND_RESET_I(1);
    vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__fifo_we = VL_RAND_RESET_I(1);
    vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__current_state = VL_RAND_RESET_I(5);
    vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__next_state = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__Q[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__putPtr = VL_RAND_RESET_I(2);
    vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__getPtr = VL_RAND_RESET_I(2);
    vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__count = VL_RAND_RESET_I(4);
    vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__first_packet = VL_RAND_RESET_I(8);
    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__we_a = VL_RAND_RESET_I(1);
    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__re_a = VL_RAND_RESET_I(1);
    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__clr_a = VL_RAND_RESET_I(1);
    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__re_valid_a = VL_RAND_RESET_I(1);
    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__we_valid_a = VL_RAND_RESET_I(1);
    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__buff_a_empty = VL_RAND_RESET_I(1);
    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__buff_a_full = VL_RAND_RESET_I(1);
    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__buff_a_active = VL_RAND_RESET_I(1);
    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__first_pass_a = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__write_in_a);
    VL_RAND_RESET_W(128, vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__re_out_a);
    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__we_b = VL_RAND_RESET_I(1);
    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__re_b = VL_RAND_RESET_I(1);
    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__clr_b = VL_RAND_RESET_I(1);
    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__re_valid_b = VL_RAND_RESET_I(1);
    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__we_valid_b = VL_RAND_RESET_I(1);
    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__buff_b_empty = VL_RAND_RESET_I(1);
    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__buff_b_full = VL_RAND_RESET_I(1);
    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__buff_b_active = VL_RAND_RESET_I(1);
    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__first_pass_b = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__write_in_b);
    VL_RAND_RESET_W(128, vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__re_out_b);
    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__buff_a_bs = VL_RAND_RESET_I(1);
    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__buff_b_bs = VL_RAND_RESET_I(1);
    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__A__DOT__current_state = VL_RAND_RESET_I(6);
    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__A__DOT__next_state = VL_RAND_RESET_I(6);
    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__A__DOT__o_bank_reg = VL_RAND_RESET_I(1);
    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__B__DOT__current_state = VL_RAND_RESET_I(6);
    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__B__DOT__next_state = VL_RAND_RESET_I(6);
    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__B__DOT__o_bank_reg = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__buff);
    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_A__DOT__curr_count = VL_RAND_RESET_I(10);
    VL_RAND_RESET_W(128, vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__buff);
    vlSelf->tb_tpu_top__DOT__dut__DOT__a_buff__DOT__BUFF_B__DOT__curr_count = VL_RAND_RESET_I(10);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__h_en_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__h_en_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__h_en_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__h_en_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__v_en_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__v_en_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__v_en_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__v_en_3 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(512, vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_down_out);
    VL_RAND_RESET_W(512, vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_right_out);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__val_act_in = VL_RAND_RESET_I(32);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_0_0__right_out = VL_RAND_RESET_I(8);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_0_0__down_out = VL_RAND_RESET_I(32);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_0_1__right_out = VL_RAND_RESET_I(8);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_0_1__down_out = VL_RAND_RESET_I(32);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_0_2__right_out = VL_RAND_RESET_I(8);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_0_2__down_out = VL_RAND_RESET_I(32);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_0_3__right_out = VL_RAND_RESET_I(8);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_0_3__down_out = VL_RAND_RESET_I(32);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_1_0__right_out = VL_RAND_RESET_I(8);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_1_0__down_out = VL_RAND_RESET_I(32);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_1_1__right_out = VL_RAND_RESET_I(8);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_1_1__down_out = VL_RAND_RESET_I(32);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_1_2__right_out = VL_RAND_RESET_I(8);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_1_2__down_out = VL_RAND_RESET_I(32);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_1_3__right_out = VL_RAND_RESET_I(8);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_1_3__down_out = VL_RAND_RESET_I(32);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_2_0__right_out = VL_RAND_RESET_I(8);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_2_0__down_out = VL_RAND_RESET_I(32);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_2_1__right_out = VL_RAND_RESET_I(8);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_2_1__down_out = VL_RAND_RESET_I(32);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_2_2__right_out = VL_RAND_RESET_I(8);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_2_2__down_out = VL_RAND_RESET_I(32);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_2_3__right_out = VL_RAND_RESET_I(8);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_2_3__down_out = VL_RAND_RESET_I(32);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_3_0__right_out = VL_RAND_RESET_I(8);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_3_0__down_out = VL_RAND_RESET_I(32);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_3_1__right_out = VL_RAND_RESET_I(8);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_3_1__down_out = VL_RAND_RESET_I(32);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_3_2__right_out = VL_RAND_RESET_I(8);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_3_2__down_out = VL_RAND_RESET_I(32);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_3_3__right_out = VL_RAND_RESET_I(8);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT____Vcellout__pe_3_3__down_out = VL_RAND_RESET_I(32);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__e_fsm_1__DOT__current_state = VL_RAND_RESET_I(5);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__e_fsm_1__DOT__next_state = VL_RAND_RESET_I(5);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__v_fsm_1__DOT__current_state = VL_RAND_RESET_I(5);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__v_fsm_1__DOT__next_state = VL_RAND_RESET_I(5);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_0__DOT__a_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_0__DOT__b_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_0__DOT__product_reg = VL_RAND_RESET_I(16);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_0__DOT__accum_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_1__DOT__a_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_1__DOT__b_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_1__DOT__product_reg = VL_RAND_RESET_I(16);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_1__DOT__accum_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_2__DOT__a_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_2__DOT__b_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_2__DOT__product_reg = VL_RAND_RESET_I(16);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_2__DOT__accum_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_3__DOT__a_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_3__DOT__b_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_3__DOT__product_reg = VL_RAND_RESET_I(16);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_0_3__DOT__accum_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_0__DOT__a_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_0__DOT__b_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_0__DOT__product_reg = VL_RAND_RESET_I(16);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_0__DOT__accum_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_1__DOT__a_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_1__DOT__b_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_1__DOT__product_reg = VL_RAND_RESET_I(16);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_1__DOT__accum_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_2__DOT__a_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_2__DOT__b_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_2__DOT__product_reg = VL_RAND_RESET_I(16);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_2__DOT__accum_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_3__DOT__a_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_3__DOT__b_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_3__DOT__product_reg = VL_RAND_RESET_I(16);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_1_3__DOT__accum_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_0__DOT__a_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_0__DOT__b_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_0__DOT__product_reg = VL_RAND_RESET_I(16);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_0__DOT__accum_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_1__DOT__a_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_1__DOT__b_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_1__DOT__product_reg = VL_RAND_RESET_I(16);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_1__DOT__accum_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_2__DOT__a_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_2__DOT__b_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_2__DOT__product_reg = VL_RAND_RESET_I(16);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_2__DOT__accum_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_3__DOT__a_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_3__DOT__b_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_3__DOT__product_reg = VL_RAND_RESET_I(16);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_2_3__DOT__accum_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_0__DOT__a_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_0__DOT__b_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_0__DOT__product_reg = VL_RAND_RESET_I(16);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_0__DOT__accum_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_1__DOT__a_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_1__DOT__b_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_1__DOT__product_reg = VL_RAND_RESET_I(16);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_1__DOT__accum_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_2__DOT__a_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_2__DOT__b_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_2__DOT__product_reg = VL_RAND_RESET_I(16);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_2__DOT__accum_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_3__DOT__a_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_3__DOT__b_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_3__DOT__product_reg = VL_RAND_RESET_I(16);
    vlSelf->tb_tpu_top__DOT__dut__DOT__sys_array__DOT__pe_3_3__DOT__accum_reg = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, vlSelf->tb_tpu_top__DOT__dut__DOT__req__DOT__shift_buffer);
    vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__tile_idx = VL_RAND_RESET_I(8);
    vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__preload_state_d = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__captured[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__capture_ptr = VL_RAND_RESET_I(5);
    vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__capture_count = VL_RAND_RESET_I(32);
    VL_ZERO_RESET_W(115, vlSelf->__VdfgTmp_hfccefdc9__0);
    vlSelf->__Vtrigprevexpr___TOP__tb_tpu_top__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_tpu_top__DOT__rst_n__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
