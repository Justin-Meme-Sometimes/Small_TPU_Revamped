// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_requant.h for the primary calling header

#include "Vtb_requant__pch.h"
#include "Vtb_requant__Syms.h"
#include "Vtb_requant___024root.h"

void Vtb_requant___024root___ctor_var_reset(Vtb_requant___024root* vlSelf);

Vtb_requant___024root::Vtb_requant___024root(Vtb_requant__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_requant___024root___ctor_var_reset(this);
}

void Vtb_requant___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtb_requant___024root::~Vtb_requant___024root() {
}
