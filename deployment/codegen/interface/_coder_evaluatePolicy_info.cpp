//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: _coder_evaluatePolicy_info.cpp
//
// MATLAB Coder version            : 23.2
// C/C++ source code generated on  : 17-Apr-2024 13:12:56
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
      "789ced584d6eda401835552a5595d27ad32caa2e586417c54a933651baa89ac6d0404a40"
      "6004511c85c11e8261ec49ed21855d6ed0eebbc9b28b1ea04788c405"
      "aa5ea057e8b2f867c019696420c8112a9f806f3e3dfb7bcf33cc1b8490c8e41282203c11"
      "fcb85af1f372508b417e20dc0e164f047989a9693c0c906506ff1264",
      "0d5b0476895f58c084c33b756c1a16b088d2bb80820d1d8c2ea1ee210d0341c53061295c"
      "1cb995990e41c3c285dcf17e136aed52c714eca6335288c2c5703e6a"
      "9ce75d126e078bb3c1ce077bddffc27733251fedaf47f051fca47cbaff462d3bd076d4a6"
      "4ea47c56cd5b50b68d4b985c4fe6b3c914821ab1b165684e722f5952",
      "9526740c477570c7d6a0dac41d071e4040ce1479ebac81f0e722205005e7d02232206053"
      "3201093f578da3fbe998cfc5e6d1f58fbcfcf3ebef449c7cdffa8fd7"
      "e3e4a3715f7c5d4ebf71bf972b1c3e91c1ed2268bd56323be9dc3668917a5acef77ad50f"
      "231d85089e281d02a78eabff77cefde3ce639ad35f64f0934cea7475",
      "b00711a8db18935595608ceab8abdac87dadb96f0deb70b061d5357330402ac240cfb9a3"
      "b48dbd33413243e7de1d753f8fd04d711b49812cc95325798abcb3cd"
      "8bfbf2e5eb29f968ffb7117c143fc91c4dba6ec3190aaf578da36756fed0affe8ad56faf"
      "6efef4e3e4a331af7efb8cc32732f876fb70b7b25b2f7ffca41c775e",
      "b6e5d68e92d910167e4bfba538fd45069fc26fbd4ff7c79282bd2dec6edf85df06f97a4a"
      "be85dfce866fe1b77e2cfc76b2fe77f5db034e7f91c127f2db0b8c0c"
      "ada7fac977dc823796cc59f9ed8b08dd140ff9ad2f47f29550c79d57bf7d17c147f189fc"
      "3658b7d10c8dd6abc6d1332b7ff8fb235ebf150e735bb1f20531af7e",
      "3beeff0995e2c6de71169f175e5553846c6a0dd9b42aefe7df6fff01199c55f2",
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
                emlrtMxCreateDoubleScalar(739359.55053240736));
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
                emlrtMxCreateString("G2SXARiEMeh5VSt4vwTo1E"));
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  return xResult;
}

//
// File trailer for _coder_evaluatePolicy_info.cpp
//
// [EOF]
//
