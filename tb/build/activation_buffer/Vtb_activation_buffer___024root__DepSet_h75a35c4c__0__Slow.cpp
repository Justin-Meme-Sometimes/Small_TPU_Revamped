// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_activation_buffer.h for the primary calling header

#include "Vtb_activation_buffer__pch.h"
#include "Vtb_activation_buffer___024root.h"

VL_ATTR_COLD void Vtb_activation_buffer___024root___eval_static__TOP(Vtb_activation_buffer___024root* vlSelf);

VL_ATTR_COLD void Vtb_activation_buffer___024root___eval_static(Vtb_activation_buffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_activation_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_activation_buffer___024root___eval_static\n"); );
    // Body
    Vtb_activation_buffer___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vtb_activation_buffer___024root___eval_static__TOP(Vtb_activation_buffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_activation_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_activation_buffer___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->tb_activation_buffer__DOT__errors = 0U;
    vlSelf->tb_activation_buffer__DOT__checks = 0U;
    vlSelf->tb_activation_buffer__DOT__clk = 0U;
}

VL_ATTR_COLD void Vtb_activation_buffer___024root___eval_final(Vtb_activation_buffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_activation_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_activation_buffer___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_activation_buffer___024root___dump_triggers__stl(Vtb_activation_buffer___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_activation_buffer___024root___eval_phase__stl(Vtb_activation_buffer___024root* vlSelf);

VL_ATTR_COLD void Vtb_activation_buffer___024root___eval_settle(Vtb_activation_buffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_activation_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_activation_buffer___024root___eval_settle\n"); );
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
            Vtb_activation_buffer___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb/tb_activation_buffer.sv", 11, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_activation_buffer___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_activation_buffer___024root___dump_triggers__stl(Vtb_activation_buffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_activation_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_activation_buffer___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_activation_buffer___024root___stl_sequent__TOP__0(Vtb_activation_buffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_activation_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_activation_buffer___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->tb_activation_buffer__DOT__bf_clr = 0U;
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__clr_a = 0U;
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__clr_b = 0U;
    vlSelf->tb_activation_buffer__DOT__ib_empty = (0U 
                                                   == (IData)(vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__curr_count));
    vlSelf->tb_activation_buffer__DOT__ib_full = (0x10U 
                                                  == (IData)(vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__curr_count));
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__buff_a_full 
        = (0x10U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count));
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__buff_a_empty 
        = (0U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count));
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__buff_b_full 
        = (0x10U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count));
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__buff_b_empty 
        = (0U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count));
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__we_a = 0U;
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__we_b = 0U;
    vlSelf->tb_activation_buffer__DOT__bf_re = 0U;
    vlSelf->tb_activation_buffer__DOT__bf_first_pass = 0U;
    vlSelf->tb_activation_buffer__DOT__bf_we = 0U;
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_a = 0U;
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_b = 0U;
    vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__next_state 
        = vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state;
    vlSelf->tb_activation_buffer__DOT__bf_active = 0U;
    if (((((((((0U == (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state)) 
               | (1U == (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) 
              | (2U == (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) 
             | (3U == (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) 
            | (4U == (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) 
           | (5U == (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) 
          | (6U == (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) 
         | (7U == (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state)))) {
        if ((0U != (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
            if ((1U != (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
                if ((2U != (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
                    if ((3U != (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
                        if ((4U != (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
                            if ((5U != (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
                                if ((6U != (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
                                    vlSelf->tb_activation_buffer__DOT__bf_clr = 1U;
                                }
                            }
                        }
                    }
                    if ((3U == (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
                        if ((((~ (IData)(vlSelf->tb_activation_buffer__DOT__bf_empty)) 
                              & ((IData)(vlSelf->tb_activation_buffer__DOT__bf_compute_state) 
                                 | (IData)(vlSelf->tb_activation_buffer__DOT__bf_drain_state))) 
                             & (~ (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__o_bank_reg)))) {
                            vlSelf->tb_activation_buffer__DOT__bf_re = 1U;
                        }
                    }
                }
            }
        }
        if ((0U == (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
            if (((IData)(vlSelf->tb_activation_buffer__DOT__bf_start) 
                 & (IData)(vlSelf->tb_activation_buffer__DOT__bf_a_or_b))) {
                vlSelf->tb_activation_buffer__DOT__bf_first_pass = 1U;
                vlSelf->tb_activation_buffer__DOT__bf_we = 1U;
                vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__next_state = 1U;
            } else if (((IData)(vlSelf->tb_activation_buffer__DOT__bf_start) 
                        & (~ (IData)(vlSelf->tb_activation_buffer__DOT__bf_a_or_b)))) {
                vlSelf->tb_activation_buffer__DOT__bf_we = 1U;
                vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__next_state = 4U;
            } else {
                vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__next_state = 0U;
            }
        } else if ((1U == (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
            if ((1U & (~ (IData)(vlSelf->tb_activation_buffer__DOT__bf_full)))) {
                vlSelf->tb_activation_buffer__DOT__bf_first_pass = 1U;
                vlSelf->tb_activation_buffer__DOT__bf_we = 1U;
            }
            vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__next_state 
                = ((IData)(vlSelf->tb_activation_buffer__DOT__bf_full)
                    ? 2U : 1U);
        } else if ((2U == (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
            if ((1U & (~ (IData)(vlSelf->tb_activation_buffer__DOT__bf_preload_state)))) {
                vlSelf->tb_activation_buffer__DOT__bf_first_pass = 1U;
                vlSelf->tb_activation_buffer__DOT__bf_we = 1U;
            }
            vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__next_state 
                = ((IData)(vlSelf->tb_activation_buffer__DOT__bf_preload_state)
                    ? 3U : 2U);
        } else {
            if ((3U != (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
                if ((4U != (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
                    if ((5U == (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
                        vlSelf->tb_activation_buffer__DOT__bf_we = 1U;
                    }
                }
            }
            if ((3U == (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
                if ((((~ (IData)(vlSelf->tb_activation_buffer__DOT__bf_empty)) 
                      & ((IData)(vlSelf->tb_activation_buffer__DOT__bf_compute_state) 
                         | (IData)(vlSelf->tb_activation_buffer__DOT__bf_drain_state))) 
                     & (~ (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__o_bank_reg)))) {
                    vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__next_state = 3U;
                    vlSelf->tb_activation_buffer__DOT__bf_active = 1U;
                } else if ((((~ (IData)(vlSelf->tb_activation_buffer__DOT__bf_tiles_complete)) 
                             & (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__o_bank_reg)) 
                            & (~ (IData)(vlSelf->tb_activation_buffer__DOT__bf_active)))) {
                    vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__next_state = 5U;
                } else if (vlSelf->tb_activation_buffer__DOT__bf_tiles_complete) {
                    vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__next_state = 7U;
                }
            } else if ((4U == (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
                vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__next_state 
                    = ((IData)(vlSelf->tb_activation_buffer__DOT__bf_compute_state)
                        ? 5U : 4U);
            } else if ((5U == (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
                if ((((IData)(vlSelf->tb_activation_buffer__DOT__bf_compute_state) 
                      | (IData)(vlSelf->tb_activation_buffer__DOT__bf_drain_state)) 
                     & (IData)(vlSelf->tb_activation_buffer__DOT__bf_full))) {
                    vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__next_state = 6U;
                    vlSelf->tb_activation_buffer__DOT__bf_active = 1U;
                } else if ((1U & (~ (IData)(vlSelf->tb_activation_buffer__DOT__bf_full)))) {
                    vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__next_state = 5U;
                }
            } else if ((6U == (IData)(vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state))) {
                vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__next_state = 3U;
                vlSelf->tb_activation_buffer__DOT__bf_active = 1U;
            } else {
                vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__next_state = 0U;
            }
        }
    }
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__first_pass_a = 0U;
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__next_state 
        = vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state;
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__buff_b_active = 0U;
    if (((((((((0U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state)) 
               | (1U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) 
              | (2U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) 
             | (3U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) 
            | (4U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) 
           | (5U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) 
          | (6U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) 
         | (7U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state)))) {
        if ((0U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
            if ((1U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
                if ((2U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
                    if ((3U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
                        if ((4U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
                            if ((5U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
                                if ((6U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
                                    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__clr_b = 1U;
                                }
                            }
                        }
                    }
                    if ((3U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
                        if ((((0U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count)) 
                              & ((IData)(vlSelf->tb_activation_buffer__DOT__act_compute_state) 
                                 | (IData)(vlSelf->tb_activation_buffer__DOT__act_drain_state))) 
                             & (~ (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__o_bank_reg)))) {
                            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_b = 1U;
                        }
                    }
                }
            }
        }
        if ((0U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
            if (vlSelf->tb_activation_buffer__DOT__act_start) {
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__we_b = 1U;
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__next_state = 4U;
            } else {
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__next_state = 0U;
            }
        } else if ((1U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
            if ((0x10U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count))) {
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__we_b = 1U;
            }
            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__next_state 
                = ((0x10U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count))
                    ? 2U : 1U);
        } else if ((2U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
            if ((1U & (~ (IData)(vlSelf->tb_activation_buffer__DOT__act_preload_state)))) {
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__we_b = 1U;
            }
            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__next_state 
                = ((IData)(vlSelf->tb_activation_buffer__DOT__act_preload_state)
                    ? 3U : 2U);
        } else {
            if ((3U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
                if ((4U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
                    if ((5U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
                        vlSelf->tb_activation_buffer__DOT__act_dut__DOT__we_b = 1U;
                    }
                }
            }
            if ((3U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
                if ((((0U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count)) 
                      & ((IData)(vlSelf->tb_activation_buffer__DOT__act_compute_state) 
                         | (IData)(vlSelf->tb_activation_buffer__DOT__act_drain_state))) 
                     & (~ (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__o_bank_reg)))) {
                    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__next_state = 3U;
                    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__buff_b_active = 1U;
                } else if ((((~ (IData)(vlSelf->tb_activation_buffer__DOT__act_tiles_complete)) 
                             & (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__o_bank_reg)) 
                            & (~ (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__buff_b_active)))) {
                    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__next_state = 5U;
                } else if (vlSelf->tb_activation_buffer__DOT__act_tiles_complete) {
                    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__next_state = 7U;
                }
            } else if ((4U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__next_state 
                    = ((IData)(vlSelf->tb_activation_buffer__DOT__act_compute_state)
                        ? 5U : 4U);
            } else if ((5U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
                if ((((IData)(vlSelf->tb_activation_buffer__DOT__act_compute_state) 
                      | (IData)(vlSelf->tb_activation_buffer__DOT__act_drain_state)) 
                     & (0x10U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count)))) {
                    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__next_state = 6U;
                    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__buff_b_active = 1U;
                } else if ((0x10U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count))) {
                    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__next_state = 5U;
                }
            } else if ((6U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state))) {
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__next_state = 3U;
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__buff_b_active = 1U;
            } else {
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__next_state = 0U;
            }
        }
    }
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__next_state 
        = vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state;
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__buff_a_active = 0U;
    if (((((((((0U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state)) 
               | (1U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) 
              | (2U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) 
             | (3U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) 
            | (4U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) 
           | (5U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) 
          | (6U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) 
         | (7U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state)))) {
        if ((0U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
            if ((1U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
                if ((2U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
                    if ((3U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
                        if ((4U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
                            if ((5U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
                                if ((6U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
                                    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__clr_a = 1U;
                                }
                            }
                        }
                    }
                    if ((3U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
                        if ((((0U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count)) 
                              & ((IData)(vlSelf->tb_activation_buffer__DOT__act_compute_state) 
                                 | (IData)(vlSelf->tb_activation_buffer__DOT__act_drain_state))) 
                             & (~ (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__o_bank_reg)))) {
                            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_a = 1U;
                        }
                    }
                }
            }
        }
        if ((0U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
            if (vlSelf->tb_activation_buffer__DOT__act_start) {
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__we_a = 1U;
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__first_pass_a = 1U;
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__next_state = 1U;
            } else {
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__next_state = 0U;
            }
        } else if ((1U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
            if ((0x10U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count))) {
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__we_a = 1U;
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__first_pass_a = 1U;
            }
            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__next_state 
                = ((0x10U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count))
                    ? 2U : 1U);
        } else if ((2U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
            if ((1U & (~ (IData)(vlSelf->tb_activation_buffer__DOT__act_preload_state)))) {
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__we_a = 1U;
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__first_pass_a = 1U;
            }
            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__next_state 
                = ((IData)(vlSelf->tb_activation_buffer__DOT__act_preload_state)
                    ? 3U : 2U);
        } else {
            if ((3U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
                if ((4U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
                    if ((5U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
                        vlSelf->tb_activation_buffer__DOT__act_dut__DOT__we_a = 1U;
                    }
                }
            }
            if ((3U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
                if ((((0U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count)) 
                      & ((IData)(vlSelf->tb_activation_buffer__DOT__act_compute_state) 
                         | (IData)(vlSelf->tb_activation_buffer__DOT__act_drain_state))) 
                     & (~ (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__o_bank_reg)))) {
                    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__next_state = 3U;
                    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__buff_a_active = 1U;
                } else if ((((~ (IData)(vlSelf->tb_activation_buffer__DOT__act_tiles_complete)) 
                             & (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__o_bank_reg)) 
                            & (~ (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__buff_a_active)))) {
                    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__next_state = 5U;
                } else if (vlSelf->tb_activation_buffer__DOT__act_tiles_complete) {
                    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__next_state = 7U;
                }
            } else if ((4U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__next_state 
                    = ((IData)(vlSelf->tb_activation_buffer__DOT__act_compute_state)
                        ? 5U : 4U);
            } else if ((5U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
                if ((((IData)(vlSelf->tb_activation_buffer__DOT__act_compute_state) 
                      | (IData)(vlSelf->tb_activation_buffer__DOT__act_drain_state)) 
                     & (0x10U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count)))) {
                    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__next_state = 6U;
                    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__buff_a_active = 1U;
                } else if ((0x10U != (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count))) {
                    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__next_state = 5U;
                }
            } else if ((6U == (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state))) {
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__next_state = 3U;
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__buff_a_active = 1U;
            } else {
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__next_state = 0U;
            }
        }
    }
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__we_valid_b = 0U;
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_b[0U] = 0U;
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_b[1U] = 0U;
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_b[2U] = 0U;
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_b[3U] = 0U;
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__we_valid_a = 0U;
    vlSelf->tb_activation_buffer__DOT__act_output_buf_valid = 0U;
    if (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__first_pass_a) {
        if (vlSelf->tb_activation_buffer__DOT__act_DMA_in_valid) {
            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__we_valid_a = 1U;
        }
        if (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_valid_a) {
            vlSelf->tb_activation_buffer__DOT__act_output_buf_valid = 0U;
        }
    }
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_a[0U] = 0U;
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_a[1U] = 0U;
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_a[2U] = 0U;
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_a[3U] = 0U;
    if ((1U & (~ (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__buff_a_active)))) {
        if (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__buff_b_active) {
            if (vlSelf->tb_activation_buffer__DOT__act_DMA_in_valid) {
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__we_valid_a = 1U;
            }
        }
    }
    if (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__first_pass_a) {
        if (vlSelf->tb_activation_buffer__DOT__act_DMA_in_valid) {
            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_a[0U] 
                = vlSelf->tb_activation_buffer__DOT__act_DMA_in[0U];
            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_a[1U] 
                = vlSelf->tb_activation_buffer__DOT__act_DMA_in[1U];
            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_a[2U] 
                = vlSelf->tb_activation_buffer__DOT__act_DMA_in[2U];
            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_a[3U] 
                = vlSelf->tb_activation_buffer__DOT__act_DMA_in[3U];
        }
    }
    if ((1U & (~ (IData)(vlSelf->tb_activation_buffer__DOT__act_dut__DOT__buff_a_active)))) {
        if (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__buff_b_active) {
            if (vlSelf->tb_activation_buffer__DOT__act_DMA_in_valid) {
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_a[0U] 
                    = vlSelf->tb_activation_buffer__DOT__act_DMA_in[0U];
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_a[1U] 
                    = vlSelf->tb_activation_buffer__DOT__act_DMA_in[1U];
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_a[2U] 
                    = vlSelf->tb_activation_buffer__DOT__act_DMA_in[2U];
                vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_a[3U] 
                    = vlSelf->tb_activation_buffer__DOT__act_DMA_in[3U];
            }
        }
    }
    vlSelf->tb_activation_buffer__DOT__act_output_buff[0U] = 0U;
    vlSelf->tb_activation_buffer__DOT__act_output_buff[1U] = 0U;
    vlSelf->tb_activation_buffer__DOT__act_output_buff[2U] = 0U;
    vlSelf->tb_activation_buffer__DOT__act_output_buff[3U] = 0U;
    if (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__first_pass_a) {
        if (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_valid_a) {
            vlSelf->tb_activation_buffer__DOT__act_output_buff[0U] = 0U;
            vlSelf->tb_activation_buffer__DOT__act_output_buff[1U] = 0U;
            vlSelf->tb_activation_buffer__DOT__act_output_buff[2U] = 0U;
            vlSelf->tb_activation_buffer__DOT__act_output_buff[3U] = 0U;
        }
    }
    if (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__buff_a_active) {
        if (vlSelf->tb_activation_buffer__DOT__act_DMA_in_valid) {
            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__we_valid_b = 1U;
            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_b[0U] 
                = vlSelf->tb_activation_buffer__DOT__act_DMA_in[0U];
            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_b[1U] 
                = vlSelf->tb_activation_buffer__DOT__act_DMA_in[1U];
            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_b[2U] 
                = vlSelf->tb_activation_buffer__DOT__act_DMA_in[2U];
            vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_b[3U] 
                = vlSelf->tb_activation_buffer__DOT__act_DMA_in[3U];
        }
        if (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_valid_a) {
            vlSelf->tb_activation_buffer__DOT__act_output_buf_valid 
                = vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_valid_a;
            vlSelf->tb_activation_buffer__DOT__act_output_buff[0U] 
                = vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_out_a[0U];
            vlSelf->tb_activation_buffer__DOT__act_output_buff[1U] 
                = vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_out_a[1U];
            vlSelf->tb_activation_buffer__DOT__act_output_buff[2U] 
                = vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_out_a[2U];
            vlSelf->tb_activation_buffer__DOT__act_output_buff[3U] 
                = vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_out_a[3U];
        }
    } else if (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__buff_b_active) {
        if (vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_valid_b) {
            vlSelf->tb_activation_buffer__DOT__act_output_buf_valid 
                = vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_valid_b;
            vlSelf->tb_activation_buffer__DOT__act_output_buff[0U] 
                = vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_out_b[0U];
            vlSelf->tb_activation_buffer__DOT__act_output_buff[1U] 
                = vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_out_b[1U];
            vlSelf->tb_activation_buffer__DOT__act_output_buff[2U] 
                = vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_out_b[2U];
            vlSelf->tb_activation_buffer__DOT__act_output_buff[3U] 
                = vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_out_b[3U];
        }
    }
}

VL_ATTR_COLD void Vtb_activation_buffer___024root___eval_stl(Vtb_activation_buffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_activation_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_activation_buffer___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_activation_buffer___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_activation_buffer___024root___eval_triggers__stl(Vtb_activation_buffer___024root* vlSelf);

VL_ATTR_COLD bool Vtb_activation_buffer___024root___eval_phase__stl(Vtb_activation_buffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_activation_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_activation_buffer___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_activation_buffer___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_activation_buffer___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_activation_buffer___024root___dump_triggers__act(Vtb_activation_buffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_activation_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_activation_buffer___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_activation_buffer.clk or negedge tb_activation_buffer.ib_rst_n)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge tb_activation_buffer.bf_rst_n or posedge tb_activation_buffer.clk)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge tb_activation_buffer.act_rst_n or posedge tb_activation_buffer.clk)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge tb_activation_buffer.clk)\n");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_activation_buffer___024root___dump_triggers__nba(Vtb_activation_buffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_activation_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_activation_buffer___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_activation_buffer.clk or negedge tb_activation_buffer.ib_rst_n)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge tb_activation_buffer.bf_rst_n or posedge tb_activation_buffer.clk)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge tb_activation_buffer.act_rst_n or posedge tb_activation_buffer.clk)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge tb_activation_buffer.clk)\n");
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_activation_buffer___024root___ctor_var_reset(Vtb_activation_buffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_activation_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_activation_buffer___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->tb_activation_buffer__DOT__errors = 0;
    vlSelf->tb_activation_buffer__DOT__checks = 0;
    vlSelf->tb_activation_buffer__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_activation_buffer__DOT__ib_rst_n = VL_RAND_RESET_I(1);
    vlSelf->tb_activation_buffer__DOT__ib_we = VL_RAND_RESET_I(1);
    vlSelf->tb_activation_buffer__DOT__ib_re = VL_RAND_RESET_I(1);
    vlSelf->tb_activation_buffer__DOT__ib_clr = VL_RAND_RESET_I(1);
    vlSelf->tb_activation_buffer__DOT__ib_we_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_activation_buffer__DOT__ib_full = VL_RAND_RESET_I(1);
    vlSelf->tb_activation_buffer__DOT__ib_empty = VL_RAND_RESET_I(1);
    vlSelf->tb_activation_buffer__DOT__ib_re_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->tb_activation_buffer__DOT__ib_we_in);
    VL_RAND_RESET_W(128, vlSelf->tb_activation_buffer__DOT__ib_re_out);
    vlSelf->tb_activation_buffer__DOT__bf_rst_n = VL_RAND_RESET_I(1);
    vlSelf->tb_activation_buffer__DOT__bf_a_or_b = VL_RAND_RESET_I(1);
    vlSelf->tb_activation_buffer__DOT__bf_start = VL_RAND_RESET_I(1);
    vlSelf->tb_activation_buffer__DOT__bf_compute_state = VL_RAND_RESET_I(1);
    vlSelf->tb_activation_buffer__DOT__bf_preload_state = VL_RAND_RESET_I(1);
    vlSelf->tb_activation_buffer__DOT__bf_drain_state = VL_RAND_RESET_I(1);
    vlSelf->tb_activation_buffer__DOT__bf_tiles_complete = VL_RAND_RESET_I(1);
    vlSelf->tb_activation_buffer__DOT__bf_full = VL_RAND_RESET_I(1);
    vlSelf->tb_activation_buffer__DOT__bf_empty = VL_RAND_RESET_I(1);
    vlSelf->tb_activation_buffer__DOT__bf_first_pass = VL_RAND_RESET_I(1);
    vlSelf->tb_activation_buffer__DOT__bf_active = VL_RAND_RESET_I(1);
    vlSelf->tb_activation_buffer__DOT__bf_we = VL_RAND_RESET_I(1);
    vlSelf->tb_activation_buffer__DOT__bf_re = VL_RAND_RESET_I(1);
    vlSelf->tb_activation_buffer__DOT__bf_clr = VL_RAND_RESET_I(1);
    vlSelf->tb_activation_buffer__DOT__act_rst_n = VL_RAND_RESET_I(1);
    vlSelf->tb_activation_buffer__DOT__act_start = VL_RAND_RESET_I(1);
    vlSelf->tb_activation_buffer__DOT__act_compute_state = VL_RAND_RESET_I(1);
    vlSelf->tb_activation_buffer__DOT__act_preload_state = VL_RAND_RESET_I(1);
    vlSelf->tb_activation_buffer__DOT__act_drain_state = VL_RAND_RESET_I(1);
    vlSelf->tb_activation_buffer__DOT__act_tiles_complete = VL_RAND_RESET_I(1);
    vlSelf->tb_activation_buffer__DOT__act_DMA_in_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_activation_buffer__DOT__act_output_buf_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->tb_activation_buffer__DOT__act_DMA_in);
    VL_RAND_RESET_W(128, vlSelf->tb_activation_buffer__DOT__act_output_buff);
    VL_RAND_RESET_W(128, vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__buff);
    vlSelf->tb_activation_buffer__DOT__ib_dut__DOT__curr_count = VL_RAND_RESET_I(10);
    vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__other_bank_active = VL_RAND_RESET_I(1);
    vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__current_state = VL_RAND_RESET_I(6);
    vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__next_state = VL_RAND_RESET_I(6);
    vlSelf->tb_activation_buffer__DOT__bf_dut__DOT__o_bank_reg = VL_RAND_RESET_I(1);
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__we_a = VL_RAND_RESET_I(1);
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_a = VL_RAND_RESET_I(1);
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__clr_a = VL_RAND_RESET_I(1);
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_valid_a = VL_RAND_RESET_I(1);
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__we_valid_a = VL_RAND_RESET_I(1);
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__buff_a_empty = VL_RAND_RESET_I(1);
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__buff_a_full = VL_RAND_RESET_I(1);
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__buff_a_active = VL_RAND_RESET_I(1);
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__first_pass_a = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_a);
    VL_RAND_RESET_W(128, vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_out_a);
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__we_b = VL_RAND_RESET_I(1);
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_b = VL_RAND_RESET_I(1);
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__clr_b = VL_RAND_RESET_I(1);
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_valid_b = VL_RAND_RESET_I(1);
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__we_valid_b = VL_RAND_RESET_I(1);
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__buff_b_empty = VL_RAND_RESET_I(1);
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__buff_b_full = VL_RAND_RESET_I(1);
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__buff_b_active = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->tb_activation_buffer__DOT__act_dut__DOT__write_in_b);
    VL_RAND_RESET_W(128, vlSelf->tb_activation_buffer__DOT__act_dut__DOT__re_out_b);
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state = VL_RAND_RESET_I(6);
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__next_state = VL_RAND_RESET_I(6);
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__A__DOT__o_bank_reg = VL_RAND_RESET_I(1);
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state = VL_RAND_RESET_I(6);
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__next_state = VL_RAND_RESET_I(6);
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__B__DOT__o_bank_reg = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__buff);
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count = VL_RAND_RESET_I(10);
    VL_RAND_RESET_W(128, vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__buff);
    vlSelf->tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count = VL_RAND_RESET_I(10);
    vlSelf->__Vtrigprevexpr___TOP__tb_activation_buffer__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_activation_buffer__DOT__ib_rst_n__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_activation_buffer__DOT__bf_rst_n__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_activation_buffer__DOT__act_rst_n__0 = VL_RAND_RESET_I(1);
}
