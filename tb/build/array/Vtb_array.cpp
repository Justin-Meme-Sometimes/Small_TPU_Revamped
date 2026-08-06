// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_array__pch.h"

//============================================================
// Constructors

Vtb_array::Vtb_array(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_array__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_array::Vtb_array(const char* _vcname__)
    : Vtb_array(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_array::~Vtb_array() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_array___024root___eval_debug_assertions(Vtb_array___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_array___024root___eval_static(Vtb_array___024root* vlSelf);
void Vtb_array___024root___eval_initial(Vtb_array___024root* vlSelf);
void Vtb_array___024root___eval_settle(Vtb_array___024root* vlSelf);
void Vtb_array___024root___eval(Vtb_array___024root* vlSelf);

void Vtb_array::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_array::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_array___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_array___024root___eval_static(&(vlSymsp->TOP));
        Vtb_array___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_array___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_array___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_array::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtb_array::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_array::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_array___024root___eval_final(Vtb_array___024root* vlSelf);

VL_ATTR_COLD void Vtb_array::final() {
    Vtb_array___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_array::hierName() const { return vlSymsp->name(); }
const char* Vtb_array::modelName() const { return "Vtb_array"; }
unsigned Vtb_array::threads() const { return 1; }
void Vtb_array::prepareClone() const { contextp()->prepareClone(); }
void Vtb_array::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void Vtb_array::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtb_array::trace()' called on model that was Verilated without --trace option");
}
