// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_WEIGHT_FIFO__SYMS_H_
#define VERILATED_VTB_WEIGHT_FIFO__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_weight_fifo.h"

// INCLUDE MODULE CLASSES
#include "Vtb_weight_fifo___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtb_weight_fifo__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_weight_fifo* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_weight_fifo___024root      TOP;

    // CONSTRUCTORS
    Vtb_weight_fifo__Syms(VerilatedContext* contextp, const char* namep, Vtb_weight_fifo* modelp);
    ~Vtb_weight_fifo__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
