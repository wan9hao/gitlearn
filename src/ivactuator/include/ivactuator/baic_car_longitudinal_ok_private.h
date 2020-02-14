/*
 * File: baic_car_longitudinal_ok_private.h
 *
 * Code generated for Simulink model 'baic_car_longitudinal_ok'.
 *
 * Model version                  : 1.253
 * Simulink Coder version         : 8.9 (R2015b) 13-Aug-2015
 * C/C++ source code generated on : Tue Apr 02 10:52:22 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM 8
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_baic_car_longitudinal_ok_private_h_
#define RTW_HEADER_baic_car_longitudinal_ok_private_h_
#include "rtwtypes.h"

extern void Throttle_Brake_Switch_Logic(real_T rtu_SpeedCommand, real_T
  rtu_Shifter, real_T rtu_Speed_Measured, real_T rtu_Longitudinal_g, real_T
  rtu_shangpoFlag, B_Throttle_Brake_Switch_Logic_T *localB);
extern void SingleNN_Subsystem_Start(DW_SingleNN_Subsystem_T *localDW);
extern void SingleNN_Subsystem(boolean_T rtu_Enable, real_T rtu_ek,
  B_SingleNN_Subsystem_T *localB, DW_SingleNN_Subsystem_T *localDW);
extern void SlidingModeSubsystem(boolean_T rtu_Enable, real_T rtu_ek, real_T
  rtu_Longitudinal_g, real_T rtu_SpeedCommand, real_T rtu_shangpoFlag,
  B_SlidingModeSubsystem_T *localB, DW_SlidingModeSubsystem_T *localDW);
extern void Brake_Controller_Start(DW_Brake_Controller_T *localDW);
extern void Brake_Controller(real_T rtu_carBrake, real_T rtu_SpeedCommand,
  boolean_T rtu_High_Speed_Logic, real_T rtu_Speed_Measured, real_T
  rtu_Longitudinal_g, boolean_T rtu_Ramp_Logic, boolean_T rtu_ifclimbramp,
  real_T rtu_shangpoFlag, B_Brake_Controller_T *localB, DW_Brake_Controller_T
  *localDW);

#endif                                 /* RTW_HEADER_baic_car_longitudinal_ok_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
