// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_requant.h for the primary calling header

#ifndef VERILATED_VTB_REQUANT___024ROOT_H_
#define VERILATED_VTB_REQUANT___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_requant__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_requant___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_requant__DOT__clk;
    CData/*0:0*/ tb_requant__DOT__rst_n;
    CData/*0:0*/ tb_requant__DOT__valid;
    CData/*0:0*/ tb_requant__DOT__drain_state;
    CData/*0:0*/ tb_requant__DOT__accum_state;
    CData/*0:0*/ tb_requant__DOT__out_valid;
    IData/*31:0*/ tb_requant__DOT____Vcellout__dut__out;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_requant__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_requant__DOT__rst_n__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_requant__DOT__errors;
    IData/*31:0*/ tb_requant__DOT__checks;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h71ed53e8__0;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_requant__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_requant___024root(Vtb_requant__Syms* symsp, const char* v__name);
    ~Vtb_requant___024root();
    VL_UNCOPYABLE(Vtb_requant___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
