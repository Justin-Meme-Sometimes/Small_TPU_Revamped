// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtpu_top.h for the primary calling header

#include "Vtpu_top__pch.h"
#include "Vtpu_top___024root.h"

VL_ATTR_COLD void Vtpu_top___024root___eval_static(Vtpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtpu_top___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtpu_top___024root___eval_initial(Vtpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtpu_top___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = vlSelf->rst_n;
}

VL_ATTR_COLD void Vtpu_top___024root___eval_final(Vtpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtpu_top___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtpu_top___024root___dump_triggers__stl(Vtpu_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtpu_top___024root___eval_phase__stl(Vtpu_top___024root* vlSelf);

VL_ATTR_COLD void Vtpu_top___024root___eval_settle(Vtpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtpu_top___024root___eval_settle\n"); );
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
            Vtpu_top___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("src/tpu_top.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtpu_top___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtpu_top___024root___dump_triggers__stl(Vtpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtpu_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtpu_top___024root___stl_sequent__TOP__0(Vtpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtpu_top___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ tpu_top__DOT__start;
    tpu_top__DOT__start = 0;
    CData/*0:0*/ tpu_top__DOT__start_read_fsm;
    tpu_top__DOT__start_read_fsm = 0;
    CData/*0:0*/ tpu_top__DOT__weight_fsm_start;
    tpu_top__DOT__weight_fsm_start = 0;
    CData/*0:0*/ tpu_top__DOT__activation_fsm_start;
    tpu_top__DOT__activation_fsm_start = 0;
    CData/*0:0*/ tpu_top__DOT__bias_fsm_start;
    tpu_top__DOT__bias_fsm_start = 0;
    CData/*0:0*/ tpu_top__DOT__weight_data_valid;
    tpu_top__DOT__weight_data_valid = 0;
    CData/*0:0*/ tpu_top__DOT____VdfgExtracted_h6518d324__0;
    tpu_top__DOT____VdfgExtracted_h6518d324__0 = 0;
    CData/*0:0*/ tpu_top__DOT____VdfgExtracted_hcfa4ace7__0;
    tpu_top__DOT____VdfgExtracted_hcfa4ace7__0 = 0;
    CData/*0:0*/ tpu_top__DOT__dma__DOT__activations_busy;
    tpu_top__DOT__dma__DOT__activations_busy = 0;
    CData/*0:0*/ tpu_top__DOT__dma__DOT__weights_busy;
    tpu_top__DOT__dma__DOT__weights_busy = 0;
    CData/*0:0*/ tpu_top__DOT__dma__DOT__bias_busy;
    tpu_top__DOT__dma__DOT__bias_busy = 0;
    // Body
    vlSelf->tpu_top__DOT__tile_clr = 0U;
    vlSelf->tpu_top__DOT__dma__DOT__act_en_counter = 0U;
    vlSelf->tpu_top__DOT__dma__DOT__bias_clr = 0U;
    vlSelf->tpu_top__DOT__dma__DOT__act_we_en_counter = 0U;
    vlSelf->tpu_top__DOT__dma__DOT__en_counter = 0U;
    vlSelf->u_out = (0xffU & vlSelf->tpu_top__DOT__dma__DOT__result_re_out);
    vlSelf->tpu_top__DOT__dma__DOT__weight_full = (0x100U 
                                                   == (IData)(vlSelf->tpu_top__DOT__dma__DOT__weight_buf__DOT__wr_ptr));
    vlSelf->tpu_top__DOT__weight_fifo_full = (4U == (IData)(vlSelf->tpu_top__DOT__w_l__DOT__weight_fifo__DOT__count));
    vlSelf->tpu_top__DOT__weight_fifo_empty = (0U == (IData)(vlSelf->tpu_top__DOT__w_l__DOT__weight_fifo__DOT__count));
    vlSelf->tpu_top__DOT__a_buff__DOT__buff_a_full 
        = (0x10U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_A__DOT__wr_ptr));
    vlSelf->tpu_top__DOT__a_buff__DOT__buff_b_full 
        = (0x10U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_B__DOT__wr_ptr));
    vlSelf->tpu_top__DOT__dma__DOT__bias_full = (0x10U 
                                                 == (IData)(vlSelf->tpu_top__DOT__dma__DOT__bias_buf__DOT__wr_ptr));
    vlSelf->tpu_top__DOT__dma__DOT__act_full = (0x80U 
                                                == (IData)(vlSelf->tpu_top__DOT__dma__DOT__act_buf__DOT__wr_ptr));
    vlSelf->tpu_top__DOT__dma__DOT__result_full = (0x100U 
                                                   == (IData)(vlSelf->tpu_top__DOT__dma__DOT__result_buf__DOT__wr_ptr));
    vlSelf->tpu_top__DOT__preload_en = 0U;
    vlSelf->tpu_top__DOT__prefill_en = 0U;
    vlSelf->tpu_top__DOT__prefill_clr = 0U;
    vlSelf->tpu_top__DOT__weight_data_out = 0U;
    if ((0U != (IData)(vlSelf->tpu_top__DOT__w_l__DOT__weight_fifo__DOT__count))) {
        vlSelf->tpu_top__DOT__weight_data_out = vlSelf->tpu_top__DOT__w_l__DOT__weight_fifo__DOT__Q
            [(0x1fU & ((IData)(vlSelf->tpu_top__DOT__w_l__DOT__weight_fifo__DOT__count) 
                       - (IData)(1U)))];
    }
    vlSelf->tpu_top__DOT__systolic_act_in_valid = 0U;
    vlSelf->tpu_top__DOT__dma__DOT__act_clr_counter = 0U;
    vlSelf->tpu_top__DOT__dma__DOT__act_re = 0U;
    if ((0U != (IData)(vlSelf->tpu_top__DOT__dma__DOT__act_read_fsm__DOT__current_state))) {
        if ((1U == (IData)(vlSelf->tpu_top__DOT__dma__DOT__act_read_fsm__DOT__current_state))) {
            vlSelf->tpu_top__DOT__dma__DOT__act_en_counter = 1U;
            if ((4U == (IData)(vlSelf->tpu_top__DOT__dma__DOT__act_re_count))) {
                vlSelf->tpu_top__DOT__dma__DOT__act_clr_counter = 1U;
            }
            if ((4U != (IData)(vlSelf->tpu_top__DOT__dma__DOT__act_re_count))) {
                vlSelf->tpu_top__DOT__dma__DOT__act_re = 1U;
            }
        }
    }
    vlSelf->tpu_top__DOT__dma__DOT__bias_we = 0U;
    vlSelf->tpu_top__DOT__dma__DOT__act_we = 0U;
    vlSelf->tpu_top__DOT__dma__DOT__act_we_clr_counter = 0U;
    vlSelf->tpu_top__DOT__dma__DOT__clr_counter = 0U;
    vlSelf->tpu_top__DOT__dma__DOT__result_re = 0U;
    vlSelf->tpu_top__DOT__dma__DOT__result_clr = 0U;
    if ((0U != (IData)(vlSelf->tpu_top__DOT__dma__DOT__r_fsm__DOT__current_state))) {
        if ((1U == (IData)(vlSelf->tpu_top__DOT__dma__DOT__r_fsm__DOT__current_state))) {
            vlSelf->tpu_top__DOT__dma__DOT__en_counter = 1U;
            if ((0x40U == (IData)(vlSelf->tpu_top__DOT__dma__DOT__read_count))) {
                vlSelf->tpu_top__DOT__dma__DOT__clr_counter = 1U;
                vlSelf->tpu_top__DOT__dma__DOT__result_clr = 1U;
            }
            if ((0x40U != (IData)(vlSelf->tpu_top__DOT__dma__DOT__read_count))) {
                vlSelf->tpu_top__DOT__dma__DOT__result_re = 1U;
            }
        }
    }
    vlSelf->tpu_top__DOT__dma__DOT__act_empty = ((IData)(vlSelf->tpu_top__DOT__dma__DOT__act_buf__DOT__rd_ptr) 
                                                 == (IData)(vlSelf->tpu_top__DOT__dma__DOT__act_buf__DOT__wr_ptr));
    vlSelf->tpu_top__DOT__dma__DOT__result_empty = 
        ((IData)(vlSelf->tpu_top__DOT__dma__DOT__result_buf__DOT__rd_ptr) 
         == (IData)(vlSelf->tpu_top__DOT__dma__DOT__result_buf__DOT__wr_ptr));
    vlSelf->tpu_top__DOT__w_l__DOT__fifo_we = 0U;
    vlSelf->tpu_top__DOT__systolic_act_in = 0U;
    if (vlSelf->tpu_top__DOT__a_buff__DOT__re_valid_a) {
        vlSelf->tpu_top__DOT__systolic_act_in_valid = 0xfU;
        vlSelf->tpu_top__DOT__systolic_act_in = vlSelf->tpu_top__DOT__a_buff__DOT__re_out_a;
    } else if (vlSelf->tpu_top__DOT__a_buff__DOT__re_valid_b) {
        vlSelf->tpu_top__DOT__systolic_act_in_valid = 0xfU;
        vlSelf->tpu_top__DOT__systolic_act_in = vlSelf->tpu_top__DOT__a_buff__DOT__re_out_b;
    }
    vlSelf->tpu_top__DOT__sys_array__DOT__product_array_valid 
        = (((IData)(vlSelf->tpu_top__DOT__sys_array__DOT____Vcellout__pe_3_3__accum_out_valid) 
            << 3U) | (((IData)(vlSelf->tpu_top__DOT__sys_array__DOT____Vcellout__pe_3_2__accum_out_valid) 
                       << 2U) | (((IData)(vlSelf->tpu_top__DOT__sys_array__DOT____Vcellout__pe_3_1__accum_out_valid) 
                                  << 1U) | (IData)(vlSelf->tpu_top__DOT__sys_array__DOT____Vcellout__pe_3_0__accum_out_valid))));
    tpu_top__DOT__start_read_fsm = 0U;
    if (vlSelf->tpu_top__DOT__relu_out_valid) {
        vlSelf->tpu_top__DOT__req__DOT__shift_buffer[0U] 
            = VL_SHIFTRS_III(32,32,32, vlSelf->tpu_top__DOT__relu_out[0U], (IData)(vlSelf->tpu_top__DOT__requant_value));
        vlSelf->tpu_top__DOT__req__DOT__shift_buffer[1U] 
            = VL_SHIFTRS_III(32,32,32, vlSelf->tpu_top__DOT__relu_out[1U], (IData)(vlSelf->tpu_top__DOT__requant_value));
        vlSelf->tpu_top__DOT__req__DOT__shift_buffer[2U] 
            = VL_SHIFTRS_III(32,32,32, vlSelf->tpu_top__DOT__relu_out[2U], (IData)(vlSelf->tpu_top__DOT__requant_value));
        vlSelf->tpu_top__DOT__req__DOT__shift_buffer[3U] 
            = VL_SHIFTRS_III(32,32,32, vlSelf->tpu_top__DOT__relu_out[3U], (IData)(vlSelf->tpu_top__DOT__requant_value));
    }
    tpu_top__DOT__activation_fsm_start = 0U;
    tpu_top__DOT__bias_fsm_start = 0U;
    vlSelf->tpu_top__DOT__dma__DOT__weight_we = 0U;
    vlSelf->tpu_top__DOT__dma__DOT__weight_empty = 
        ((IData)(vlSelf->tpu_top__DOT__dma__DOT__weight_buf__DOT__rd_ptr) 
         == (IData)(vlSelf->tpu_top__DOT__dma__DOT__weight_buf__DOT__wr_ptr));
    tpu_top__DOT__weight_fsm_start = 0U;
    if ((1U != (IData)(vlSelf->tpu_top__DOT__opcode_reg))) {
        if ((3U == (IData)(vlSelf->tpu_top__DOT__opcode_reg))) {
            tpu_top__DOT__start_read_fsm = 1U;
        }
        if ((3U != (IData)(vlSelf->tpu_top__DOT__opcode_reg))) {
            if ((5U != (IData)(vlSelf->tpu_top__DOT__opcode_reg))) {
                if ((6U == (IData)(vlSelf->tpu_top__DOT__opcode_reg))) {
                    tpu_top__DOT__activation_fsm_start = 1U;
                }
                if ((6U != (IData)(vlSelf->tpu_top__DOT__opcode_reg))) {
                    if ((7U == (IData)(vlSelf->tpu_top__DOT__opcode_reg))) {
                        tpu_top__DOT__bias_fsm_start = 1U;
                    }
                }
            }
            if ((5U == (IData)(vlSelf->tpu_top__DOT__opcode_reg))) {
                tpu_top__DOT__weight_fsm_start = 1U;
            }
        }
    }
    tpu_top__DOT__start = 0U;
    if ((1U == (IData)(vlSelf->tpu_top__DOT__opcode_reg))) {
        if ((0U == (IData)(vlSelf->tpu_top__DOT__current_state))) {
            tpu_top__DOT__start = 1U;
        }
    }
    tpu_top__DOT____VdfgExtracted_hcfa4ace7__0 = ((4U 
                                                   == (IData)(vlSelf->tpu_top__DOT__row_count)) 
                                                  & (7U 
                                                     == (IData)(vlSelf->tpu_top__DOT__tile_count)));
    vlSelf->tpu_top__DOT__a_buff__DOT__buff_a_empty 
        = ((IData)(vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_A__DOT__rd_ptr) 
           == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_A__DOT__wr_ptr));
    vlSelf->tpu_top__DOT__a_buff__DOT__buff_b_empty 
        = ((IData)(vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_B__DOT__rd_ptr) 
           == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_B__DOT__wr_ptr));
    tpu_top__DOT____VdfgExtracted_h6518d324__0 = ((7U 
                                                   != (IData)(vlSelf->tpu_top__DOT__tile_count)) 
                                                  & (4U 
                                                     == (IData)(vlSelf->tpu_top__DOT__row_count)));
    vlSelf->tpu_top__DOT__stream_state = 0U;
    tpu_top__DOT__dma__DOT__weights_busy = 0U;
    if ((0U != (IData)(vlSelf->tpu_top__DOT__dma__DOT__w_fsm__DOT__current_state))) {
        if ((1U == (IData)(vlSelf->tpu_top__DOT__dma__DOT__w_fsm__DOT__current_state))) {
            if ((0x100U != (IData)(vlSelf->tpu_top__DOT__dma__DOT__weight_buf__DOT__wr_ptr))) {
                vlSelf->tpu_top__DOT__dma__DOT__weight_we = 1U;
                tpu_top__DOT__dma__DOT__weights_busy = 1U;
            }
        }
    }
    tpu_top__DOT__dma__DOT__bias_busy = 0U;
    if ((0U != (IData)(vlSelf->tpu_top__DOT__dma__DOT__b_fsm__DOT__current_state))) {
        if ((1U != (IData)(vlSelf->tpu_top__DOT__dma__DOT__b_fsm__DOT__current_state))) {
            if ((2U == (IData)(vlSelf->tpu_top__DOT__dma__DOT__b_fsm__DOT__current_state))) {
                vlSelf->tpu_top__DOT__dma__DOT__bias_clr = 1U;
            }
        }
        if ((1U == (IData)(vlSelf->tpu_top__DOT__dma__DOT__b_fsm__DOT__current_state))) {
            if ((0x10U != (IData)(vlSelf->tpu_top__DOT__dma__DOT__bias_buf__DOT__wr_ptr))) {
                vlSelf->tpu_top__DOT__dma__DOT__bias_we = 1U;
                tpu_top__DOT__dma__DOT__bias_busy = 1U;
            }
        }
    }
    tpu_top__DOT__dma__DOT__activations_busy = 0U;
    if ((0U != (IData)(vlSelf->tpu_top__DOT__dma__DOT__a_fsm__DOT__current_state))) {
        if ((1U == (IData)(vlSelf->tpu_top__DOT__dma__DOT__a_fsm__DOT__current_state))) {
            vlSelf->tpu_top__DOT__dma__DOT__act_we_en_counter = 1U;
            if ((0x10U != (IData)(vlSelf->tpu_top__DOT__dma__DOT__act_we_count))) {
                vlSelf->tpu_top__DOT__dma__DOT__act_we = 1U;
                tpu_top__DOT__dma__DOT__activations_busy = 1U;
            }
            if ((0x10U == (IData)(vlSelf->tpu_top__DOT__dma__DOT__act_we_count))) {
                vlSelf->tpu_top__DOT__dma__DOT__act_we_clr_counter = 1U;
            }
        }
    }
    vlSelf->tpu_top__DOT__preload_state = 0U;
    vlSelf->tpu_top__DOT__dma__DOT__r_fsm__DOT__next_state 
        = vlSelf->tpu_top__DOT__dma__DOT__r_fsm__DOT__current_state;
    if ((0U == (IData)(vlSelf->tpu_top__DOT__dma__DOT__r_fsm__DOT__current_state))) {
        vlSelf->tpu_top__DOT__dma__DOT__r_fsm__DOT__next_state 
            = ((IData)(tpu_top__DOT__start_read_fsm)
                ? 1U : 0U);
    } else if ((1U == (IData)(vlSelf->tpu_top__DOT__dma__DOT__r_fsm__DOT__current_state))) {
        vlSelf->tpu_top__DOT__dma__DOT__r_fsm__DOT__next_state 
            = ((0x40U == (IData)(vlSelf->tpu_top__DOT__dma__DOT__read_count))
                ? 0U : 1U);
    }
    vlSelf->tpu_top__DOT__dma__DOT__weight_re = ((~ (IData)(vlSelf->tpu_top__DOT__dma__DOT__weight_we)) 
                                                 & ((~ (IData)(vlSelf->tpu_top__DOT__dma__DOT__weight_empty)) 
                                                    & (2U 
                                                       == (IData)(vlSelf->tpu_top__DOT__current_state))));
    vlSelf->tpu_top__DOT__row_clr = 0U;
    vlSelf->tpu_top__DOT__preload_clr = 0U;
    vlSelf->tpu_top__DOT__next_state = vlSelf->tpu_top__DOT__current_state;
    if ((0U == (IData)(vlSelf->tpu_top__DOT__current_state))) {
        vlSelf->tpu_top__DOT__next_state = ((IData)(tpu_top__DOT__start)
                                             ? 2U : 0U);
    } else if ((2U == (IData)(vlSelf->tpu_top__DOT__current_state))) {
        vlSelf->tpu_top__DOT__next_state = ((0x10U 
                                             == (IData)(vlSelf->tpu_top__DOT__prefill_count))
                                             ? 3U : 2U);
    } else if ((3U == (IData)(vlSelf->tpu_top__DOT__current_state))) {
        vlSelf->tpu_top__DOT__next_state = ((3U == (IData)(vlSelf->tpu_top__DOT__preload_count))
                                             ? 4U : 3U);
    } else if ((4U == (IData)(vlSelf->tpu_top__DOT__current_state))) {
        vlSelf->tpu_top__DOT__next_state = ((IData)(tpu_top__DOT____VdfgExtracted_h6518d324__0)
                                             ? 3U : 
                                            ((IData)(tpu_top__DOT____VdfgExtracted_hcfa4ace7__0)
                                              ? 5U : 4U));
    } else if ((5U == (IData)(vlSelf->tpu_top__DOT__current_state))) {
        vlSelf->tpu_top__DOT__next_state = 0U;
    }
    vlSelf->tpu_top__DOT__tile_done = 0U;
    if ((0U != (IData)(vlSelf->tpu_top__DOT__current_state))) {
        if ((2U != (IData)(vlSelf->tpu_top__DOT__current_state))) {
            if ((3U != (IData)(vlSelf->tpu_top__DOT__current_state))) {
                if ((4U != (IData)(vlSelf->tpu_top__DOT__current_state))) {
                    if ((5U == (IData)(vlSelf->tpu_top__DOT__current_state))) {
                        vlSelf->tpu_top__DOT__tile_clr = 1U;
                    }
                }
                if ((4U == (IData)(vlSelf->tpu_top__DOT__current_state))) {
                    vlSelf->tpu_top__DOT__stream_state = 1U;
                    if (tpu_top__DOT____VdfgExtracted_h6518d324__0) {
                        vlSelf->tpu_top__DOT__row_clr = 1U;
                        vlSelf->tpu_top__DOT__tile_done = 1U;
                    } else if (tpu_top__DOT____VdfgExtracted_hcfa4ace7__0) {
                        vlSelf->tpu_top__DOT__row_clr = 1U;
                    }
                    if ((1U & (~ (IData)(tpu_top__DOT____VdfgExtracted_h6518d324__0)))) {
                        if ((1U & (~ (IData)(tpu_top__DOT____VdfgExtracted_hcfa4ace7__0)))) {
                            vlSelf->tpu_top__DOT__preload_clr = 1U;
                        }
                    }
                }
            }
            if ((3U == (IData)(vlSelf->tpu_top__DOT__current_state))) {
                if ((3U != (IData)(vlSelf->tpu_top__DOT__preload_count))) {
                    vlSelf->tpu_top__DOT__preload_en = 1U;
                    vlSelf->tpu_top__DOT__prefill_clr = 1U;
                }
                vlSelf->tpu_top__DOT__preload_state = 1U;
            }
        }
        if ((2U == (IData)(vlSelf->tpu_top__DOT__current_state))) {
            if ((0x10U != (IData)(vlSelf->tpu_top__DOT__prefill_count))) {
                vlSelf->tpu_top__DOT__prefill_en = 1U;
            }
        }
    }
    vlSelf->tpu_top__DOT__a_buff__DOT__re_a = 0U;
    vlSelf->tpu_top__DOT__a_buff__DOT__re_b = 0U;
    vlSelf->tpu_top__DOT__dma__DOT__a_ready = ((IData)(tpu_top__DOT__dma__DOT__bias_busy) 
                                               | (IData)(tpu_top__DOT__dma__DOT__weights_busy));
    vlSelf->tpu_top__DOT__dma__DOT__b_ready = ((IData)(tpu_top__DOT__dma__DOT__activations_busy) 
                                               | (IData)(tpu_top__DOT__dma__DOT__weights_busy));
    vlSelf->tpu_top__DOT__dma__DOT__w_ready = ((IData)(tpu_top__DOT__dma__DOT__activations_busy) 
                                               | (IData)(tpu_top__DOT__dma__DOT__bias_busy));
    vlSelf->tpu_top__DOT__w_l__DOT__fifo_re = 0U;
    vlSelf->tpu_top__DOT__w_l__DOT__next_state = vlSelf->tpu_top__DOT__w_l__DOT__current_state;
    if ((0U == (IData)(vlSelf->tpu_top__DOT__w_l__DOT__current_state))) {
        vlSelf->tpu_top__DOT__w_l__DOT__next_state 
            = (((2U == (IData)(vlSelf->tpu_top__DOT__current_state)) 
                | (7U == (IData)(vlSelf->tpu_top__DOT__tile_count)))
                ? 1U : 0U);
    } else if ((1U == (IData)(vlSelf->tpu_top__DOT__w_l__DOT__current_state))) {
        vlSelf->tpu_top__DOT__w_l__DOT__next_state 
            = (((4U != (IData)(vlSelf->tpu_top__DOT__w_l__DOT__weight_fifo__DOT__count)) 
                & (2U == (IData)(vlSelf->tpu_top__DOT__current_state)))
                ? 1U : 2U);
    } else if ((2U == (IData)(vlSelf->tpu_top__DOT__w_l__DOT__current_state))) {
        vlSelf->tpu_top__DOT__w_l__DOT__next_state 
            = (((0U != (IData)(vlSelf->tpu_top__DOT__w_l__DOT__weight_fifo__DOT__count)) 
                & (IData)(vlSelf->tpu_top__DOT__preload_state))
                ? 2U : ((0U == (IData)(vlSelf->tpu_top__DOT__w_l__DOT__weight_fifo__DOT__count))
                         ? 0U : 2U));
    }
    vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__next_state 
        = vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__current_state;
    vlSelf->tpu_top__DOT__a_buff__DOT__buff_a_active = 0U;
    vlSelf->tpu_top__DOT__a_buff__DOT__clr_a = 0U;
    vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__next_state 
        = vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__current_state;
    vlSelf->tpu_top__DOT__a_buff__DOT__buff_b_active = 0U;
    vlSelf->tpu_top__DOT__a_buff__DOT__clr_b = 0U;
    vlSelf->tpu_top__DOT__a_buff__DOT__we_a = 0U;
    if (((((((((0U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__current_state)) 
               | (1U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__current_state))) 
              | (2U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__current_state))) 
             | (3U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__current_state))) 
            | (4U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__current_state))) 
           | (5U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__current_state))) 
          | (6U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__current_state))) 
         | (7U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__current_state)))) {
        if ((0U != (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__current_state))) {
            if ((1U != (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__current_state))) {
                if ((2U != (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__current_state))) {
                    if ((3U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__current_state))) {
                        if ((((~ (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__buff_a_empty)) 
                              & (IData)(vlSelf->tpu_top__DOT__stream_state)) 
                             & (~ (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__o_bank_reg)))) {
                            vlSelf->tpu_top__DOT__a_buff__DOT__re_a = 1U;
                        }
                    }
                }
            }
        }
        if ((0U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__current_state))) {
            if ((2U == (IData)(vlSelf->tpu_top__DOT__current_state))) {
                vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__next_state = 1U;
                vlSelf->tpu_top__DOT__a_buff__DOT__we_a = 1U;
            } else {
                vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__next_state = 0U;
            }
        } else if ((1U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__current_state))) {
            vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__next_state 
                = ((0x10U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_A__DOT__wr_ptr))
                    ? 2U : 1U);
            if ((0x10U != (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_A__DOT__wr_ptr))) {
                vlSelf->tpu_top__DOT__a_buff__DOT__we_a = 1U;
            }
        } else if ((2U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__current_state))) {
            vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__next_state 
                = ((IData)(vlSelf->tpu_top__DOT__preload_state)
                    ? 3U : 2U);
            if ((1U & (~ (IData)(vlSelf->tpu_top__DOT__preload_state)))) {
                vlSelf->tpu_top__DOT__a_buff__DOT__we_a = 1U;
            }
        } else {
            if ((3U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__current_state))) {
                if ((((~ (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__buff_a_empty)) 
                      & (IData)(vlSelf->tpu_top__DOT__stream_state)) 
                     & (~ (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__o_bank_reg)))) {
                    vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__next_state = 3U;
                    vlSelf->tpu_top__DOT__a_buff__DOT__buff_a_active = 1U;
                } else if ((((7U != (IData)(vlSelf->tpu_top__DOT__tile_count)) 
                             & (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__o_bank_reg)) 
                            & (~ (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__buff_a_active)))) {
                    vlSelf->tpu_top__DOT__a_buff__DOT__clr_a = 1U;
                    vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__next_state = 5U;
                } else if ((7U == (IData)(vlSelf->tpu_top__DOT__tile_count))) {
                    vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__next_state = 7U;
                }
            } else if ((4U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__current_state))) {
                if (vlSelf->tpu_top__DOT__stream_state) {
                    vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__next_state = 5U;
                    vlSelf->tpu_top__DOT__a_buff__DOT__clr_a = 1U;
                } else {
                    vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__next_state = 4U;
                }
            } else if ((5U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__current_state))) {
                if (((IData)(vlSelf->tpu_top__DOT__stream_state) 
                     & (0x10U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_A__DOT__wr_ptr)))) {
                    vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__next_state = 6U;
                    vlSelf->tpu_top__DOT__a_buff__DOT__buff_a_active = 1U;
                } else if ((0x10U != (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_A__DOT__wr_ptr))) {
                    vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__next_state = 5U;
                }
            } else if ((6U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__current_state))) {
                vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__next_state = 3U;
                vlSelf->tpu_top__DOT__a_buff__DOT__buff_a_active = 1U;
            } else {
                vlSelf->tpu_top__DOT__a_buff__DOT__clr_a = 1U;
                vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__next_state = 0U;
            }
            if ((3U != (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__current_state))) {
                if ((4U != (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__current_state))) {
                    if ((5U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__current_state))) {
                        vlSelf->tpu_top__DOT__a_buff__DOT__we_a = 1U;
                    }
                }
            }
        }
    }
    vlSelf->tpu_top__DOT__a_buff__DOT__we_b = 0U;
    if (((((((((0U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__current_state)) 
               | (1U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__current_state))) 
              | (2U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__current_state))) 
             | (3U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__current_state))) 
            | (4U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__current_state))) 
           | (5U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__current_state))) 
          | (6U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__current_state))) 
         | (7U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__current_state)))) {
        if ((0U != (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__current_state))) {
            if ((1U != (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__current_state))) {
                if ((2U != (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__current_state))) {
                    if ((3U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__current_state))) {
                        if ((((~ (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__buff_b_empty)) 
                              & (IData)(vlSelf->tpu_top__DOT__stream_state)) 
                             & (~ (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__o_bank_reg)))) {
                            vlSelf->tpu_top__DOT__a_buff__DOT__re_b = 1U;
                        }
                    }
                }
            }
        }
        if ((0U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__current_state))) {
            if ((2U == (IData)(vlSelf->tpu_top__DOT__current_state))) {
                vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__next_state = 4U;
                vlSelf->tpu_top__DOT__a_buff__DOT__we_b = 1U;
            } else {
                vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__next_state = 0U;
            }
        } else if ((1U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__current_state))) {
            vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__next_state 
                = ((0x10U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_B__DOT__wr_ptr))
                    ? 2U : 1U);
            if ((0x10U != (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_B__DOT__wr_ptr))) {
                vlSelf->tpu_top__DOT__a_buff__DOT__we_b = 1U;
            }
        } else if ((2U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__current_state))) {
            vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__next_state 
                = ((IData)(vlSelf->tpu_top__DOT__preload_state)
                    ? 3U : 2U);
            if ((1U & (~ (IData)(vlSelf->tpu_top__DOT__preload_state)))) {
                vlSelf->tpu_top__DOT__a_buff__DOT__we_b = 1U;
            }
        } else {
            if ((3U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__current_state))) {
                if ((((~ (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__buff_b_empty)) 
                      & (IData)(vlSelf->tpu_top__DOT__stream_state)) 
                     & (~ (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__o_bank_reg)))) {
                    vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__next_state = 3U;
                    vlSelf->tpu_top__DOT__a_buff__DOT__buff_b_active = 1U;
                } else if ((((7U != (IData)(vlSelf->tpu_top__DOT__tile_count)) 
                             & (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__o_bank_reg)) 
                            & (~ (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__buff_b_active)))) {
                    vlSelf->tpu_top__DOT__a_buff__DOT__clr_b = 1U;
                    vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__next_state = 5U;
                } else if ((7U == (IData)(vlSelf->tpu_top__DOT__tile_count))) {
                    vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__next_state = 7U;
                }
            } else if ((4U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__current_state))) {
                if (vlSelf->tpu_top__DOT__stream_state) {
                    vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__next_state = 5U;
                    vlSelf->tpu_top__DOT__a_buff__DOT__clr_b = 1U;
                } else {
                    vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__next_state = 4U;
                }
            } else if ((5U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__current_state))) {
                if (((IData)(vlSelf->tpu_top__DOT__stream_state) 
                     & (0x10U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_B__DOT__wr_ptr)))) {
                    vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__next_state = 6U;
                    vlSelf->tpu_top__DOT__a_buff__DOT__buff_b_active = 1U;
                } else if ((0x10U != (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_B__DOT__wr_ptr))) {
                    vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__next_state = 5U;
                }
            } else if ((6U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__current_state))) {
                vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__next_state = 3U;
                vlSelf->tpu_top__DOT__a_buff__DOT__buff_b_active = 1U;
            } else {
                vlSelf->tpu_top__DOT__a_buff__DOT__clr_b = 1U;
                vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__next_state = 0U;
            }
            if ((3U != (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__current_state))) {
                if ((4U != (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__current_state))) {
                    if ((5U == (IData)(vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__current_state))) {
                        vlSelf->tpu_top__DOT__a_buff__DOT__we_b = 1U;
                    }
                }
            }
        }
    }
    tpu_top__DOT__weight_data_valid = 0U;
    if ((0U != (IData)(vlSelf->tpu_top__DOT__w_l__DOT__current_state))) {
        if ((1U == (IData)(vlSelf->tpu_top__DOT__w_l__DOT__current_state))) {
            if (((4U != (IData)(vlSelf->tpu_top__DOT__w_l__DOT__weight_fifo__DOT__count)) 
                 & (2U == (IData)(vlSelf->tpu_top__DOT__current_state)))) {
                if (vlSelf->tpu_top__DOT__weight_bank_out_valid) {
                    vlSelf->tpu_top__DOT__w_l__DOT__fifo_we = 1U;
                }
            }
        }
        if ((1U != (IData)(vlSelf->tpu_top__DOT__w_l__DOT__current_state))) {
            if ((2U == (IData)(vlSelf->tpu_top__DOT__w_l__DOT__current_state))) {
                if (((0U != (IData)(vlSelf->tpu_top__DOT__w_l__DOT__weight_fifo__DOT__count)) 
                     & (IData)(vlSelf->tpu_top__DOT__preload_state))) {
                    vlSelf->tpu_top__DOT__w_l__DOT__fifo_re = 1U;
                    tpu_top__DOT__weight_data_valid = 1U;
                }
            }
        }
    }
    vlSelf->tpu_top__DOT__dma__DOT__act_read_fsm__DOT__next_state 
        = vlSelf->tpu_top__DOT__dma__DOT__act_read_fsm__DOT__current_state;
    if ((0U == (IData)(vlSelf->tpu_top__DOT__dma__DOT__act_read_fsm__DOT__current_state))) {
        vlSelf->tpu_top__DOT__dma__DOT__act_read_fsm__DOT__next_state 
            = (((IData)(tpu_top__DOT__start) | (IData)(vlSelf->tpu_top__DOT__tile_done))
                ? 1U : 0U);
    } else if ((1U == (IData)(vlSelf->tpu_top__DOT__dma__DOT__act_read_fsm__DOT__current_state))) {
        vlSelf->tpu_top__DOT__dma__DOT__act_read_fsm__DOT__next_state 
            = ((4U == (IData)(vlSelf->tpu_top__DOT__dma__DOT__act_re_count))
                ? 0U : 1U);
    }
    vlSelf->tpu_top__DOT__dma__DOT__a_fsm__DOT__next_state 
        = vlSelf->tpu_top__DOT__dma__DOT__a_fsm__DOT__current_state;
    if ((0U == (IData)(vlSelf->tpu_top__DOT__dma__DOT__a_fsm__DOT__current_state))) {
        vlSelf->tpu_top__DOT__dma__DOT__a_fsm__DOT__next_state 
            = (((IData)(tpu_top__DOT__activation_fsm_start) 
                & (~ (IData)(vlSelf->tpu_top__DOT__dma__DOT__a_ready)))
                ? 1U : 0U);
    } else if ((1U == (IData)(vlSelf->tpu_top__DOT__dma__DOT__a_fsm__DOT__current_state))) {
        vlSelf->tpu_top__DOT__dma__DOT__a_fsm__DOT__next_state 
            = ((0x10U == (IData)(vlSelf->tpu_top__DOT__dma__DOT__act_we_count))
                ? 2U : 1U);
    } else if ((2U == (IData)(vlSelf->tpu_top__DOT__dma__DOT__a_fsm__DOT__current_state))) {
        vlSelf->tpu_top__DOT__dma__DOT__a_fsm__DOT__next_state = 0U;
    }
    vlSelf->tpu_top__DOT__dma__DOT__b_fsm__DOT__next_state 
        = vlSelf->tpu_top__DOT__dma__DOT__b_fsm__DOT__current_state;
    if ((0U == (IData)(vlSelf->tpu_top__DOT__dma__DOT__b_fsm__DOT__current_state))) {
        vlSelf->tpu_top__DOT__dma__DOT__b_fsm__DOT__next_state 
            = (((IData)(tpu_top__DOT__bias_fsm_start) 
                & (~ (IData)(vlSelf->tpu_top__DOT__dma__DOT__b_ready)))
                ? 1U : 0U);
    } else if ((1U == (IData)(vlSelf->tpu_top__DOT__dma__DOT__b_fsm__DOT__current_state))) {
        vlSelf->tpu_top__DOT__dma__DOT__b_fsm__DOT__next_state 
            = ((0x10U == (IData)(vlSelf->tpu_top__DOT__dma__DOT__bias_buf__DOT__wr_ptr))
                ? 2U : 1U);
    } else if ((2U == (IData)(vlSelf->tpu_top__DOT__dma__DOT__b_fsm__DOT__current_state))) {
        vlSelf->tpu_top__DOT__dma__DOT__b_fsm__DOT__next_state = 0U;
    }
    vlSelf->tpu_top__DOT__dma__DOT__weight_we_in_single = 0U;
    if (((1U == (IData)(vlSelf->tpu_top__DOT__bank)) 
         & (~ (IData)(vlSelf->tpu_top__DOT__dma__DOT__w_ready)))) {
        vlSelf->tpu_top__DOT__dma__DOT__weight_we_in_single 
            = vlSelf->u_in;
    }
    vlSelf->tpu_top__DOT__dma__DOT__weight_clr = 0U;
    vlSelf->tpu_top__DOT__dma__DOT__bias_we_in_single = 0U;
    vlSelf->tpu_top__DOT__dma__DOT__w_fsm__DOT__next_state 
        = vlSelf->tpu_top__DOT__dma__DOT__w_fsm__DOT__current_state;
    if ((0U == (IData)(vlSelf->tpu_top__DOT__dma__DOT__w_fsm__DOT__current_state))) {
        if (((IData)(tpu_top__DOT__weight_fsm_start) 
             & (~ (IData)(vlSelf->tpu_top__DOT__dma__DOT__w_ready)))) {
            vlSelf->tpu_top__DOT__dma__DOT__weight_clr = 1U;
            vlSelf->tpu_top__DOT__dma__DOT__w_fsm__DOT__next_state = 1U;
        } else {
            vlSelf->tpu_top__DOT__dma__DOT__w_fsm__DOT__next_state = 0U;
        }
    } else if ((1U == (IData)(vlSelf->tpu_top__DOT__dma__DOT__w_fsm__DOT__current_state))) {
        vlSelf->tpu_top__DOT__dma__DOT__w_fsm__DOT__next_state 
            = ((0x100U == (IData)(vlSelf->tpu_top__DOT__dma__DOT__weight_buf__DOT__wr_ptr))
                ? 2U : 1U);
    } else if ((2U == (IData)(vlSelf->tpu_top__DOT__dma__DOT__w_fsm__DOT__current_state))) {
        vlSelf->tpu_top__DOT__dma__DOT__w_fsm__DOT__next_state = 0U;
    }
    vlSelf->tpu_top__DOT__dma__DOT__act_we_in_single = 0U;
    if ((1U & (~ ((1U == (IData)(vlSelf->tpu_top__DOT__bank)) 
                  & (~ (IData)(vlSelf->tpu_top__DOT__dma__DOT__w_ready)))))) {
        if (((2U == (IData)(vlSelf->tpu_top__DOT__bank)) 
             & (~ (IData)(vlSelf->tpu_top__DOT__dma__DOT__b_ready)))) {
            vlSelf->tpu_top__DOT__dma__DOT__bias_we_in_single 
                = vlSelf->u_in;
        }
        if ((1U & (~ ((2U == (IData)(vlSelf->tpu_top__DOT__bank)) 
                      & (~ (IData)(vlSelf->tpu_top__DOT__dma__DOT__b_ready)))))) {
            if (((3U == (IData)(vlSelf->tpu_top__DOT__bank)) 
                 & (~ (IData)(vlSelf->tpu_top__DOT__dma__DOT__a_ready)))) {
                vlSelf->tpu_top__DOT__dma__DOT__act_we_in_single 
                    = vlSelf->u_in;
            }
        }
    }
    vlSelf->tpu_top__DOT__a_buff__DOT__we_valid_a = 0U;
    vlSelf->tpu_top__DOT__a_buff__DOT__write_in_a = 0U;
    if (((IData)(vlSelf->tpu_top__DOT__a_buff__DOT__we_a) 
         & (IData)(vlSelf->tpu_top__DOT__activation_bank_out_valid))) {
        vlSelf->tpu_top__DOT__a_buff__DOT__we_valid_a = 1U;
        vlSelf->tpu_top__DOT__a_buff__DOT__write_in_a 
            = vlSelf->tpu_top__DOT__activation_bank_out;
    }
    vlSelf->tpu_top__DOT__a_buff__DOT__we_valid_b = 0U;
    vlSelf->tpu_top__DOT__a_buff__DOT__write_in_b = 0U;
    if (((IData)(vlSelf->tpu_top__DOT__a_buff__DOT__we_b) 
         & (IData)(vlSelf->tpu_top__DOT__activation_bank_out_valid))) {
        vlSelf->tpu_top__DOT__a_buff__DOT__we_valid_b = 1U;
        vlSelf->tpu_top__DOT__a_buff__DOT__write_in_b 
            = vlSelf->tpu_top__DOT__activation_bank_out;
    }
    vlSelf->tpu_top__DOT__pe_preload_en = ((IData)(vlSelf->tpu_top__DOT__preload_state) 
                                           & (IData)(tpu_top__DOT__weight_data_valid));
    if (vlSelf->tpu_top__DOT__pe_preload_en) {
        vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_1_0__accum_in 
            = VL_EXTENDS_II(32,8, (IData)(vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_0__DOT__b_reg));
        vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_1_1__accum_in 
            = VL_EXTENDS_II(32,8, (IData)(vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_1__DOT__b_reg));
        vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_1_2__accum_in 
            = VL_EXTENDS_II(32,8, (IData)(vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_2__DOT__b_reg));
        vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_1_3__accum_in 
            = VL_EXTENDS_II(32,8, (IData)(vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_3__DOT__b_reg));
        vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_2_0__accum_in 
            = VL_EXTENDS_II(32,8, (IData)(vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_0__DOT__b_reg));
        vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_2_1__accum_in 
            = VL_EXTENDS_II(32,8, (IData)(vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_1__DOT__b_reg));
        vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_2_2__accum_in 
            = VL_EXTENDS_II(32,8, (IData)(vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_2__DOT__b_reg));
        vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_2_3__accum_in 
            = VL_EXTENDS_II(32,8, (IData)(vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_3__DOT__b_reg));
        vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_3_0__accum_in 
            = VL_EXTENDS_II(32,8, (IData)(vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_0__DOT__b_reg));
        vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_3_1__accum_in 
            = VL_EXTENDS_II(32,8, (IData)(vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_1__DOT__b_reg));
        vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_3_2__accum_in 
            = VL_EXTENDS_II(32,8, (IData)(vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_2__DOT__b_reg));
        vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_3_3__accum_in 
            = VL_EXTENDS_II(32,8, (IData)(vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_3__DOT__b_reg));
        vlSelf->tpu_top__DOT__sys_array__DOT__product_array_raw[0U] 
            = VL_EXTENDS_II(32,8, (IData)(vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_0__DOT__b_reg));
        vlSelf->tpu_top__DOT__sys_array__DOT__product_array_raw[1U] 
            = VL_EXTENDS_II(32,8, (IData)(vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_1__DOT__b_reg));
    } else {
        vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_1_0__accum_in 
            = vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_0__DOT__accum_reg;
        vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_1_1__accum_in 
            = vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_1__DOT__accum_reg;
        vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_1_2__accum_in 
            = vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_2__DOT__accum_reg;
        vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_1_3__accum_in 
            = vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_3__DOT__accum_reg;
        vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_2_0__accum_in 
            = vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_0__DOT__accum_reg;
        vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_2_1__accum_in 
            = vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_1__DOT__accum_reg;
        vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_2_2__accum_in 
            = vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_2__DOT__accum_reg;
        vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_2_3__accum_in 
            = vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_3__DOT__accum_reg;
        vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_3_0__accum_in 
            = vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_0__DOT__accum_reg;
        vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_3_1__accum_in 
            = vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_1__DOT__accum_reg;
        vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_3_2__accum_in 
            = vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_2__DOT__accum_reg;
        vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_3_3__accum_in 
            = vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_3__DOT__accum_reg;
        vlSelf->tpu_top__DOT__sys_array__DOT__product_array_raw[0U] 
            = vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_0__DOT__accum_reg;
        vlSelf->tpu_top__DOT__sys_array__DOT__product_array_raw[1U] 
            = vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_1__DOT__accum_reg;
    }
    vlSelf->tpu_top__DOT__sys_array__DOT__product_array_raw[2U] 
        = (IData)((((QData)((IData)(((IData)(vlSelf->tpu_top__DOT__pe_preload_en)
                                      ? VL_EXTENDS_II(32,8, (IData)(vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_3__DOT__b_reg))
                                      : vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_3__DOT__accum_reg))) 
                    << 0x20U) | (QData)((IData)(((IData)(vlSelf->tpu_top__DOT__pe_preload_en)
                                                  ? 
                                                 VL_EXTENDS_II(32,8, (IData)(vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_2__DOT__b_reg))
                                                  : vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_2__DOT__accum_reg)))));
    vlSelf->tpu_top__DOT__sys_array__DOT__product_array_raw[3U] 
        = (IData)(((((QData)((IData)(((IData)(vlSelf->tpu_top__DOT__pe_preload_en)
                                       ? VL_EXTENDS_II(32,8, (IData)(vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_3__DOT__b_reg))
                                       : vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_3__DOT__accum_reg))) 
                     << 0x20U) | (QData)((IData)(((IData)(vlSelf->tpu_top__DOT__pe_preload_en)
                                                   ? 
                                                  VL_EXTENDS_II(32,8, (IData)(vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_2__DOT__b_reg))
                                                   : vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_2__DOT__accum_reg)))) 
                   >> 0x20U));
}

