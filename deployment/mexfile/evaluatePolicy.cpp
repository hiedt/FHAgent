//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// evaluatePolicy.cpp
//
// Code generation for function 'evaluatePolicy'
//

// Include files
#include "evaluatePolicy.h"
#include "DLNetworkModel.h"
#include "SaturationActionBounder.h"
#include "evaluatePolicy_data.h"
#include "evaluatePolicy_internal_types.h"
#include "predict.h"
#include "rlDeterministicActorPolicy.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include "omp.h"

// Type Definitions
namespace coder {
struct dlarray {
  real32_T Data[4];
};

} // namespace coder

// Variable Definitions
static coder::rl::codegen::model::DLNetworkModel gobj_2;

static coder::internal::ctarget::dlnetwork gobj_1;

static coder::rl::codegen::policy::rlDeterministicActorPolicy policy;

static boolean_T policy_not_empty;

static emlrtRSInfo emlrtRSI{
    12,               // lineNo
    "evaluatePolicy", // fcnName
    "C:\\Users\\hdt.OJ\\OneDrive - OJ Electronics A "
    "S\\Thesis\\source\\houseHeat_TD3_flowRate\\evaluatePolicy.m" // pathName
};

static emlrtRSInfo b_emlrtRSI{
    9,                // lineNo
    "evaluatePolicy", // fcnName
    "C:\\Users\\hdt.OJ\\OneDrive - OJ Electronics A "
    "S\\Thesis\\source\\houseHeat_TD3_flowRate\\evaluatePolicy.m" // pathName
};

static emlrtRSInfo c_emlrtRSI{
    11,             // lineNo
    "loadRLPolicy", // fcnName
    "D:\\Applications\\MATLAB\\toolbox\\rl\\rl\\+coder\\loadRLPolicy.m" // pathName
};

static emlrtRSInfo d_emlrtRSI{
    18,                   // lineNo
    "loadPolicyFromFile", // fcnName
    "D:\\Applications\\MATLAB\\toolbox\\rl\\rl\\+rl\\+codegen\\+"
    "policy\\loadPolicyFromFile.m" // pathName
};

static emlrtRSInfo e_emlrtRSI{
    21,                   // lineNo
    "loadPolicyFromFile", // fcnName
    "D:\\Applications\\MATLAB\\toolbox\\rl\\rl\\+rl\\+codegen\\+"
    "policy\\loadPolicyFromFile.m" // pathName
};

static emlrtRSInfo f_emlrtRSI{
    17,                  // lineNo
    "loadModelFromFile", // fcnName
    "D:\\Applications\\MATLAB\\toolbox\\rl\\rl\\+rl\\+codegen\\+"
    "model\\loadModelFromFile.m" // pathName
};

static emlrtRSInfo g_emlrtRSI{
    36,                  // lineNo
    "loadModelFromFile", // fcnName
    "D:\\Applications\\MATLAB\\toolbox\\rl\\rl\\+rl\\+codegen\\+"
    "model\\loadModelFromFile.m" // pathName
};

static emlrtRSInfo h_emlrtRSI{
    70,                        // lineNo
    "loadDeepLearningNetwork", // fcnName
    "D:\\Applications\\MATLAB\\toolbox\\shared\\coder\\coder\\lib\\+"
    "coder\\loadDeepLearningNetwork.m" // pathName
};

static emlrtRSInfo i_emlrtRSI{
    1,                         // lineNo
    "loadDeepLearningNetwork", // fcnName
    "D:\\Applications\\MATLAB\\toolbox\\shared\\dlcoder_base\\dlcoder_base\\+"
    "coder\\+internal\\loadDeepLearningNetwork.p" // pathName
};

static emlrtRSInfo j_emlrtRSI{
    1,                                             // lineNo
    "dlnetwork/checkNetworkIsSetUpForPredictCall", // fcnName
    "C:"
    "\\ProgramData\\MATLAB\\SupportPackages\\R2023b\\toolbox\\shared\\dlcoder_"
    "base\\supportpackages\\shared_dl_targets\\+coder\\+in"
    "ternal\\+ctarget\\@dlnetwork\\dlnetwork.p" // pathName
};

static emlrtRSInfo l_emlrtRSI{
    1,                     // lineNo
    "dlnetwork/callSetup", // fcnName
    "C:"
    "\\ProgramData\\MATLAB\\SupportPackages\\R2023b\\toolbox\\shared\\dlcoder_"
    "base\\supportpackages\\shared_dl_targets\\+coder\\+in"
    "ternal\\@dlnetwork\\dlnetwork.p" // pathName
};

