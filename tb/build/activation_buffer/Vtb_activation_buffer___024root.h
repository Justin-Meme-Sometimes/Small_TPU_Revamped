// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_activation_buffer.h for the primary calling header

#ifndef VERILATED_VTB_ACTIVATION_BUFFER___024ROOT_H_
#define VERILATED_VTB_ACTIVATION_BUFFER___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_activation_buffer__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_activation_buffer___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_activation_buffer__DOT__clk;
        CData/*0:0*/ tb_activation_buffer__DOT__ib_rst_n;
        CData/*0:0*/ tb_activation_buffer__DOT__bf_rst_n;
        CData/*0:0*/ tb_activation_buffer__DOT__act_rst_n;
        CData/*0:0*/ tb_activation_buffer__DOT__ib_we;
        CData/*0:0*/ tb_activation_buffer__DOT__ib_re;
        CData/*0:0*/ tb_activation_buffer__DOT__ib_clr;
        CData/*0:0*/ tb_activation_buffer__DOT__ib_we_valid;
        CData/*0:0*/ tb_activation_buffer__DOT__ib_full;
        CData/*0:0*/ tb_activation_buffer__DOT__ib_empty;
        CData/*0:0*/ tb_activation_buffer__DOT__ib_re_valid;
        VlWide<4>/*127:0*/ tb_activation_buffer__DOT__ib_we_in;
        VlWide<4>/*127:0*/ tb_activation_buffer__DOT__ib_re_out;
        CData/*0:0*/ tb_activation_buffer__DOT__bf_a_or_b;
        CData/*0:0*/ tb_activation_buffer__DOT__bf_start;
        CData/*0:0*/ tb_activation_buffer__DOT__bf_compute_state;
        CData/*0:0*/ tb_activation_buffer__DOT__bf_preload_state;
        CData/*0:0*/ tb_activation_buffer__DOT__bf_drain_state;
        CData/*0:0*/ tb_activation_buffer__DOT__bf_tiles_complete;
        CData/*0:0*/ tb_activation_buffer__DOT__bf_full;
        CData/*0:0*/ tb_activation_buffer__DOT__bf_empty;
        CData/*0:0*/ tb_activation_buffer__DOT__bf_first_pass;
        CData/*0:0*/ tb_activation_buffer__DOT__bf_active;
        CData/*0:0*/ tb_activation_buffer__DOT__bf_we;
        CData/*0:0*/ tb_activation_buffer__DOT__bf_re;
        CData/*0:0*/ tb_activation_buffer__DOT__bf_clr;
        CData/*0:0*/ tb_activation_buffer__DOT__act_start;
        CData/*0:0*/ tb_activation_buffer__DOT__act_compute_state;
        CData/*0:0*/ tb_activation_buffer__DOT__act_preload_state;
        CData/*0:0*/ tb_activation_buffer__DOT__act_drain_state;
        CData/*0:0*/ tb_activation_buffer__DOT__act_tiles_complete;
        CData/*0:0*/ tb_activation_buffer__DOT__act_DMA_in_valid;
        CData/*0:0*/ tb_activation_buffer__DOT__act_output_buf_valid;
        VlWide<4>/*127:0*/ tb_activation_buffer__DOT__act_DMA_in;
        VlWide<4>/*127:0*/ tb_activation_buffer__DOT__act_output_buff;
        VlWide<64>/*2047:0*/ tb_activation_buffer__DOT__ib_dut__DOT__buff;
        CData/*7:0*/ tb_activation_buffer__DOT__ib_dut__DOT__curr_count;
        CData/*4:0*/ tb_activation_buffer__DOT__bf_dut__DOT__current_state;
        CData/*4:0*/ tb_activation_buffer__DOT__bf_dut__DOT__next_state;
        CData/*0:0*/ tb_activation_buffer__DOT__act_dut__DOT__we_a;
        CData/*0:0*/ tb_activation_buffer__DOT__act_dut__DOT__re_a;
        CData/*0:0*/ tb_activation_buffer__DOT__act_dut__DOT__clr_a;
        CData/*0:0*/ tb_activation_buffer__DOT__act_dut__DOT__re_valid_a;
        CData/*0:0*/ tb_activation_buffer__DOT__act_dut__DOT__we_valid_a;
        CData/*0:0*/ tb_activation_buffer__DOT__act_dut__DOT__buff_a_empty;
        CData/*0:0*/ tb_activation_buffer__DOT__act_dut__DOT__buff_a_full;
        VlWide<4>/*127:0*/ tb_activation_buffer__DOT__act_dut__DOT__write_in_a;
        VlWide<4>/*127:0*/ tb_activation_buffer__DOT__act_dut__DOT__re_out_a;
        CData/*0:0*/ tb_activation_buffer__DOT__act_dut__DOT__we_b;
        CData/*0:0*/ tb_activation_buffer__DOT__act_dut__DOT__re_b;
        CData/*0:0*/ tb_activation_buffer__DOT__act_dut__DOT__clr_b;
        CData/*0:0*/ tb_activation_buffer__DOT__act_dut__DOT__re_valid_b;
        CData/*0:0*/ tb_activation_buffer__DOT__act_dut__DOT__we_valid_b;
        CData/*0:0*/ tb_activation_buffer__DOT__act_dut__DOT__buff_b_empty;
        CData/*0:0*/ tb_activation_buffer__DOT__act_dut__DOT__buff_b_full;
        VlWide<4>/*127:0*/ tb_activation_buffer__DOT__act_dut__DOT__write_in_b;
        VlWide<4>/*127:0*/ tb_activation_buffer__DOT__act_dut__DOT__re_out_b;
        CData/*4:0*/ tb_activation_buffer__DOT__act_dut__DOT__A__DOT__current_state;
        CData/*4:0*/ tb_activation_buffer__DOT__act_dut__DOT__A__DOT__next_state;
        CData/*4:0*/ tb_activation_buffer__DOT__act_dut__DOT__B__DOT__current_state;
        CData/*4:0*/ tb_activation_buffer__DOT__act_dut__DOT__B__DOT__next_state;
        VlWide<64>/*2047:0*/ tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__buff;
        CData/*7:0*/ tb_activation_buffer__DOT__act_dut__DOT__BUFF_A__DOT__curr_count;
        VlWide<64>/*2047:0*/ tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__buff;
    };
    struct {
        CData/*7:0*/ tb_activation_buffer__DOT__act_dut__DOT__BUFF_B__DOT__curr_count;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_activation_buffer__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_activation_buffer__DOT__ib_rst_n__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_activation_buffer__DOT__bf_rst_n__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_activation_buffer__DOT__act_rst_n__0;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ tb_activation_buffer__DOT__errors;
        IData/*31:0*/ tb_activation_buffer__DOT__checks;
        IData/*31:0*/ __VactIterCount;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h0c0022ab__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<5> __VactTriggered;
    VlTriggerVec<5> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_activation_buffer__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_activation_buffer___024root(Vtb_activation_buffer__Syms* symsp, const char* v__name);
    ~Vtb_activation_buffer___024root();
    VL_UNCOPYABLE(Vtb_activation_buffer___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
