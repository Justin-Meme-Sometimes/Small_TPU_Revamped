// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_ARRAY__SYMS_H_
#define VERILATED_VTB_ARRAY__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_array.h"

// INCLUDE MODULE CLASSES
#include "Vtb_array___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtb_array__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_array* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_array___024root            TOP;

    // CONSTRUCTORS
    Vtb_array__Syms(VerilatedContext* contextp, const char* namep, Vtb_array* modelp);
    ~Vtb_array__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
