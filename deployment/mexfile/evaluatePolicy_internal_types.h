//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// evaluatePolicy_internal_types.h
//
// Code generation for function 'evaluatePolicy'
//

#pragma once

// Include files
#include "evaluatePolicy_types.h"
#include "rtwtypes.h"
#include "string1.h"
#include "emlrt.h"

// Type Definitions
namespace coder {
namespace internal {
namespace ctarget {
struct dlnetwork {
  boolean_T matlabCodegenIsDeleted;
  rtString NetworkState;
  boolean_T IsNetworkInitialized;
};

} // namespace ctarget
} // namespace internal
} // namespace coder
struct rtBoundsCheckInfo {
  int32_T iFirst;
  int32_T iLast;
  int32_T lineNo;
  int32_T colNo;
  const char_T *aName;
  const char_T *fName;
  const char_T *pName;
  int32_T checkKind;
};

struct rtDesignRangeCheckInfo {
  int32_T lineNo;
  int32_T colNo;
  const char_T *fName;
  const char_T *pName;
};

struct rtDoubleCheckInfo {
  int32_T lineNo;
  int32_T colNo;
  const char_T *fName;
  const char_T *pName;
  int32_T checkKind;
};

struct rtEqualityCheckInfo {
  int32_T nDims;
  int32_T lineNo;
  int32_T colNo;
  const char_T *fName;
  const char_T *pName;
};

struct rtRunTimeErrorInfo {
  int32_T lineNo;
  int32_T colNo;
  const char_T *fName;
  const char_T *pName;
};

// End of code generation (evaluatePolicy_internal_types.h)