static emlrtRSInfo m_emlrtRSI{
    1,               // lineNo
    "System/System", // fcnName
    "D:\\Applications\\MATLAB\\toolbox\\shared\\system\\coder\\+matlab\\+"
    "system\\+coder\\System.p" // pathName
};

static emlrtRSInfo n_emlrtRSI{
    1,                                             // lineNo
    "SystemProp/initializeTunablePropertyChanged", // fcnName
    "D:\\Applications\\MATLAB\\toolbox\\shared\\system\\coder\\+matlab\\+"
    "system\\+coder\\SystemProp.p" // pathName
};

static emlrtRSInfo o_emlrtRSI{
    1,                 // lineNo
    "SystemCore/step", // fcnName
    "D:\\Applications\\MATLAB\\toolbox\\shared\\system\\coder\\+matlab\\+"
    "system\\+coder\\SystemCore.p" // pathName
};

static emlrtRSInfo p_emlrtRSI{
    12,                 // lineNo
    "modelDataToModel", // fcnName
    "D:\\Applications\\MATLAB\\toolbox\\rl\\rl\\+rl\\+codegen\\+"
    "model\\modelDataToModel.m" // pathName
};

static emlrtRSInfo q_emlrtRSI{
    18,                              // lineNo
    "DLNetworkModel/DLNetworkModel", // fcnName
    "D:\\Applications\\MATLAB\\toolbox\\rl\\rl\\+rl\\+codegen\\+"
    "model\\DLNetworkModel.m" // pathName
};

static emlrtRSInfo r_emlrtRSI{
    21,                            // lineNo
    "AbstractModel/AbstractModel", // fcnName
    "D:\\Applications\\MATLAB\\toolbox\\rl\\rl\\+rl\\+codegen\\+"
    "model\\AbstractModel.m" // pathName
};

static emlrtRSInfo s_emlrtRSI{
    21,                   // lineNo
    "policyDataToPolicy", // fcnName
    "D:\\Applications\\MATLAB\\toolbox\\rl\\rl\\+rl\\+codegen\\+"
    "policy\\policyDataToPolicy.m" // pathName
};

static emlrtRSInfo t_emlrtRSI{
    1,                       // lineNo
    "SystemProp/SystemProp", // fcnName
    "D:\\Applications\\MATLAB\\toolbox\\shared\\system\\coder\\+matlab\\+"
    "system\\+coder\\SystemProp.p" // pathName
};

static emlrtRSInfo u_emlrtRSI{
    1,                       // lineNo
    "SystemCore/SystemCore", // fcnName
    "D:\\Applications\\MATLAB\\toolbox\\shared\\system\\coder\\+matlab\\+"
    "system\\+coder\\SystemCore.p" // pathName
};

static emlrtRSInfo v_emlrtRSI{
    15,                                                      // lineNo
    "rlDeterministicActorPolicy/rlDeterministicActorPolicy", // fcnName
    "D:\\Applications\\MATLAB\\toolbox\\rl\\rl\\+rl\\+codegen\\+"
    "policy\\rlDeterministicActorPolicy.m" // pathName
};

static emlrtRSInfo w_emlrtRSI{
    17,                              // lineNo
    "AbstractPolicy/AbstractPolicy", // fcnName
    "D:\\Applications\\MATLAB\\toolbox\\rl\\rl\\+rl\\+codegen\\+"
    "policy\\AbstractPolicy.m" // pathName
};

static emlrtRSInfo x_emlrtRSI{
    24,                         // lineNo
    "AbstractPolicy/getAction", // fcnName
    "D:\\Applications\\MATLAB\\toolbox\\rl\\rl\\+rl\\+codegen\\+"
    "policy\\AbstractPolicy.m" // pathName
};

static emlrtRSInfo y_emlrtRSI{
    32,                        // lineNo
    "AbstractPolicy/stepImpl", // fcnName
    "D:\\Applications\\MATLAB\\toolbox\\rl\\rl\\+rl\\+codegen\\+"
    "policy\\AbstractPolicy.m" // pathName
};

static emlrtRSInfo ab_emlrtRSI{
    44,                        // lineNo
    "AbstractPolicy/stepImpl", // fcnName
    "D:\\Applications\\MATLAB\\toolbox\\rl\\rl\\+rl\\+codegen\\+"
    "policy\\AbstractPolicy.m" // pathName
};

