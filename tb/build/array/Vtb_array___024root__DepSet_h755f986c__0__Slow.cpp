// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_array.h for the primary calling header

#include "Vtb_array__pch.h"
#include "Vtb_array___024root.h"

VL_ATTR_COLD void Vtb_array___024root___eval_static__TOP(Vtb_array___024root* vlSelf);

VL_ATTR_COLD void Vtb_array___024root___eval_static(Vtb_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_array___024root___eval_static\n"); );
    // Body
    Vtb_array___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vtb_array___024root___eval_static__TOP(Vtb_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_array___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->tb_array__DOT__errors = 0U;
    vlSelf->tb_array__DOT__checks = 0U;
    vlSelf->tb_array__DOT__clk = 0U;
}

VL_ATTR_COLD void Vtb_array___024root___eval_final(Vtb_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_array___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_array___024root___dump_triggers__stl(Vtb_array___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_array___024root___eval_phase__stl(Vtb_array___024root* vlSelf);

VL_ATTR_COLD void Vtb_array___024root___eval_settle(Vtb_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_array___024root___eval_settle\n"); );
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
            Vtb_array___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb/tb_array.sv", 5, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_array___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_array___024root___dump_triggers__stl(Vtb_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_array___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*4:0*/, 128> Vtb_array__ConstPool__TABLE_h73872590_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_array__ConstPool__TABLE_hb598fdfd_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_array__ConstPool__TABLE_h2fe71d6b_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_array__ConstPool__TABLE_h95214b9c_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_array__ConstPool__TABLE_he5d58018_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_array__ConstPool__TABLE_h26d33955_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_array__ConstPool__TABLE_hfc07e341_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_array__ConstPool__TABLE_h25f53c5b_0;

VL_ATTR_COLD void Vtb_array___024root___stl_sequent__TOP__0(Vtb_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_array___024root___stl_sequent__TOP__0\n"); );
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
    __Vtableidx4 = (((IData)(vlSelf->tb_array__DOT__arr_tile_done) 
                     << 6U) | (((IData)(vlSelf->tb_array__DOT__arr_compute_start) 
                                << 5U) | (IData)(vlSelf->tb_array__DOT__arr_dut__DOT__v_fsm_1__DOT__current_state)));
    vlSelf->tb_array__DOT__arr_dut__DOT__v_fsm_1__DOT__next_state 
        = Vtb_array__ConstPool__TABLE_h73872590_0[__Vtableidx4];
    vlSelf->tb_array__DOT__arr_dut__DOT__v_en_1 = Vtb_array__ConstPool__TABLE_hb598fdfd_0
        [__Vtableidx4];
    vlSelf->tb_array__DOT__arr_dut__DOT__v_en_0 = Vtb_array__ConstPool__TABLE_h2fe71d6b_0
        [__Vtableidx4];
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
}

VL_ATTR_COLD void Vtb_array___024root___eval_stl(Vtb_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_array___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_array___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_array___024root___eval_triggers__stl(Vtb_array___024root* vlSelf);

VL_ATTR_COLD bool Vtb_array___024root___eval_phase__stl(Vtb_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_array___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_array___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_array___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_array___024root___dump_triggers__act(Vtb_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_array___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_array.clk or negedge tb_array.h_rst_n)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge tb_array.clk or negedge tb_array.v_rst_n)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge tb_array.arr_rst_n or posedge tb_array.clk)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge tb_array.clk)\n");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_array___024root___dump_triggers__nba(Vtb_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_array___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_array.clk or negedge tb_array.h_rst_n)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge tb_array.clk or negedge tb_array.v_rst_n)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge tb_array.arr_rst_n or posedge tb_array.clk)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge tb_array.clk)\n");
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_array___024root___ctor_var_reset(Vtb_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_array___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->tb_array__DOT__errors = 0;
    vlSelf->tb_array__DOT__checks = 0;
    vlSelf->tb_array__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_array__DOT__h_rst_n = VL_RAND_RESET_I(1);
    vlSelf->tb_array__DOT__h_start = VL_RAND_RESET_I(1);
    vlSelf->tb_array__DOT__h_tile_done = VL_RAND_RESET_I(1);
    vlSelf->tb_array__DOT__h_en_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_array__DOT__h_en_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_array__DOT__h_en_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_array__DOT__h_en_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_array__DOT__v_rst_n = VL_RAND_RESET_I(1);
    vlSelf->tb_array__DOT__v_start = VL_RAND_RESET_I(1);
    vlSelf->tb_array__DOT__v_tile_done = VL_RAND_RESET_I(1);
    vlSelf->tb_array__DOT__v_en_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_array__DOT__v_en_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_array__DOT__v_en_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_array__DOT__v_en_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_array__DOT__arr_rst_n = VL_RAND_RESET_I(1);
    vlSelf->tb_array__DOT__arr_preload = VL_RAND_RESET_I(1);
    vlSelf->tb_array__DOT__arr_compute_start = VL_RAND_RESET_I(1);
    vlSelf->tb_array__DOT__arr_clr = VL_RAND_RESET_I(1);
    vlSelf->tb_array__DOT__arr_tile_done = VL_RAND_RESET_I(1);
    vlSelf->tb_array__DOT__arr_drain = VL_RAND_RESET_I(1);
    vlSelf->tb_array__DOT__arr_weight = VL_RAND_RESET_I(32);
    vlSelf->tb_array__DOT__arr_activation = VL_RAND_RESET_I(32);
    vlSelf->tb_array__DOT__arr_output_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_array__DOT__h_dut__DOT__current_state = VL_RAND_RESET_I(5);
    vlSelf->tb_array__DOT__h_dut__DOT__next_state = VL_RAND_RESET_I(5);
    vlSelf->tb_array__DOT__v_dut__DOT__current_state = VL_RAND_RESET_I(5);
    vlSelf->tb_array__DOT__v_dut__DOT__next_state = VL_RAND_RESET_I(5);
    vlSelf->tb_array__DOT__arr_dut__DOT__h_en_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_array__DOT__arr_dut__DOT__h_en_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_array__DOT__arr_dut__DOT__h_en_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_array__DOT__arr_dut__DOT__h_en_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_array__DOT__arr_dut__DOT__v_en_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_array__DOT__arr_dut__DOT__v_en_1 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(512, vlSelf->tb_array__DOT__arr_dut__DOT__pe_down_out);
    VL_RAND_RESET_W(512, vlSelf->tb_array__DOT__arr_dut__DOT__pe_right_out);
    vlSelf->tb_array__DOT__arr_dut__DOT__val_act_in = VL_RAND_RESET_I(32);
    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_0_0__right_out = VL_RAND_RESET_I(8);
    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_0_0__down_out = VL_RAND_RESET_I(32);
    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_0_1__right_out = VL_RAND_RESET_I(8);
    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_0_1__down_out = VL_RAND_RESET_I(32);
    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_0_2__right_out = VL_RAND_RESET_I(8);
    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_0_2__down_out = VL_RAND_RESET_I(32);
    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_0_3__right_out = VL_RAND_RESET_I(8);
    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_0_3__down_out = VL_RAND_RESET_I(32);
    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_1_0__right_out = VL_RAND_RESET_I(8);
    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_1_0__down_out = VL_RAND_RESET_I(32);
    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_1_1__right_out = VL_RAND_RESET_I(8);
    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_1_1__down_out = VL_RAND_RESET_I(32);
    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_1_2__right_out = VL_RAND_RESET_I(8);
    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_1_2__down_out = VL_RAND_RESET_I(32);
    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_1_3__right_out = VL_RAND_RESET_I(8);
    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_1_3__down_out = VL_RAND_RESET_I(32);
    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_2_0__right_out = VL_RAND_RESET_I(8);
    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_2_0__down_out = VL_RAND_RESET_I(32);
    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_2_1__right_out = VL_RAND_RESET_I(8);
    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_2_1__down_out = VL_RAND_RESET_I(32);
    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_2_2__right_out = VL_RAND_RESET_I(8);
    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_2_2__down_out = VL_RAND_RESET_I(32);
    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_2_3__right_out = VL_RAND_RESET_I(8);
    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_2_3__down_out = VL_RAND_RESET_I(32);
    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_3_0__right_out = VL_RAND_RESET_I(8);
    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_3_0__down_out = VL_RAND_RESET_I(32);
    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_3_1__right_out = VL_RAND_RESET_I(8);
    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_3_1__down_out = VL_RAND_RESET_I(32);
    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_3_2__right_out = VL_RAND_RESET_I(8);
    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_3_2__down_out = VL_RAND_RESET_I(32);
    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_3_3__right_out = VL_RAND_RESET_I(8);
    vlSelf->tb_array__DOT__arr_dut__DOT____Vcellout__pe_3_3__down_out = VL_RAND_RESET_I(32);
    vlSelf->tb_array__DOT__arr_dut__DOT__e_fsm_1__DOT__current_state = VL_RAND_RESET_I(5);
    vlSelf->tb_array__DOT__arr_dut__DOT__e_fsm_1__DOT__next_state = VL_RAND_RESET_I(5);
    vlSelf->tb_array__DOT__arr_dut__DOT__v_fsm_1__DOT__current_state = VL_RAND_RESET_I(5);
    vlSelf->tb_array__DOT__arr_dut__DOT__v_fsm_1__DOT__next_state = VL_RAND_RESET_I(5);
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_0__DOT__a_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_0__DOT__b_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_0__DOT__product_reg = VL_RAND_RESET_I(16);
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_0__DOT__accum_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_1__DOT__a_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_1__DOT__b_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_1__DOT__product_reg = VL_RAND_RESET_I(16);
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_1__DOT__accum_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_2__DOT__a_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_2__DOT__b_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_2__DOT__product_reg = VL_RAND_RESET_I(16);
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_2__DOT__accum_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_3__DOT__a_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_3__DOT__b_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_3__DOT__product_reg = VL_RAND_RESET_I(16);
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_0_3__DOT__accum_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_0__DOT__a_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_0__DOT__b_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_0__DOT__product_reg = VL_RAND_RESET_I(16);
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_0__DOT__accum_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_1__DOT__a_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_1__DOT__b_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_1__DOT__product_reg = VL_RAND_RESET_I(16);
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_1__DOT__accum_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_2__DOT__a_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_2__DOT__b_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_2__DOT__product_reg = VL_RAND_RESET_I(16);
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_2__DOT__accum_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_3__DOT__a_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_3__DOT__b_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_3__DOT__product_reg = VL_RAND_RESET_I(16);
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_1_3__DOT__accum_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_0__DOT__a_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_0__DOT__b_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_0__DOT__product_reg = VL_RAND_RESET_I(16);
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_0__DOT__accum_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_1__DOT__a_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_1__DOT__b_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_1__DOT__product_reg = VL_RAND_RESET_I(16);
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_1__DOT__accum_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_2__DOT__a_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_2__DOT__b_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_2__DOT__product_reg = VL_RAND_RESET_I(16);
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_2__DOT__accum_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_3__DOT__a_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_3__DOT__b_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_3__DOT__product_reg = VL_RAND_RESET_I(16);
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_2_3__DOT__accum_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_0__DOT__a_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_0__DOT__b_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_0__DOT__product_reg = VL_RAND_RESET_I(16);
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_0__DOT__accum_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_1__DOT__a_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_1__DOT__b_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_1__DOT__product_reg = VL_RAND_RESET_I(16);
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_1__DOT__accum_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_2__DOT__a_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_2__DOT__b_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_2__DOT__product_reg = VL_RAND_RESET_I(16);
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_2__DOT__accum_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_3__DOT__a_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_3__DOT__b_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_3__DOT__product_reg = VL_RAND_RESET_I(16);
    vlSelf->tb_array__DOT__arr_dut__DOT__pe_3_3__DOT__accum_reg = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__tb_array__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_array__DOT__h_rst_n__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_array__DOT__v_rst_n__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_array__DOT__arr_rst_n__0 = VL_RAND_RESET_I(1);
}
