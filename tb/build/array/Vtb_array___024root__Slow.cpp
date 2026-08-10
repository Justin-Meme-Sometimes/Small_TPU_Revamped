// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_array.h for the primary calling header

#include "Vtb_array__pch.h"
#include "Vtb_array__Syms.h"
#include "Vtb_array___024root.h"

void Vtb_array___024root___ctor_var_reset(Vtb_array___024root* vlSelf);

Vtb_array___024root::Vtb_array___024root(Vtb_array__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_array___024root___ctor_var_reset(this);
}

void Vtb_array___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtb_array___024root::~Vtb_array___024root() {
}
