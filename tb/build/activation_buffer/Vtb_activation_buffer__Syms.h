// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_ACTIVATION_BUFFER__SYMS_H_
#define VERILATED_VTB_ACTIVATION_BUFFER__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_activation_buffer.h"

// INCLUDE MODULE CLASSES
#include "Vtb_activation_buffer___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtb_activation_buffer__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_activation_buffer* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_activation_buffer___024root TOP;

    // CONSTRUCTORS
    Vtb_activation_buffer__Syms(VerilatedContext* contextp, const char* namep, Vtb_activation_buffer* modelp);
    ~Vtb_activation_buffer__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
