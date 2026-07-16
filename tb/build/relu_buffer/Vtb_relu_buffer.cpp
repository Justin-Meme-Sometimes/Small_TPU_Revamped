// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_relu_buffer__pch.h"

//============================================================
// Constructors

Vtb_relu_buffer::Vtb_relu_buffer(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_relu_buffer__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_relu_buffer::Vtb_relu_buffer(const char* _vcname__)
    : Vtb_relu_buffer(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_relu_buffer::~Vtb_relu_buffer() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_relu_buffer___024root___eval_debug_assertions(Vtb_relu_buffer___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_relu_buffer___024root___eval_static(Vtb_relu_buffer___024root* vlSelf);
void Vtb_relu_buffer___024root___eval_initial(Vtb_relu_buffer___024root* vlSelf);
void Vtb_relu_buffer___024root___eval_settle(Vtb_relu_buffer___024root* vlSelf);
void Vtb_relu_buffer___024root___eval(Vtb_relu_buffer___024root* vlSelf);

void Vtb_relu_buffer::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_relu_buffer::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_relu_buffer___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_relu_buffer___024root___eval_static(&(vlSymsp->TOP));
        Vtb_relu_buffer___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_relu_buffer___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_relu_buffer___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_relu_buffer::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtb_relu_buffer::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_relu_buffer::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_relu_buffer___024root___eval_final(Vtb_relu_buffer___024root* vlSelf);

VL_ATTR_COLD void Vtb_relu_buffer::final() {
    Vtb_relu_buffer___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_relu_buffer::hierName() const { return vlSymsp->name(); }
const char* Vtb_relu_buffer::modelName() const { return "Vtb_relu_buffer"; }
unsigned Vtb_relu_buffer::threads() const { return 1; }
void Vtb_relu_buffer::prepareClone() const { contextp()->prepareClone(); }
void Vtb_relu_buffer::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void Vtb_relu_buffer::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtb_relu_buffer::trace()' called on model that was Verilated without --trace option");
}
