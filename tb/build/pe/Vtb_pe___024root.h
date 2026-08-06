// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_pe.h for the primary calling header

#ifndef VERILATED_VTB_PE___024ROOT_H_
#define VERILATED_VTB_PE___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_pe__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_pe___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_pe__DOT__clk;
    CData/*0:0*/ tb_pe__DOT__rst_n;
    CData/*0:0*/ tb_pe__DOT__preload;
    CData/*0:0*/ tb_pe__DOT__compute_en;
    CData/*0:0*/ tb_pe__DOT__drain;
    CData/*0:0*/ tb_pe__DOT__clr;
    CData/*0:0*/ tb_pe__DOT__tile_done;
    CData/*0:0*/ tb_pe__DOT__accum_in_valid;
    CData/*7:0*/ tb_pe__DOT__a;
    CData/*7:0*/ tb_pe__DOT__b;
    CData/*7:0*/ tb_pe__DOT__right_out;
    CData/*7:0*/ tb_pe__DOT__dut__DOT__a_reg;
    CData/*7:0*/ tb_pe__DOT__dut__DOT__b_reg;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_pe__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_pe__DOT__rst_n__0;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ tb_pe__DOT__dut__DOT__product_reg;
    IData/*31:0*/ tb_pe__DOT__errors;
    IData/*31:0*/ tb_pe__DOT__checks;
    IData/*31:0*/ tb_pe__DOT__accum_in;
    IData/*31:0*/ tb_pe__DOT__down_out;
    IData/*31:0*/ tb_pe__DOT__dut__DOT__accum_reg;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hf2c5e7e1__0;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_pe__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_pe___024root(Vtb_pe__Syms* symsp, const char* v__name);
    ~Vtb_pe___024root();
    VL_UNCOPYABLE(Vtb_pe___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
