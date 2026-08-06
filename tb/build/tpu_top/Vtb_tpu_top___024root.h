// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_tpu_top.h for the primary calling header

#ifndef VERILATED_VTB_TPU_TOP___024ROOT_H_
#define VERILATED_VTB_TPU_TOP___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_tpu_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_tpu_top___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_tpu_top__DOT__clk;
        CData/*0:0*/ tb_tpu_top__DOT__rst_n;
        CData/*7:0*/ tb_tpu_top__DOT__u_in;
        CData/*7:0*/ tb_tpu_top__DOT__uio_in;
        CData/*7:0*/ tb_tpu_top__DOT__dut__DOT__opcode_reg;
        CData/*7:0*/ tb_tpu_top__DOT__dut__DOT__requant_value;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__start_read_fsm;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__weight_fsm_start;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__activation_fsm_start;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__bias_fsm_start;
        CData/*3:0*/ tb_tpu_top__DOT__dut__DOT__bank;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__weight_fifo_full;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__weight_fifo_empty;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__weight_bank_out_valid;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__tile_done;
        CData/*4:0*/ tb_tpu_top__DOT__dut__DOT__current_state;
        CData/*4:0*/ tb_tpu_top__DOT__dut__DOT__next_state;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__prefill_en;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__prefill_clr;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__preload_en;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__preload_clr;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__compute_en;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__compute_clr;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__drain_en;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__drain_clr;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__func_en;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__func_clr;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__tile_clr;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__w_l__DOT__fifo_re;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__w_l__DOT__fifo_we;
        CData/*4:0*/ tb_tpu_top__DOT__dut__DOT__w_l__DOT__current_state;
        CData/*4:0*/ tb_tpu_top__DOT__dut__DOT__w_l__DOT__next_state;
        CData/*3:0*/ tb_tpu_top__DOT__dut__DOT__w_l__DOT__weight_fifo__DOT__count;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__dma__DOT__activations_busy;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__dma__DOT__weights_busy;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__dma__DOT__bias_busy;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__dma__DOT__any_busy;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_we;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_re;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_clr;
        IData/*31:0*/ tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_we_in;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_full;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_empty;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__dma__DOT__act_we;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__dma__DOT__act_clr;
        IData/*31:0*/ tb_tpu_top__DOT__dut__DOT__dma__DOT__act_we_in;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__dma__DOT__act_full;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__dma__DOT__bias_we;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__dma__DOT__bias_clr;
        IData/*31:0*/ tb_tpu_top__DOT__dut__DOT__dma__DOT__bias_we_in;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__dma__DOT__bias_full;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__dma__DOT__en_counter;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__dma__DOT__clr_counter;
        VlWide<64>/*2047:0*/ tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_buf__DOT__buff;
        CData/*5:0*/ tb_tpu_top__DOT__dut__DOT__dma__DOT__w_fsm__DOT__current_state;
        CData/*5:0*/ tb_tpu_top__DOT__dut__DOT__dma__DOT__w_fsm__DOT__next_state;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__dma__DOT__b_fsm__DOT__any_busy;
        CData/*5:0*/ tb_tpu_top__DOT__dut__DOT__dma__DOT__b_fsm__DOT__current_state;
        CData/*5:0*/ tb_tpu_top__DOT__dut__DOT__dma__DOT__b_fsm__DOT__next_state;
        CData/*0:0*/ tb_tpu_top__DOT__dut__DOT__dma__DOT__a_fsm__DOT__any_busy;
        CData/*5:0*/ tb_tpu_top__DOT__dut__DOT__dma__DOT__a_fsm__DOT__current_state;
        CData/*5:0*/ tb_tpu_top__DOT__dut__DOT__dma__DOT__a_fsm__DOT__next_state;
        CData/*5:0*/ tb_tpu_top__DOT__dut__DOT__dma__DOT__r_fsm__DOT__current_state;
        CData/*5:0*/ tb_tpu_top__DOT__dut__DOT__dma__DOT__r_fsm__DOT__next_state;
    };
    struct {
        CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__110__cond;
        CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__112__cond;
        CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__115__cond;
        CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__117__cond;
        CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__120__cond;
        CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__122__cond;
        CData/*0:0*/ __Vtask_tb_tpu_top__DOT__check__135__cond;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_tpu_top__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_tpu_top__DOT__rst_n__0;
        CData/*0:0*/ __VactContinue;
        SData/*8:0*/ tb_tpu_top__DOT__dut__DOT__prefill_count;
        SData/*8:0*/ tb_tpu_top__DOT__dut__DOT__preload_count;
        SData/*8:0*/ tb_tpu_top__DOT__dut__DOT__compute_count;
        SData/*8:0*/ tb_tpu_top__DOT__dut__DOT__drain_count;
        SData/*8:0*/ tb_tpu_top__DOT__dut__DOT__funcs_count;
        SData/*8:0*/ tb_tpu_top__DOT__dut__DOT__tile_count;
        SData/*8:0*/ tb_tpu_top__DOT__dut__DOT__dma__DOT__read_count;
        SData/*9:0*/ tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_buf__DOT__wr_ptr;
        SData/*9:0*/ tb_tpu_top__DOT__dut__DOT__dma__DOT__weight_buf__DOT__rd_ptr;
        SData/*9:0*/ tb_tpu_top__DOT__dut__DOT__dma__DOT__act_buf__DOT__wr_ptr;
        SData/*9:0*/ tb_tpu_top__DOT__dut__DOT__dma__DOT__bias_buf__DOT__wr_ptr;
        IData/*31:0*/ tb_tpu_top__DOT__errors;
        IData/*31:0*/ tb_tpu_top__DOT__checks;
        IData/*31:0*/ __Vtask_tb_tpu_top__DOT__run_group_test__106__trial_num;
        IData/*31:0*/ __Vtask_tb_tpu_top__DOT__run_group_test__106__num_trials;
        IData/*31:0*/ __VactIterCount;
    };
    std::string __Vtask_tb_tpu_top__DOT__check__110__name;
    std::string __Vtask_tb_tpu_top__DOT__check__112__name;
    std::string __Vtask_tb_tpu_top__DOT__check__115__name;
    std::string __Vtask_tb_tpu_top__DOT__check__117__name;
    std::string __Vtask_tb_tpu_top__DOT__check__120__name;
    std::string __Vtask_tb_tpu_top__DOT__check__122__name;
    std::string __Vtask_tb_tpu_top__DOT__check__135__name;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hee1e3e53__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_tpu_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_tpu_top___024root(Vtb_tpu_top__Syms* symsp, const char* v__name);
    ~Vtb_tpu_top___024root();
    VL_UNCOPYABLE(Vtb_tpu_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