VL_ATTR_COLD void Vtpu_top___024root___eval_stl(Vtpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtpu_top___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtpu_top___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtpu_top___024root___eval_triggers__stl(Vtpu_top___024root* vlSelf);

VL_ATTR_COLD bool Vtpu_top___024root___eval_phase__stl(Vtpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtpu_top___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtpu_top___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtpu_top___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtpu_top___024root___dump_triggers__ico(Vtpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtpu_top___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtpu_top___024root___dump_triggers__act(Vtpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtpu_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk or negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtpu_top___024root___dump_triggers__nba(Vtpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtpu_top___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtpu_top___024root___ctor_var_reset(Vtpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtpu_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->u_in = VL_RAND_RESET_I(8);
    vlSelf->uio_in = VL_RAND_RESET_I(8);
    vlSelf->uio_out = VL_RAND_RESET_I(8);
    vlSelf->u_out = VL_RAND_RESET_I(8);
    vlSelf->tpu_top__DOT__opcode_reg = VL_RAND_RESET_I(8);
    vlSelf->tpu_top__DOT__requant_value = VL_RAND_RESET_I(8);
    vlSelf->tpu_top__DOT__bank = VL_RAND_RESET_I(4);
    vlSelf->tpu_top__DOT__preload_state = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__weight_fifo_full = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__weight_fifo_empty = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__weight_data_out = VL_RAND_RESET_I(32);
    vlSelf->tpu_top__DOT__weight_bank_out = VL_RAND_RESET_I(32);
    vlSelf->tpu_top__DOT__weight_bank_out_valid = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__stream_state = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__tile_done = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__activation_bank_out = VL_RAND_RESET_I(32);
    vlSelf->tpu_top__DOT__activation_bank_out_valid = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__systolic_act_in = VL_RAND_RESET_I(32);
    vlSelf->tpu_top__DOT__systolic_act_in_valid = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(128, vlSelf->tpu_top__DOT__product_out);
    vlSelf->tpu_top__DOT__product_out_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->tpu_top__DOT__product_biased);
    vlSelf->tpu_top__DOT__product_biased_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->tpu_top__DOT__relu_out);
    vlSelf->tpu_top__DOT__relu_out_valid = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__requant_out_valid = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__pe_preload_en = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__current_state = VL_RAND_RESET_I(5);
    vlSelf->tpu_top__DOT__next_state = VL_RAND_RESET_I(5);
    vlSelf->tpu_top__DOT__prefill_en = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__prefill_clr = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__preload_en = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__preload_clr = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__row_clr = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__tile_clr = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__prefill_count = VL_RAND_RESET_I(9);
    vlSelf->tpu_top__DOT__preload_count = VL_RAND_RESET_I(9);
    vlSelf->tpu_top__DOT__row_count = VL_RAND_RESET_I(9);
    vlSelf->tpu_top__DOT__tile_count = VL_RAND_RESET_I(9);
    vlSelf->tpu_top__DOT____Vcellout__req__out = VL_RAND_RESET_I(32);
    vlSelf->tpu_top__DOT__w_l__DOT__fifo_re = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__w_l__DOT__fifo_we = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__w_l__DOT__current_state = VL_RAND_RESET_I(5);
    vlSelf->tpu_top__DOT__w_l__DOT__next_state = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tpu_top__DOT__w_l__DOT__weight_fifo__DOT__Q[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tpu_top__DOT__w_l__DOT__weight_fifo__DOT__putPtr = VL_RAND_RESET_I(2);
    vlSelf->tpu_top__DOT__w_l__DOT__weight_fifo__DOT__count = VL_RAND_RESET_I(4);
    vlSelf->tpu_top__DOT__a_buff__DOT__we_a = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__a_buff__DOT__re_a = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__a_buff__DOT__clr_a = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__a_buff__DOT__re_valid_a = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__a_buff__DOT__we_valid_a = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__a_buff__DOT__buff_a_empty = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__a_buff__DOT__buff_a_full = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__a_buff__DOT__buff_a_active = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__a_buff__DOT__write_in_a = VL_RAND_RESET_I(32);
    vlSelf->tpu_top__DOT__a_buff__DOT__re_out_a = VL_RAND_RESET_I(32);
    vlSelf->tpu_top__DOT__a_buff__DOT__we_b = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__a_buff__DOT__re_b = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__a_buff__DOT__clr_b = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__a_buff__DOT__re_valid_b = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__a_buff__DOT__we_valid_b = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__a_buff__DOT__buff_b_empty = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__a_buff__DOT__buff_b_full = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__a_buff__DOT__buff_b_active = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__a_buff__DOT__write_in_b = VL_RAND_RESET_I(32);
    vlSelf->tpu_top__DOT__a_buff__DOT__re_out_b = VL_RAND_RESET_I(32);
    vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__current_state = VL_RAND_RESET_I(6);
    vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__next_state = VL_RAND_RESET_I(6);
    vlSelf->tpu_top__DOT__a_buff__DOT__A__DOT__o_bank_reg = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__current_state = VL_RAND_RESET_I(6);
    vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__next_state = VL_RAND_RESET_I(6);
    vlSelf->tpu_top__DOT__a_buff__DOT__B__DOT__o_bank_reg = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_A__DOT__buff);
    vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_A__DOT__wr_ptr = VL_RAND_RESET_I(10);
    vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_A__DOT__rd_ptr = VL_RAND_RESET_I(10);
    VL_RAND_RESET_W(128, vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_B__DOT__buff);
    vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_B__DOT__wr_ptr = VL_RAND_RESET_I(10);
    vlSelf->tpu_top__DOT__a_buff__DOT__BUFF_B__DOT__rd_ptr = VL_RAND_RESET_I(10);
    vlSelf->tpu_top__DOT__sys_array__DOT____Vcellout__pe_0_0__right_out_valid = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__sys_array__DOT____Vcellout__pe_0_0__right_out = VL_RAND_RESET_I(8);
    vlSelf->tpu_top__DOT__sys_array__DOT____Vcellout__pe_0_0__accum_out_valid = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__sys_array__DOT____Vcellout__pe_0_1__right_out_valid = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__sys_array__DOT____Vcellout__pe_0_1__right_out = VL_RAND_RESET_I(8);
    vlSelf->tpu_top__DOT__sys_array__DOT____Vcellout__pe_0_1__accum_out_valid = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__sys_array__DOT____Vcellout__pe_0_2__right_out_valid = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__sys_array__DOT____Vcellout__pe_0_2__right_out = VL_RAND_RESET_I(8);
    vlSelf->tpu_top__DOT__sys_array__DOT____Vcellout__pe_0_2__accum_out_valid = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__sys_array__DOT____Vcellout__pe_0_3__accum_out_valid = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__sys_array__DOT____Vcellout__pe_1_0__right_out_valid = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__sys_array__DOT____Vcellout__pe_1_0__right_out = VL_RAND_RESET_I(8);
    vlSelf->tpu_top__DOT__sys_array__DOT____Vcellout__pe_1_0__accum_out_valid = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_1_0__accum_in = VL_RAND_RESET_I(32);
    vlSelf->tpu_top__DOT__sys_array__DOT____Vcellout__pe_1_1__right_out_valid = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__sys_array__DOT____Vcellout__pe_1_1__right_out = VL_RAND_RESET_I(8);
    vlSelf->tpu_top__DOT__sys_array__DOT____Vcellout__pe_1_1__accum_out_valid = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_1_1__accum_in = VL_RAND_RESET_I(32);
    vlSelf->tpu_top__DOT__sys_array__DOT____Vcellout__pe_1_2__right_out_valid = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__sys_array__DOT____Vcellout__pe_1_2__right_out = VL_RAND_RESET_I(8);
    vlSelf->tpu_top__DOT__sys_array__DOT____Vcellout__pe_1_2__accum_out_valid = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_1_2__accum_in = VL_RAND_RESET_I(32);
    vlSelf->tpu_top__DOT__sys_array__DOT____Vcellout__pe_1_3__accum_out_valid = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_1_3__accum_in = VL_RAND_RESET_I(32);
    vlSelf->tpu_top__DOT__sys_array__DOT____Vcellout__pe_2_0__right_out_valid = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__sys_array__DOT____Vcellout__pe_2_0__right_out = VL_RAND_RESET_I(8);
    vlSelf->tpu_top__DOT__sys_array__DOT____Vcellout__pe_2_0__accum_out_valid = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_2_0__accum_in = VL_RAND_RESET_I(32);
    vlSelf->tpu_top__DOT__sys_array__DOT____Vcellout__pe_2_1__right_out_valid = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__sys_array__DOT____Vcellout__pe_2_1__right_out = VL_RAND_RESET_I(8);
    vlSelf->tpu_top__DOT__sys_array__DOT____Vcellout__pe_2_1__accum_out_valid = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_2_1__accum_in = VL_RAND_RESET_I(32);
    vlSelf->tpu_top__DOT__sys_array__DOT____Vcellout__pe_2_2__right_out_valid = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__sys_array__DOT____Vcellout__pe_2_2__right_out = VL_RAND_RESET_I(8);
    vlSelf->tpu_top__DOT__sys_array__DOT____Vcellout__pe_2_2__accum_out_valid = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_2_2__accum_in = VL_RAND_RESET_I(32);
    vlSelf->tpu_top__DOT__sys_array__DOT____Vcellout__pe_2_3__accum_out_valid = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_2_3__accum_in = VL_RAND_RESET_I(32);
    vlSelf->tpu_top__DOT__sys_array__DOT____Vcellout__pe_3_0__right_out_valid = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__sys_array__DOT____Vcellout__pe_3_0__right_out = VL_RAND_RESET_I(8);
    vlSelf->tpu_top__DOT__sys_array__DOT____Vcellout__pe_3_0__accum_out_valid = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_3_0__accum_in = VL_RAND_RESET_I(32);
    vlSelf->tpu_top__DOT__sys_array__DOT____Vcellout__pe_3_1__right_out_valid = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__sys_array__DOT____Vcellout__pe_3_1__right_out = VL_RAND_RESET_I(8);
    vlSelf->tpu_top__DOT__sys_array__DOT____Vcellout__pe_3_1__accum_out_valid = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_3_1__accum_in = VL_RAND_RESET_I(32);
    vlSelf->tpu_top__DOT__sys_array__DOT____Vcellout__pe_3_2__right_out_valid = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__sys_array__DOT____Vcellout__pe_3_2__right_out = VL_RAND_RESET_I(8);
    vlSelf->tpu_top__DOT__sys_array__DOT____Vcellout__pe_3_2__accum_out_valid = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_3_2__accum_in = VL_RAND_RESET_I(32);
    vlSelf->tpu_top__DOT__sys_array__DOT____Vcellout__pe_3_3__accum_out_valid = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__sys_array__DOT____Vcellinp__pe_3_3__accum_in = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, vlSelf->tpu_top__DOT__sys_array__DOT__product_array_raw);
    vlSelf->tpu_top__DOT__sys_array__DOT__product_array_valid = VL_RAND_RESET_I(4);
    vlSelf->tpu_top__DOT__sys_array__DOT__skew_buff_1__DOT__row_1_valid = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__sys_array__DOT__skew_buff_1__DOT__row_2_valid = VL_RAND_RESET_I(2);
    vlSelf->tpu_top__DOT__sys_array__DOT__skew_buff_1__DOT__row_3_valid = VL_RAND_RESET_I(3);
    vlSelf->tpu_top__DOT__sys_array__DOT__skew_buff_1__DOT__row_1 = VL_RAND_RESET_I(8);
    vlSelf->tpu_top__DOT__sys_array__DOT__skew_buff_1__DOT__row_2 = VL_RAND_RESET_I(16);
    vlSelf->tpu_top__DOT__sys_array__DOT__skew_buff_1__DOT__row_3 = VL_RAND_RESET_I(24);
    vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_0__DOT__a_reg = VL_RAND_RESET_I(8);
    vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_0__DOT__b_reg = VL_RAND_RESET_I(8);
    vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_0__DOT__accum_reg = VL_RAND_RESET_I(32);
    vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_0__DOT__a_reg_valid = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_1__DOT__a_reg = VL_RAND_RESET_I(8);
    vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_1__DOT__b_reg = VL_RAND_RESET_I(8);
    vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_1__DOT__accum_reg = VL_RAND_RESET_I(32);
    vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_1__DOT__a_reg_valid = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_2__DOT__a_reg = VL_RAND_RESET_I(8);
    vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_2__DOT__b_reg = VL_RAND_RESET_I(8);
    vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_2__DOT__accum_reg = VL_RAND_RESET_I(32);
    vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_2__DOT__a_reg_valid = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_3__DOT__a_reg = VL_RAND_RESET_I(8);
    vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_3__DOT__b_reg = VL_RAND_RESET_I(8);
    vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_3__DOT__accum_reg = VL_RAND_RESET_I(32);
    vlSelf->tpu_top__DOT__sys_array__DOT__pe_0_3__DOT__a_reg_valid = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_0__DOT__a_reg = VL_RAND_RESET_I(8);
    vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_0__DOT__b_reg = VL_RAND_RESET_I(8);
    vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_0__DOT__accum_reg = VL_RAND_RESET_I(32);
    vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_0__DOT__a_reg_valid = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_1__DOT__a_reg = VL_RAND_RESET_I(8);
    vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_1__DOT__b_reg = VL_RAND_RESET_I(8);
    vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_1__DOT__accum_reg = VL_RAND_RESET_I(32);
    vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_1__DOT__a_reg_valid = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_2__DOT__a_reg = VL_RAND_RESET_I(8);
    vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_2__DOT__b_reg = VL_RAND_RESET_I(8);
    vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_2__DOT__accum_reg = VL_RAND_RESET_I(32);
    vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_2__DOT__a_reg_valid = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_3__DOT__a_reg = VL_RAND_RESET_I(8);
    vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_3__DOT__b_reg = VL_RAND_RESET_I(8);
    vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_3__DOT__accum_reg = VL_RAND_RESET_I(32);
    vlSelf->tpu_top__DOT__sys_array__DOT__pe_1_3__DOT__a_reg_valid = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_0__DOT__a_reg = VL_RAND_RESET_I(8);
    vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_0__DOT__b_reg = VL_RAND_RESET_I(8);
    vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_0__DOT__accum_reg = VL_RAND_RESET_I(32);
    vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_0__DOT__a_reg_valid = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_1__DOT__a_reg = VL_RAND_RESET_I(8);
    vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_1__DOT__b_reg = VL_RAND_RESET_I(8);
    vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_1__DOT__accum_reg = VL_RAND_RESET_I(32);
    vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_1__DOT__a_reg_valid = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_2__DOT__a_reg = VL_RAND_RESET_I(8);
    vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_2__DOT__b_reg = VL_RAND_RESET_I(8);
    vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_2__DOT__accum_reg = VL_RAND_RESET_I(32);
    vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_2__DOT__a_reg_valid = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_3__DOT__a_reg = VL_RAND_RESET_I(8);
    vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_3__DOT__b_reg = VL_RAND_RESET_I(8);
    vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_3__DOT__accum_reg = VL_RAND_RESET_I(32);
    vlSelf->tpu_top__DOT__sys_array__DOT__pe_2_3__DOT__a_reg_valid = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_0__DOT__a_reg = VL_RAND_RESET_I(8);
    vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_0__DOT__b_reg = VL_RAND_RESET_I(8);
    vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_0__DOT__accum_reg = VL_RAND_RESET_I(32);
    vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_0__DOT__a_reg_valid = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_1__DOT__a_reg = VL_RAND_RESET_I(8);
    vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_1__DOT__b_reg = VL_RAND_RESET_I(8);
    vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_1__DOT__accum_reg = VL_RAND_RESET_I(32);
    vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_1__DOT__a_reg_valid = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_2__DOT__a_reg = VL_RAND_RESET_I(8);
    vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_2__DOT__b_reg = VL_RAND_RESET_I(8);
    vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_2__DOT__accum_reg = VL_RAND_RESET_I(32);
    vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_2__DOT__a_reg_valid = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_3__DOT__a_reg = VL_RAND_RESET_I(8);
    vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_3__DOT__b_reg = VL_RAND_RESET_I(8);
    vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_3__DOT__accum_reg = VL_RAND_RESET_I(32);
    vlSelf->tpu_top__DOT__sys_array__DOT__pe_3_3__DOT__a_reg_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(512, vlSelf->tpu_top__DOT__sys_array__DOT__deskew_buff_1__DOT__buffer);
    vlSelf->tpu_top__DOT__sys_array__DOT__deskew_buff_1__DOT__col0_cnt = VL_RAND_RESET_I(4);
    vlSelf->tpu_top__DOT__sys_array__DOT__deskew_buff_1__DOT__col1_cnt = VL_RAND_RESET_I(4);
    vlSelf->tpu_top__DOT__sys_array__DOT__deskew_buff_1__DOT__col2_cnt = VL_RAND_RESET_I(4);
    vlSelf->tpu_top__DOT__sys_array__DOT__deskew_buff_1__DOT__col3_cnt = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(128, vlSelf->tpu_top__DOT__b_add__DOT__bias_reg);
    VL_RAND_RESET_W(128, vlSelf->tpu_top__DOT__req__DOT__shift_buffer);
    vlSelf->tpu_top__DOT__dma__DOT__weight_we_in_single = VL_RAND_RESET_I(8);
    vlSelf->tpu_top__DOT__dma__DOT__bias_we_in_single = VL_RAND_RESET_I(8);
    vlSelf->tpu_top__DOT__dma__DOT__act_we_in_single = VL_RAND_RESET_I(8);
    vlSelf->tpu_top__DOT__dma__DOT__en_counter = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__dma__DOT__clr_counter = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__dma__DOT__a_ready = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__dma__DOT__b_ready = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__dma__DOT__w_ready = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__dma__DOT__act_we_en_counter = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__dma__DOT__act_we_clr_counter = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__dma__DOT__act_we_count = VL_RAND_RESET_I(9);
    vlSelf->tpu_top__DOT__dma__DOT__weight_we = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__dma__DOT__weight_re = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__dma__DOT__weight_clr = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__dma__DOT__weight_full = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__dma__DOT__weight_empty = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__dma__DOT__act_we = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__dma__DOT__act_re = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__dma__DOT__act_full = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__dma__DOT__act_empty = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__dma__DOT__act_en_counter = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__dma__DOT__act_clr_counter = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__dma__DOT__act_re_count = VL_RAND_RESET_I(9);
    vlSelf->tpu_top__DOT__dma__DOT__bias_we = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__dma__DOT__bias_clr = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__dma__DOT__bias_full = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__dma__DOT__result_re = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__dma__DOT__result_clr = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__dma__DOT__result_re_out = VL_RAND_RESET_I(32);
    vlSelf->tpu_top__DOT__dma__DOT__result_full = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__dma__DOT__result_empty = VL_RAND_RESET_I(1);
    vlSelf->tpu_top__DOT__dma__DOT__read_count = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(2048, vlSelf->tpu_top__DOT__dma__DOT__weight_buf__DOT__buff);
    vlSelf->tpu_top__DOT__dma__DOT__weight_buf__DOT__wr_ptr = VL_RAND_RESET_I(10);
    vlSelf->tpu_top__DOT__dma__DOT__weight_buf__DOT__rd_ptr = VL_RAND_RESET_I(10);
    vlSelf->tpu_top__DOT__dma__DOT__act_read_fsm__DOT__current_state = VL_RAND_RESET_I(6);
    vlSelf->tpu_top__DOT__dma__DOT__act_read_fsm__DOT__next_state = VL_RAND_RESET_I(6);
    VL_RAND_RESET_W(1024, vlSelf->tpu_top__DOT__dma__DOT__act_buf__DOT__buff);
    vlSelf->tpu_top__DOT__dma__DOT__act_buf__DOT__wr_ptr = VL_RAND_RESET_I(10);
    vlSelf->tpu_top__DOT__dma__DOT__act_buf__DOT__rd_ptr = VL_RAND_RESET_I(10);
    VL_RAND_RESET_W(128, vlSelf->tpu_top__DOT__dma__DOT__bias_buf__DOT__buff);
    vlSelf->tpu_top__DOT__dma__DOT__bias_buf__DOT__wr_ptr = VL_RAND_RESET_I(10);
    vlSelf->tpu_top__DOT__dma__DOT__w_fsm__DOT__current_state = VL_RAND_RESET_I(6);
    vlSelf->tpu_top__DOT__dma__DOT__w_fsm__DOT__next_state = VL_RAND_RESET_I(6);
    vlSelf->tpu_top__DOT__dma__DOT__b_fsm__DOT__current_state = VL_RAND_RESET_I(6);
    vlSelf->tpu_top__DOT__dma__DOT__b_fsm__DOT__next_state = VL_RAND_RESET_I(6);
    vlSelf->tpu_top__DOT__dma__DOT__a_fsm__DOT__current_state = VL_RAND_RESET_I(6);
    vlSelf->tpu_top__DOT__dma__DOT__a_fsm__DOT__next_state = VL_RAND_RESET_I(6);
    VL_RAND_RESET_W(2048, vlSelf->tpu_top__DOT__dma__DOT__result_buf__DOT__buff);
    vlSelf->tpu_top__DOT__dma__DOT__result_buf__DOT__wr_ptr = VL_RAND_RESET_I(10);
    vlSelf->tpu_top__DOT__dma__DOT__result_buf__DOT__rd_ptr = VL_RAND_RESET_I(10);
    vlSelf->tpu_top__DOT__dma__DOT__r_fsm__DOT__current_state = VL_RAND_RESET_I(6);
    vlSelf->tpu_top__DOT__dma__DOT__r_fsm__DOT__next_state = VL_RAND_RESET_I(6);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = VL_RAND_RESET_I(1);
}
