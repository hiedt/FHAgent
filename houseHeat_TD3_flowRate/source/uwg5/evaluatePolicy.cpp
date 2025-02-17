//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: evaluatePolicy.cpp
//
// MATLAB Coder version            : 23.2
// C/C++ source code generated on  : 29-Apr-2024 15:51:19
//

// Include Files
#include "evaluatePolicy.h"
#include "DLNetworkModel.h"
#include "SaturationActionBounder.h"
#include "evaluatePolicy_data.h"
#include "evaluatePolicy_initialize.h"
#include "evaluatePolicy_internal_types.h"
#include "predict.h"
#include "rlDeterministicActorPolicy.h"
#include <cmath>

// Type Definitions
namespace coder {
struct dlarray {
  float Data[4];
};

} // namespace coder

// Variable Definitions
static coder::rl::codegen::model::DLNetworkModel gobj_2;

static coder::internal::ctarget::dlnetwork gobj_1;

static coder::rl::codegen::policy::rlDeterministicActorPolicy policy;

static bool policy_not_empty;

// Function Definitions
//
// Reinforcement Learning Toolbox
//  Generated on: 26-Apr-2024 14:59:34
//
// Arguments    : const float observation1[4]
// Return Type  : float
//
float evaluatePolicy(const float observation1[4])
{
  coder::dlarray inputDlArrays;
  coder::internal::ctarget::dlnetwork *net;
  float dlArrayOutputs_Data;
  if (!isInitialized_evaluatePolicy) {
    evaluatePolicy_initialize();
  }
  if (!policy_not_empty) {
    gobj_1.IsNetworkInitialized = false;
    gobj_1.matlabCodegenIsDeleted = false;
    gobj_2.isInitialized = 0;
    gobj_2.InternalNetwork_ = &gobj_1;
    gobj_2.matlabCodegenIsDeleted = false;
    gobj_2.isInitialized = 1;
    gobj_2.isSetupComplete = true;
    policy.isInitialized = 0;
    policy.ActionBounder_.UpperLimits_[0] = 1.0;
    policy.ActionBounder_.LowerLimits_[0] = 0.0;
    policy.Model_ = &gobj_2;
    policy.matlabCodegenIsDeleted = false;
    policy.isInitialized = 1;
    policy.isSetupComplete = true;
    policy_not_empty = true;
  }
  //  evaluate the policy
  net = policy.Model_->InternalNetwork_;
  inputDlArrays.Data[0] = observation1[0];
  inputDlArrays.Data[1] = observation1[1];
  inputDlArrays.Data[2] = observation1[2];
  inputDlArrays.Data[3] = observation1[3];
  dlArrayOutputs_Data =
      coder::internal::ctarget::dlnetwork_predict(net, inputDlArrays.Data);
  //  Hieu's edit - cast action1 from double to float
  //  to fit on STM32L452RE MCU
  return static_cast<float>(
      std::fmax(std::fmin(static_cast<double>(dlArrayOutputs_Data),
                          policy.ActionBounder_.UpperLimits_[0]),
                policy.ActionBounder_.LowerLimits_[0]));
}

//
// Reinforcement Learning Toolbox
//  Generated on: 26-Apr-2024 14:59:34
//
// Arguments    : void
// Return Type  : void
//
void evaluatePolicy_delete()
{
  if (!policy.matlabCodegenIsDeleted) {
    policy.matlabCodegenIsDeleted = true;
    if (policy.isInitialized == 1) {
      policy.isInitialized = 2;
    }
  }
  if (!gobj_2.matlabCodegenIsDeleted) {
    gobj_2.matlabCodegenIsDeleted = true;
    if (gobj_2.isInitialized == 1) {
      gobj_2.isInitialized = 2;
    }
  }
  if (!gobj_1.matlabCodegenIsDeleted) {
    gobj_1.matlabCodegenIsDeleted = true;
  }
}

//
// Reinforcement Learning Toolbox
//  Generated on: 26-Apr-2024 14:59:34
//
// Arguments    : void
// Return Type  : void
//
void evaluatePolicy_init()
{
  policy_not_empty = false;
  gobj_1.matlabCodegenIsDeleted = true;
  gobj_2.matlabCodegenIsDeleted = true;
  policy.matlabCodegenIsDeleted = true;
}

//
// File trailer for evaluatePolicy.cpp
//
// [EOF]
//
