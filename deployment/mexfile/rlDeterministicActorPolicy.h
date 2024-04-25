//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// rlDeterministicActorPolicy.h
//
// Code generation for function 'rlDeterministicActorPolicy'
//

#pragma once

// Include files
#include "SaturationActionBounder.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Type Declarations
namespace coder {
namespace rl {
namespace codegen {
namespace model {
class DLNetworkModel;

}
} // namespace codegen
} // namespace rl
} // namespace coder

// Type Definitions
namespace coder {
namespace rl {
namespace codegen {
namespace policy {
class rlDeterministicActorPolicy {
public:
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  model::DLNetworkModel *Model_;
  internal::SaturationActionBounder ActionBounder_;
};

} // namespace policy
} // namespace codegen
} // namespace rl
} // namespace coder

// End of code generation (rlDeterministicActorPolicy.h)
