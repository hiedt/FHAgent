//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// DLNetworkModel.h
//
// Code generation for function 'DLNetworkModel'
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

// Type Declarations
namespace coder {
namespace internal {
namespace ctarget {
struct dlnetwork;

}
} // namespace internal
} // namespace coder

// Type Definitions
namespace coder {
namespace rl {
namespace codegen {
namespace model {
class DLNetworkModel {
public:
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  internal::ctarget::dlnetwork *InternalNetwork_;
};

} // namespace model
} // namespace codegen
} // namespace rl
} // namespace coder

// End of code generation (DLNetworkModel.h)
