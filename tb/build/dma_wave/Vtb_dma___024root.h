// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_dma.h for the primary calling header

#ifndef VERILATED_VTB_DMA___024ROOT_H_
#define VERILATED_VTB_DMA___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_dma__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_dma___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_dma__DOT__clk;
        CData/*0:0*/ tb_dma__DOT__rst_n;
        CData/*7:0*/ tb_dma__DOT__u_in;
        CData/*0:0*/ tb_dma__DOT__bias_fsm_start;
        CData/*0:0*/ tb_dma__DOT__activation_fsm_start;
        CData/*0:0*/ tb_dma__DOT__weight_fsm_start;
        CData/*0:0*/ tb_dma__DOT__tile_done;
        IData/*31:0*/ tb_dma__DOT__computed_bank_in;
        CData/*0:0*/ tb_dma__DOT__computed_bank_in_valid;
        CData/*0:0*/ tb_dma__DOT__start_read_fsm;
        CData/*3:0*/ tb_dma__DOT__bank;
        CData/*0:0*/ tb_dma__DOT__result_we;
        IData/*31:0*/ tb_dma__DOT__weight_bank_out;
        CData/*0:0*/ tb_dma__DOT__weight_bank_out_valid;
        CData/*0:0*/ tb_dma__DOT__activation_bank_out_valid;
        IData/*31:0*/ tb_dma__DOT____Vcellout__dut__activation_bank_out;
        CData/*0:0*/ tb_dma__DOT__dut__DOT__activations_busy;
        CData/*0:0*/ tb_dma__DOT__dut__DOT__weights_busy;
        CData/*0:0*/ tb_dma__DOT__dut__DOT__bias_busy;
        CData/*7:0*/ tb_dma__DOT__dut__DOT__weight_we_in_single;
        CData/*7:0*/ tb_dma__DOT__dut__DOT__bias_we_in_single;
        CData/*7:0*/ tb_dma__DOT__dut__DOT__act_we_in_single;
        CData/*0:0*/ tb_dma__DOT__dut__DOT__any_busy;
        CData/*0:0*/ tb_dma__DOT__dut__DOT__en_counter;
        CData/*0:0*/ tb_dma__DOT__dut__DOT__clr_counter;
        CData/*0:0*/ tb_dma__DOT__dut__DOT__a_ready;
        CData/*0:0*/ tb_dma__DOT__dut__DOT__b_ready;
        CData/*0:0*/ tb_dma__DOT__dut__DOT__w_ready;
        CData/*0:0*/ tb_dma__DOT__dut__DOT__weight_single;
        CData/*0:0*/ tb_dma__DOT__dut__DOT__weight_we;
        CData/*0:0*/ tb_dma__DOT__dut__DOT__weight_re;
        CData/*0:0*/ tb_dma__DOT__dut__DOT__weight_a_or_b;
        CData/*0:0*/ tb_dma__DOT__dut__DOT__weight_clr;
        CData/*0:0*/ tb_dma__DOT__dut__DOT__weight_full;
        CData/*0:0*/ tb_dma__DOT__dut__DOT__weight_empty;
        CData/*0:0*/ tb_dma__DOT__dut__DOT__act_single;
        CData/*0:0*/ tb_dma__DOT__dut__DOT__act_we;
        CData/*0:0*/ tb_dma__DOT__dut__DOT__act_re;
        CData/*0:0*/ tb_dma__DOT__dut__DOT__act_a_or_b;
        CData/*0:0*/ tb_dma__DOT__dut__DOT__act_clr;
        CData/*0:0*/ tb_dma__DOT__dut__DOT__act_full;
        CData/*0:0*/ tb_dma__DOT__dut__DOT__act_empty;
        CData/*0:0*/ tb_dma__DOT__dut__DOT__act_full_prev;
        CData/*0:0*/ tb_dma__DOT__dut__DOT__bias_single;
        CData/*0:0*/ tb_dma__DOT__dut__DOT__bias_we;
        CData/*0:0*/ tb_dma__DOT__dut__DOT__bias_a_or_b;
        CData/*0:0*/ tb_dma__DOT__dut__DOT__bias_clr;
        CData/*0:0*/ tb_dma__DOT__dut__DOT__bias_full;
        CData/*0:0*/ tb_dma__DOT__dut__DOT__bias_full_prev;
        CData/*0:0*/ tb_dma__DOT__dut__DOT__result_single;
        CData/*0:0*/ tb_dma__DOT__dut__DOT__result_re;
        CData/*0:0*/ tb_dma__DOT__dut__DOT__result_a_or_b;
        CData/*0:0*/ tb_dma__DOT__dut__DOT__result_clr;
        IData/*31:0*/ tb_dma__DOT__dut__DOT__result_we_in;
        IData/*31:0*/ tb_dma__DOT__dut__DOT__result_re_out;
        CData/*0:0*/ tb_dma__DOT__dut__DOT__result_full;
        CData/*0:0*/ tb_dma__DOT__dut__DOT__result_empty;
        CData/*0:0*/ tb_dma__DOT__dut__DOT__result_re_valid;
        VlWide<64>/*2047:0*/ tb_dma__DOT__dut__DOT__weight_buf__DOT__buff;
        VlWide<4>/*127:0*/ tb_dma__DOT__dut__DOT__act_buf__DOT__buff;
        IData/*31:0*/ tb_dma__DOT__dut__DOT__bias_buf__DOT__re_out;
        CData/*0:0*/ tb_dma__DOT__dut__DOT__bias_buf__DOT__re_valid;
        VlWide<4>/*127:0*/ tb_dma__DOT__dut__DOT__bias_buf__DOT__buff;
        CData/*5:0*/ tb_dma__DOT__dut__DOT__w_fsm__DOT__current_state;
    };
    struct {
        CData/*5:0*/ tb_dma__DOT__dut__DOT__w_fsm__DOT__next_state;
        CData/*5:0*/ tb_dma__DOT__dut__DOT__b_fsm__DOT__current_state;
        CData/*5:0*/ tb_dma__DOT__dut__DOT__b_fsm__DOT__next_state;
        CData/*5:0*/ tb_dma__DOT__dut__DOT__a_fsm__DOT__current_state;
        CData/*5:0*/ tb_dma__DOT__dut__DOT__a_fsm__DOT__next_state;
        CData/*7:0*/ tb_dma__DOT__dut__DOT__result_buf__DOT__we_in_single;
        VlWide<64>/*2047:0*/ tb_dma__DOT__dut__DOT__result_buf__DOT__buff;
        CData/*5:0*/ tb_dma__DOT__dut__DOT__r_fsm__DOT__current_state;
        CData/*5:0*/ tb_dma__DOT__dut__DOT__r_fsm__DOT__next_state;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_dma__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_dma__DOT__rst_n__0;
        CData/*0:0*/ __VactContinue;
        SData/*8:0*/ tb_dma__DOT__dut__DOT__read_count;
        SData/*9:0*/ tb_dma__DOT__dut__DOT__weight_buf__DOT__wr_ptr;
        SData/*9:0*/ tb_dma__DOT__dut__DOT__weight_buf__DOT__rd_ptr;
        SData/*9:0*/ tb_dma__DOT__dut__DOT__act_buf__DOT__wr_ptr;
        SData/*9:0*/ tb_dma__DOT__dut__DOT__act_buf__DOT__rd_ptr;
        SData/*9:0*/ tb_dma__DOT__dut__DOT__bias_buf__DOT__wr_ptr;
        SData/*9:0*/ tb_dma__DOT__dut__DOT__bias_buf__DOT__rd_ptr;
        SData/*9:0*/ tb_dma__DOT__dut__DOT__result_buf__DOT__wr_ptr;
        SData/*9:0*/ tb_dma__DOT__dut__DOT__result_buf__DOT__rd_ptr;
        IData/*31:0*/ tb_dma__DOT__errors;
        IData/*31:0*/ tb_dma__DOT__checks;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*7:0*/, 256> tb_dma__DOT__weight_data;
        VlUnpacked<CData/*7:0*/, 16> tb_dma__DOT__bias_data;
        VlUnpacked<CData/*7:0*/, 16> tb_dma__DOT__act_data;
        VlUnpacked<CData/*7:0*/, 256> tb_dma__DOT__weight_captured;
        VlUnpacked<CData/*7:0*/, 256> tb_dma__DOT__result_data;
        VlUnpacked<CData/*7:0*/, 256> tb_dma__DOT__result_captured;
        VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h7a6a0639__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_dma__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_dma___024root(Vtb_dma__Syms* symsp, const char* v__name);
    ~Vtb_dma___024root();
    VL_UNCOPYABLE(Vtb_dma___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
