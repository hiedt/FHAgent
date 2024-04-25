//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: _coder_evaluatePolicy_info.cpp
//
// MATLAB Coder version            : 23.2
// C/C++ source code generated on  : 25-Apr-2024 10:45:33
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
      "789ced583d6fda40183eaa54ea92d64b33541d18b245b1d226699b0e5593181a48092818"
      "01c25130e60087b32fb58f143a65eed2ad73c60efd2191f207aafe81"
      "ae1dbbb5f8e3c09c743210e4089557c07baf1efb7d1edf71cf21402c958901001e022f2e"
      "57bcbcecd7829fef81d160f1989f97989ac67d1f5966f02f7ed6b049",
      "60977885a91a7070671d1bbaa99a44ee9d4360411ba30b587791868ea0ac1b301f2c8e9c"
      "ca4806a041e140ce78bf05b576be6300ab650f15a26031988f2ae779"
      "97c068b0381bec7cb0d7fd2f7cd753f2d1fe5a081fc52b8593fdd74ac18696adb4ea44cc"
      "a695ac09254bbf80f1f578361d4f20a8110b9bba66c777e379456e41",
      "5bb7151b772c0d2a2ddcb1e10154c9a92c6d9e3610fe78ac12a8a84d68124925aa68a864"
      "e4b9aa1cdd8fc67c2e360faf7fe0e6cf5f7fc6a2e43bfbfd773d4a3e"
      "1a77c5d7e5f41bf77bb9c2e11318bc84b65e6d7fdaee651b35732f236773ef9ae5a634d4"
      "910be109d301387554fdbf71ee1f771e939cfe028357528993d5fe26",
      "446acdc298ac2a046354c35dc542ce6bcd796bb80efb1b565933fa03a420acd633ce2869"
      "61f74c108dc0b9774bdd4f427453dc42a22f4b745589ae22f76c73e3"
      "ae7cf96a4a3edaff4d081fc52ba9a349d76d3043c1f5aa72f4ccca1f6e4a3f22f5dbcbeb"
      "5f3751f2d19857bf7dcce11318fc45fb70a7b8532bbcff20973bcfda",
      "d2d94b39b501167e4bfb2538fd05069fc26fdd4fe7c7928cdd2dec6cdf85dffaf96a4abe"
      "85dfce866fe1b75e2cfc76b2feb7f5db034e7f81c127f2db738c74ad"
      "a778c973dc9c3b168d59f9edd310dd140ff8ad2747f49450c79d57bf7d1bc247f189fcd6"
      "5fb7e10c0dd7abcad1332b7ff8f33d5abf058799cd48f9fc9857bf1d",
      "f7ff84e2f1c66e398d9bb9ad528290e75a4332cce2defcfbed3f7fb75659",
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
                emlrtMxCreateDoubleScalar(739366.95738425921));
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
                emlrtMxCreateString("UfMmsZ6UxP8cA0PzNut4BD"));
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  return xResult;
}

//
// File trailer for _coder_evaluatePolicy_info.cpp
//
// [EOF]
//