static emlrtRSInfo bb_emlrtRSI{
    23,                                      // lineNo
    "rlDeterministicActorPolicy/getAction_", // fcnName
    "D:\\Applications\\MATLAB\\toolbox\\rl\\rl\\+rl\\+codegen\\+"
    "policy\\rlDeterministicActorPolicy.m" // pathName
};

static emlrtRSInfo cb_emlrtRSI{
    1,                          // lineNo
    "SystemCore/setupAndReset", // fcnName
    "D:\\Applications\\MATLAB\\toolbox\\shared\\system\\coder\\+matlab\\+"
    "system\\+coder\\SystemCore.p" // pathName
};

static emlrtRSInfo db_emlrtRSI{
    46,                       // lineNo
    "AbstractModel/stepImpl", // fcnName
    "D:\\Applications\\MATLAB\\toolbox\\rl\\rl\\+rl\\+codegen\\+"
    "model\\AbstractModel.m" // pathName
};

static emlrtRSInfo eb_emlrtRSI{
    63,                         // lineNo
    "DLNetworkModel/evaluate_", // fcnName
    "D:\\Applications\\MATLAB\\toolbox\\rl\\rl\\+rl\\+codegen\\+"
    "model\\DLNetworkModel.m" // pathName
};

static emlrtRSInfo fb_emlrtRSI{
    35,                        // lineNo
    "DLNetworkModel/predict_", // fcnName
    "D:\\Applications\\MATLAB\\toolbox\\rl\\rl\\+rl\\+codegen\\+"
    "model\\DLNetworkModel.m" // pathName
};

static emlrtRSInfo gb_emlrtRSI{
    1,                  // lineNo
    "dlnetworkPredict", // fcnName
    "D:\\Applications\\MATLAB\\toolbox\\nnet\\deep_blocks\\+deep\\+blocks\\+"
    "internal\\dlnetworkPredict.p" // pathName
};

static emlrtRTEInfo emlrtRTEI{
    1,                 // lineNo
    1,                 // colNo
    "SystemCore/step", // fName
    "D:\\Applications\\MATLAB\\toolbox\\shared\\system\\coder\\+matlab\\+"
    "system\\+coder\\SystemCore.p" // pName
};

static emlrtRTEInfo b_emlrtRTEI{
    1,                  // lineNo
    1,                  // colNo
    "SystemCore/setup", // fName
    "D:\\Applications\\MATLAB\\toolbox\\shared\\system\\coder\\+matlab\\+"
    "system\\+coder\\SystemCore.p" // pName
};

// Function Definitions
emlrtCTX emlrtGetRootTLSGlobal()
{
  return emlrtRootTLSGlobal;
}

void emlrtLockerFunction(EmlrtLockeeFunction aLockee, emlrtConstCTX aTLS,
                         void *aData)
{
  omp_set_lock(&emlrtLockGlobal);
  emlrtCallLockeeFunction(aLockee, aTLS, aData);
  omp_unset_lock(&emlrtLockGlobal);
}

