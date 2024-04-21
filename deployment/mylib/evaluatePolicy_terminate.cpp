//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: evaluatePolicy_terminate.cpp
//
// MATLAB Coder version            : 23.2
// C/C++ source code generated on  : 17-Apr-2024 16:12:13
//

// Include Files
#include "evaluatePolicy_terminate.h"
#include "evaluatePolicy.h"
#include "evaluatePolicy_data.h"
#include "omp.h"

// Function Definitions
//
// Arguments    : void
// Return Type  : void
//
void evaluatePolicy_terminate()
{
  evaluatePolicy_delete();
  omp_destroy_nest_lock(&evaluatePolicy_nestLockGlobal);
  isInitialized_evaluatePolicy = false;
}

//
// File trailer for evaluatePolicy_terminate.cpp
//
// [EOF]
//
