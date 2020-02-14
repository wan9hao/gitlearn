/*
 * File: baic_car_longitudinal_ok.h
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

#ifndef RTW_HEADER_baic_car_longitudinal_ok_h_
#define RTW_HEADER_baic_car_longitudinal_ok_h_
#include <math.h>
#include <string.h>
#ifndef baic_car_longitudinal_ok_COMMON_INCLUDES_
# define baic_car_longitudinal_ok_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* baic_car_longitudinal_ok_COMMON_INCLUDES_ */

#include "baic_car_longitudinal_ok_types.h"

/* Macros for accessing real-time model data structure */

/* Block signals for system '<S1>/ Switch Logic' */
typedef struct {
  boolean_T Compare;                   /* '<S9>/Compare' */
  boolean_T LogicalOperator2;          /* '<S2>/Logical Operator2' */
  boolean_T LogicalOperator3;          /* '<S2>/Logical Operator3' */
} B_Throttle_Brake_Switch_Logic_T;

/* Block signals for system '<S3>/SingleNNSubsystem' */
typedef struct {
  real_T Saturation2;                  /* '<S29>/Saturation2' */
} B_SingleNN_Subsystem_T;

/* Block states (auto storage) for system '<S3>/SingleNNSubsystem' */
typedef struct {
  real_T UnitDelay_DSTATE;             /* '<S29>/Unit Delay' */
  real_T UnitDelay1_DSTATE;            /* '<S29>/Unit Delay1' */
  real_T UnitDelay2_DSTATE;            /* '<S29>/Unit Delay2' */
  real_T UnitDelay_DSTATE_a;           /* '<S32>/Unit Delay' */
  real_T UnitDelay1_DSTATE_g;          /* '<S32>/Unit Delay1' */
  real_T UnitDelay3_DSTATE;            /* '<S29>/Unit Delay3' */
  real_T UnitDelay4_DSTATE;            /* '<S29>/Unit Delay4' */
  boolean_T IC40000001_FirstOutputTime;/* '<S29>/IC40.000001' */
  boolean_T IC5_FirstOutputTime;       /* '<S29>/IC5' */
  boolean_T IC6_FirstOutputTime;       /* '<S29>/IC6' */
} DW_SingleNN_Subsystem_T;

/* Block signals for system '<S3>/SlidingModeSubsystem' */
typedef struct {
  real_T Add3;                         /* '<S30>/Add3' */
} B_SlidingModeSubsystem_T;

/* Block states (auto storage) for system '<S3>/SlidingModeSubsystem' */
typedef struct {
  real_T UnitDelay_DSTATE;             /* '<S30>/Unit Delay' */
  real_T UnitDelay2_DSTATE;            /* '<S30>/Unit Delay2' */
  real_T UD_DSTATE;                    /* '<S34>/UD' */
} DW_SlidingModeSubsystem_T;

/* Block signals for system '<S1>/Brake_PID_Controller' */
typedef struct {
  real_T Saturation2;                  /* '<S3>/Saturation2' */
  real_T Switch8;                      /* '<S3>/Switch8' */
  B_SlidingModeSubsystem_T SlidingModeSubsystem_o;/* '<S3>/SlidingModeSubsystem' */
  B_SingleNN_Subsystem_T SingleNNSubsystem;/* '<S3>/SingleNNSubsystem' */
} B_Brake_Controller_T;

/* Block states (auto storage) for system '<S1>/Brake_PID_Controller' */
typedef struct {
  DW_SlidingModeSubsystem_T SlidingModeSubsystem_o;/* '<S3>/SlidingModeSubsystem' */
  DW_SingleNN_Subsystem_T SingleNNSubsystem;/* '<S3>/SingleNNSubsystem' */
} DW_Brake_Controller_T;

/* Block signals (auto storage) */
typedef struct {
  B_Brake_Controller_T Brake_PID_Controller;/* '<S1>/Brake_PID_Controller' */
  B_Throttle_Brake_Switch_Logic_T SwitchLogic;/* '<S1>/ Switch Logic' */
} B_baic_car_longitudinal_ok_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T UD_DSTATE;                    /* '<S36>/UD' */
  real_T DiscreteFilter2_states;       /* '<S4>/Discrete Filter2' */
  real_T DiscreteFilter3_states;       /* '<S4>/Discrete Filter3' */
  real_T DiscreteFilter1_states;       /* '<S4>/Discrete Filter1' */
  real_T PrevY;                        /* '<S1>/Rate Limiter1' */
  DW_Brake_Controller_T Brake_PID_Controller;/* '<S1>/Brake_PID_Controller' */
} DW_baic_car_longitudinal_ok_T;

/* Real-time Model Data Structure */
struct tag_RTM_baic_car_longitudinal_T {
  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
  } Timing;
};

/* Block signals (auto storage) */
extern B_baic_car_longitudinal_ok_T baic_car_longitudinal_ok_B;

/* Block states (auto storage) */
extern DW_baic_car_longitudinal_ok_T baic_car_longitudinal_ok_DW;

/* Model entry point functions */
extern void baic_car_longitudinal_initialize(void);
extern void baic_car_longitudinal_ok_terminate(void);

