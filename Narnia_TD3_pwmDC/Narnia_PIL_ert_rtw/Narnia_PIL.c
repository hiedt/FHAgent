/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Narnia_PIL.c
 *
 * Code generated for Simulink model 'Narnia_PIL'.
 *
 * Model version                  : 1.5
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Mon Jun 10 00:00:52 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Narnia_PIL.h"
#include "rtwtypes.h"
#include "Narnia_PIL_private.h"

/* Block states (default storage) */
DW_Narnia_PIL_T Narnia_PIL_DW;

/* Real-time model */
static RT_MODEL_Narnia_PIL_T Narnia_PIL_M_;
RT_MODEL_Narnia_PIL_T *const Narnia_PIL_M = &Narnia_PIL_M_;

/* Model step function */
void Narnia_PIL_step(void)
{
  GPIO_TypeDef * portNameLoc;
  real_T rtb_PulseGenerator;
  int32_T c;

  /* DiscretePulseGenerator: '<Root>/Pulse Generator' */
  rtb_PulseGenerator = (Narnia_PIL_DW.clockTickCounter <
                        Narnia_PIL_P.PulseGenerator_Duty) &&
    (Narnia_PIL_DW.clockTickCounter >= 0) ? Narnia_PIL_P.PulseGenerator_Amp :
    0.0;
  if (Narnia_PIL_DW.clockTickCounter >= Narnia_PIL_P.PulseGenerator_Period - 1.0)
  {
    Narnia_PIL_DW.clockTickCounter = 0;
  } else {
    Narnia_PIL_DW.clockTickCounter++;
  }

  /* End of DiscretePulseGenerator: '<Root>/Pulse Generator' */

  /* MATLABSystem: '<S3>/Digital Port Write' */
  portNameLoc = GPIOA;
  if (rtb_PulseGenerator != 0.0) {
    c = 128;
  } else {
    c = 0;
  }

  LL_GPIO_SetOutputPin(portNameLoc, (uint32_T)c);
  LL_GPIO_ResetOutputPin(portNameLoc, ~(uint32_T)c & 128U);

  /* End of MATLABSystem: '<S3>/Digital Port Write' */
  {                                    /* Sample time: [0.005s, 0.0s] */
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  Narnia_PIL_M->Timing.taskTime0 =
    ((time_T)(++Narnia_PIL_M->Timing.clockTick0)) *
    Narnia_PIL_M->Timing.stepSize0;
}

/* Model initialize function */
void Narnia_PIL_initialize(void)
{
  /* Registration code */
  rtmSetTFinal(Narnia_PIL_M, -1);
  Narnia_PIL_M->Timing.stepSize0 = 0.005;

  /* External mode info */
  Narnia_PIL_M->Sizes.checksums[0] = (1063374316U);
  Narnia_PIL_M->Sizes.checksums[1] = (2367690553U);
  Narnia_PIL_M->Sizes.checksums[2] = (1133336680U);
  Narnia_PIL_M->Sizes.checksums[3] = (505661776U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[2];
    Narnia_PIL_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(Narnia_PIL_M->extModeInfo,
      &Narnia_PIL_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(Narnia_PIL_M->extModeInfo, Narnia_PIL_M->Sizes.checksums);
    rteiSetTPtr(Narnia_PIL_M->extModeInfo, rtmGetTPtr(Narnia_PIL_M));
  }
}

/* Model terminate function */
void Narnia_PIL_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
