// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtpu_top__pch.h"

//============================================================
// Constructors

Vtpu_top::Vtpu_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtpu_top__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , u_in{vlSymsp->TOP.u_in}
    , uio_in{vlSymsp->TOP.uio_in}
    , uio_out{vlSymsp->TOP.uio_out}
    , u_out{vlSymsp->TOP.u_out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtpu_top::Vtpu_top(const char* _vcname__)
    : Vtpu_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtpu_top::~Vtpu_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtpu_top___024root___eval_debug_assertions(Vtpu_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vtpu_top___024root___eval_static(Vtpu_top___024root* vlSelf);
void Vtpu_top___024root___eval_initial(Vtpu_top___024root* vlSelf);
void Vtpu_top___024root___eval_settle(Vtpu_top___024root* vlSelf);
void Vtpu_top___024root___eval(Vtpu_top___024root* vlSelf);

void Vtpu_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtpu_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtpu_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtpu_top___024root___eval_static(&(vlSymsp->TOP));
        Vtpu_top___024root___eval_initial(&(vlSymsp->TOP));
        Vtpu_top___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtpu_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtpu_top::eventsPending() { return false; }

uint64_t Vtpu_top::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vtpu_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtpu_top___024root___eval_final(Vtpu_top___024root* vlSelf);

VL_ATTR_COLD void Vtpu_top::final() {
    Vtpu_top___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtpu_top::hierName() const { return vlSymsp->name(); }
const char* Vtpu_top::modelName() const { return "Vtpu_top"; }
unsigned Vtpu_top::threads() const { return 1; }
void Vtpu_top::prepareClone() const { contextp()->prepareClone(); }
void Vtpu_top::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void Vtpu_top::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtpu_top::trace()' called on model that was Verilated without --trace option");
}
