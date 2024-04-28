//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: rlDeterministicActorPolicy.h
//
// MATLAB Coder version            : 23.2
// C/C++ source code generated on  : 24-Apr-2024 23:14:20
//

#ifndef RLDETERMINISTICACTORPOLICY_H
#define RLDETERMINISTICACTORPOLICY_H

// Include Files
#include "SaturationActionBounder.h"
#include "rtwtypes.h"
#include <cstddef>
#include <cstdlib>

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
  int isInitialized;
  boolean_T isSetupComplete;
  model::DLNetworkModel *Model_;
  internal::SaturationActionBounder ActionBounder_;
};

} // namespace policy
} // namespace codegen
} // namespace rl
} // namespace coder

#endif
//
// File trailer for rlDeterministicActorPolicy.h
//
// [EOF]
//
