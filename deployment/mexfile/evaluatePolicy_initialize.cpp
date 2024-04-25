//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// evaluatePolicy_initialize.cpp
//
// Code generation for function 'evaluatePolicy_initialize'
//

// Include files
#include "evaluatePolicy_initialize.h"
#include "_coder_evaluatePolicy_mex.h"
#include "evaluatePolicy.h"
#include "evaluatePolicy_data.h"
#include "rt_nonfinite.h"

// Function Declarations
static void evaluatePolicy_once();

// Function Definitions
static void evaluatePolicy_once()
{
  mex_InitInfAndNan();
  evaluatePolicy_init();
}

void evaluatePolicy_initialize()
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2022b(&st);
  emlrtClearAllocCountR2012b(&st, false, 0U, nullptr);
  emlrtEnterRtStackR2012b(&st);
  emlrtLicenseCheckR2022a(&st, "EMLRT:runTime:MexFunctionNeedsLicense",
                          "reinforcement_learn_toolbox", 2);
  emlrtLicenseCheckR2022a(&st, "EMLRT:runTime:MexFunctionNeedsLicense",
                          "neural_network_toolbox", 2);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    evaluatePolicy_once();
  }
}

// End of code generation (evaluatePolicy_initialize.cpp)
