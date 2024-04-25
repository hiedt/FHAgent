//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: _coder_evaluatePolicy_api.h
//
// MATLAB Coder version            : 23.2
// C/C++ source code generated on  : 25-Apr-2024 10:45:33
//

#ifndef _CODER_EVALUATEPOLICY_API_H
#define _CODER_EVALUATEPOLICY_API_H

// Include Files
#include "emlrt.h"
#include "mex.h"
#include "tmwtypes.h"
#include <algorithm>
#include <cstring>

// Variable Declarations
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

// Function Declarations
real_T evaluatePolicy(real_T observation1[4]);

void evaluatePolicy_api(const mxArray *prhs, const mxArray **plhs);

void evaluatePolicy_atexit();

void evaluatePolicy_initialize();

void evaluatePolicy_terminate();

void evaluatePolicy_xil_shutdown();

void evaluatePolicy_xil_terminate();

#endif
//
// File trailer for _coder_evaluatePolicy_api.h
//
// [EOF]
//
