// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_tpu_top.h for the primary calling header

#include "Vtb_tpu_top__pch.h"
#include "Vtb_tpu_top___024root.h"

VlCoroutine Vtb_tpu_top___024root___eval_initial__TOP__Vtiming__0__1(Vtb_tpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_tpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tpu_top___024root___eval_initial__TOP__Vtiming__0__1\n"); );
    // Init
    IData/*31:0*/ tb_tpu_top__DOT____Vrepeat0;
    tb_tpu_top__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__run_group_test__106__n;
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n = 0;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__load_weights_via_opcode__108__check_plumbing;
    __Vtask_tb_tpu_top__DOT__load_weights_via_opcode__108__check_plumbing = 0;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__load_bias_via_opcode__113__check_plumbing;
    __Vtask_tb_tpu_top__DOT__load_bias_via_opcode__113__check_plumbing = 0;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__load_activations_via_opcode__118__check_plumbing;
    __Vtask_tb_tpu_top__DOT__load_activations_via_opcode__118__check_plumbing = 0;
    CData/*7:0*/ __Vtask_tb_tpu_top__DOT__pulse_opcode__123__opcode;
    __Vtask_tb_tpu_top__DOT__pulse_opcode__123__opcode = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__126__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__126__cond;
    __Vtask_tb_tpu_top__DOT__check__126__cond = 0;
    CData/*4:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__127__target;
    __Vtask_tb_tpu_top__DOT__wait_for_state__127__target = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__127__max_cycles;
    __Vtask_tb_tpu_top__DOT__wait_for_state__127__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__127__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__127__cycles_taken = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__129__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__129__cond;
    __Vtask_tb_tpu_top__DOT__check__129__cond = 0;
    CData/*4:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__130__target;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__target = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__132__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__132__cond;
    __Vtask_tb_tpu_top__DOT__check__132__cond = 0;
    CData/*4:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__133__target;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__target = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken = 0;
    CData/*4:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__136__target;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__target = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__138__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__138__cond;
    __Vtask_tb_tpu_top__DOT__check__138__cond = 0;
    CData/*4:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__139__target;
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__target = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__139__max_cycles;
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__141__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__141__cond;
    __Vtask_tb_tpu_top__DOT__check__141__cond = 0;
    CData/*4:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__142__target;
    __Vtask_tb_tpu_top__DOT__wait_for_state__142__target = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__142__max_cycles;
    __Vtask_tb_tpu_top__DOT__wait_for_state__142__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_tpu_top__DOT__wait_for_state__142__cycles_taken;
    __Vtask_tb_tpu_top__DOT__wait_for_state__142__cycles_taken = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__144__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__144__cond;
    __Vtask_tb_tpu_top__DOT__check__144__cond = 0;
    std::string __Vtask_tb_tpu_top__DOT__check__145__name;
    CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__145__cond;
    __Vtask_tb_tpu_top__DOT__check__145__cond = 0;
    // Body
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (vlSelf->__Vtask_tb_tpu_top__DOT__check__135__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__136__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__138__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__138__name = VL_SFORMATF_NX("group %0d/%0d tile 5: no X/Z in requant_out",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__138__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__138__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__138__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__139__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__139__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__141__cond = (3U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__141__name = VL_SFORMATF_NX("group %0d/%0d tile 5: FUNCS looped back to PRELOAD",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__141__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__141__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__141__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__130__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__132__cond = (4U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__132__name = VL_SFORMATF_NX("group %0d/%0d tile 6: reached COMPUTE",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__132__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__132__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__132__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__133__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken;
    vlSelf->__Vtask_tb_tpu_top__DOT__check__135__cond 
        = (6U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name 
        = VL_SFORMATF_NX("group %0d/%0d tile 6: tile_count advanced to 6 on the COMPUTE->DRAIN edge",
                         32,vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                         32,vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (vlSelf->__Vtask_tb_tpu_top__DOT__check__135__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__136__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__138__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__138__name = VL_SFORMATF_NX("group %0d/%0d tile 6: no X/Z in requant_out",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__138__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__138__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__138__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__139__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__139__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__141__cond = (3U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__141__name = VL_SFORMATF_NX("group %0d/%0d tile 6: FUNCS looped back to PRELOAD",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__141__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__141__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__141__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__130__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__132__cond = (4U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__132__name = VL_SFORMATF_NX("group %0d/%0d tile 7: reached COMPUTE",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__132__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__132__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__132__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__133__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken;
    vlSelf->__Vtask_tb_tpu_top__DOT__check__135__cond 
        = (7U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name 
        = VL_SFORMATF_NX("group %0d/%0d tile 7: tile_count advanced to 7 on the COMPUTE->DRAIN edge",
                         32,vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                         32,vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (vlSelf->__Vtask_tb_tpu_top__DOT__check__135__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__136__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__138__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__138__name = VL_SFORMATF_NX("group %0d/%0d tile 7: no X/Z in requant_out",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__138__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__138__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__138__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__139__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__139__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__141__cond = (3U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__141__name = VL_SFORMATF_NX("group %0d/%0d tile 7: FUNCS looped back to PRELOAD",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__141__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__141__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__141__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__130__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__132__cond = (4U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__132__name = VL_SFORMATF_NX("group %0d/%0d tile 8: reached COMPUTE",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__132__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__132__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__132__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__133__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken;
    vlSelf->__Vtask_tb_tpu_top__DOT__check__135__cond 
        = (8U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name 
        = VL_SFORMATF_NX("group %0d/%0d tile 8: tile_count advanced to 8 on the COMPUTE->DRAIN edge",
                         32,vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                         32,vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (vlSelf->__Vtask_tb_tpu_top__DOT__check__135__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__136__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__138__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__138__name = VL_SFORMATF_NX("group %0d/%0d tile 8: no X/Z in requant_out",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__138__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__138__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__138__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__142__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__142__target = 0U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__142__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__142__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__142__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__142__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__142__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__142__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__142__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__144__cond = (0U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__144__name = VL_SFORMATF_NX("group %0d/%0d: all 8 tiles completed and FSM returned to IDLE (took %0d cycles)",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials,
                                                               32,
                                                               __Vtask_tb_tpu_top__DOT__run_group_test__106__n) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__144__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__144__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__144__name));
    }
    __Vtask_tb_tpu_top__DOT__check__145__cond = (0U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__145__name = VL_SFORMATF_NX("group %0d/%0d: DONE's tile_clr reset tile_count back to 0",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__145__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__145__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__145__name));
    }
    vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials = 5U;
    vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num = 4U;
    __Vtask_tb_tpu_top__DOT__load_weights_via_opcode__108__check_plumbing = 0U;
    vlSelf->tb_tpu_top__DOT__uio_in = 5U;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    if (__Vtask_tb_tpu_top__DOT__load_weights_via_opcode__108__check_plumbing) {
        vlSelf->__Vtask_tb_tpu_top__DOT__check__110__cond 
            = ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__weight_fsm_start) 
               & (1U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__bank)));
        vlSelf->__Vtask_tb_tpu_top__DOT__check__110__name = 
            std::string{"OP_LOAD_WEIGHTS asserts weight_fsm_start and routes bank=1"};
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (vlSelf->__Vtask_tb_tpu_top__DOT__check__110__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__110__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__110__name));
        }
    }
    vlSelf->tb_tpu_top__DOT__uio_in = 0U;
    tb_tpu_top__DOT____Vrepeat0 = 0x118U;
    while (VL_LTS_III(32, 0U, tb_tpu_top__DOT____Vrepeat0)) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        tb_tpu_top__DOT____Vrepeat0 = (tb_tpu_top__DOT____Vrepeat0 
                                       - (IData)(1U));
    }
    if (__Vtask_tb_tpu_top__DOT__load_weights_via_opcode__108__check_plumbing) {
        vlSelf->__Vtask_tb_tpu_top__DOT__check__112__cond 
            = (0U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__w_fsm__DOT__current_state));
        vlSelf->__Vtask_tb_tpu_top__DOT__check__112__name = 
            std::string{"weight FSM (inside DMA) finished loading and returned to IDLE"};
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (vlSelf->__Vtask_tb_tpu_top__DOT__check__112__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__112__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__112__name));
        }
    }
    __Vtask_tb_tpu_top__DOT__load_bias_via_opcode__113__check_plumbing = 0U;
    vlSelf->tb_tpu_top__DOT__uio_in = 7U;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    if (__Vtask_tb_tpu_top__DOT__load_bias_via_opcode__113__check_plumbing) {
        vlSelf->__Vtask_tb_tpu_top__DOT__check__115__cond 
            = ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__bias_fsm_start) 
               & (2U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__bank)));
        vlSelf->__Vtask_tb_tpu_top__DOT__check__115__name = 
            std::string{"OP_LOAD_BIAS asserts bias_fsm_start and routes bank=2 (DMA.sv's bias bank)"};
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (vlSelf->__Vtask_tb_tpu_top__DOT__check__115__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__115__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__115__name));
        }
    }
    vlSelf->tb_tpu_top__DOT__uio_in = 0U;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    if (__Vtask_tb_tpu_top__DOT__load_bias_via_opcode__113__check_plumbing) {
        vlSelf->__Vtask_tb_tpu_top__DOT__check__117__cond 
            = (0U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__b_fsm__DOT__current_state));
        vlSelf->__Vtask_tb_tpu_top__DOT__check__117__name = 
            std::string{"bias FSM (inside DMA) finished loading and returned to IDLE"};
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (vlSelf->__Vtask_tb_tpu_top__DOT__check__117__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__117__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__117__name));
        }
    }
    __Vtask_tb_tpu_top__DOT__load_activations_via_opcode__118__check_plumbing = 0U;
    vlSelf->tb_tpu_top__DOT__uio_in = 6U;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    if (__Vtask_tb_tpu_top__DOT__load_activations_via_opcode__118__check_plumbing) {
        vlSelf->__Vtask_tb_tpu_top__DOT__check__120__cond 
            = ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__activation_fsm_start) 
               & (3U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__bank)));
        vlSelf->__Vtask_tb_tpu_top__DOT__check__120__name = 
            std::string{"OP_LOAD_ACTIVATIONS asserts activation_fsm_start and routes bank=3 (DMA.sv's activation bank)"};
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (vlSelf->__Vtask_tb_tpu_top__DOT__check__120__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__120__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__120__name));
        }
    }
    vlSelf->tb_tpu_top__DOT__uio_in = 0U;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    if (__Vtask_tb_tpu_top__DOT__load_activations_via_opcode__118__check_plumbing) {
        vlSelf->__Vtask_tb_tpu_top__DOT__check__122__cond 
            = (0U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__a_fsm__DOT__current_state));
        vlSelf->__Vtask_tb_tpu_top__DOT__check__122__name = 
            std::string{"activation FSM (inside DMA) finished loading and returned to IDLE"};
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (vlSelf->__Vtask_tb_tpu_top__DOT__check__122__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__122__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__122__name));
        }
    }
    __Vtask_tb_tpu_top__DOT__pulse_opcode__123__opcode = 1U;
    vlSelf->tb_tpu_top__DOT__uio_in = __Vtask_tb_tpu_top__DOT__pulse_opcode__123__opcode;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    vlSelf->tb_tpu_top__DOT__uio_in = 0U;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    __Vtask_tb_tpu_top__DOT__check__126__cond = (2U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__126__name = VL_SFORMATF_NX("group %0d/%0d: start pulse moves IDLE -> PREFILL",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__126__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__126__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__126__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__127__max_cycles = 0x1eU;
    __Vtask_tb_tpu_top__DOT__wait_for_state__127__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__127__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__127__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__127__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__127__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__127__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__127__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__127__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__129__cond = (3U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__129__name = VL_SFORMATF_NX("group %0d/%0d: reached PRELOAD within budget (took %0d cycles)",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials,
                                                               32,
                                                               __Vtask_tb_tpu_top__DOT__run_group_test__106__n) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__129__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__129__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__129__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__130__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__132__cond = (4U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__132__name = VL_SFORMATF_NX("group %0d/%0d tile 1: reached COMPUTE",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__132__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__132__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__132__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__133__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken;
    vlSelf->__Vtask_tb_tpu_top__DOT__check__135__cond 
        = (1U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name 
        = VL_SFORMATF_NX("group %0d/%0d tile 1: tile_count advanced to 1 on the COMPUTE->DRAIN edge",
                         32,vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                         32,vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (vlSelf->__Vtask_tb_tpu_top__DOT__check__135__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__136__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__138__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__138__name = VL_SFORMATF_NX("group %0d/%0d tile 1: no X/Z in requant_out",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__138__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__138__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__138__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__139__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__139__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__141__cond = (3U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__141__name = VL_SFORMATF_NX("group %0d/%0d tile 1: FUNCS looped back to PRELOAD",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__141__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__141__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__141__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__130__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__132__cond = (4U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__132__name = VL_SFORMATF_NX("group %0d/%0d tile 2: reached COMPUTE",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__132__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__132__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__132__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__133__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken;
    vlSelf->__Vtask_tb_tpu_top__DOT__check__135__cond 
        = (2U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name 
        = VL_SFORMATF_NX("group %0d/%0d tile 2: tile_count advanced to 2 on the COMPUTE->DRAIN edge",
                         32,vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                         32,vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (vlSelf->__Vtask_tb_tpu_top__DOT__check__135__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__136__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__138__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__138__name = VL_SFORMATF_NX("group %0d/%0d tile 2: no X/Z in requant_out",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__138__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__138__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__138__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__139__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__139__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__141__cond = (3U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__141__name = VL_SFORMATF_NX("group %0d/%0d tile 2: FUNCS looped back to PRELOAD",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__141__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__141__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__141__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__130__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__132__cond = (4U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__132__name = VL_SFORMATF_NX("group %0d/%0d tile 3: reached COMPUTE",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__132__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__132__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__132__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__133__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken;
    vlSelf->__Vtask_tb_tpu_top__DOT__check__135__cond 
        = (3U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name 
        = VL_SFORMATF_NX("group %0d/%0d tile 3: tile_count advanced to 3 on the COMPUTE->DRAIN edge",
                         32,vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                         32,vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (vlSelf->__Vtask_tb_tpu_top__DOT__check__135__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__136__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__138__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__138__name = VL_SFORMATF_NX("group %0d/%0d tile 3: no X/Z in requant_out",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__138__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__138__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__138__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__139__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__139__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__141__cond = (3U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__141__name = VL_SFORMATF_NX("group %0d/%0d tile 3: FUNCS looped back to PRELOAD",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__141__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__141__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__141__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__130__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__132__cond = (4U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__132__name = VL_SFORMATF_NX("group %0d/%0d tile 4: reached COMPUTE",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__132__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__132__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__132__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__133__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken;
    vlSelf->__Vtask_tb_tpu_top__DOT__check__135__cond 
        = (4U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name 
        = VL_SFORMATF_NX("group %0d/%0d tile 4: tile_count advanced to 4 on the COMPUTE->DRAIN edge",
                         32,vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                         32,vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (vlSelf->__Vtask_tb_tpu_top__DOT__check__135__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__136__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__138__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__138__name = VL_SFORMATF_NX("group %0d/%0d tile 4: no X/Z in requant_out",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__138__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__138__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__138__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__139__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__139__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__141__cond = (3U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__141__name = VL_SFORMATF_NX("group %0d/%0d tile 4: FUNCS looped back to PRELOAD",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__141__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__141__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__141__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__130__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__132__cond = (4U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__132__name = VL_SFORMATF_NX("group %0d/%0d tile 5: reached COMPUTE",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__132__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__132__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__132__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__133__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken;
    vlSelf->__Vtask_tb_tpu_top__DOT__check__135__cond 
        = (5U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name 
        = VL_SFORMATF_NX("group %0d/%0d tile 5: tile_count advanced to 5 on the COMPUTE->DRAIN edge",
                         32,vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                         32,vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (vlSelf->__Vtask_tb_tpu_top__DOT__check__135__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__136__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__138__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__138__name = VL_SFORMATF_NX("group %0d/%0d tile 5: no X/Z in requant_out",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__138__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__138__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__138__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__139__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__139__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__141__cond = (3U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__141__name = VL_SFORMATF_NX("group %0d/%0d tile 5: FUNCS looped back to PRELOAD",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__141__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__141__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__141__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__130__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__132__cond = (4U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__132__name = VL_SFORMATF_NX("group %0d/%0d tile 6: reached COMPUTE",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__132__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__132__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__132__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__133__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken;
    vlSelf->__Vtask_tb_tpu_top__DOT__check__135__cond 
        = (6U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name 
        = VL_SFORMATF_NX("group %0d/%0d tile 6: tile_count advanced to 6 on the COMPUTE->DRAIN edge",
                         32,vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                         32,vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (vlSelf->__Vtask_tb_tpu_top__DOT__check__135__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__136__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__138__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__138__name = VL_SFORMATF_NX("group %0d/%0d tile 6: no X/Z in requant_out",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__138__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__138__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__138__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__139__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__139__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__141__cond = (3U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__141__name = VL_SFORMATF_NX("group %0d/%0d tile 6: FUNCS looped back to PRELOAD",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__141__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__141__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__141__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__130__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__132__cond = (4U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__132__name = VL_SFORMATF_NX("group %0d/%0d tile 7: reached COMPUTE",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__132__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__132__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__132__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__133__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken;
    vlSelf->__Vtask_tb_tpu_top__DOT__check__135__cond 
        = (7U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name 
        = VL_SFORMATF_NX("group %0d/%0d tile 7: tile_count advanced to 7 on the COMPUTE->DRAIN edge",
                         32,vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                         32,vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (vlSelf->__Vtask_tb_tpu_top__DOT__check__135__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__136__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__138__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__138__name = VL_SFORMATF_NX("group %0d/%0d tile 7: no X/Z in requant_out",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__138__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__138__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__138__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__139__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__139__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__141__cond = (3U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__141__name = VL_SFORMATF_NX("group %0d/%0d tile 7: FUNCS looped back to PRELOAD",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__141__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__141__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__141__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__130__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__132__cond = (4U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__132__name = VL_SFORMATF_NX("group %0d/%0d tile 8: reached COMPUTE",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__132__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__132__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__132__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__133__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken;
    vlSelf->__Vtask_tb_tpu_top__DOT__check__135__cond 
        = (8U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name 
        = VL_SFORMATF_NX("group %0d/%0d tile 8: tile_count advanced to 8 on the COMPUTE->DRAIN edge",
                         32,vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                         32,vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (vlSelf->__Vtask_tb_tpu_top__DOT__check__135__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__136__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__138__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__138__name = VL_SFORMATF_NX("group %0d/%0d tile 8: no X/Z in requant_out",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__138__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__138__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__138__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__142__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__142__target = 0U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__142__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__142__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__142__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__142__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__142__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__142__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__142__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__144__cond = (0U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__144__name = VL_SFORMATF_NX("group %0d/%0d: all 8 tiles completed and FSM returned to IDLE (took %0d cycles)",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials,
                                                               32,
                                                               __Vtask_tb_tpu_top__DOT__run_group_test__106__n) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__144__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__144__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__144__name));
    }
    __Vtask_tb_tpu_top__DOT__check__145__cond = (0U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__145__name = VL_SFORMATF_NX("group %0d/%0d: DONE's tile_clr reset tile_count back to 0",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__145__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__145__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__145__name));
    }
    vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials = 5U;
    vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num = 5U;
    __Vtask_tb_tpu_top__DOT__load_weights_via_opcode__108__check_plumbing = 0U;
    vlSelf->tb_tpu_top__DOT__uio_in = 5U;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    if (__Vtask_tb_tpu_top__DOT__load_weights_via_opcode__108__check_plumbing) {
        vlSelf->__Vtask_tb_tpu_top__DOT__check__110__cond 
            = ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__weight_fsm_start) 
               & (1U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__bank)));
        vlSelf->__Vtask_tb_tpu_top__DOT__check__110__name = 
            std::string{"OP_LOAD_WEIGHTS asserts weight_fsm_start and routes bank=1"};
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (vlSelf->__Vtask_tb_tpu_top__DOT__check__110__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__110__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__110__name));
        }
    }
    vlSelf->tb_tpu_top__DOT__uio_in = 0U;
    tb_tpu_top__DOT____Vrepeat0 = 0x118U;
    while (VL_LTS_III(32, 0U, tb_tpu_top__DOT____Vrepeat0)) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        tb_tpu_top__DOT____Vrepeat0 = (tb_tpu_top__DOT____Vrepeat0 
                                       - (IData)(1U));
    }
    if (__Vtask_tb_tpu_top__DOT__load_weights_via_opcode__108__check_plumbing) {
        vlSelf->__Vtask_tb_tpu_top__DOT__check__112__cond 
            = (0U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__w_fsm__DOT__current_state));
        vlSelf->__Vtask_tb_tpu_top__DOT__check__112__name = 
            std::string{"weight FSM (inside DMA) finished loading and returned to IDLE"};
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (vlSelf->__Vtask_tb_tpu_top__DOT__check__112__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__112__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__112__name));
        }
    }
    __Vtask_tb_tpu_top__DOT__load_bias_via_opcode__113__check_plumbing = 0U;
    vlSelf->tb_tpu_top__DOT__uio_in = 7U;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    if (__Vtask_tb_tpu_top__DOT__load_bias_via_opcode__113__check_plumbing) {
        vlSelf->__Vtask_tb_tpu_top__DOT__check__115__cond 
            = ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__bias_fsm_start) 
               & (2U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__bank)));
        vlSelf->__Vtask_tb_tpu_top__DOT__check__115__name = 
            std::string{"OP_LOAD_BIAS asserts bias_fsm_start and routes bank=2 (DMA.sv's bias bank)"};
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (vlSelf->__Vtask_tb_tpu_top__DOT__check__115__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__115__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__115__name));
        }
    }
    vlSelf->tb_tpu_top__DOT__uio_in = 0U;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    if (__Vtask_tb_tpu_top__DOT__load_bias_via_opcode__113__check_plumbing) {
        vlSelf->__Vtask_tb_tpu_top__DOT__check__117__cond 
            = (0U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__b_fsm__DOT__current_state));
        vlSelf->__Vtask_tb_tpu_top__DOT__check__117__name = 
            std::string{"bias FSM (inside DMA) finished loading and returned to IDLE"};
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (vlSelf->__Vtask_tb_tpu_top__DOT__check__117__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__117__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__117__name));
        }
    }
    __Vtask_tb_tpu_top__DOT__load_activations_via_opcode__118__check_plumbing = 0U;
    vlSelf->tb_tpu_top__DOT__uio_in = 6U;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    if (__Vtask_tb_tpu_top__DOT__load_activations_via_opcode__118__check_plumbing) {
        vlSelf->__Vtask_tb_tpu_top__DOT__check__120__cond 
            = ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__activation_fsm_start) 
               & (3U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__bank)));
        vlSelf->__Vtask_tb_tpu_top__DOT__check__120__name = 
            std::string{"OP_LOAD_ACTIVATIONS asserts activation_fsm_start and routes bank=3 (DMA.sv's activation bank)"};
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (vlSelf->__Vtask_tb_tpu_top__DOT__check__120__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__120__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__120__name));
        }
    }
    vlSelf->tb_tpu_top__DOT__uio_in = 0U;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    if (__Vtask_tb_tpu_top__DOT__load_activations_via_opcode__118__check_plumbing) {
        vlSelf->__Vtask_tb_tpu_top__DOT__check__122__cond 
            = (0U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__a_fsm__DOT__current_state));
        vlSelf->__Vtask_tb_tpu_top__DOT__check__122__name = 
            std::string{"activation FSM (inside DMA) finished loading and returned to IDLE"};
        vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__checks);
        if (vlSelf->__Vtask_tb_tpu_top__DOT__check__122__cond) {
            VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__122__name));
        } else {
            vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_tpu_top__DOT__errors);
            VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__122__name));
        }
    }
    __Vtask_tb_tpu_top__DOT__pulse_opcode__123__opcode = 1U;
    vlSelf->tb_tpu_top__DOT__uio_in = __Vtask_tb_tpu_top__DOT__pulse_opcode__123__opcode;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    vlSelf->tb_tpu_top__DOT__uio_in = 0U;
    co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_tpu_top.clk)", 
                                                       "tb/tb_tpu_top.sv", 
                                                       118);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_tpu_top.sv", 
                                       118);
    __Vtask_tb_tpu_top__DOT__check__126__cond = (2U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__126__name = VL_SFORMATF_NX("group %0d/%0d: start pulse moves IDLE -> PREFILL",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__126__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__126__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__126__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__127__max_cycles = 0x1eU;
    __Vtask_tb_tpu_top__DOT__wait_for_state__127__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__127__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__127__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__127__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__127__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__127__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__127__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__127__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__129__cond = (3U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__129__name = VL_SFORMATF_NX("group %0d/%0d: reached PRELOAD within budget (took %0d cycles)",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials,
                                                               32,
                                                               __Vtask_tb_tpu_top__DOT__run_group_test__106__n) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__129__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__129__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__129__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__130__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__132__cond = (4U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__132__name = VL_SFORMATF_NX("group %0d/%0d tile 1: reached COMPUTE",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__132__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__132__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__132__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__133__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken;
    vlSelf->__Vtask_tb_tpu_top__DOT__check__135__cond 
        = (1U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name 
        = VL_SFORMATF_NX("group %0d/%0d tile 1: tile_count advanced to 1 on the COMPUTE->DRAIN edge",
                         32,vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                         32,vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (vlSelf->__Vtask_tb_tpu_top__DOT__check__135__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__136__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__138__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__138__name = VL_SFORMATF_NX("group %0d/%0d tile 1: no X/Z in requant_out",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__138__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__138__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__138__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__139__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__139__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__141__cond = (3U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__141__name = VL_SFORMATF_NX("group %0d/%0d tile 1: FUNCS looped back to PRELOAD",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__141__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__141__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__141__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__130__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__132__cond = (4U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__132__name = VL_SFORMATF_NX("group %0d/%0d tile 2: reached COMPUTE",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__132__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__132__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__132__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__133__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken;
    vlSelf->__Vtask_tb_tpu_top__DOT__check__135__cond 
        = (2U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name 
        = VL_SFORMATF_NX("group %0d/%0d tile 2: tile_count advanced to 2 on the COMPUTE->DRAIN edge",
                         32,vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                         32,vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (vlSelf->__Vtask_tb_tpu_top__DOT__check__135__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__136__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__138__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__138__name = VL_SFORMATF_NX("group %0d/%0d tile 2: no X/Z in requant_out",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__138__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__138__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__138__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__139__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__139__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__141__cond = (3U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__141__name = VL_SFORMATF_NX("group %0d/%0d tile 2: FUNCS looped back to PRELOAD",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__141__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__141__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__141__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__130__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__132__cond = (4U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__132__name = VL_SFORMATF_NX("group %0d/%0d tile 3: reached COMPUTE",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__132__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__132__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__132__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__133__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken;
    vlSelf->__Vtask_tb_tpu_top__DOT__check__135__cond 
        = (3U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name 
        = VL_SFORMATF_NX("group %0d/%0d tile 3: tile_count advanced to 3 on the COMPUTE->DRAIN edge",
                         32,vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                         32,vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (vlSelf->__Vtask_tb_tpu_top__DOT__check__135__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__136__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__138__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__138__name = VL_SFORMATF_NX("group %0d/%0d tile 3: no X/Z in requant_out",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__138__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__138__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__138__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__139__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__139__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__141__cond = (3U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__141__name = VL_SFORMATF_NX("group %0d/%0d tile 3: FUNCS looped back to PRELOAD",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__141__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__141__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__141__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__130__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__132__cond = (4U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__132__name = VL_SFORMATF_NX("group %0d/%0d tile 4: reached COMPUTE",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__132__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__132__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__132__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__133__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken;
    vlSelf->__Vtask_tb_tpu_top__DOT__check__135__cond 
        = (4U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name 
        = VL_SFORMATF_NX("group %0d/%0d tile 4: tile_count advanced to 4 on the COMPUTE->DRAIN edge",
                         32,vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                         32,vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (vlSelf->__Vtask_tb_tpu_top__DOT__check__135__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__136__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__138__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__138__name = VL_SFORMATF_NX("group %0d/%0d tile 4: no X/Z in requant_out",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__138__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__138__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__138__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__139__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__139__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__141__cond = (3U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__141__name = VL_SFORMATF_NX("group %0d/%0d tile 4: FUNCS looped back to PRELOAD",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__141__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__141__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__141__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__130__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__132__cond = (4U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__132__name = VL_SFORMATF_NX("group %0d/%0d tile 5: reached COMPUTE",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__132__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__132__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__132__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__133__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken;
    vlSelf->__Vtask_tb_tpu_top__DOT__check__135__cond 
        = (5U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name 
        = VL_SFORMATF_NX("group %0d/%0d tile 5: tile_count advanced to 5 on the COMPUTE->DRAIN edge",
                         32,vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                         32,vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (vlSelf->__Vtask_tb_tpu_top__DOT__check__135__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__136__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__138__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__138__name = VL_SFORMATF_NX("group %0d/%0d tile 5: no X/Z in requant_out",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__138__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__138__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__138__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__139__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__139__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__141__cond = (3U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__141__name = VL_SFORMATF_NX("group %0d/%0d tile 5: FUNCS looped back to PRELOAD",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__141__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__141__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__141__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__130__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__132__cond = (4U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__132__name = VL_SFORMATF_NX("group %0d/%0d tile 6: reached COMPUTE",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__132__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__132__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__132__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__133__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken;
    vlSelf->__Vtask_tb_tpu_top__DOT__check__135__cond 
        = (6U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name 
        = VL_SFORMATF_NX("group %0d/%0d tile 6: tile_count advanced to 6 on the COMPUTE->DRAIN edge",
                         32,vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                         32,vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (vlSelf->__Vtask_tb_tpu_top__DOT__check__135__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__136__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__138__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__138__name = VL_SFORMATF_NX("group %0d/%0d tile 6: no X/Z in requant_out",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__138__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__138__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__138__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__139__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__139__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__141__cond = (3U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__141__name = VL_SFORMATF_NX("group %0d/%0d tile 6: FUNCS looped back to PRELOAD",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__141__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__141__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__141__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__130__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__132__cond = (4U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__132__name = VL_SFORMATF_NX("group %0d/%0d tile 7: reached COMPUTE",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__132__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__132__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__132__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__133__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken;
    vlSelf->__Vtask_tb_tpu_top__DOT__check__135__cond 
        = (7U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name 
        = VL_SFORMATF_NX("group %0d/%0d tile 7: tile_count advanced to 7 on the COMPUTE->DRAIN edge",
                         32,vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                         32,vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (vlSelf->__Vtask_tb_tpu_top__DOT__check__135__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__136__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__138__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__138__name = VL_SFORMATF_NX("group %0d/%0d tile 7: no X/Z in requant_out",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__138__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__138__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__138__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__target = 3U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__139__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__139__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__139__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__141__cond = (3U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__141__name = VL_SFORMATF_NX("group %0d/%0d tile 7: FUNCS looped back to PRELOAD",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__141__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__141__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__141__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__target = 4U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__130__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__130__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__130__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__132__cond = (4U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__132__name = VL_SFORMATF_NX("group %0d/%0d tile 8: reached COMPUTE",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__132__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__132__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__132__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__target = 5U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__133__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__133__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__133__cycles_taken;
    vlSelf->__Vtask_tb_tpu_top__DOT__check__135__cond 
        = (8U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name 
        = VL_SFORMATF_NX("group %0d/%0d tile 8: tile_count advanced to 8 on the COMPUTE->DRAIN edge",
                         32,vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                         32,vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (vlSelf->__Vtask_tb_tpu_top__DOT__check__135__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(vlSelf->__Vtask_tb_tpu_top__DOT__check__135__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__target = 6U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__136__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__136__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__136__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__138__cond = 1U;
    __Vtask_tb_tpu_top__DOT__check__138__name = VL_SFORMATF_NX("group %0d/%0d tile 8: no X/Z in requant_out",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__138__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__138__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__138__name));
    }
    __Vtask_tb_tpu_top__DOT__wait_for_state__142__max_cycles = 0x14U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__142__target = 0U;
    __Vtask_tb_tpu_top__DOT__wait_for_state__142__cycles_taken = 0U;
    while ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state) 
             != (IData)(__Vtask_tb_tpu_top__DOT__wait_for_state__142__target)) 
            & VL_LTS_III(32, __Vtask_tb_tpu_top__DOT__wait_for_state__142__cycles_taken, __Vtask_tb_tpu_top__DOT__wait_for_state__142__max_cycles))) {
        co_await vlSelf->__VtrigSched_hee1e3e53__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tpu_top.clk)", 
                                                           "tb/tb_tpu_top.sv", 
                                                           118);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           118);
        __Vtask_tb_tpu_top__DOT__wait_for_state__142__cycles_taken 
            = ((IData)(1U) + __Vtask_tb_tpu_top__DOT__wait_for_state__142__cycles_taken);
    }
    __Vtask_tb_tpu_top__DOT__run_group_test__106__n 
        = __Vtask_tb_tpu_top__DOT__wait_for_state__142__cycles_taken;
    __Vtask_tb_tpu_top__DOT__check__144__cond = (0U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state));
    __Vtask_tb_tpu_top__DOT__check__144__name = VL_SFORMATF_NX("group %0d/%0d: all 8 tiles completed and FSM returned to IDLE (took %0d cycles)",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials,
                                                               32,
                                                               __Vtask_tb_tpu_top__DOT__run_group_test__106__n) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__144__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__144__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__144__name));
    }
    __Vtask_tb_tpu_top__DOT__check__145__cond = (0U 
                                                 == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count));
    __Vtask_tb_tpu_top__DOT__check__145__name = VL_SFORMATF_NX("group %0d/%0d: DONE's tile_clr reset tile_count back to 0",
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num,
                                                               32,
                                                               vlSelf->__Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials) ;
    vlSelf->tb_tpu_top__DOT__checks = ((IData)(1U) 
                                       + vlSelf->tb_tpu_top__DOT__checks);
    if (__Vtask_tb_tpu_top__DOT__check__145__cond) {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__145__name));
    } else {
        vlSelf->tb_tpu_top__DOT__errors = ((IData)(1U) 
                                           + vlSelf->tb_tpu_top__DOT__errors);
        VL_WRITEF("[FAIL] %@\n",-1,&(__Vtask_tb_tpu_top__DOT__check__145__name));
    }
    VL_WRITEF("==== SUMMARY ====\ntpu_top: %0d/%0d checks passed\n",
              32,(vlSelf->tb_tpu_top__DOT__checks - vlSelf->tb_tpu_top__DOT__errors),
              32,vlSelf->tb_tpu_top__DOT__checks);
    VL_FINISH_MT("tb/tb_tpu_top.sv", 408, "");
}

VL_INLINE_OPT VlCoroutine Vtb_tpu_top___024root___eval_initial__TOP__Vtiming__1(Vtb_tpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_tpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tpu_top___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "tb/tb_tpu_top.sv", 
                                           71);
        vlSelf->tb_tpu_top__DOT__clk = (1U & (~ (IData)(vlSelf->tb_tpu_top__DOT__clk)));
    }
}

void Vtb_tpu_top___024root___eval_act(Vtb_tpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_tpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tpu_top___024root___eval_act\n"); );
}

extern const VlWide<64>/*2047:0*/ Vtb_tpu_top__ConstPool__CONST_h6be9aa18_0;

VL_INLINE_OPT void Vtb_tpu_top___024root___nba_sequent__TOP__0(Vtb_tpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_tpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tpu_top___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__start;
    tb_tpu_top__DOT__dut__DOT__start = 0;
    IData/*31:0*/ __Vilp;
    CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__preload_state;
    tb_tpu_top__DOT__dut__DOT__preload_state = 0;
    IData/*31:0*/ tb_tpu_top__DOT__dut__DOT__weight_bank_out;
    tb_tpu_top__DOT__dut__DOT__weight_bank_out = 0;
    CData/*0:0*/ tb_tpu_top__DOT__dut__DOT____VdfgExtracted_hf6a6c9db__0;
    tb_tpu_top__DOT__dut__DOT____VdfgExtracted_hf6a6c9db__0 = 0;
    CData/*0:0*/ tb_tpu_top__DOT__dut__DOT____VdfgExtracted_h621a341a__0;
    tb_tpu_top__DOT__dut__DOT____VdfgExtracted_h621a341a__0 = 0;
    VlWide<4>/*127:0*/ tb_tpu_top__DOT__dut__DOT__dma__DOT__act_buf__DOT__buff;
    VL_ZERO_W(128, tb_tpu_top__DOT__dut__DOT__dma__DOT__act_buf__DOT__buff);
    VlWide<4>/*127:0*/ tb_tpu_top__DOT__dut__DOT__dma__DOT__bias_buf__DOT__buff;
    VL_ZERO_W(128, tb_tpu_top__DOT__dut__DOT__dma__DOT__bias_buf__DOT__buff);
    SData/*8:0*/ __Vdly__tb_tpu_top__DOT__dut__DOT__prefill_count;
    __Vdly__tb_tpu_top__DOT__dut__DOT__prefill_count = 0;
    SData/*8:0*/ __Vdly__tb_tpu_top__DOT__dut__DOT__preload_count;
    __Vdly__tb_tpu_top__DOT__dut__DOT__preload_count = 0;
    SData/*8:0*/ __Vdly__tb_tpu_top__DOT__dut__DOT__compute_count;
    __Vdly__tb_tpu_top__DOT__dut__DOT__compute_count = 0;
    SData/*8:0*/ __Vdly__tb_tpu_top__DOT__dut__DOT__drain_count;
    __Vdly__tb_tpu_top__DOT__dut__DOT__drain_count = 0;
    SData/*8:0*/ __Vdly__tb_tpu_top__DOT__dut__DOT__funcs_count;
    __Vdly__tb_tpu_top__DOT__dut__DOT__funcs_count = 0;
    SData/*8:0*/ __Vdly__tb_tpu_top__DOT__dut__DOT__tile_count;
    __Vdly__tb_tpu_top__DOT__dut__DOT__tile_count = 0;
    CData/*3:0*/ __Vdly__tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__count;
    __Vdly__tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__count = 0;
    SData/*9:0*/ __Vdly__tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_buf__DOT__wr_ptr;
    __Vdly__tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_buf__DOT__wr_ptr = 0;
    SData/*9:0*/ __Vdly__tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_buf__DOT__rd_ptr;
    __Vdly__tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_buf__DOT__rd_ptr = 0;
    SData/*9:0*/ __Vdly__tb_tpu_top__DOT__dut__DOT__dma__DOT__act_buf__DOT__wr_ptr;
    __Vdly__tb_tpu_top__DOT__dut__DOT__dma__DOT__act_buf__DOT__wr_ptr = 0;
    SData/*9:0*/ __Vdly__tb_tpu_top__DOT__dut__DOT__dma__DOT__bias_buf__DOT__wr_ptr;
    __Vdly__tb_tpu_top__DOT__dut__DOT__dma__DOT__bias_buf__DOT__wr_ptr = 0;
    SData/*8:0*/ __Vdly__tb_tpu_top__DOT__dut__DOT__dma__DOT__read_count;
    __Vdly__tb_tpu_top__DOT__dut__DOT__dma__DOT__read_count = 0;
    // Body
    __Vdly__tb_tpu_top__DOT__dut__DOT__dma__DOT__read_count 
        = vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__read_count;
    __Vdly__tb_tpu_top__DOT__dut__DOT__prefill_count 
        = vlSelf->tb_tpu_top__DOT__dut__DOT__prefill_count;
    __Vdly__tb_tpu_top__DOT__dut__DOT__drain_count 
        = vlSelf->tb_tpu_top__DOT__dut__DOT__drain_count;
    __Vdly__tb_tpu_top__DOT__dut__DOT__dma__DOT__bias_buf__DOT__wr_ptr 
        = vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__bias_buf__DOT__wr_ptr;
    __Vdly__tb_tpu_top__DOT__dut__DOT__dma__DOT__act_buf__DOT__wr_ptr 
        = vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__act_buf__DOT__wr_ptr;
    __Vdly__tb_tpu_top__DOT__dut__DOT__compute_count 
        = vlSelf->tb_tpu_top__DOT__dut__DOT__compute_count;
    __Vdly__tb_tpu_top__DOT__dut__DOT__preload_count 
        = vlSelf->tb_tpu_top__DOT__dut__DOT__preload_count;
    __Vdly__tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__count 
        = vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__count;
    __Vdly__tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_buf__DOT__wr_ptr 
        = vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_buf__DOT__wr_ptr;
    __Vdly__tb_tpu_top__DOT__dut__DOT__funcs_count 
        = vlSelf->tb_tpu_top__DOT__dut__DOT__funcs_count;
    __Vdly__tb_tpu_top__DOT__dut__DOT__tile_count = vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count;
    __Vdly__tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_buf__DOT__rd_ptr 
        = vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_buf__DOT__rd_ptr;
    if (vlSelf->tb_tpu_top__DOT__rst_n) {
        if (vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__clr_counter) {
            __Vdly__tb_tpu_top__DOT__dut__DOT__dma__DOT__read_count = 0U;
        } else if (vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__en_counter) {
            __Vdly__tb_tpu_top__DOT__dut__DOT__dma__DOT__read_count 
                = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__read_count)));
        }
        if (vlSelf->tb_tpu_top__DOT__dut__DOT__prefill_clr) {
            __Vdly__tb_tpu_top__DOT__dut__DOT__prefill_count = 0U;
        } else if (vlSelf->tb_tpu_top__DOT__dut__DOT__prefill_en) {
            __Vdly__tb_tpu_top__DOT__dut__DOT__prefill_count 
                = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__prefill_count)));
        }
        vlSelf->tb_tpu_top__DOT__u_in = (0xffU & ((IData)(1U) 
                                                  + (IData)(vlSelf->tb_tpu_top__DOT__u_in)));
        if (vlSelf->tb_tpu_top__DOT__dut__DOT__drain_clr) {
            __Vdly__tb_tpu_top__DOT__dut__DOT__drain_count = 0U;
        } else if (vlSelf->tb_tpu_top__DOT__dut__DOT__drain_en) {
            __Vdly__tb_tpu_top__DOT__dut__DOT__drain_count 
                = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__drain_count)));
        }
        if (vlSelf->tb_tpu_top__DOT__dut__DOT__compute_clr) {
            __Vdly__tb_tpu_top__DOT__dut__DOT__compute_count = 0U;
        } else if (vlSelf->tb_tpu_top__DOT__dut__DOT__compute_en) {
            __Vdly__tb_tpu_top__DOT__dut__DOT__compute_count 
                = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__compute_count)));
        }
        if (vlSelf->tb_tpu_top__DOT__dut__DOT__preload_clr) {
            __Vdly__tb_tpu_top__DOT__dut__DOT__preload_count = 0U;
        } else if (vlSelf->tb_tpu_top__DOT__dut__DOT__preload_en) {
            __Vdly__tb_tpu_top__DOT__dut__DOT__preload_count 
                = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__preload_count)));
        }
        if (vlSelf->tb_tpu_top__DOT__dut__DOT__func_clr) {
            __Vdly__tb_tpu_top__DOT__dut__DOT__funcs_count = 0U;
        } else if (vlSelf->tb_tpu_top__DOT__dut__DOT__func_en) {
            __Vdly__tb_tpu_top__DOT__dut__DOT__funcs_count 
                = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__funcs_count)));
        }
        if (vlSelf->tb_tpu_top__DOT__dut__DOT__tile_clr) {
            __Vdly__tb_tpu_top__DOT__dut__DOT__tile_count = 0U;
        } else if (vlSelf->tb_tpu_top__DOT__dut__DOT__tile_done) {
            __Vdly__tb_tpu_top__DOT__dut__DOT__tile_count 
                = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count)));
        }
        vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__r_fsm__DOT__current_state 
            = vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__r_fsm__DOT__next_state;
        vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__a_fsm__DOT__current_state 
            = vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__a_fsm__DOT__next_state;
        vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__b_fsm__DOT__current_state 
            = vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__b_fsm__DOT__next_state;
        vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__current_state 
            = vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__next_state;
        vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__w_fsm__DOT__current_state 
            = vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__w_fsm__DOT__next_state;
        if (vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__bias_clr) {
            __Vdly__tb_tpu_top__DOT__dut__DOT__dma__DOT__bias_buf__DOT__wr_ptr = 0U;
        } else if (vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__bias_we) {
            if (((~ (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__bias_full)) 
                 & (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__bias_we))) {
                VL_ASSIGNSEL_WI(128,8,(0x7fU & VL_SHIFTL_III(7,32,32, (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__bias_buf__DOT__wr_ptr), 3U)), tb_tpu_top__DOT__dut__DOT__dma__DOT__bias_buf__DOT__buff, 
                                (0xffU & vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__bias_we_in));
                __Vdly__tb_tpu_top__DOT__dut__DOT__dma__DOT__bias_buf__DOT__wr_ptr 
                    = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__bias_buf__DOT__wr_ptr)));
            } else if (((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__bias_we) 
                        & (~ (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__bias_full)))) {
                VL_ASSIGNSEL_WI(128,8,(0x7fU & VL_SHIFTL_III(7,32,32, (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__bias_buf__DOT__wr_ptr), 3U)), tb_tpu_top__DOT__dut__DOT__dma__DOT__bias_buf__DOT__buff, 
                                (0xffU & vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__bias_we_in));
                VL_ASSIGNSEL_WI(128,8,(0x7fU & VL_SHIFTL_III(7,32,32, 
                                                             ((IData)(1U) 
                                                              + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__bias_buf__DOT__wr_ptr)), 3U)), tb_tpu_top__DOT__dut__DOT__dma__DOT__bias_buf__DOT__buff, 
                                (0xffU & (vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__bias_we_in 
                                          >> 8U)));
                VL_ASSIGNSEL_WI(128,8,(0x7fU & VL_SHIFTL_III(7,32,32, 
                                                             ((IData)(2U) 
                                                              + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__bias_buf__DOT__wr_ptr)), 3U)), tb_tpu_top__DOT__dut__DOT__dma__DOT__bias_buf__DOT__buff, 
                                (0xffU & (vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__bias_we_in 
                                          >> 0x10U)));
                VL_ASSIGNSEL_WI(128,8,(0x7fU & VL_SHIFTL_III(7,32,32, 
                                                             ((IData)(3U) 
                                                              + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__bias_buf__DOT__wr_ptr)), 3U)), tb_tpu_top__DOT__dut__DOT__dma__DOT__bias_buf__DOT__buff, 
                                (vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__bias_we_in 
                                 >> 0x18U));
                __Vdly__tb_tpu_top__DOT__dut__DOT__dma__DOT__bias_buf__DOT__wr_ptr 
                    = (0x3ffU & ((IData)(4U) + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__bias_buf__DOT__wr_ptr)));
            }
        }
        if (vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__act_clr) {
            __Vdly__tb_tpu_top__DOT__dut__DOT__dma__DOT__act_buf__DOT__wr_ptr = 0U;
        } else if (vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__act_we) {
            if (((~ (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__act_full)) 
                 & (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__act_we))) {
                VL_ASSIGNSEL_WI(128,8,(0x7fU & VL_SHIFTL_III(7,32,32, (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__act_buf__DOT__wr_ptr), 3U)), tb_tpu_top__DOT__dut__DOT__dma__DOT__act_buf__DOT__buff, 
                                (0xffU & vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__act_we_in));
                __Vdly__tb_tpu_top__DOT__dut__DOT__dma__DOT__act_buf__DOT__wr_ptr 
                    = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__act_buf__DOT__wr_ptr)));
            } else if (((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__act_we) 
                        & (~ (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__act_full)))) {
                VL_ASSIGNSEL_WI(128,8,(0x7fU & VL_SHIFTL_III(7,32,32, (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__act_buf__DOT__wr_ptr), 3U)), tb_tpu_top__DOT__dut__DOT__dma__DOT__act_buf__DOT__buff, 
                                (0xffU & vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__act_we_in));
                VL_ASSIGNSEL_WI(128,8,(0x7fU & VL_SHIFTL_III(7,32,32, 
                                                             ((IData)(1U) 
                                                              + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__act_buf__DOT__wr_ptr)), 3U)), tb_tpu_top__DOT__dut__DOT__dma__DOT__act_buf__DOT__buff, 
                                (0xffU & (vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__act_we_in 
                                          >> 8U)));
                VL_ASSIGNSEL_WI(128,8,(0x7fU & VL_SHIFTL_III(7,32,32, 
                                                             ((IData)(2U) 
                                                              + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__act_buf__DOT__wr_ptr)), 3U)), tb_tpu_top__DOT__dut__DOT__dma__DOT__act_buf__DOT__buff, 
                                (0xffU & (vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__act_we_in 
                                          >> 0x10U)));
                VL_ASSIGNSEL_WI(128,8,(0x7fU & VL_SHIFTL_III(7,32,32, 
                                                             ((IData)(3U) 
                                                              + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__act_buf__DOT__wr_ptr)), 3U)), tb_tpu_top__DOT__dut__DOT__dma__DOT__act_buf__DOT__buff, 
                                (vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__act_we_in 
                                 >> 0x18U));
                __Vdly__tb_tpu_top__DOT__dut__DOT__dma__DOT__act_buf__DOT__wr_ptr 
                    = (0x3ffU & ((IData)(4U) + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__act_buf__DOT__wr_ptr)));
            }
        }
        if (vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_clr) {
            vlSelf->tb_tpu_top__DOT__dut__DOT__weight_bank_out_valid = 0U;
            __Vdly__tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_buf__DOT__rd_ptr = 0U;
            __Vdly__tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_buf__DOT__wr_ptr = 0U;
        } else {
            if ((1U & (~ (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_we)))) {
                if (vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_re) {
                    if ((1U & (~ (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_empty)))) {
                        tb_tpu_top__DOT__dut__DOT__weight_bank_out 
                            = ((0xffffff00U & tb_tpu_top__DOT__dut__DOT__weight_bank_out) 
                               | (0xffU & (((0U == 
                                             (0x1fU 
                                              & VL_SHIFTL_III(11,32,32, (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_buf__DOT__rd_ptr), 3U)))
                                             ? 0U : 
                                            (vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_buf__DOT__buff[
                                             (((IData)(7U) 
                                               + (0x7ffU 
                                                  & VL_SHIFTL_III(11,32,32, (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_buf__DOT__rd_ptr), 3U))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(11,32,32, (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_buf__DOT__rd_ptr), 3U))))) 
                                           | (vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_buf__DOT__buff[
                                              (0x3fU 
                                               & (VL_SHIFTL_III(11,32,32, (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_buf__DOT__rd_ptr), 3U) 
                                                  >> 5U))] 
                                              >> (0x1fU 
                                                  & VL_SHIFTL_III(11,32,32, (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_buf__DOT__rd_ptr), 3U))))));
                        tb_tpu_top__DOT__dut__DOT__weight_bank_out 
                            = ((0xffff00ffU & tb_tpu_top__DOT__dut__DOT__weight_bank_out) 
                               | (0xff00U & ((((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_SHIFTL_III(11,32,32, 
                                                                 ((IData)(1U) 
                                                                  + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_buf__DOT__rd_ptr)), 3U)))
                                                ? 0U
                                                : (
                                                   vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_buf__DOT__buff[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0x7ffU 
                                                      & VL_SHIFTL_III(11,32,32, 
                                                                      ((IData)(1U) 
                                                                       + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_buf__DOT__rd_ptr)), 3U))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(11,32,32, 
                                                                     ((IData)(1U) 
                                                                      + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_buf__DOT__rd_ptr)), 3U))))) 
                                              | (vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_buf__DOT__buff[
                                                 (0x3fU 
                                                  & (VL_SHIFTL_III(11,32,32, 
                                                                   ((IData)(1U) 
                                                                    + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_buf__DOT__rd_ptr)), 3U) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(11,32,32, 
                                                                  ((IData)(1U) 
                                                                   + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_buf__DOT__rd_ptr)), 3U)))) 
                                             << 8U)));
                        tb_tpu_top__DOT__dut__DOT__weight_bank_out 
                            = ((0xff00ffffU & tb_tpu_top__DOT__dut__DOT__weight_bank_out) 
                               | (0xff0000U & ((((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(11,32,32, 
                                                                   ((IData)(2U) 
                                                                    + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_buf__DOT__rd_ptr)), 3U)))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_buf__DOT__buff[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0x7ffU 
                                                     & VL_SHIFTL_III(11,32,32, 
                                                                     ((IData)(2U) 
                                                                      + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_buf__DOT__rd_ptr)), 3U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(11,32,32, 
                                                                    ((IData)(2U) 
                                                                     + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_buf__DOT__rd_ptr)), 3U))))) 
                                                | (vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_buf__DOT__buff[
                                                   (0x3fU 
                                                    & (VL_SHIFTL_III(11,32,32, 
                                                                     ((IData)(2U) 
                                                                      + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_buf__DOT__rd_ptr)), 3U) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(11,32,32, 
                                                                    ((IData)(2U) 
                                                                     + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_buf__DOT__rd_ptr)), 3U)))) 
                                               << 0x10U)));
                        tb_tpu_top__DOT__dut__DOT__weight_bank_out 
                            = ((0xffffffU & tb_tpu_top__DOT__dut__DOT__weight_bank_out) 
                               | ((((0U == (0x1fU & 
                                            VL_SHIFTL_III(11,32,32, 
                                                          ((IData)(3U) 
                                                           + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_buf__DOT__rd_ptr)), 3U)))
                                     ? 0U : (vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_buf__DOT__buff[
                                             (((IData)(7U) 
                                               + (0x7ffU 
                                                  & VL_SHIFTL_III(11,32,32, 
                                                                  ((IData)(3U) 
                                                                   + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_buf__DOT__rd_ptr)), 3U))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(11,32,32, 
                                                                  ((IData)(3U) 
                                                                   + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_buf__DOT__rd_ptr)), 3U))))) 
                                   | (vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_buf__DOT__buff[
                                      (0x3fU & (VL_SHIFTL_III(11,32,32, 
                                                              ((IData)(3U) 
                                                               + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_buf__DOT__rd_ptr)), 3U) 
                                                >> 5U))] 
                                      >> (0x1fU & VL_SHIFTL_III(11,32,32, 
                                                                ((IData)(3U) 
                                                                 + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_buf__DOT__rd_ptr)), 3U)))) 
                                  << 0x18U));
                        __Vdly__tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_buf__DOT__rd_ptr 
                            = (0x3ffU & ((IData)(4U) 
                                         + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_buf__DOT__rd_ptr)));
                    }
                }
            }
            if (vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_we) {
                if (((0x100U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_buf__DOT__wr_ptr)) 
                     & (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_we))) {
                    vlSelf->tb_tpu_top__DOT__dut__DOT__weight_bank_out_valid = 0U;
                } else if (((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_we) 
                            & (0x100U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_buf__DOT__wr_ptr)))) {
                    vlSelf->tb_tpu_top__DOT__dut__DOT__weight_bank_out_valid = 0U;
                }
                if (((~ (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_full)) 
                     & (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_we))) {
                    VL_ASSIGNSEL_WI(2048,8,(0x7ffU 
                                            & VL_SHIFTL_III(11,32,32, (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_buf__DOT__wr_ptr), 3U)), vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_buf__DOT__buff, 
                                    (0xffU & vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_we_in));
                    __Vdly__tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_buf__DOT__wr_ptr 
                        = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_buf__DOT__wr_ptr)));
                } else if (((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_we) 
                            & (~ (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_full)))) {
                    VL_ASSIGNSEL_WI(2048,8,(0x7ffU 
                                            & VL_SHIFTL_III(11,32,32, (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_buf__DOT__wr_ptr), 3U)), vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_buf__DOT__buff, 
                                    (0xffU & vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_we_in));
                    VL_ASSIGNSEL_WI(2048,8,(0x7ffU 
                                            & VL_SHIFTL_III(11,32,32, 
                                                            ((IData)(1U) 
                                                             + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_buf__DOT__wr_ptr)), 3U)), vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_buf__DOT__buff, 
                                    (0xffU & (vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_we_in 
                                              >> 8U)));
                    VL_ASSIGNSEL_WI(2048,8,(0x7ffU 
                                            & VL_SHIFTL_III(11,32,32, 
                                                            ((IData)(2U) 
                                                             + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_buf__DOT__wr_ptr)), 3U)), vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_buf__DOT__buff, 
                                    (0xffU & (vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_we_in 
                                              >> 0x10U)));
                    VL_ASSIGNSEL_WI(2048,8,(0x7ffU 
                                            & VL_SHIFTL_III(11,32,32, 
                                                            ((IData)(3U) 
                                                             + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_buf__DOT__wr_ptr)), 3U)), vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_buf__DOT__buff, 
                                    (vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_we_in 
                                     >> 0x18U));
                    __Vdly__tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_buf__DOT__wr_ptr 
                        = (0x3ffU & ((IData)(4U) + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_buf__DOT__wr_ptr)));
                }
            } else if (vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_re) {
                vlSelf->tb_tpu_top__DOT__dut__DOT__weight_bank_out_valid 
                    = (1U & (~ (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_empty)));
            }
        }
        vlSelf->tb_tpu_top__DOT__dut__DOT__opcode_reg 
            = vlSelf->tb_tpu_top__DOT__uio_in;
        vlSelf->tb_tpu_top__DOT__dut__DOT__current_state 
            = vlSelf->tb_tpu_top__DOT__dut__DOT__next_state;
    } else {
        __Vdly__tb_tpu_top__DOT__dut__DOT__dma__DOT__read_count = 0U;
        __Vdly__tb_tpu_top__DOT__dut__DOT__prefill_count = 0U;
        vlSelf->tb_tpu_top__DOT__u_in = 0U;
        __Vdly__tb_tpu_top__DOT__dut__DOT__drain_count = 0U;
        __Vdly__tb_tpu_top__DOT__dut__DOT__compute_count = 0U;
        __Vdly__tb_tpu_top__DOT__dut__DOT__preload_count = 0U;
        __Vdly__tb_tpu_top__DOT__dut__DOT__funcs_count = 0U;
        __Vdly__tb_tpu_top__DOT__dut__DOT__tile_count = 0U;
        vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__r_fsm__DOT__current_state = 0U;
        vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__a_fsm__DOT__current_state = 0U;
        vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__b_fsm__DOT__current_state = 0U;
        vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__current_state = 0U;
        vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__w_fsm__DOT__current_state = 0U;
        __Vdly__tb_tpu_top__DOT__dut__DOT__dma__DOT__bias_buf__DOT__wr_ptr = 0U;
        tb_tpu_top__DOT__dut__DOT__dma__DOT__bias_buf__DOT__buff[0U] = 0U;
        tb_tpu_top__DOT__dut__DOT__dma__DOT__bias_buf__DOT__buff[1U] = 0U;
        tb_tpu_top__DOT__dut__DOT__dma__DOT__bias_buf__DOT__buff[2U] = 0U;
        tb_tpu_top__DOT__dut__DOT__dma__DOT__bias_buf__DOT__buff[3U] = 0U;
        __Vdly__tb_tpu_top__DOT__dut__DOT__dma__DOT__act_buf__DOT__wr_ptr = 0U;
        tb_tpu_top__DOT__dut__DOT__dma__DOT__act_buf__DOT__buff[0U] = 0U;
        tb_tpu_top__DOT__dut__DOT__dma__DOT__act_buf__DOT__buff[1U] = 0U;
        tb_tpu_top__DOT__dut__DOT__dma__DOT__act_buf__DOT__buff[2U] = 0U;
        tb_tpu_top__DOT__dut__DOT__dma__DOT__act_buf__DOT__buff[3U] = 0U;
        vlSelf->tb_tpu_top__DOT__dut__DOT__opcode_reg = 0U;
        vlSelf->tb_tpu_top__DOT__dut__DOT__current_state = 0U;
        __Vdly__tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_buf__DOT__rd_ptr = 0U;
        __Vdly__tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_buf__DOT__wr_ptr = 0U;
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_buf__DOT__buff[__Vilp] 
                = Vtb_tpu_top__ConstPool__CONST_h6be9aa18_0[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if ((1U & (~ (IData)(vlSelf->tb_tpu_top__DOT__rst_n)))) {
        __Vdly__tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__count = 0U;
    }
    if ((1U & (~ ((((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__fifo_we) 
                    & (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__fifo_re)) 
                   & (~ (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__weight_fifo_empty))) 
                  & (~ (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__weight_fifo_full)))))) {
        if (((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__fifo_re) 
             & (~ (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__weight_fifo_empty)))) {
            __Vdly__tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__count 
                = (0xfU & ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__count) 
                           - (IData)(1U)));
        } else if (((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__fifo_we) 
                    & (~ (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__weight_fifo_full)))) {
            __Vdly__tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__count 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__count)));
        }
    }
    vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__read_count 
        = __Vdly__tb_tpu_top__DOT__dut__DOT__dma__DOT__read_count;
    vlSelf->tb_tpu_top__DOT__dut__DOT__prefill_count 
        = __Vdly__tb_tpu_top__DOT__dut__DOT__prefill_count;
    vlSelf->tb_tpu_top__DOT__dut__DOT__drain_count 
        = __Vdly__tb_tpu_top__DOT__dut__DOT__drain_count;
    vlSelf->tb_tpu_top__DOT__dut__DOT__compute_count 
        = __Vdly__tb_tpu_top__DOT__dut__DOT__compute_count;
    vlSelf->tb_tpu_top__DOT__dut__DOT__preload_count 
        = __Vdly__tb_tpu_top__DOT__dut__DOT__preload_count;
    vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__count 
        = __Vdly__tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__count;
    vlSelf->tb_tpu_top__DOT__dut__DOT__funcs_count 
        = __Vdly__tb_tpu_top__DOT__dut__DOT__funcs_count;
    vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count = __Vdly__tb_tpu_top__DOT__dut__DOT__tile_count;
    vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__bias_buf__DOT__wr_ptr 
        = __Vdly__tb_tpu_top__DOT__dut__DOT__dma__DOT__bias_buf__DOT__wr_ptr;
    vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__act_buf__DOT__wr_ptr 
        = __Vdly__tb_tpu_top__DOT__dut__DOT__dma__DOT__act_buf__DOT__wr_ptr;
    vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_buf__DOT__rd_ptr 
        = __Vdly__tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_buf__DOT__rd_ptr;
    vlSelf->tb_tpu_top__DOT__dut__DOT__weight_fifo_empty 
        = (0U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__count));
    vlSelf->tb_tpu_top__DOT__dut__DOT__weight_fifo_full 
        = (4U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__count));
    tb_tpu_top__DOT__dut__DOT____VdfgExtracted_hf6a6c9db__0 
        = ((8U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count)) 
           & (3U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__funcs_count)));
    tb_tpu_top__DOT__dut__DOT____VdfgExtracted_h621a341a__0 
        = ((3U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__funcs_count)) 
           & (8U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__tile_count)));
    vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__en_counter = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__clr_counter = 0U;
    if ((0U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__r_fsm__DOT__current_state))) {
        if ((1U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__r_fsm__DOT__current_state))) {
            vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__en_counter = 1U;
            if ((0x40U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__read_count))) {
                vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__clr_counter = 1U;
            }
        }
    }
    vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__act_clr = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__bias_clr = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__bias_full 
        = (0x10U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__bias_buf__DOT__wr_ptr));
    vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__bias_we = 0U;
    if ((0U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__b_fsm__DOT__current_state))) {
        if ((1U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__b_fsm__DOT__current_state))) {
            if ((2U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__b_fsm__DOT__current_state))) {
                vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__bias_clr = 1U;
            }
        }
        if ((1U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__b_fsm__DOT__current_state))) {
            if ((0x10U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__bias_buf__DOT__wr_ptr))) {
                vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__bias_we = 1U;
            }
        }
    }
    vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__act_full 
        = (0x10U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__act_buf__DOT__wr_ptr));
    vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__act_we = 0U;
    if ((0U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__a_fsm__DOT__current_state))) {
        if ((1U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__a_fsm__DOT__current_state))) {
            if ((2U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__a_fsm__DOT__current_state))) {
                vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__act_clr = 1U;
            }
        }
        if ((1U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__a_fsm__DOT__current_state))) {
            if ((0x10U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__act_buf__DOT__wr_ptr))) {
                vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__act_we = 1U;
            }
        }
    }
    vlSelf->tb_tpu_top__DOT__dut__DOT__start_read_fsm = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__bias_fsm_start = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__activation_fsm_start = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__weight_fsm_start = 0U;
    if ((1U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__opcode_reg))) {
        if ((2U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__opcode_reg))) {
            vlSelf->tb_tpu_top__DOT__dut__DOT__requant_value 
                = vlSelf->tb_tpu_top__DOT__u_in;
        }
        if ((2U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__opcode_reg))) {
            if ((3U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__opcode_reg))) {
                vlSelf->tb_tpu_top__DOT__dut__DOT__start_read_fsm = 1U;
            }
            if ((3U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__opcode_reg))) {
                if ((4U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__opcode_reg))) {
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
                        vlSelf->tb_tpu_top__DOT__dut__DOT__bank = 1U;
                    } else if ((6U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__opcode_reg))) {
                        vlSelf->tb_tpu_top__DOT__dut__DOT__bank = 3U;
                    } else if ((7U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__opcode_reg))) {
                        vlSelf->tb_tpu_top__DOT__dut__DOT__bank = 2U;
                    }
                }
            }
        }
    }
    vlSelf->tb_tpu_top__DOT__dut__DOT__tile_clr = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__tile_done = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__drain_en = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__prefill_clr = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__preload_clr = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__compute_clr = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__func_clr = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__prefill_en = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__preload_en = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__compute_en = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__w_l__DOT__fifo_we = 0U;
    tb_tpu_top__DOT__dut__DOT__start = 0U;
    if ((1U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__opcode_reg))) {
        if ((0U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state))) {
            tb_tpu_top__DOT__dut__DOT__start = 1U;
        }
    }
    tb_tpu_top__DOT__dut__DOT__preload_state = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__func_en = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__drain_clr = 0U;
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
                        if ((6U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__current_state))) {
                            if ((1U & (~ (IData)(tb_tpu_top__DOT__dut__DOT____VdfgExtracted_hf6a6c9db__0)))) {
                                if ((1U & (~ (IData)(tb_tpu_top__DOT__dut__DOT____VdfgExtracted_h621a341a__0)))) {
                                    vlSelf->tb_tpu_top__DOT__dut__DOT__func_en = 1U;
                                    vlSelf->tb_tpu_top__DOT__dut__DOT__drain_clr = 1U;
                                }
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
    vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__b_fsm__DOT__next_state 
        = vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__b_fsm__DOT__current_state;
    if ((0U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__b_fsm__DOT__current_state))) {
        vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__b_fsm__DOT__next_state 
            = (((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__bias_fsm_start) 
                & (~ (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__b_fsm__DOT__any_busy)))
                ? 1U : 0U);
    } else if ((1U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__b_fsm__DOT__current_state))) {
        vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__b_fsm__DOT__next_state 
            = ((0x10U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__bias_buf__DOT__wr_ptr))
                ? 2U : 1U);
    } else if ((2U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__b_fsm__DOT__current_state))) {
        vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__b_fsm__DOT__next_state = 0U;
    }
    vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__a_fsm__DOT__next_state 
        = vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__a_fsm__DOT__current_state;
    if ((0U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__a_fsm__DOT__current_state))) {
        vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__a_fsm__DOT__next_state 
            = (((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__activation_fsm_start) 
                & (~ (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__a_fsm__DOT__any_busy)))
                ? 1U : 0U);
    } else if ((1U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__a_fsm__DOT__current_state))) {
        vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__a_fsm__DOT__next_state 
            = ((0x10U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__act_buf__DOT__wr_ptr))
                ? 2U : 1U);
    } else if ((2U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__a_fsm__DOT__current_state))) {
        vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__a_fsm__DOT__next_state = 0U;
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
    vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_buf__DOT__wr_ptr 
        = __Vdly__tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_buf__DOT__wr_ptr;
    vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_full 
        = (0x100U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_buf__DOT__wr_ptr));
    vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_we = 0U;
    if ((0U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__w_fsm__DOT__current_state))) {
        if ((1U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__w_fsm__DOT__current_state))) {
            if ((0x100U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_buf__DOT__wr_ptr))) {
                vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_we = 1U;
            }
        }
    }
    vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_empty 
        = ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_buf__DOT__rd_ptr) 
           == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_buf__DOT__wr_ptr));
    vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_re 
        = (1U & (~ ((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_empty) 
                    | (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_we))));
}

