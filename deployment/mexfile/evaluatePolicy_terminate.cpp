//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// evaluatePolicy_terminate.cpp
//
// Code generation for function 'evaluatePolicy_terminate'
//

// Include files
#include "evaluatePolicy_terminate.h"
#include "_coder_evaluatePolicy_mex.h"
#include "evaluatePolicy.h"
#include "evaluatePolicy_data.h"
#include "rt_nonfinite.h"

// Function Definitions
void evaluatePolicy_atexit()
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  evaluatePolicy_delete();
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  emlrtExitTimeCleanup(&emlrtContextGlobal);
}

void evaluatePolicy_terminate()
{
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

// End of code generation (evaluatePolicy_terminate.cpp)
