/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Narnia_PIL_types.h
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

#ifndef RTW_HEADER_Narnia_PIL_types_h_
#define RTW_HEADER_Narnia_PIL_types_h_
#include "rtwtypes.h"
#include "stm_timer_ll.h"

/* Custom Type definition for MATLABSystem: '<S3>/PWM Output' */
#include "stm_timer_ll.h"
#include "stm_timer_ll.h"
#ifndef struct_tag_C3ug75osl8w3UN1OXa3ipB
#define struct_tag_C3ug75osl8w3UN1OXa3ipB

struct tag_C3ug75osl8w3UN1OXa3ipB
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  TIM_Type_T* TimerHandle;
};

#endif                                 /* struct_tag_C3ug75osl8w3UN1OXa3ipB */

#ifndef typedef_stm32cube_blocks_PWMOutput_Na_T
#define typedef_stm32cube_blocks_PWMOutput_Na_T

typedef struct tag_C3ug75osl8w3UN1OXa3ipB stm32cube_blocks_PWMOutput_Na_T;

#endif                             /* typedef_stm32cube_blocks_PWMOutput_Na_T */

/* Parameters (default storage) */
typedef struct P_Narnia_PIL_T_ P_Narnia_PIL_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_Narnia_PIL_T RT_MODEL_Narnia_PIL_T;

#endif                                 /* RTW_HEADER_Narnia_PIL_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
