//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// _coder_evaluatePolicy_info.cpp
//
// Code generation for function 'evaluatePolicy'
//

// Include files
#include "_coder_evaluatePolicy_info.h"
#include "emlrt.h"
#include "tmwtypes.h"

// Function Declarations
static const mxArray *c_emlrtMexFcnResolvedFunctionsI();

// Function Definitions
static const mxArray *c_emlrtMexFcnResolvedFunctionsI()
{
  const mxArray *nameCaptureInfo;
  const char_T *data[7]{
      "789ced58cb6eda40141daa54ea26ad37cda2ea8245a42ea25a491335a28baa496c04a404"
      "04464ec444c1314370f178883da444ea227fd055f75976d17fe83652"
      "7ea0ea0ff417ba2c7e8133d2c840902354ae803b57c7bee77886398300a97c310500780a"
      "fcb85af1f372500b417e04ee068ba782bcc4d4613c0e906506ff1a64",
      "9d5814f5a95f581a46c33b9b041b966651e5b28b808d1c625ea0a687b40c13290646d568"
      "71e056381b8186850bb9e3bd36d23bd51e0676db192934a3c5703e1a"
      "9ce75d027783c5d960e783bdee7fe1bb99922fecdf8ce10bf17aed78ef1dac39c87660bb"
      "49c55201962c24d9c6054abf4e970a69d9443ab58965e84e7a275d85",
      "4a1b3986031dd2b37504dba4e7a01cd2e889226d9eb44cf2b9a25104b533645149a3da96"
      "88351a7dae0647f7b3319f8bcda3eb9f78f9e7b7dfa924f9be740baf"
      "92e40be3a1f8fa9c7ee37e2f57387c02832b79b982d5ea39d9cd28146f6fa84896d4dc48"
      "473986274e07e0d449f5ffceb97fdc79cc72fa0b0c5ecfcbc7ab833d",
      "686aa7362174155242cc53d287b6e9bed6dcb74e9a68b061e11a1e0c4c6812ad59744759"
      "9b7867828823e7de3d75bf88d11de2b62906b2444f95e829f2ce362f"
      "1eca97afa7e40bfbbf8fe10bf17afe60d2751bce5074bd1a1c3db3f287dbc35f89faedd5"
      "cd9fdb24f9c29857bf7dcee11318fc6d673fa3664e6b1fcf95a3de46",
      "47fab4ade4d7c1c26fc37e32a7bfc0e053f8adf7e9fe585288b785ddedbbf0db205f4fc9"
      "b7f0dbd9f02dfcd68f85df4ed6ffbe7e9be3f417187c22bfed12d3d0"
      "2fa19f7cc72d7b6311cfca6f5fc6e80ef188dffa72445f49e8b8f3eab71f62f8427c22bf"
      "0dd66d3443a3f56a70f4ccca1ffefe48d66fc17e713351be20e6d56f",
      "c7fd3f41adacef1c15c85979eb50a6f48dde92b0a5eecebfdffe03e8f3557b",
      ""};
  nameCaptureInfo = nullptr;
  emlrtNameCaptureMxArrayR2016a(&data[0], 5784U, &nameCaptureInfo);
  return nameCaptureInfo;
}

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
                emlrtMxCreateDoubleScalar(739365.94813657412));
  emlrtSetField(xEntryPoints, 0, "Constructor",
                emlrtMxCreateLogicalScalar(false));
  emlrtSetField(xEntryPoints, 0, "Visible", emlrtMxCreateLogicalScalar(true));
  xResult =
      emlrtCreateStructMatrix(1, 1, 9, (const char_T **)&propFieldName[0]);
  emlrtSetField(xResult, 0, "Version",
                emlrtMxCreateString("23.2.0.2515942 (R2023b) Update 7"));
  emlrtSetField(xResult, 0, "ResolvedFunctions",
                (mxArray *)c_emlrtMexFcnResolvedFunctionsI());
  emlrtSetField(xResult, 0, "Checksum",
                emlrtMxCreateString("LBrlG0qC7Ru8YGjD1cCy2E"));
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  return xResult;
}

// End of code generation (_coder_evaluatePolicy_info.cpp)
