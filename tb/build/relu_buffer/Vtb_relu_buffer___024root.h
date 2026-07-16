// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_relu_buffer.h for the primary calling header

#ifndef VERILATED_VTB_RELU_BUFFER___024ROOT_H_
#define VERILATED_VTB_RELU_BUFFER___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_relu_buffer__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_relu_buffer___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_relu_buffer__DOT__clk;
    CData/*0:0*/ tb_relu_buffer__DOT__rst_n;
    CData/*0:0*/ tb_relu_buffer__DOT__drain_state;
    CData/*0:0*/ tb_relu_buffer__DOT__accum_state;
    CData/*0:0*/ tb_relu_buffer__DOT__valid;
    CData/*0:0*/ tb_relu_buffer__DOT__out_valid;
    VlWide<4>/*127:0*/ tb_relu_buffer__DOT__ins;
    VlWide<4>/*127:0*/ tb_relu_buffer__DOT__out;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_relu_buffer__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_relu_buffer__DOT__rst_n__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_relu_buffer__DOT__errors;
    IData/*31:0*/ tb_relu_buffer__DOT__checks;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hacf8ceba__0;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_relu_buffer__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_relu_buffer___024root(Vtb_relu_buffer__Syms* symsp, const char* v__name);
    ~Vtb_relu_buffer___024root();
    VL_UNCOPYABLE(Vtb_relu_buffer___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
