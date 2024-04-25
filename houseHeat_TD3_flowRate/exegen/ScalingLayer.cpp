//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: ScalingLayer.cpp
//
// MATLAB Coder version            : 23.2
// C/C++ source code generated on  : 24-Apr-2024 23:14:20
//

// Include Files
#include "ScalingLayer.h"

// Function Definitions
//
// Arguments    : float X1
// Return Type  : float
//
namespace coder {
namespace internal {
namespace layer {
float ScalingLayer_predictForColumnMajorWithOMP(float X1)
{
  return 0.5F * X1 + 0.5F;
}

} // namespace layer
} // namespace internal
} // namespace coder

//
// File trailer for ScalingLayer.cpp
//
// [EOF]
//
