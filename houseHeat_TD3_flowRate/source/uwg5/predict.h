//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: predict.h
//
// MATLAB Coder version            : 23.2
// C/C++ source code generated on  : 29-Apr-2024 15:51:19
//

#ifndef PREDICT_H
#define PREDICT_H

// Include Files
#include "rtwtypes.h"
#include <cstddef>
#include <cstdlib>

// Type Declarations
namespace coder {
namespace internal {
namespace ctarget {
struct dlnetwork;

}
} // namespace internal
} // namespace coder

// Function Declarations
namespace coder {
namespace internal {
namespace ctarget {
float dlnetwork_predict(dlnetwork *obj, const float varargin_1_Data[4]);

}
} // namespace internal
} // namespace coder

#endif
//
// File trailer for predict.h
//
// [EOF]
//