/* Customized model step function */
extern void baic_car_longitudinal_custom(real_T IN_shangpoFlag, real_T
  IN_Shifter, real_T IN_Speed_Command_Planner, real_T IN_Speed_Measured, real_T
  IN_carBrakeStatus, real_T IN_Longitudinal_acc, real_T
  *OUT_ACC_TARGET_ACCELERATION, real_T *OUT_accFlag);

/* Real-time Model object */
extern RT_MODEL_baic_car_longitudina_T *const baic_car_longitudinal_ok_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'baic_car_longitudinal_ok'
 * '<S1>'   : 'baic_car_longitudinal_ok/longitudina_controller'
 * '<S2>'   : 'baic_car_longitudinal_ok/longitudina_controller/ Switch Logic'
 * '<S3>'   : 'baic_car_longitudinal_ok/longitudina_controller/Brake_PID_Controller'
 * '<S4>'   : 'baic_car_longitudinal_ok/longitudina_controller/filter_Subsystem'
 * '<S5>'   : 'baic_car_longitudinal_ok/longitudina_controller/ Switch Logic/Compare To Constant'
 * '<S6>'   : 'baic_car_longitudinal_ok/longitudina_controller/ Switch Logic/Compare To Constant1'
 * '<S7>'   : 'baic_car_longitudinal_ok/longitudina_controller/ Switch Logic/Compare To Constant10'
 * '<S8>'   : 'baic_car_longitudinal_ok/longitudina_controller/ Switch Logic/Compare To Constant2'
 * '<S9>'   : 'baic_car_longitudinal_ok/longitudina_controller/ Switch Logic/Compare To Constant3'
 * '<S10>'  : 'baic_car_longitudinal_ok/longitudina_controller/ Switch Logic/Compare To Constant4'
 * '<S11>'  : 'baic_car_longitudinal_ok/longitudina_controller/ Switch Logic/Compare To Constant5'
 * '<S12>'  : 'baic_car_longitudinal_ok/longitudina_controller/ Switch Logic/Compare To Constant6'
 * '<S13>'  : 'baic_car_longitudinal_ok/longitudina_controller/Brake_PID_Controller/Compare To 1'
 * '<S14>'  : 'baic_car_longitudinal_ok/longitudina_controller/Brake_PID_Controller/Compare To 10'
 * '<S15>'  : 'baic_car_longitudinal_ok/longitudina_controller/Brake_PID_Controller/Compare To 11'
 * '<S16>'  : 'baic_car_longitudinal_ok/longitudina_controller/Brake_PID_Controller/Compare To 12'
 * '<S17>'  : 'baic_car_longitudinal_ok/longitudina_controller/Brake_PID_Controller/Compare To 13'
 * '<S18>'  : 'baic_car_longitudinal_ok/longitudina_controller/Brake_PID_Controller/Compare To 15'
 * '<S19>'  : 'baic_car_longitudinal_ok/longitudina_controller/Brake_PID_Controller/Compare To 16'
 * '<S20>'  : 'baic_car_longitudinal_ok/longitudina_controller/Brake_PID_Controller/Compare To 17'
 * '<S21>'  : 'baic_car_longitudinal_ok/longitudina_controller/Brake_PID_Controller/Compare To 2'
 * '<S22>'  : 'baic_car_longitudinal_ok/longitudina_controller/Brake_PID_Controller/Compare To 3'
 * '<S23>'  : 'baic_car_longitudinal_ok/longitudina_controller/Brake_PID_Controller/Compare To 4'
 * '<S24>'  : 'baic_car_longitudinal_ok/longitudina_controller/Brake_PID_Controller/Compare To 5'
 * '<S25>'  : 'baic_car_longitudinal_ok/longitudina_controller/Brake_PID_Controller/Compare To 6'
 * '<S26>'  : 'baic_car_longitudinal_ok/longitudina_controller/Brake_PID_Controller/Compare To 7'
 * '<S27>'  : 'baic_car_longitudinal_ok/longitudina_controller/Brake_PID_Controller/Compare To 8'
 * '<S28>'  : 'baic_car_longitudinal_ok/longitudina_controller/Brake_PID_Controller/Compare To 9'
 * '<S29>'  : 'baic_car_longitudinal_ok/longitudina_controller/Brake_PID_Controller/SingleNNSubsystem'
 * '<S30>'  : 'baic_car_longitudinal_ok/longitudina_controller/Brake_PID_Controller/SlidingModeSubsystem'
 * '<S31>'  : 'baic_car_longitudinal_ok/longitudina_controller/Brake_PID_Controller/SingleNNSubsystem/Subsystem'
 * '<S32>'  : 'baic_car_longitudinal_ok/longitudina_controller/Brake_PID_Controller/SingleNNSubsystem/Subsystem1'
 * '<S33>'  : 'baic_car_longitudinal_ok/longitudina_controller/Brake_PID_Controller/SlidingModeSubsystem/Compare To 1'
 * '<S34>'  : 'baic_car_longitudinal_ok/longitudina_controller/Brake_PID_Controller/SlidingModeSubsystem/Difference'
 * '<S35>'  : 'baic_car_longitudinal_ok/longitudina_controller/Brake_PID_Controller/SlidingModeSubsystem/sgn'
 * '<S36>'  : 'baic_car_longitudinal_ok/longitudina_controller/filter_Subsystem/Difference'
 */
#endif                                 /* RTW_HEADER_baic_car_longitudinal_ok_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
