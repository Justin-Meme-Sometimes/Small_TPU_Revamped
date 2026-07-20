// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_weight_fifo.h for the primary calling header

#ifndef VERILATED_VTB_WEIGHT_FIFO___024ROOT_H_
#define VERILATED_VTB_WEIGHT_FIFO___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_weight_fifo__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_weight_fifo___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_weight_fifo__DOT__clk;
    CData/*0:0*/ tb_weight_fifo__DOT__reset_n;
    CData/*0:0*/ tb_weight_fifo__DOT__clk2;
    CData/*0:0*/ tb_weight_fifo__DOT__rst_n2;
    CData/*0:0*/ tb_weight_fifo__DOT__we;
    CData/*0:0*/ tb_weight_fifo__DOT__re;
    CData/*0:0*/ tb_weight_fifo__DOT__full;
    CData/*0:0*/ tb_weight_fifo__DOT__empty;
    CData/*0:0*/ tb_weight_fifo__DOT__fifo_test_done;
    CData/*0:0*/ tb_weight_fifo__DOT__wl_test_done;
    IData/*31:0*/ tb_weight_fifo__DOT__read_data;
    CData/*0:0*/ tb_weight_fifo__DOT__start_load_fifo_state;
    CData/*0:0*/ tb_weight_fifo__DOT__load_fifo_state;
    CData/*0:0*/ tb_weight_fifo__DOT__preload_state;
    CData/*0:0*/ tb_weight_fifo__DOT__tiles_complete;
    CData/*0:0*/ tb_weight_fifo__DOT__read_data_valid;
    CData/*0:0*/ tb_weight_fifo__DOT__fifo_full;
    CData/*0:0*/ tb_weight_fifo__DOT__fifo_empty;
    CData/*0:0*/ tb_weight_fifo__DOT__data_valid;
    IData/*31:0*/ tb_weight_fifo__DOT__wl_data_out;
    CData/*1:0*/ tb_weight_fifo__DOT__dut_fifo__DOT__putPtr;
    CData/*1:0*/ tb_weight_fifo__DOT__dut_fifo__DOT__getPtr;
    CData/*3:0*/ tb_weight_fifo__DOT__dut_fifo__DOT__count;
    CData/*0:0*/ tb_weight_fifo__DOT__dut_wl__DOT__fifo_re;
    CData/*0:0*/ tb_weight_fifo__DOT__dut_wl__DOT__fifo_we;
    CData/*4:0*/ tb_weight_fifo__DOT__dut_wl__DOT__current_state;
    CData/*4:0*/ tb_weight_fifo__DOT__dut_wl__DOT__next_state;
    CData/*1:0*/ tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__putPtr;
    CData/*1:0*/ tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__getPtr;
    CData/*3:0*/ tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__count;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_weight_fifo__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_weight_fifo__DOT__reset_n__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_weight_fifo__DOT__clk2__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_weight_fifo__DOT__rst_n2__0;
    CData/*0:0*/ __Vtrigprevexpr_h9cca9006__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_weight_fifo__DOT__errors;
    IData/*31:0*/ tb_weight_fifo__DOT__checks;
    VlWide<3>/*95:0*/ tb_weight_fifo__DOT__data_in;
    VlWide<3>/*95:0*/ tb_weight_fifo__DOT__data_out;
    IData/*31:0*/ tb_weight_fifo__DOT__wl_errors;
    IData/*31:0*/ tb_weight_fifo__DOT__wl_checks;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<VlWide<3>/*95:0*/, 4> tb_weight_fifo__DOT__wr_word;
    VlUnpacked<VlWide<3>/*95:0*/, 4> tb_weight_fifo__DOT__dut_fifo__DOT__Q;
    VlUnpacked<IData/*31:0*/, 32> tb_weight_fifo__DOT__dut_wl__DOT__weight_fifo__DOT__Q;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h5107d62b__0;
    VlTriggerScheduler __VtrigSched_h5107d6ee__0;
    VlTriggerScheduler __VtrigSched_hb5160297__0;
    VlTriggerScheduler __VtrigSched_h087dc694__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<7> __VactTriggered;
    VlTriggerVec<7> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_weight_fifo__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_weight_fifo___024root(Vtb_weight_fifo__Syms* symsp, const char* v__name);
    ~Vtb_weight_fifo___024root();
    VL_UNCOPYABLE(Vtb_weight_fifo___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
