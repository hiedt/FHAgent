//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// addBiasApplyActivation.h
//
// Code generation for function 'addBiasApplyActivation'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Function Declarations
namespace coder {
namespace internal {
namespace layer {
void addBiasApplyActivation(const emlrtStack &sp, real32_T X[256],
                            const real32_T bias[256]);

void addBiasApplyActivation(real32_T &X);

} // namespace layer
} // namespace internal
} // namespace coder

// End of code generation (addBiasApplyActivation.h)
