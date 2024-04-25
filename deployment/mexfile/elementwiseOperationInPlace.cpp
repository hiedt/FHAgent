//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// elementwiseOperationInPlace.cpp
//
// Code generation for function 'elementwiseOperationInPlace'
//

// Include files
#include "elementwiseOperationInPlace.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

// Function Definitions
namespace coder {
namespace internal {
namespace layer {
void lambdaForColumnMajorWithOMP(real32_T &X)
{
  X = muSingleScalarTanh(X);
}

} // namespace layer
} // namespace internal
} // namespace coder

// End of code generation (elementwiseOperationInPlace.cpp)