real_T evaluatePolicy(const emlrtStack *sp, const real_T observation1[4])
{
  coder::dlarray inputDlArrays;
  coder::internal::ctarget::dlnetwork *net;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack j_st;
  emlrtStack st;
  real32_T dlArrayOutputs_Data;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  j_st.prev = &i_st;
  j_st.tls = i_st.tls;
  //  Reinforcement Learning Toolbox
  //  Generated on: 23-Apr-2024 22:45:19
  if (!policy_not_empty) {
    st.site = &b_emlrtRSI;
    b_st.site = &c_emlrtRSI;
    c_st.site = &d_emlrtRSI;
    d_st.site = &f_emlrtRSI;
    e_st.site = &h_emlrtRSI;
    f_st.site = &i_emlrtRSI;
    g_st.site = &j_emlrtRSI;
    gobj_1.IsNetworkInitialized = false;
    h_st.site = &k_emlrtRSI;
    g_st.site = &j_emlrtRSI;
    h_st.site = &l_emlrtRSI;
    gobj_1.matlabCodegenIsDeleted = false;
    d_st.site = &g_emlrtRSI;
    e_st.site = &p_emlrtRSI;
    f_st.site = &q_emlrtRSI;
    g_st.site = &r_emlrtRSI;
    h_st.site = &m_emlrtRSI;
    i_st.site = &n_emlrtRSI;
    h_st.site = &m_emlrtRSI;
    i_st.site = &o_emlrtRSI;
    gobj_2.isInitialized = 0;
    i_st.site = &o_emlrtRSI;
    gobj_2.InternalNetwork_ = &gobj_1;
    gobj_2.matlabCodegenIsDeleted = false;
    c_st.site = &e_emlrtRSI;
    d_st.site = &s_emlrtRSI;
    e_st.site = &v_emlrtRSI;
    f_st.site = &w_emlrtRSI;
    g_st.site = &m_emlrtRSI;
    h_st.site = &t_emlrtRSI;
    g_st.site = &m_emlrtRSI;
    h_st.site = &u_emlrtRSI;
    policy.isInitialized = 0;
    h_st.site = &u_emlrtRSI;
    policy.ActionBounder_.UpperLimits_[0] = 1.0;
    policy.ActionBounder_.LowerLimits_[0] = 0.0;
    policy.Model_ = &gobj_2;
    policy.matlabCodegenIsDeleted = false;
    policy_not_empty = true;
  }
  //  evaluate the policy
  st.site = &emlrtRSI;
  b_st.site = &x_emlrtRSI;
  if (policy.isInitialized == 2) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &emlrtRTEI, "MATLAB:system:methodCalledWhenReleasedCodegen",
        "MATLAB:system:methodCalledWhenReleasedCodegen", 3, 4, 4, "step");
  }
  if (policy.isInitialized != 1) {
    c_st.site = &o_emlrtRSI;
    d_st.site = &o_emlrtRSI;
    if (policy.isInitialized != 0) {
      emlrtErrorWithMessageIdR2018a(
          &d_st, &emlrtRTEI,
          "MATLAB:system:methodCalledWhenLockedReleasedCodegen",
          "MATLAB:system:methodCalledWhenLockedReleasedCodegen", 3, 4, 5,
          "setup");
    }
    policy.isInitialized = 1;
    policy.isSetupComplete = true;
  }
  c_st.site = &o_emlrtRSI;
  d_st.site = &y_emlrtRSI;
  e_st.site = &bb_emlrtRSI;
  if (policy.Model_->isInitialized == 2) {
    emlrtErrorWithMessageIdR2018a(
        &e_st, &emlrtRTEI, "MATLAB:system:methodCalledWhenReleasedCodegen",
        "MATLAB:system:methodCalledWhenReleasedCodegen", 3, 4, 4, "step");
  }
  if (policy.Model_->isInitialized != 1) {
    f_st.site = &o_emlrtRSI;
    g_st.site = &cb_emlrtRSI;
    policy.Model_->isSetupComplete = false;
    if (policy.Model_->isInitialized != 0) {
      emlrtErrorWithMessageIdR2018a(
          &g_st, &b_emlrtRTEI,
          "MATLAB:system:methodCalledWhenLockedReleasedCodegen",
          "MATLAB:system:methodCalledWhenLockedReleasedCodegen", 3, 4, 5,
          "setup");
    }
    policy.Model_->isInitialized = 1;
    policy.Model_->isSetupComplete = true;
  }
  f_st.site = &o_emlrtRSI;
  g_st.site = &db_emlrtRSI;
  h_st.site = &eb_emlrtRSI;
  i_st.site = &fb_emlrtRSI;
  net = policy.Model_->InternalNetwork_;
  inputDlArrays.Data[0] = static_cast<real32_T>(observation1[0]);
  inputDlArrays.Data[1] = static_cast<real32_T>(observation1[1]);
  inputDlArrays.Data[2] = static_cast<real32_T>(observation1[2]);
  inputDlArrays.Data[3] = static_cast<real32_T>(observation1[3]);
  j_st.site = &gb_emlrtRSI;
  dlArrayOutputs_Data = coder::internal::ctarget::dlnetwork_predict(
      j_st, net, inputDlArrays.Data);
  d_st.site = &ab_emlrtRSI;
  return muDoubleScalarMax(
      muDoubleScalarMin(static_cast<real_T>(dlArrayOutputs_Data),
                        policy.ActionBounder_.UpperLimits_[0]),
      policy.ActionBounder_.LowerLimits_[0]);
}

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

void evaluatePolicy_init()
{
  policy_not_empty = false;
  gobj_1.matlabCodegenIsDeleted = true;
  gobj_2.matlabCodegenIsDeleted = true;
  policy.matlabCodegenIsDeleted = true;
}

// End of code generation (evaluatePolicy.cpp)
