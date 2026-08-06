// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_dma.h for the primary calling header

#include "Vtb_dma__pch.h"
#include "Vtb_dma__Syms.h"
#include "Vtb_dma___024root.h"

void Vtb_dma___024root___ctor_var_reset(Vtb_dma___024root* vlSelf);

Vtb_dma___024root::Vtb_dma___024root(Vtb_dma__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_dma___024root___ctor_var_reset(this);
}

void Vtb_dma___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtb_dma___024root::~Vtb_dma___024root() {
}
