//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: _coder_evaluatePolicy_info.cpp
//
// MATLAB Coder version            : 23.2
// C/C++ source code generated on  : 17-Apr-2024 16:12:13
//

// Include Files
#include "_coder_evaluatePolicy_info.h"
#include "emlrt.h"
#include "tmwtypes.h"

// Function Declarations
static const mxArray *emlrtMexFcnResolvedFunctionsInfo();

// Function Definitions
//
// Arguments    : void
// Return Type  : const mxArray *
//
static const mxArray *emlrtMexFcnResolvedFunctionsInfo()
{
  const mxArray *nameCaptureInfo;
  const char_T *data[7]{
      "789ced563d6fd34018bea022b114bcd0013164e8566115820a6540b475a224254d681cd2"
      "12578d6b5f6a93b3afd897906efd07f0133a32207e47a54acc883fc0"
      "c8ca48fc71897bd2c9491ab90ae45592f75e3df6fb3cbef33d17902a94520080bb2088b3"
      "a5202f86b510e65be06ab0782acc0b4c4de376882c32f8a7306bd826",
      "b04782c2562d38b853c79669ab36914f4f2070a08b5117ea3ed23211944d0b56a3c58e57"
      "59b90834283cc81b6f19506b573b16700c77a810458bc17c3439cfbb"
      "00ae068bb3c1ce077bddffc27731211fedafc7f051bc513bd87aa1d45ce8b88aa113b15c"
      "54ca36941cb30bd38fd2e5623a8ba0461c6c9b9a9bde485715d980ae",
      "e92a2eee381a540cdc71611eaae4509632872d843feeaa042aea31b489a41235235a2a89"
      "3e5793a3fbde88cfc5e6e1f577fcfcfdf3cf54927cbf0de95b927c34"
      "6e8aafc7e937ea7b799fc32730b86c568af0b9547f4bbaeabb37f5fc5a19e76144472586"
      "274e07e0d449f5ffc2b97fd479cc71fa0b0cde28640f96fb7b10a947",
      "0ec664592118a323dc531ce47d56bcaf8675d8dfb0ca8ad51f200561552f79a39c83fd33"
      "41b422e7de35753f88d14d710789a12cd15725fa8afcb3cd8f9bf2e5"
      "f309f968ff97317c146f1476c65db7c10c45d7abc9d1332d7fb8dcfb91a8df9e5dfcba4c"
      "928fc6bfeeb76bededf5fafa51edf50779bff3b82dbd7f261756c1dc",
      "6f69bf2ca7bfc0e013f8adffebfd5992b1bf85bded3bf7db309f4fc837f7dbe9f0cdfd36"
      "88b9df8ed7ffba7e9be7f417187c2cbf3dc1c8d44e9520058e5bf1c7"
      "a2352dbf7d18a39be211bf0de4888112eab8b3eab7af62f8283e96df86eb369ca1e17a35"
      "397aa6e50f7fbe26ebb760bb9449942f8c59f5db250e9fc0e0f5ddd5",
      "8dfd223eae3cddcb12f2446b49965ddf9c7dbffd0bb2785662",
      ""};
  nameCaptureInfo = nullptr;
  emlrtNameCaptureMxArrayR2016a(&data[0], 5784U, &nameCaptureInfo);
  return nameCaptureInfo;
}

//
// Arguments    : void
// Return Type  : mxArray *
//
mxArray *emlrtMexFcnProperties()
{
  mxArray *xEntryPoints;
  mxArray *xInputs;
  mxArray *xResult;
  const char_T *propFieldName[9]{"Version",
                                 "ResolvedFunctions",
                                 "Checksum",
                                 "EntryPoints",
                                 "CoverageInfo",
                                 "IsPolymorphic",
                                 "PropertyList",
                                 "UUID",
                                 "ClassEntryPointIsHandle"};
  const char_T *epFieldName[8]{
      "Name",     "NumberOfInputs", "NumberOfOutputs", "ConstantInputs",
      "FullPath", "TimeStamp",      "Constructor",     "Visible"};
  xEntryPoints =
      emlrtCreateStructMatrix(1, 1, 8, (const char_T **)&epFieldName[0]);
  xInputs = emlrtCreateLogicalMatrix(1, 1);
  emlrtSetField(xEntryPoints, 0, "Name", emlrtMxCreateString("evaluatePolicy"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs",
                emlrtMxCreateDoubleScalar(1.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs",
                emlrtMxCreateDoubleScalar(1.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  emlrtSetField(
      xEntryPoints, 0, "FullPath",
      emlrtMxCreateString(
          "C:\\Users\\hdt.OJ\\OneDrive - OJ Electronics A "
          "S\\Thesis\\source\\houseHeat_TD3_flowRate\\evaluatePolicy.m"));
  emlrtSetField(xEntryPoints, 0, "TimeStamp",
                emlrtMxCreateDoubleScalar(739359.66240740742));
  emlrtSetField(xEntryPoints, 0, "Constructor",
                emlrtMxCreateLogicalScalar(false));
  emlrtSetField(xEntryPoints, 0, "Visible", emlrtMxCreateLogicalScalar(true));
  xResult =
      emlrtCreateStructMatrix(1, 1, 9, (const char_T **)&propFieldName[0]);
  emlrtSetField(xResult, 0, "Version",
                emlrtMxCreateString("23.2.0.2515942 (R2023b) Update 7"));
  emlrtSetField(xResult, 0, "ResolvedFunctions",
                (mxArray *)emlrtMexFcnResolvedFunctionsInfo());
  emlrtSetField(xResult, 0, "Checksum",
                emlrtMxCreateString("PFXmjorRfXjZlurygVFl0B"));
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  return xResult;
}

//
// File trailer for _coder_evaluatePolicy_info.cpp
//
// [EOF]
//
