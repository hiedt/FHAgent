//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: DLNetworkModel.h
//
// MATLAB Coder version            : 23.2
// C/C++ source code generated on  : 24-Apr-2024 23:14:20
//

#ifndef DLNETWORKMODEL_H
#define DLNETWORKMODEL_H

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

// Type Definitions
namespace coder {
namespace rl {
namespace codegen {
namespace model {
class DLNetworkModel {
public:
  boolean_T matlabCodegenIsDeleted;
  int isInitialized;
  boolean_T isSetupComplete;
  internal::ctarget::dlnetwork *InternalNetwork_;
};

} // namespace model
} // namespace codegen
} // namespace rl
} // namespace coder

#endif
//
// File trailer for DLNetworkModel.h
//
// [EOF]
//
