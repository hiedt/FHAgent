//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: elementwiseOperationInPlace.cpp
//
// MATLAB Coder version            : 23.2
// C/C++ source code generated on  : 26-Apr-2024 20:17:31
//

// Include Files
#include "elementwiseOperationInPlace.h"
#include "omp.h"
#include <cmath>

// Function Definitions
//
// Arguments    : float X[256]
// Return Type  : void
//
namespace coder {
namespace internal {
namespace layer {
void lambdaForColumnMajorWithOMP(float X[256])
{
#pragma omp parallel for num_threads(omp_get_max_threads())

  for (int iElem = 0; iElem < 256; iElem++) {
    X[iElem] = std::fmax(0.0F, X[iElem]);
  }
}

//
// Arguments    : float &X
// Return Type  : void
//
void lambdaForColumnMajorWithOMP(float &X)
{
  X = std::tanh(X);
}

} // namespace layer
} // namespace internal
} // namespace coder

//
// File trailer for elementwiseOperationInPlace.cpp
//
// [EOF]
//
