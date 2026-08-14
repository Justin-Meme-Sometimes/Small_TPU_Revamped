// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtpu_top.h for the primary calling header

#include "Vtpu_top__pch.h"
#include "Vtpu_top__Syms.h"
#include "Vtpu_top___024root.h"

void Vtpu_top___024root___ctor_var_reset(Vtpu_top___024root* vlSelf);

Vtpu_top___024root::Vtpu_top___024root(Vtpu_top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtpu_top___024root___ctor_var_reset(this);
}

void Vtpu_top___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtpu_top___024root::~Vtpu_top___024root() {
}