VL_INLINE_OPT void Vtb_tpu_top___024root___nba_sequent__TOP__1(Vtb_tpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_tpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tpu_top___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_we_in 
        = (0xffffff00U & vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_we_in);
    vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__bias_we_in 
        = (0xffffff00U & vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__bias_we_in);
    vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__act_we_in 
        = (0xffffff00U & vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__act_we_in);
    if ((1U & (~ (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__any_busy)))) {
        if ((1U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__bank))) {
            vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_we_in 
                = ((0xffffff00U & vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_we_in) 
                   | (IData)(vlSelf->tb_tpu_top__DOT__u_in));
        }
        if ((1U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__bank))) {
            if ((2U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__bank))) {
                vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__bias_we_in 
                    = ((0xffffff00U & vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__bias_we_in) 
                       | (IData)(vlSelf->tb_tpu_top__DOT__u_in));
            }
            if ((2U != (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__bank))) {
                if ((3U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__bank))) {
                    vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__act_we_in 
                        = ((0xffffff00U & vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__act_we_in) 
                           | (IData)(vlSelf->tb_tpu_top__DOT__u_in));
                }
            }
        }
    }
    vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_clr = 0U;
    vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__w_fsm__DOT__next_state 
        = vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__w_fsm__DOT__current_state;
    if ((0U == (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__w_fsm__DOT__current_state))) {
        if (((IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__weight_fsm_start) 
             & (~ (IData)(vlSelf->tb_tpu_top__DOT__dut__DOT__dma__DOT__any_busy)))) {
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
}

void Vtb_tpu_top___024root___eval_nba(Vtb_tpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_tpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tpu_top___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_tpu_top___024root___nba_sequent__TOP__0(vlSelf);
        Vtb_tpu_top___024root___nba_sequent__TOP__1(vlSelf);
    }
}

