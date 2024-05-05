//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: _coder_evaluatePolicy_api.cpp
//
// MATLAB Coder version            : 23.2
// C/C++ source code generated on  : 29-Apr-2024 15:51:19
//

// Include Files
#include "_coder_evaluatePolicy_api.h"
#include "_coder_evaluatePolicy_mex.h"

// Variable Definitions
emlrtCTX emlrtRootTLSGlobal{nullptr};

emlrtContext emlrtContextGlobal{
    true,                                                 // bFirstTime
    false,                                                // bInitialized
    131643U,                                              // fVersionInfo
    nullptr,                                              // fErrorFunction
    "evaluatePolicy",                                     // fFunctionName
    nullptr,                                              // fRTCallStack
    false,                                                // bDebugMode
    {2045744189U, 2170104910U, 2743257031U, 4284093946U}, // fSigWrd
    nullptr                                               // fSigMem
};

// Function Declarations
static real32_T (*b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                                     const emlrtMsgIdentifier *msgId))[4];

static real32_T (*emlrt_marshallIn(const emlrtStack &sp,
                                   const mxArray *b_nullptr,
                                   const char_T *identifier))[4];

static real32_T (*emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[4];

static const mxArray *emlrt_marshallOut(const real32_T u);

// Function Definitions
//
// Arguments    : const emlrtStack &sp
//                const mxArray *src
//                const emlrtMsgIdentifier *msgId
// Return Type  : real32_T (*)[4]
//
static real32_T (*b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                                     const emlrtMsgIdentifier *msgId))[4]
{
  static const int32_T dims{4};
  int32_T i;
  real32_T(*ret)[4];
  boolean_T b{false};
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)&sp, msgId, src, "single", false, 1U,
                            (const void *)&dims, &b, &i);
  ret = (real32_T(*)[4])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

//
// Arguments    : const emlrtStack &sp
//                const mxArray *b_nullptr
//                const char_T *identifier
// Return Type  : real32_T (*)[4]
//
static real32_T (*emlrt_marshallIn(const emlrtStack &sp,
                                   const mxArray *b_nullptr,
                                   const char_T *identifier))[4]
{
  emlrtMsgIdentifier thisId;
  real32_T(*y)[4];
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  y = emlrt_marshallIn(sp, emlrtAlias(b_nullptr), &thisId);
  emlrtDestroyArray(&b_nullptr);
  return y;
}

//
// Arguments    : const emlrtStack &sp
//                const mxArray *u
//                const emlrtMsgIdentifier *parentId
// Return Type  : real32_T (*)[4]
//
static real32_T (*emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[4]
{
  real32_T(*y)[4];
  y = b_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

//
// Arguments    : const real32_T u
// Return Type  : const mxArray *
//
static const mxArray *emlrt_marshallOut(const real32_T u)
{
  const mxArray *m;
  const mxArray *y;
  y = nullptr;
  m = emlrtCreateNumericMatrix(1, 1, mxSINGLE_CLASS, mxREAL);
  *static_cast<real32_T *>(emlrtMxGetData(m)) = u;
  emlrtAssign(&y, m);
  return y;
}

//
// Arguments    : const mxArray *prhs
//                const mxArray **plhs
// Return Type  : void
//
void evaluatePolicy_api(const mxArray *prhs, const mxArray **plhs)
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  real32_T(*observation1)[4];
  real32_T action1;
  st.tls = emlrtRootTLSGlobal;
  // Marshall function inputs
  observation1 = emlrt_marshallIn(st, emlrtAlias(prhs), "observation1");
  // Invoke the target function
  action1 = evaluatePolicy(*observation1);
  // Marshall function outputs
  *plhs = emlrt_marshallOut(action1);
}

//
// Arguments    : void
// Return Type  : void
//
void evaluatePolicy_atexit()
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  evaluatePolicy_xil_terminate();
  evaluatePolicy_xil_shutdown();
  emlrtExitTimeCleanup(&emlrtContextGlobal);
}

//
// Arguments    : void
// Return Type  : void
//
void evaluatePolicy_initialize()
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, nullptr);
  emlrtEnterRtStackR2012b(&st);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

//
// Arguments    : void
// Return Type  : void
//
void evaluatePolicy_terminate()
{
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

//
// File trailer for _coder_evaluatePolicy_api.cpp
//
// [EOF]
//
