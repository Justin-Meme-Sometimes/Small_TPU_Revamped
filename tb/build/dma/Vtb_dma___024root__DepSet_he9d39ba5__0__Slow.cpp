// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_dma.h for the primary calling header

#include "Vtb_dma__pch.h"
#include "Vtb_dma___024root.h"

VL_ATTR_COLD void Vtb_dma___024root___eval_static__TOP(Vtb_dma___024root* vlSelf);

VL_ATTR_COLD void Vtb_dma___024root___eval_static(Vtb_dma___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dma___024root___eval_static\n"); );
    // Body
    Vtb_dma___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vtb_dma___024root___eval_static__TOP(Vtb_dma___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dma___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->tb_dma__DOT__errors = 0U;
    vlSelf->tb_dma__DOT__checks = 0U;
    vlSelf->tb_dma__DOT__clk = 0U;
}

VL_ATTR_COLD void Vtb_dma___024root___eval_final(Vtb_dma___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dma___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_dma___024root___dump_triggers__stl(Vtb_dma___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_dma___024root___eval_phase__stl(Vtb_dma___024root* vlSelf);

VL_ATTR_COLD void Vtb_dma___024root___eval_settle(Vtb_dma___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dma___024root___eval_settle\n"); );
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
            Vtb_dma___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb/tb_dma.sv", 26, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_dma___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_dma___024root___dump_triggers__stl(Vtb_dma___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dma___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_dma___024root___stl_sequent__TOP__0(Vtb_dma___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dma___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->tb_dma__DOT__dut__DOT__bias_clr = 0U;
    vlSelf->tb_dma__DOT__dut__DOT__act_clr = 0U;
    vlSelf->tb_dma__DOT__dut__DOT__en_counter = 0U;
    vlSelf->tb_dma__DOT__dut__DOT__act_full = (0x10U 
                                               == (IData)(vlSelf->tb_dma__DOT__dut__DOT__act_buf__DOT__wr_ptr));
    vlSelf->tb_dma__DOT__dut__DOT__bias_full = (0x10U 
                                                == (IData)(vlSelf->tb_dma__DOT__dut__DOT__bias_buf__DOT__wr_ptr));
    vlSelf->tb_dma__DOT__dut__DOT__weight_full = (0x100U 
                                                  == (IData)(vlSelf->tb_dma__DOT__dut__DOT__weight_buf__DOT__wr_ptr));
    vlSelf->tb_dma__DOT__dut__DOT__result_full = (0x100U 
                                                  == (IData)(vlSelf->tb_dma__DOT__dut__DOT__result_buf__DOT__wr_ptr));
    vlSelf->tb_dma__DOT__dut__DOT__bias_we = 0U;
    if ((0U != (IData)(vlSelf->tb_dma__DOT__dut__DOT__b_fsm__DOT__current_state))) {
        if ((1U != (IData)(vlSelf->tb_dma__DOT__dut__DOT__b_fsm__DOT__current_state))) {
            if ((2U == (IData)(vlSelf->tb_dma__DOT__dut__DOT__b_fsm__DOT__current_state))) {
                vlSelf->tb_dma__DOT__dut__DOT__bias_clr = 1U;
            }
        }
        if ((1U == (IData)(vlSelf->tb_dma__DOT__dut__DOT__b_fsm__DOT__current_state))) {
            if ((0x10U != (IData)(vlSelf->tb_dma__DOT__dut__DOT__bias_buf__DOT__wr_ptr))) {
                vlSelf->tb_dma__DOT__dut__DOT__bias_we = 1U;
            }
        }
    }
    vlSelf->tb_dma__DOT__dut__DOT__act_we = 0U;
    if ((0U != (IData)(vlSelf->tb_dma__DOT__dut__DOT__a_fsm__DOT__current_state))) {
        if ((1U != (IData)(vlSelf->tb_dma__DOT__dut__DOT__a_fsm__DOT__current_state))) {
            if ((2U == (IData)(vlSelf->tb_dma__DOT__dut__DOT__a_fsm__DOT__current_state))) {
                vlSelf->tb_dma__DOT__dut__DOT__act_clr = 1U;
            }
        }
        if ((1U == (IData)(vlSelf->tb_dma__DOT__dut__DOT__a_fsm__DOT__current_state))) {
            if ((0x10U != (IData)(vlSelf->tb_dma__DOT__dut__DOT__act_buf__DOT__wr_ptr))) {
                vlSelf->tb_dma__DOT__dut__DOT__act_we = 1U;
            }
        }
    }
    vlSelf->tb_dma__DOT__dut__DOT__clr_counter = 0U;
    vlSelf->tb_dma__DOT__dut__DOT__result_re = 0U;
    vlSelf->tb_dma__DOT__dut__DOT__result_clr = 0U;
    if ((0U != (IData)(vlSelf->tb_dma__DOT__dut__DOT__r_fsm__DOT__current_state))) {
        if ((1U == (IData)(vlSelf->tb_dma__DOT__dut__DOT__r_fsm__DOT__current_state))) {
            vlSelf->tb_dma__DOT__dut__DOT__en_counter = 1U;
            if ((0x40U == (IData)(vlSelf->tb_dma__DOT__dut__DOT__read_count))) {
                vlSelf->tb_dma__DOT__dut__DOT__clr_counter = 1U;
                vlSelf->tb_dma__DOT__dut__DOT__result_clr = 1U;
            }
            if ((0x40U != (IData)(vlSelf->tb_dma__DOT__dut__DOT__read_count))) {
                vlSelf->tb_dma__DOT__dut__DOT__result_re = 1U;
            }
        }
    }
    vlSelf->tb_dma__DOT__dut__DOT__result_empty = ((IData)(vlSelf->tb_dma__DOT__dut__DOT__result_buf__DOT__rd_ptr) 
                                                   == (IData)(vlSelf->tb_dma__DOT__dut__DOT__result_buf__DOT__wr_ptr));
    vlSelf->tb_dma__DOT__dut__DOT__r_fsm__DOT__next_state 
        = vlSelf->tb_dma__DOT__dut__DOT__r_fsm__DOT__current_state;
    if ((0U == (IData)(vlSelf->tb_dma__DOT__dut__DOT__r_fsm__DOT__current_state))) {
        vlSelf->tb_dma__DOT__dut__DOT__r_fsm__DOT__next_state 
            = ((IData)(vlSelf->tb_dma__DOT__start_read_fsm)
                ? 1U : 0U);
    } else if ((1U == (IData)(vlSelf->tb_dma__DOT__dut__DOT__r_fsm__DOT__current_state))) {
        vlSelf->tb_dma__DOT__dut__DOT__r_fsm__DOT__next_state 
            = ((0x40U == (IData)(vlSelf->tb_dma__DOT__dut__DOT__read_count))
                ? 0U : 1U);
    }
    vlSelf->tb_dma__DOT__dut__DOT__b_fsm__DOT__next_state 
        = vlSelf->tb_dma__DOT__dut__DOT__b_fsm__DOT__current_state;
    if ((0U == (IData)(vlSelf->tb_dma__DOT__dut__DOT__b_fsm__DOT__current_state))) {
        vlSelf->tb_dma__DOT__dut__DOT__b_fsm__DOT__next_state 
            = (((IData)(vlSelf->tb_dma__DOT__bias_fsm_start) 
                & (~ (IData)(vlSelf->tb_dma__DOT__dut__DOT__b_fsm__DOT__any_busy)))
                ? 1U : 0U);
    } else if ((1U == (IData)(vlSelf->tb_dma__DOT__dut__DOT__b_fsm__DOT__current_state))) {
        vlSelf->tb_dma__DOT__dut__DOT__b_fsm__DOT__next_state 
            = ((0x10U == (IData)(vlSelf->tb_dma__DOT__dut__DOT__bias_buf__DOT__wr_ptr))
                ? 2U : 1U);
    } else if ((2U == (IData)(vlSelf->tb_dma__DOT__dut__DOT__b_fsm__DOT__current_state))) {
        vlSelf->tb_dma__DOT__dut__DOT__b_fsm__DOT__next_state = 0U;
    }
    vlSelf->tb_dma__DOT__dut__DOT__a_fsm__DOT__next_state 
        = vlSelf->tb_dma__DOT__dut__DOT__a_fsm__DOT__current_state;
    if ((0U == (IData)(vlSelf->tb_dma__DOT__dut__DOT__a_fsm__DOT__current_state))) {
        vlSelf->tb_dma__DOT__dut__DOT__a_fsm__DOT__next_state 
            = (((IData)(vlSelf->tb_dma__DOT__activation_fsm_start) 
                & (~ (IData)(vlSelf->tb_dma__DOT__dut__DOT__a_fsm__DOT__any_busy)))
                ? 1U : 0U);
    } else if ((1U == (IData)(vlSelf->tb_dma__DOT__dut__DOT__a_fsm__DOT__current_state))) {
        vlSelf->tb_dma__DOT__dut__DOT__a_fsm__DOT__next_state 
            = ((0x10U == (IData)(vlSelf->tb_dma__DOT__dut__DOT__act_buf__DOT__wr_ptr))
                ? 2U : 1U);
    } else if ((2U == (IData)(vlSelf->tb_dma__DOT__dut__DOT__a_fsm__DOT__current_state))) {
        vlSelf->tb_dma__DOT__dut__DOT__a_fsm__DOT__next_state = 0U;
    }
    vlSelf->tb_dma__DOT__dut__DOT__weight_we = 0U;
    if ((0U != (IData)(vlSelf->tb_dma__DOT__dut__DOT__w_fsm__DOT__current_state))) {
        if ((1U == (IData)(vlSelf->tb_dma__DOT__dut__DOT__w_fsm__DOT__current_state))) {
            if ((0x100U != (IData)(vlSelf->tb_dma__DOT__dut__DOT__weight_buf__DOT__wr_ptr))) {
                vlSelf->tb_dma__DOT__dut__DOT__weight_we = 1U;
            }
        }
    }
    vlSelf->tb_dma__DOT__dut__DOT__weight_empty = ((IData)(vlSelf->tb_dma__DOT__dut__DOT__weight_buf__DOT__rd_ptr) 
                                                   == (IData)(vlSelf->tb_dma__DOT__dut__DOT__weight_buf__DOT__wr_ptr));
    vlSelf->tb_dma__DOT__dut__DOT__any_busy = ((IData)(vlSelf->tb_dma__DOT__dut__DOT__activations_busy) 
                                               | ((IData)(vlSelf->tb_dma__DOT__dut__DOT__bias_busy) 
                                                  | (IData)(vlSelf->tb_dma__DOT__dut__DOT__weights_busy)));
    vlSelf->tb_dma__DOT__dut__DOT__weight_re = (1U 
                                                & (~ 
                                                   ((IData)(vlSelf->tb_dma__DOT__dut__DOT__weight_empty) 
                                                    | (IData)(vlSelf->tb_dma__DOT__dut__DOT__weight_we))));
    vlSelf->tb_dma__DOT__dut__DOT__weight_we_in = (0xffffff00U 
                                                   & vlSelf->tb_dma__DOT__dut__DOT__weight_we_in);
    vlSelf->tb_dma__DOT__dut__DOT__bias_we_in = (0xffffff00U 
                                                 & vlSelf->tb_dma__DOT__dut__DOT__bias_we_in);
    vlSelf->tb_dma__DOT__dut__DOT__act_we_in = (0xffffff00U 
                                                & vlSelf->tb_dma__DOT__dut__DOT__act_we_in);
    if ((1U & (~ (IData)(vlSelf->tb_dma__DOT__dut__DOT__any_busy)))) {
        if ((1U == (IData)(vlSelf->tb_dma__DOT__bank))) {
            vlSelf->tb_dma__DOT__dut__DOT__weight_we_in 
                = ((0xffffff00U & vlSelf->tb_dma__DOT__dut__DOT__weight_we_in) 
                   | (IData)(vlSelf->tb_dma__DOT__u_in));
        }
        if ((1U != (IData)(vlSelf->tb_dma__DOT__bank))) {
            if ((2U == (IData)(vlSelf->tb_dma__DOT__bank))) {
                vlSelf->tb_dma__DOT__dut__DOT__bias_we_in 
                    = ((0xffffff00U & vlSelf->tb_dma__DOT__dut__DOT__bias_we_in) 
                       | (IData)(vlSelf->tb_dma__DOT__u_in));
            }
            if ((2U != (IData)(vlSelf->tb_dma__DOT__bank))) {
                if ((3U == (IData)(vlSelf->tb_dma__DOT__bank))) {
                    vlSelf->tb_dma__DOT__dut__DOT__act_we_in 
                        = ((0xffffff00U & vlSelf->tb_dma__DOT__dut__DOT__act_we_in) 
                           | (IData)(vlSelf->tb_dma__DOT__u_in));
                }
            }
        }
    }
    vlSelf->tb_dma__DOT__dut__DOT__weight_clr = 0U;
    vlSelf->tb_dma__DOT__dut__DOT__w_fsm__DOT__next_state 
        = vlSelf->tb_dma__DOT__dut__DOT__w_fsm__DOT__current_state;
    if ((0U == (IData)(vlSelf->tb_dma__DOT__dut__DOT__w_fsm__DOT__current_state))) {
        if (((IData)(vlSelf->tb_dma__DOT__weight_fsm_start) 
             & (~ (IData)(vlSelf->tb_dma__DOT__dut__DOT__any_busy)))) {
            vlSelf->tb_dma__DOT__dut__DOT__weight_clr = 1U;
            vlSelf->tb_dma__DOT__dut__DOT__w_fsm__DOT__next_state = 1U;
        } else {
            vlSelf->tb_dma__DOT__dut__DOT__w_fsm__DOT__next_state = 0U;
        }
    } else if ((1U == (IData)(vlSelf->tb_dma__DOT__dut__DOT__w_fsm__DOT__current_state))) {
        vlSelf->tb_dma__DOT__dut__DOT__w_fsm__DOT__next_state 
            = ((0x100U == (IData)(vlSelf->tb_dma__DOT__dut__DOT__weight_buf__DOT__wr_ptr))
                ? 2U : 1U);
    } else if ((2U == (IData)(vlSelf->tb_dma__DOT__dut__DOT__w_fsm__DOT__current_state))) {
        vlSelf->tb_dma__DOT__dut__DOT__w_fsm__DOT__next_state = 0U;
    }
}

VL_ATTR_COLD void Vtb_dma___024root___eval_stl(Vtb_dma___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dma___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_dma___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_dma___024root___eval_triggers__stl(Vtb_dma___024root* vlSelf);

VL_ATTR_COLD bool Vtb_dma___024root___eval_phase__stl(Vtb_dma___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dma___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_dma___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_dma___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_dma___024root___dump_triggers__act(Vtb_dma___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dma___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_dma.clk or negedge tb_dma.rst_n)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge tb_dma.clk)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_dma___024root___dump_triggers__nba(Vtb_dma___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dma___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_dma.clk or negedge tb_dma.rst_n)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge tb_dma.clk)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_dma___024root___ctor_var_reset(Vtb_dma___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dma___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->tb_dma__DOT__errors = 0;
    vlSelf->tb_dma__DOT__checks = 0;
    vlSelf->tb_dma__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_dma__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->tb_dma__DOT__u_in = VL_RAND_RESET_I(8);
    vlSelf->tb_dma__DOT__bias_fsm_start = VL_RAND_RESET_I(1);
    vlSelf->tb_dma__DOT__activation_fsm_start = VL_RAND_RESET_I(1);
    vlSelf->tb_dma__DOT__weight_fsm_start = VL_RAND_RESET_I(1);
    vlSelf->tb_dma__DOT__computed_bank_in = VL_RAND_RESET_I(32);
    vlSelf->tb_dma__DOT__computed_bank_in_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_dma__DOT__start_read_fsm = VL_RAND_RESET_I(1);
    vlSelf->tb_dma__DOT__bank = VL_RAND_RESET_I(4);
    vlSelf->tb_dma__DOT__result_we = VL_RAND_RESET_I(1);
    vlSelf->tb_dma__DOT__weight_bank_out = VL_RAND_RESET_I(32);
    vlSelf->tb_dma__DOT__weight_bank_out_valid = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_dma__DOT__weight_data[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_dma__DOT__bias_data[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_dma__DOT__act_data[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_dma__DOT__weight_captured[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_dma__DOT__result_data[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_dma__DOT__result_captured[__Vi0] = 0;
    }
    vlSelf->tb_dma__DOT__dut__DOT__activations_busy = VL_RAND_RESET_I(1);
    vlSelf->tb_dma__DOT__dut__DOT__weights_busy = VL_RAND_RESET_I(1);
    vlSelf->tb_dma__DOT__dut__DOT__bias_busy = VL_RAND_RESET_I(1);
    vlSelf->tb_dma__DOT__dut__DOT__any_busy = VL_RAND_RESET_I(1);
    vlSelf->tb_dma__DOT__dut__DOT__weight_we = VL_RAND_RESET_I(1);
    vlSelf->tb_dma__DOT__dut__DOT__weight_re = VL_RAND_RESET_I(1);
    vlSelf->tb_dma__DOT__dut__DOT__weight_clr = VL_RAND_RESET_I(1);
    vlSelf->tb_dma__DOT__dut__DOT__weight_we_in = VL_RAND_RESET_I(32);
    vlSelf->tb_dma__DOT__dut__DOT__weight_full = VL_RAND_RESET_I(1);
    vlSelf->tb_dma__DOT__dut__DOT__weight_empty = VL_RAND_RESET_I(1);
    vlSelf->tb_dma__DOT__dut__DOT__act_we = VL_RAND_RESET_I(1);
    vlSelf->tb_dma__DOT__dut__DOT__act_clr = VL_RAND_RESET_I(1);
    vlSelf->tb_dma__DOT__dut__DOT__act_we_in = VL_RAND_RESET_I(32);
    vlSelf->tb_dma__DOT__dut__DOT__act_full = VL_RAND_RESET_I(1);
    vlSelf->tb_dma__DOT__dut__DOT__act_full_prev = VL_RAND_RESET_I(1);
    vlSelf->tb_dma__DOT__dut__DOT__bias_we = VL_RAND_RESET_I(1);
    vlSelf->tb_dma__DOT__dut__DOT__bias_clr = VL_RAND_RESET_I(1);
    vlSelf->tb_dma__DOT__dut__DOT__bias_we_in = VL_RAND_RESET_I(32);
    vlSelf->tb_dma__DOT__dut__DOT__bias_full = VL_RAND_RESET_I(1);
    vlSelf->tb_dma__DOT__dut__DOT__bias_full_prev = VL_RAND_RESET_I(1);
    vlSelf->tb_dma__DOT__dut__DOT__result_re = VL_RAND_RESET_I(1);
    vlSelf->tb_dma__DOT__dut__DOT__result_clr = VL_RAND_RESET_I(1);
    vlSelf->tb_dma__DOT__dut__DOT__result_re_out = VL_RAND_RESET_I(32);
    vlSelf->tb_dma__DOT__dut__DOT__result_full = VL_RAND_RESET_I(1);
    vlSelf->tb_dma__DOT__dut__DOT__result_empty = VL_RAND_RESET_I(1);
    vlSelf->tb_dma__DOT__dut__DOT__result_re_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_dma__DOT__dut__DOT__read_count = VL_RAND_RESET_I(9);
    vlSelf->tb_dma__DOT__dut__DOT__en_counter = VL_RAND_RESET_I(1);
    vlSelf->tb_dma__DOT__dut__DOT__clr_counter = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(2048, vlSelf->tb_dma__DOT__dut__DOT__weight_buf__DOT__buff);
    vlSelf->tb_dma__DOT__dut__DOT__weight_buf__DOT__wr_ptr = VL_RAND_RESET_I(10);
    vlSelf->tb_dma__DOT__dut__DOT__weight_buf__DOT__rd_ptr = VL_RAND_RESET_I(10);
    VL_RAND_RESET_W(128, vlSelf->tb_dma__DOT__dut__DOT__act_buf__DOT__buff);
    vlSelf->tb_dma__DOT__dut__DOT__act_buf__DOT__wr_ptr = VL_RAND_RESET_I(10);
    VL_RAND_RESET_W(128, vlSelf->tb_dma__DOT__dut__DOT__bias_buf__DOT__buff);
    vlSelf->tb_dma__DOT__dut__DOT__bias_buf__DOT__wr_ptr = VL_RAND_RESET_I(10);
    vlSelf->tb_dma__DOT__dut__DOT__w_fsm__DOT__current_state = VL_RAND_RESET_I(6);
    vlSelf->tb_dma__DOT__dut__DOT__w_fsm__DOT__next_state = VL_RAND_RESET_I(6);
    vlSelf->tb_dma__DOT__dut__DOT__b_fsm__DOT__any_busy = VL_RAND_RESET_I(1);
    vlSelf->tb_dma__DOT__dut__DOT__b_fsm__DOT__current_state = VL_RAND_RESET_I(6);
    vlSelf->tb_dma__DOT__dut__DOT__b_fsm__DOT__next_state = VL_RAND_RESET_I(6);
    vlSelf->tb_dma__DOT__dut__DOT__a_fsm__DOT__any_busy = VL_RAND_RESET_I(1);
    vlSelf->tb_dma__DOT__dut__DOT__a_fsm__DOT__current_state = VL_RAND_RESET_I(6);
    vlSelf->tb_dma__DOT__dut__DOT__a_fsm__DOT__next_state = VL_RAND_RESET_I(6);
    VL_RAND_RESET_W(2048, vlSelf->tb_dma__DOT__dut__DOT__result_buf__DOT__buff);
    vlSelf->tb_dma__DOT__dut__DOT__result_buf__DOT__wr_ptr = VL_RAND_RESET_I(10);
    vlSelf->tb_dma__DOT__dut__DOT__result_buf__DOT__rd_ptr = VL_RAND_RESET_I(10);
    vlSelf->tb_dma__DOT__dut__DOT__r_fsm__DOT__current_state = VL_RAND_RESET_I(6);
    vlSelf->tb_dma__DOT__dut__DOT__r_fsm__DOT__next_state = VL_RAND_RESET_I(6);
    vlSelf->__Vtrigprevexpr___TOP__tb_dma__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_dma__DOT__rst_n__0 = VL_RAND_RESET_I(1);
}
