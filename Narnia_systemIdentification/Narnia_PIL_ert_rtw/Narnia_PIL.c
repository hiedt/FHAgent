/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Narnia_PIL.c
 *
 * Code generated for Simulink model 'Narnia_PIL'.
 *
 * Model version                  : 1.6
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Mon Jun 10 14:42:34 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Narnia_PIL.h"
#include "Narnia_PIL_types.h"
#include "Narnia_PIL_private.h"
#include "rtwtypes.h"
#include "stm_timer_ll.h"
#include <math.h>

/* Block states (default storage) */
DW_Narnia_PIL_T Narnia_PIL_DW;

/* Real-time model */
static RT_MODEL_Narnia_PIL_T Narnia_PIL_M_;
RT_MODEL_Narnia_PIL_T *const Narnia_PIL_M = &Narnia_PIL_M_;

/* Forward declaration for local functions */
static void Narnia_PIL_SystemCore_setup(stm32cube_blocks_PWMOutput_Na_T *obj);
real_T rt_roundd_snf(real_T u)
{
  real_T y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

static void Narnia_PIL_SystemCore_setup(stm32cube_blocks_PWMOutput_Na_T *obj)
{
  TIM_Type_T b;
  boolean_T isSlaveModeTriggerEnabled;

  /* Start for MATLABSystem: '<S3>/PWM Output' */
  obj->isInitialized = 1;
  b.PeripheralPtr = TIM2;
  b.isCenterAlignedMode = false;

  /* Start for MATLABSystem: '<S3>/PWM Output' */
  b.repetitionCounter = 0U;
  obj->TimerHandle = Timer_Handle_Init(&b);
  enableTimerInterrupts(obj->TimerHandle, 0);
  enableTimerChannel1(obj->TimerHandle, ENABLE_CH);
  isSlaveModeTriggerEnabled = isSlaveTriggerModeEnabled(obj->TimerHandle);
  if (!isSlaveModeTriggerEnabled) {
    /* Start for MATLABSystem: '<S3>/PWM Output' */
    enableCounter(obj->TimerHandle, false);
  }

  obj->isSetupComplete = true;
}

/* Model step function */
void Narnia_PIL_step(void)
{
  real_T tmp;
  uint32_T freq;

  /* MATLABSystem: '<S3>/PWM Output' incorporates:
   *  Constant: '<Root>/Constant'
   *  Constant: '<Root>/Constant1'
   */
  tmp = rt_roundd_snf(Narnia_PIL_P.Constant1_Value);
  if (tmp < 4.294967296E+9) {
    if (tmp >= 0.0) {
      freq = (uint32_T)tmp;
    } else {
      freq = 0U;
    }
  } else {
    freq = MAX_uint32_T;
  }

  freq = checkFrequencyAndDutyCycleLimits(Narnia_PIL_DW.obj.TimerHandle, freq);
  setFrequencyAccToInput(Narnia_PIL_DW.obj.TimerHandle, freq);
  setDutyCycleInPercentageChannel1(Narnia_PIL_DW.obj.TimerHandle,
    Narnia_PIL_P.Constant_Value);

  /* End of MATLABSystem: '<S3>/PWM Output' */
  {                                    /* Sample time: [0.2s, 0.0s] */
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
  Narnia_PIL_M->Timing.stepSize0 = 0.2;

  /* External mode info */
  Narnia_PIL_M->Sizes.checksums[0] = (2018959181U);
  Narnia_PIL_M->Sizes.checksums[1] = (1884081203U);
  Narnia_PIL_M->Sizes.checksums[2] = (1667127671U);
  Narnia_PIL_M->Sizes.checksums[3] = (459139609U);

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

  /* Start for MATLABSystem: '<S3>/PWM Output' */
  Narnia_PIL_DW.obj.isInitialized = 0;
  Narnia_PIL_DW.obj.matlabCodegenIsDeleted = false;
  Narnia_PIL_SystemCore_setup(&Narnia_PIL_DW.obj);
}

/* Model terminate function */
void Narnia_PIL_terminate(void)
{
  /* Terminate for MATLABSystem: '<S3>/PWM Output' */
  if (!Narnia_PIL_DW.obj.matlabCodegenIsDeleted) {
    Narnia_PIL_DW.obj.matlabCodegenIsDeleted = true;
    if ((Narnia_PIL_DW.obj.isInitialized == 1) &&
        Narnia_PIL_DW.obj.isSetupComplete) {
      disableCounter(Narnia_PIL_DW.obj.TimerHandle);
      disableTimerInterrupts(Narnia_PIL_DW.obj.TimerHandle, 0);
      disableTimerChannel1(Narnia_PIL_DW.obj.TimerHandle, ENABLE_CH);
    }
  }

  /* End of Terminate for MATLABSystem: '<S3>/PWM Output' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
