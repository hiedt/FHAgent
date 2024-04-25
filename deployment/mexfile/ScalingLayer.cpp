//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// ScalingLayer.cpp
//
// Code generation for function 'ScalingLayer'
//

// Include files
#include "ScalingLayer.h"
#include "rt_nonfinite.h"

// Function Definitions
namespace coder {
namespace internal {
namespace layer {
real32_T c_ScalingLayer_predictForColumn(real32_T X1)
{
  return 0.5F * X1 + 0.5F;
}

} // namespace layer
} // namespace internal
} // namespace coder

// End of code generation (ScalingLayer.cpp)
