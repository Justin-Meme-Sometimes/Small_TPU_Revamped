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
}

VL_ATTR_COLD void Vtb_tpu_top___024root___eval_static__TOP(Vtb_tpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_tpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tpu_top___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->tb_tpu_top__DOT__errors = 0U;
    vlSelf->tb_tpu_top__DOT__checks = 0U;
    vlSelf->tb_tpu_top__DOT__clk = 0U;
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
            VL_FATAL_MT("tb/tb_tpu_top.sv", 55, "", "Settle region did not converge.");
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

VL_ATTR_COLD void Vtb_tpu_top___024root___stl_sequent__TOP__0(Vtb_tpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_tpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tpu_top___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__start;
    tb_tpu_top__DOT__dut__DOT__start = 0;
    CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__preload_state;
    tb_tpu_top__DOT__dut__DOT__preload_state = 0;
    CData/*0:0*/ tb_tpu_top__DOT__dut__DOT____VdfgExtracted_hf6a6c9db__0;
    tb_tpu_top__DOT__dut__DOT____VdfgExtracted_hf6a6c9db__0 = 0;
    CData/*0:0*/ tb_tpu_top__DOT__dut__DOT____VdfgExtracted_h621a341a__0;
    tb_tpu_top__DOT__dut__DOT____VdfgExtracted_h621a341a__0 = 0;
    CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__dma__DOT__activations_busy;
    tb_tpu_top__DOT__dut__DOT__dma__DOT__activations_busy = 0;
    CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__dma__DOT__weights_busy;
    tb_tpu_top__DOT__dut__DOT__dma__DOT__weights_busy = 0;
    CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__dma__DOT__bias_busy;
    tb_tpu_top__DOT__dut__DOT__dma__DOT__bias_busy = 0;
    CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__dma__DOT__a_ready;
    tb_tpu_top__DOT__dut__DOT__dma__DOT__a_ready = 0;
    CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__dma__DOT__b_ready;
    tb_tpu_top__DOT__dut__DOT__dma__DOT__b_ready = 0;
    CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__dma__DOT__w_ready;
    tb_tpu_top__DOT__dut__DOT__dma__DOT__w_ready = 0;
    // Body
    vlSelf->tb_tpu_top__DOT__dut__DOT__tile_clr = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__bias_clr = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__en_counter = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__weight_fifo_empty 
        = (0U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__count));
    vlSelf->tb_tpu_top__DOT__dut__DOT__weight_fifo_full 
        = (4U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__count));
    vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__bias_full 
        = (0x10U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__bias_buf__DOT__wr_ptr));
    vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__act_full 
        = (0x10U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__act_buf__DOT__wr_ptr));
    vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_full 
        = (0x100U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_buf__DOT__wr_ptr));
    vlSelf->tb_tpu_top__DOT__dut__DOT__tile_done = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__drain_en = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__prefill_clr = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__preload_clr = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__compute_clr = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__func_clr = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__prefill_en = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__preload_en = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__compute_en = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__bias_we = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__act_we = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__clr_counter = 0U;
    if ((0U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__r_fsm__DOT__current_state))) {
        if ((1U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__r_fsm__DOT__current_state))) {
            vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__en_counter = 1U;
            if ((0x40U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__read_count))) {
                vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__clr_counter = 1U;
            }
        }
    }
    vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__fifo_we = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__start_read_fsm = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_we = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_empty 
        = ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_buf__DOT__rd_ptr) 
           == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_buf__DOT__wr_ptr));
    vlSelf->tb_tpu_top__DOT__dut__DOT__bias_fsm_start = 0U;
    tb_tpu_top__DOT__dut__DOT__start = 0U;
    if ((1U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__opcode_reg))) {
        if ((0U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state))) {
            tb_tpu_top__DOT__dut__DOT__start = 1U;
        }
    }
    vlSelf->tb_tpu_top__DOT__dut__DOT__weight_fsm_start = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__activation_fsm_start = 0U;
    if ((1U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__opcode_reg))) {
        if ((3U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__opcode_reg))) {
            vlSelf->tb_tpu_top__DOT__dut__DOT__start_read_fsm = 1U;
        }
        if ((3U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__opcode_reg))) {
            if ((5U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__opcode_reg))) {
                if ((6U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__opcode_reg))) {
                    if ((7U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__opcode_reg))) {
                        vlSelf->tb_tpu_top__DOT__dut__DOT__bias_fsm_start = 1U;
                    }
                }
                if ((6U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__opcode_reg))) {
                    vlSelf->tb_tpu_top__DOT__dut__DOT__activation_fsm_start = 1U;
                }
            }
            if ((5U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__opcode_reg))) {
                vlSelf->tb_tpu_top__DOT__dut__DOT__weight_fsm_start = 1U;
            }
        }
    }
    tb_tpu_top__DOT__dut__DOT__preload_state = 0U;
    tb_tpu_top__DOT__dut__DOT____VdfgExtracted_hf6a6c9db__0 
        = ((8U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count)) 
           & (3U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__funcs_count)));
    tb_tpu_top__DOT__dut__DOT____VdfgExtracted_h621a341a__0 
        = ((3U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__funcs_count)) 
           & (8U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count)));
    tb_tpu_top__DOT__dut__DOT__dma__DOT__weights_busy = 0U;
    if ((0U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__w_fsm__DOT__current_state))) {
        if ((1U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__w_fsm__DOT__current_state))) {
            if ((0x100U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_buf__DOT__wr_ptr))) {
                vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_we = 1U;
                tb_tpu_top__DOT__dut__DOT__dma__DOT__weights_busy = 1U;
            }
        }
    }
    tb_tpu_top__DOT__dut__DOT__dma__DOT__bias_busy = 0U;
    if ((0U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__b_fsm__DOT__current_state))) {
        if ((1U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__b_fsm__DOT__current_state))) {
            if ((2U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__b_fsm__DOT__current_state))) {
                vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__bias_clr = 1U;
            }
        }
        if ((1U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__b_fsm__DOT__current_state))) {
            if ((0x10U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__bias_buf__DOT__wr_ptr))) {
                vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__bias_we = 1U;
                tb_tpu_top__DOT__dut__DOT__dma__DOT__bias_busy = 1U;
            }
        }
    }
    tb_tpu_top__DOT__dut__DOT__dma__DOT__activations_busy = 0U;
    if ((0U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__a_fsm__DOT__current_state))) {
        if ((1U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__a_fsm__DOT__current_state))) {
            if ((0x10U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__act_buf__DOT__wr_ptr))) {
                vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__act_we = 1U;
                tb_tpu_top__DOT__dut__DOT__dma__DOT__activations_busy = 1U;
            }
        }
    }
    vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__r_fsm__DOT__next_state 
        = vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__r_fsm__DOT__current_state;
    if ((0U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__r_fsm__DOT__current_state))) {
        vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__r_fsm__DOT__next_state 
            = ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__start_read_fsm)
                ? 1U : 0U);
    } else if ((1U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__r_fsm__DOT__current_state))) {
        vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__r_fsm__DOT__next_state 
            = ((0x40U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__read_count))
                ? 0U : 1U);
    }
    vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_re 
        = (1U & (~ ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_empty) 
                    | (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_we))));
    vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__fifo_re = 0U;
    if ((0U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__current_state))) {
        if ((1U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__current_state))) {
            if (((4U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__count)) 
                 & (2U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state)))) {
                if (vlSelf->tb_tpu_top__DOT__dut__DOT__weight_bank_out_valid) {
                    vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__fifo_we = 1U;
                }
            }
        }
    }
    if ((0U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state))) {
        if ((2U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state))) {
            if ((3U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state))) {
                if ((4U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state))) {
                    if ((5U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state))) {
                        if ((6U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state))) {
                            if ((7U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state))) {
                                vlSelf->tb_tpu_top__DOT__dut__DOT__tile_clr = 1U;
                            }
                        }
                    }
                    if ((5U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state))) {
                        if ((4U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__drain_count))) {
                            vlSelf->tb_tpu_top__DOT__dut__DOT__drain_en = 1U;
                            vlSelf->tb_tpu_top__DOT__dut__DOT__compute_clr = 1U;
                        }
                    }
                }
                if ((4U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state))) {
                    if ((7U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__compute_count))) {
                        vlSelf->tb_tpu_top__DOT__dut__DOT__tile_done = 1U;
                    }
                    if ((7U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__compute_count))) {
                        vlSelf->tb_tpu_top__DOT__dut__DOT__preload_clr = 1U;
                        vlSelf->tb_tpu_top__DOT__dut__DOT__compute_en = 1U;
                    }
                }
            }
            if ((3U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state))) {
                if ((8U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__preload_count))) {
                    vlSelf->tb_tpu_top__DOT__dut__DOT__prefill_clr = 1U;
                    vlSelf->tb_tpu_top__DOT__dut__DOT__func_clr = 1U;
                    vlSelf->tb_tpu_top__DOT__dut__DOT__preload_en = 1U;
                }
                tb_tpu_top__DOT__dut__DOT__preload_state = 1U;
            }
        }
        if ((2U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state))) {
            if ((0x10U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__prefill_count))) {
                vlSelf->tb_tpu_top__DOT__dut__DOT__prefill_en = 1U;
            }
        }
    }
    if ((0U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__current_state))) {
        if ((1U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__current_state))) {
            if ((2U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__current_state))) {
                if (((0U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__count)) 
                     & (IData)(tb_tpu_top__DOT__dut__DOT__preload_state))) {
                    vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__fifo_re = 1U;
                }
            }
        }
    }
    vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__next_state 
        = vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__current_state;
    if ((0U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__current_state))) {
        vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__next_state 
            = (((2U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state)) 
                | (8U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count)))
                ? 1U : 0U);
    } else if ((1U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__current_state))) {
        vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__next_state 
            = (((4U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__count)) 
                & (2U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state)))
                ? 1U : 2U);
    } else if ((2U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__current_state))) {
        vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__next_state 
            = (((0U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__count)) 
                & (IData)(tb_tpu_top__DOT__dut__DOT__preload_state))
                ? 2U : 0U);
    }
    vlSelf->tb_tpu_top__DOT__dut__DOT__func_en = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__drain_clr = 0U;
    if ((0U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state))) {
        if ((2U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state))) {
            if ((3U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state))) {
                if ((4U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state))) {
                    if ((5U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state))) {
                        if ((6U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state))) {
                            if ((1U & (~ (IData)(tb_tpu_top__DOT__dut__DOT____VdfgExtracted_hf6a6c9db__0)))) {
                                if ((1U & (~ (IData)(tb_tpu_top__DOT__dut__DOT____VdfgExtracted_h621a341a__0)))) {
                                    vlSelf->tb_tpu_top__DOT__dut__DOT__func_en = 1U;
                                    vlSelf->tb_tpu_top__DOT__dut__DOT__drain_clr = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->tb_tpu_top__DOT__dut__DOT__next_state = vlSelf->tb_tpu_top__DOT__dut__DOT__current_state;
    if ((0U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state))) {
        vlSelf->tb_tpu_top__DOT__dut__DOT__next_state 
            = ((IData)(tb_tpu_top__DOT__dut__DOT__start)
                ? 2U : 0U);
    } else if ((2U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state))) {
        vlSelf->tb_tpu_top__DOT__dut__DOT__next_state 
            = ((0x10U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__prefill_count))
                ? 3U : 2U);
    } else if ((3U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state))) {
        vlSelf->tb_tpu_top__DOT__dut__DOT__next_state 
            = ((8U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__preload_count))
                ? 4U : 3U);
    } else if ((4U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state))) {
        vlSelf->tb_tpu_top__DOT__dut__DOT__next_state 
            = ((7U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__compute_count))
                ? 5U : 4U);
    } else if ((5U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state))) {
        vlSelf->tb_tpu_top__DOT__dut__DOT__next_state 
            = ((4U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__drain_count))
                ? 6U : 5U);
    } else if ((6U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state))) {
        vlSelf->tb_tpu_top__DOT__dut__DOT__next_state 
            = ((IData)(tb_tpu_top__DOT__dut__DOT____VdfgExtracted_hf6a6c9db__0)
                ? 3U : ((IData)(tb_tpu_top__DOT__dut__DOT____VdfgExtracted_h621a341a__0)
                         ? 7U : 6U));
    } else if ((7U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state))) {
        vlSelf->tb_tpu_top__DOT__dut__DOT__next_state = 0U;
    }
    tb_tpu_top__DOT__dut__DOT__dma__DOT__a_ready = 
        ((IData)(tb_tpu_top__DOT__dut__DOT__dma__DOT__bias_busy) 
         | (IData)(tb_tpu_top__DOT__dut__DOT__dma__DOT__weights_busy));
    tb_tpu_top__DOT__dut__DOT__dma__DOT__b_ready = 
        ((IData)(tb_tpu_top__DOT__dut__DOT__dma__DOT__activations_busy) 
         | (IData)(tb_tpu_top__DOT__dut__DOT__dma__DOT__weights_busy));
    tb_tpu_top__DOT__dut__DOT__dma__DOT__w_ready = 
        ((IData)(tb_tpu_top__DOT__dut__DOT__dma__DOT__activations_busy) 
         | (IData)(tb_tpu_top__DOT__dut__DOT__dma__DOT__bias_busy));
    vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__act_clr = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__a_fsm__DOT__next_state 
        = vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__a_fsm__DOT__current_state;
    if ((0U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__a_fsm__DOT__current_state))) {
        if (((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__activation_fsm_start) 
             & (~ (IData)(tb_tpu_top__DOT__dut__DOT__dma__DOT__a_ready)))) {
            vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__act_clr = 1U;
            vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__a_fsm__DOT__next_state = 1U;
        } else {
            vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__a_fsm__DOT__next_state = 0U;
        }
    } else if ((1U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__a_fsm__DOT__current_state))) {
        vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__a_fsm__DOT__next_state 
            = ((0x10U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__act_buf__DOT__wr_ptr))
                ? 2U : 1U);
    } else if ((2U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__a_fsm__DOT__current_state))) {
        vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__a_fsm__DOT__next_state = 0U;
    }
    vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__b_fsm__DOT__next_state 
        = vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__b_fsm__DOT__current_state;
    if ((0U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__b_fsm__DOT__current_state))) {
        vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__b_fsm__DOT__next_state 
            = (((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__bias_fsm_start) 
                & (~ (IData)(tb_tpu_top__DOT__dut__DOT__dma__DOT__b_ready)))
                ? 1U : 0U);
    } else if ((1U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__b_fsm__DOT__current_state))) {
        vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__b_fsm__DOT__next_state 
            = ((0x10U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__bias_buf__DOT__wr_ptr))
                ? 2U : 1U);
    } else if ((2U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__b_fsm__DOT__current_state))) {
        vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__b_fsm__DOT__next_state = 0U;
    }
    vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_we_in_single = 0U;
    if (((1U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__bank)) 
         & (~ (IData)(tb_tpu_top__DOT__dut__DOT__dma__DOT__w_ready)))) {
        vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_we_in_single 
            = vlSelf->tb_tpu_top__DOT__u_in;
    }
    vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_clr = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__bias_we_in_single = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__w_fsm__DOT__next_state 
        = vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__w_fsm__DOT__current_state;
    if ((0U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__w_fsm__DOT__current_state))) {
        if (((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__weight_fsm_start) 
             & (~ (IData)(tb_tpu_top__DOT__dut__DOT__dma__DOT__w_ready)))) {
            vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_clr = 1U;
            vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__w_fsm__DOT__next_state = 1U;
        } else {
            vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__w_fsm__DOT__next_state = 0U;
        }
    } else if ((1U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__w_fsm__DOT__current_state))) {
        vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__w_fsm__DOT__next_state 
            = ((0x100U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_buf__DOT__wr_ptr))
                ? 2U : 1U);
    } else if ((2U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__w_fsm__DOT__current_state))) {
        vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__w_fsm__DOT__next_state = 0U;
    }
    vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__act_we_in_single = 0U;
    if ((1U & (~ ((1U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__bank)) 
                  & (~ (IData)(tb_tpu_top__DOT__dut__DOT__dma__DOT__w_ready)))))) {
        if (((2U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__bank)) 
             & (~ (IData)(tb_tpu_top__DOT__dut__DOT__dma__DOT__b_ready)))) {
            vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__bias_we_in_single 
                = vlSelf->tb_tpu_top__DOT__u_in;
        }
        if ((1U & (~ ((2U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__bank)) 
                      & (~ (IData)(tb_tpu_top__DOT__dut__DOT__dma__DOT__b_ready)))))) {
            if (((3U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__bank)) 
                 & (~ (IData)(tb_tpu_top__DOT__dut__DOT__dma__DOT__a_ready)))) {
                vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__act_we_in_single 
                    = vlSelf->tb_tpu_top__DOT__u_in;
            }
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
    vlSelf->tb_tpu_top__DOT__u_in = VL_RAND_RESET_I(8);
    vlSelf->tb_tpu_top__DOT__uio_in = VL_RAND_RESET_I(8);
    vlSelf->tb_tpu_top__DOT__dut__DOT__opcode_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_tpu_top__DOT__dut__DOT__requant_value = VL_RAND_RESET_I(8);
    vlSelf->tb_tpu_top__DOT__dut__DOT__start_read_fsm = VL_RAND_RESET_I(1);
    vlSelf->tb_tpu_top__DOT__dut__DOT__weight_fsm_start = VL_RAND_RESET_I(1);
    vlSelf->tb_tpu_top__DOT__dut__DOT__activation_fsm_start = VL_RAND_RESET_I(1);
    vlSelf->tb_tpu_top__DOT__dut__DOT__bias_fsm_start = VL_RAND_RESET_I(1);
    vlSelf->tb_tpu_top__DOT__dut__DOT__bank = VL_RAND_RESET_I(4);
    vlSelf->tb_tpu_top__DOT__dut__DOT__weight_fifo_full = VL_RAND_RESET_I(1);
    vlSelf->tb_tpu_top__DOT__dut__DOT__weight_fifo_empty = VL_RAND_RESET_I(1);
    vlSelf->tb_tpu_top__DOT__dut__DOT__weight_bank_out_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_tpu_top__DOT__dut__DOT__tile_done = VL_RAND_RESET_I(1);
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
    vlSelf->tb_tpu_top__DOT__dut__DOT__tile_clr = VL_RAND_RESET_I(1);
    vlSelf->tb_tpu_top__DOT__dut__DOT__prefill_count = VL_RAND_RESET_I(9);
    vlSelf->tb_tpu_top__DOT__dut__DOT__preload_count = VL_RAND_RESET_I(9);
    vlSelf->tb_tpu_top__DOT__dut__DOT__compute_count = VL_RAND_RESET_I(9);
    vlSelf->tb_tpu_top__DOT__dut__DOT__drain_count = VL_RAND_RESET_I(9);
    vlSelf->tb_tpu_top__DOT__dut__DOT__funcs_count = VL_RAND_RESET_I(9);
    vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count = VL_RAND_RESET_I(9);
    vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__fifo_re = VL_RAND_RESET_I(1);
    vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__fifo_we = VL_RAND_RESET_I(1);
    vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__current_state = VL_RAND_RESET_I(5);
    vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__next_state = VL_RAND_RESET_I(5);
    vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__count = VL_RAND_RESET_I(4);
    vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_we_in_single = VL_RAND_RESET_I(8);
    vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__bias_we_in_single = VL_RAND_RESET_I(8);
    vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__act_we_in_single = VL_RAND_RESET_I(8);
    vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__en_counter = VL_RAND_RESET_I(1);
    vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__clr_counter = VL_RAND_RESET_I(1);
    vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_we = VL_RAND_RESET_I(1);
    vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_re = VL_RAND_RESET_I(1);
    vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_clr = VL_RAND_RESET_I(1);
    vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_full = VL_RAND_RESET_I(1);
    vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_empty = VL_RAND_RESET_I(1);
    vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__act_we = VL_RAND_RESET_I(1);
    vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__act_clr = VL_RAND_RESET_I(1);
    vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__act_full = VL_RAND_RESET_I(1);
    vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__bias_we = VL_RAND_RESET_I(1);
    vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__bias_clr = VL_RAND_RESET_I(1);
    vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__bias_full = VL_RAND_RESET_I(1);
    vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__read_count = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(2048, vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_buf__DOT__buff);
    vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_buf__DOT__wr_ptr = VL_RAND_RESET_I(10);
    vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_buf__DOT__rd_ptr = VL_RAND_RESET_I(10);
    vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__act_buf__DOT__wr_ptr = VL_RAND_RESET_I(10);
    vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__bias_buf__DOT__wr_ptr = VL_RAND_RESET_I(10);
    vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__w_fsm__DOT__current_state = VL_RAND_RESET_I(6);
    vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__w_fsm__DOT__next_state = VL_RAND_RESET_I(6);
    vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__b_fsm__DOT__current_state = VL_RAND_RESET_I(6);
    vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__b_fsm__DOT__next_state = VL_RAND_RESET_I(6);
    vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__a_fsm__DOT__current_state = VL_RAND_RESET_I(6);
    vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__a_fsm__DOT__next_state = VL_RAND_RESET_I(6);
    vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__r_fsm__DOT__current_state = VL_RAND_RESET_I(6);
    vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__r_fsm__DOT__next_state = VL_RAND_RESET_I(6);
    vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__trial_num = 0;
    vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__118__num_trials = 0;
    vlSelf->__Vtask_tb_tpu_top__DOT__check__122__cond = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_tb_tpu_top__DOT__check__124__cond = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_tb_tpu_top__DOT__check__126__cond = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_tb_tpu_top__DOT__check__129__cond = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_tb_tpu_top__DOT__check__131__cond = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_tb_tpu_top__DOT__check__133__cond = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_tb_tpu_top__DOT__check__136__cond = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_tb_tpu_top__DOT__check__138__cond = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_tb_tpu_top__DOT__check__140__cond = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__target = VL_RAND_RESET_I(5);
    vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__max_cycles = 0;
    vlSelf->__Vtask_tb_tpu_top__DOT__wait_for_state__157__cycles_taken = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_tpu_top__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_tpu_top__DOT__rst_n__0 = VL_RAND_RESET_I(1);
}
