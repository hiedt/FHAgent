//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: evaluatePolicy_initialize.cpp
//
// MATLAB Coder version            : 23.2
// C/C++ source code generated on  : 28-Apr-2024 01:11:35
//

// Include Files
#include "evaluatePolicy_initialize.h"
#include "evaluatePolicy.h"
#include "evaluatePolicy_data.h"
#include "omp.h"

// Function Definitions
//
// Arguments    : void
// Return Type  : void
//
void evaluatePolicy_initialize()
{
  omp_init_nest_lock(&evaluatePolicy_nestLockGlobal);
  evaluatePolicy_init();
  isInitialized_evaluatePolicy = true;
}

//
// File trailer for evaluatePolicy_initialize.cpp
//
// [EOF]
//
