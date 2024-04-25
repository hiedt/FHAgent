//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// evaluatePolicy_data.cpp
//
// Code generation for function 'evaluatePolicy_data'
//

// Include files
#include "evaluatePolicy_data.h"
#include "rt_nonfinite.h"

// Variable Definitions
emlrtCTX emlrtRootTLSGlobal{nullptr};

const volatile char_T *emlrtBreakCheckR2012bFlagVar{nullptr};

emlrtContext emlrtContextGlobal{
    true,                                               // bFirstTime
    false,                                              // bInitialized
    131643U,                                            // fVersionInfo
    nullptr,                                            // fErrorFunction
    "evaluatePolicy",                                   // fFunctionName
    nullptr,                                            // fRTCallStack
    false,                                              // bDebugMode
    {2090057510U, 2520714715U, 3797815809U, 18403195U}, // fSigWrd
    nullptr                                             // fSigMem
};

emlrtRSInfo k_emlrtRSI{
    1,                              // lineNo
    "Network/setupAndResetNetwork", // fcnName
    "C:"
    "\\ProgramData\\MATLAB\\SupportPackages\\R2023b\\toolbox\\shared\\dlcoder_"
    "base\\supportpackages\\shared_dl_targets\\+coder\\+in"
    "ternal\\+ctarget\\@Network\\Network.p" // pathName
};

omp_lock_t emlrtLockGlobal;

omp_nest_lock_t evaluatePolicy_nestLockGlobal;

// End of code generation (evaluatePolicy_data.cpp)
