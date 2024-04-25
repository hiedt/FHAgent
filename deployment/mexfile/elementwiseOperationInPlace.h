//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// elementwiseOperationInPlace.h
//
// Code generation for function 'elementwiseOperationInPlace'
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
void lambdaForColumnMajorWithOMP(real32_T &X);

}
} // namespace internal
} // namespace coder

// End of code generation (elementwiseOperationInPlace.h)