void Vtb_tpu_top___024root___timing_resume(Vtb_tpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_tpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tpu_top___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hee1e3e53__0.resume("@(posedge tb_tpu_top.clk)");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_tpu_top___024root___timing_commit(Vtb_tpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_tpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tpu_top___024root___timing_commit\n"); );
    // Body
    if ((! (2ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hee1e3e53__0.commit("@(posedge tb_tpu_top.clk)");
    }
}

void Vtb_tpu_top___024root___eval_triggers__act(Vtb_tpu_top___024root* vlSelf);

bool Vtb_tpu_top___024root___eval_phase__act(Vtb_tpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_tpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tpu_top___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_tpu_top___024root___eval_triggers__act(vlSelf);
    Vtb_tpu_top___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_tpu_top___024root___timing_resume(vlSelf);
        Vtb_tpu_top___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_tpu_top___024root___eval_phase__nba(Vtb_tpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_tpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tpu_top___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_tpu_top___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_tpu_top___024root___dump_triggers__nba(Vtb_tpu_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_tpu_top___024root___dump_triggers__act(Vtb_tpu_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_tpu_top___024root___eval(Vtb_tpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_tpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tpu_top___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_tpu_top___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/tb_tpu_top.sv", 55, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_tpu_top___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/tb_tpu_top.sv", 55, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_tpu_top___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_tpu_top___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_tpu_top___024root___eval_debug_assertions(Vtb_tpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_tpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tpu_top___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
