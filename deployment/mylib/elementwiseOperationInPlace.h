//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: elementwiseOperationInPlace.h
//
// MATLAB Coder version            : 23.2
// C/C++ source code generated on  : 17-Apr-2024 16:12:13
//

#ifndef ELEMENTWISEOPERATIONINPLACE_H
#define ELEMENTWISEOPERATIONINPLACE_H

// Include Files
#include "rtwtypes.h"
#include <cstddef>
#include <cstdlib>

// Function Declarations
namespace coder {
namespace internal {
namespace layer {
void lambdaForColumnMajorWithOMP(float X[256]);

void lambdaForColumnMajorWithOMP(float &X);

} // namespace layer
} // namespace internal
} // namespace coder

#endif
//
// File trailer for elementwiseOperationInPlace.h
//
// [EOF]
//
