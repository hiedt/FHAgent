//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: _coder_evaluatePolicy_info.cpp
//
// MATLAB Coder version            : 23.2
// C/C++ source code generated on  : 28-Apr-2024 01:11:35
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
      "789ced584d6f1241181e4c4dbc54f7620fc60387de1a37b518b41e8c5896f02105cb22b4"
      "4c53b6cb50566677eaee50e9adffc09b5e7bf4e00f69d23fa0fe01ff"
      "82de643f069649360b946c43e40df0ce9b67f77d9e9d619e218058ae180300dc076e5cac"
      "b979d5ab052fdf01e3c1e3312faf70358bbb1eb2cae19fbdac1283a2",
      "3e750b43d1d1f0ce16d1354331a87c7e8a80892c82cf50cb41da1a46b2a6a38abfd8b52b"
      "3de38386850dd9e39d0e52bb959e0ecc8e355288fdc5703e9a01cfbb"
      "02c683c7f9e0e783bfee7fe1bb9a918ff55743f818dea81eeebc84550b9916ecb4a858ca"
      "c39281d2a67686e24fe2a57c5cc248a5263134d58aa7e215287790a5",
      "59d0223d5345b0437a16ca22851ec9e9c4511b934f7b0a45503941064d2b541175858e3d"
      "573340f783099f8bcfa3ebef39f9e7d75fb128f9fec2e49728f958dc"
      "165f3fa0dfa4dfcbb5003e81c30f7289f705d4dd3a28d7b3efaa2fa854afa792d2484739"
      "84274c0708a8a3eaff2de0fe49e73113d05fe0f0464e3a5c1f6c42ac",
      "1c9b84d0754809c1c7a40f4d6cbf36ecb74a5a68b061e1863e18608889d22adaa38c499c"
      "3341d47de7de0d753f0ad1cd70138b9e2cd151253a8a9cb3cd89dbf2"
      "e5cb19f958ff57217c0c6fe476a75db7e10cf9d7ab19a0675efe705dff11a9df5e5cfdbe"
      "8e928fc5a2faedc3003e81c393ddc2766dfbb8faf6a3bcdf7bda4d7f",
      "782ee736c1d26f593f29a0bfc0e133f8adf369ff589289b385ededbbf45b2f5fcec8b7f4"
      "dbf9f02dfdd68da5df4ed7ffa67e9b0de82f70f8547e7b4ab0a69e43"
      "37b98e5b76c6a23e2fbf7d1ca29be13ebf75e588ae12e6b88beab7af43f8183e95df7aeb"
      "369aa1d17a3503f4cccb1ffe7c8fd66f41a1988894cf8b45f5db49ff",
      "4fa8ed6da6f6f3e4a4fcac2e51baa5b6d3ba517bb3f87efb0f91ed55c4",
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
                emlrtMxCreateDoubleScalar(739370.04546296294));
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
                emlrtMxCreateString("tvmu3NZ57wSERsOwhBvH4"));
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  return xResult;
}

//
// File trailer for _coder_evaluatePolicy_info.cpp
//
// [EOF]
//
