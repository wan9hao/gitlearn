/*
 * File: baic_car_longitudinal_ok.c
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
#include <stdio.h>
#include "ivactuator/baic_car_longitudinal_ok.h"
#include "ivactuator/baic_car_longitudinal_ok_private.h"

float g_scale = 1.5;
float e_scale = 0.5;
float k_scale = 0.5;

/* Block signals (auto storage) */
B_baic_car_longitudinal_ok_T baic_car_longitudinal_ok_B;

/* Block states (auto storage) */
DW_baic_car_longitudinal_ok_T baic_car_longitudinal_ok_DW;

/* Real-time model */
RT_MODEL_baic_car_longitudina_T baic_car_longitudinal_ok_M_;
RT_MODEL_baic_car_longitudina_T *const baic_car_longitudinal_ok_M =
  &baic_car_longitudinal_ok_M_;

/* Output and update for atomic system: '<S1>/ Switch Logic' */
void Throttle_Brake_Switch_Logic(real_T rtu_SpeedCommand, real_T rtu_Shifter,
  real_T rtu_Speed_Measured, real_T rtu_Longitudinal_g, real_T rtu_shangpoFlag,
  B_Throttle_Brake_Switch_Logic_T *localB)
{
  boolean_T rtb_Compare_dn;

  /* RelationalOperator: '<S8>/Compare' incorporates:
   *  Constant: '<S8>/Constant'
   */
  rtb_Compare_dn = (rtu_Shifter > 0.0);

  /* RelationalOperator: '<S9>/Compare' incorporates:
   *  Abs: '<S2>/Abs'
   *  Constant: '<S9>/Constant'
   */
  localB->Compare = (fabs(rtu_Longitudinal_g) >= 0.1);

  /* Logic: '<S2>/Logical Operator2' incorporates:
   *  Constant: '<S11>/Constant'
   *  Constant: '<S12>/Constant'
   *  Logic: '<S2>/Logical Operator4'
   *  RelationalOperator: '<S11>/Compare'
   *  RelationalOperator: '<S12>/Compare'
   */
  localB->LogicalOperator2 = (rtb_Compare_dn && ((rtu_SpeedCommand >= 1.2) &&
    (rtu_Speed_Measured >= 1.2)));

  /* Logic: '<S2>/Logical Operator3' incorporates:
   *  Constant: '<S10>/Constant'
   *  Constant: '<S5>/Constant'
   *  Constant: '<S6>/Constant'
   *  Constant: '<S7>/Constant'
   *  Logic: '<S2>/Logical Operator'
   *  Logic: '<S2>/Logical Operator1'
   *  Logic: '<S2>/Logical Operator7'
   *  RelationalOperator: '<S10>/Compare'
   *  RelationalOperator: '<S5>/Compare'
   *  RelationalOperator: '<S6>/Compare'
   *  RelationalOperator: '<S7>/Compare'
   */
  localB->LogicalOperator3 = ((localB->Compare && (rtu_SpeedCommand >= 0.55)) ||
    ((!localB->Compare) && (rtu_SpeedCommand >= 1.0) && (rtu_Speed_Measured >=
    1.0) && rtb_Compare_dn) || (rtu_shangpoFlag != 0.0));
}

/* Start for enable system: '<S3>/SingleNNSubsystem' */
void SingleNN_Subsystem_Start(DW_SingleNN_Subsystem_T *localDW)
{
  /* Start for InitialCondition: '<S29>/IC40.000001' */
  localDW->IC40000001_FirstOutputTime = true;

  /* Start for InitialCondition: '<S29>/IC5' */
  localDW->IC5_FirstOutputTime = true;

  /* Start for InitialCondition: '<S29>/IC6' */
  localDW->IC6_FirstOutputTime = true;
}

/* Output and update for enable system: '<S3>/SingleNNSubsystem' */
void SingleNN_Subsystem(boolean_T rtu_Enable, real_T rtu_ek,
  B_SingleNN_Subsystem_T *localB, DW_SingleNN_Subsystem_T *localDW)
{
  real_T rtb_IC40000001;
  real_T rtb_IC5;
  real_T rtb_IC6;
  real_T rtb_UnitDelay;
  real_T rtb_Subtract_d;
  real_T rtb_Subtract2;
  real_T rtb_netsum_idx_0;

  /* Outputs for Enabled SubSystem: '<S3>/SingleNNSubsystem' incorporates:
   *  EnablePort: '<S29>/Enable'
   */
  if (rtu_Enable) {
    /* UnitDelay: '<S29>/Unit Delay' */
    rtb_IC40000001 = localDW->UnitDelay_DSTATE;

    /* InitialCondition: '<S29>/IC40.000001' */
    if (localDW->IC40000001_FirstOutputTime) {
      localDW->IC40000001_FirstOutputTime = false;
      rtb_IC40000001 = 0.0;
    }

    /* End of InitialCondition: '<S29>/IC40.000001' */

    /* UnitDelay: '<S29>/Unit Delay1' */
    rtb_IC5 = localDW->UnitDelay1_DSTATE;

    /* InitialCondition: '<S29>/IC5' */
    if (localDW->IC5_FirstOutputTime) {
      localDW->IC5_FirstOutputTime = false;
      rtb_IC5 = 1.0;
    }

    /* End of InitialCondition: '<S29>/IC5' */

    /* UnitDelay: '<S29>/Unit Delay2' */
    rtb_IC6 = localDW->UnitDelay2_DSTATE;

    /* InitialCondition: '<S29>/IC6' */
    if (localDW->IC6_FirstOutputTime) {
      localDW->IC6_FirstOutputTime = false;
      rtb_IC6 = 0.8;
    }

    /* End of InitialCondition: '<S29>/IC6' */

    /* UnitDelay: '<S32>/Unit Delay' */
    rtb_UnitDelay = localDW->UnitDelay_DSTATE_a;

    /* Sum: '<S32>/Subtract' incorporates:
     *  UnitDelay: '<S32>/Unit Delay'
     */
    rtb_Subtract_d = rtu_ek - localDW->UnitDelay_DSTATE_a;

    /* Sum: '<S32>/Subtract2' incorporates:
     *  Sum: '<S32>/Subtract1'
     *  UnitDelay: '<S32>/Unit Delay'
     *  UnitDelay: '<S32>/Unit Delay1'
     */
    rtb_Subtract2 = rtb_Subtract_d - (localDW->UnitDelay_DSTATE_a -
      localDW->UnitDelay1_DSTATE_g);

    /* Sum: '<S31>/netsum' incorporates:
     *  Constant: '<S29>/xite1'
     *  Constant: '<S29>/xite3'
     *  Product: '<S31>/netprod'
     *  UnitDelay: '<S29>/Unit Delay3'
     */
    rtb_netsum_idx_0 = rtu_ek * rtu_ek * localDW->UnitDelay3_DSTATE * 0.0 +
      rtb_IC40000001;
    rtb_IC5 += rtu_ek * rtb_Subtract_d * localDW->UnitDelay3_DSTATE;
    rtb_IC6 += rtu_ek * rtb_Subtract2 * localDW->UnitDelay3_DSTATE * 0.8;

    /* Math: '<S29>/Reciprocal' incorporates:
     *  Abs: '<S29>/Abs'
     *  Sum: '<S29>/Sum1'
     *
     * About '<S29>/Reciprocal':
     *  Operator: reciprocal
     */
    rtb_IC40000001 = 1.0 / fabs((rtb_netsum_idx_0 + rtb_IC5) + rtb_IC6);

    /* Sum: '<S29>/Add' incorporates:
     *  Product: '<S29>/netprod'
     *  Product: '<S29>/netprod1'
     *  Sum: '<S29>/Sum'
     *  UnitDelay: '<S29>/Unit Delay4'
     */
    rtb_Subtract_d = ((rtb_netsum_idx_0 * rtb_IC40000001 * rtu_ek + rtb_IC5 *
                       rtb_IC40000001 * rtb_Subtract_d) + rtb_IC6 *
                      rtb_IC40000001 * rtb_Subtract2) +
      localDW->UnitDelay4_DSTATE;

    /* Saturate: '<S29>/Saturation2' */
    if (rtb_Subtract_d > 2.0) {
      localB->Saturation2 = 2.0;
    } else if (rtb_Subtract_d < -2.0) {
      localB->Saturation2 = -2.0;
    } else {
      localB->Saturation2 = rtb_Subtract_d;
    }

    /* End of Saturate: '<S29>/Saturation2' */

    /* Update for UnitDelay: '<S29>/Unit Delay' */
    localDW->UnitDelay_DSTATE = rtb_netsum_idx_0;

    /* Update for UnitDelay: '<S29>/Unit Delay1' */
    localDW->UnitDelay1_DSTATE = rtb_IC5;

    /* Update for UnitDelay: '<S29>/Unit Delay2' */
    localDW->UnitDelay2_DSTATE = rtb_IC6;

    /* Update for UnitDelay: '<S32>/Unit Delay' */
    localDW->UnitDelay_DSTATE_a = rtu_ek;

    /* Update for UnitDelay: '<S32>/Unit Delay1' */
    localDW->UnitDelay1_DSTATE_g = rtb_UnitDelay;

    /* Update for UnitDelay: '<S29>/Unit Delay3' */
    localDW->UnitDelay3_DSTATE = rtb_Subtract_d;

    /* Update for UnitDelay: '<S29>/Unit Delay4' */
    localDW->UnitDelay4_DSTATE = rtb_Subtract_d;
  }

  /* End of Outputs for SubSystem: '<S3>/SingleNNSubsystem' */
}

/* Output and update for enable system: '<S3>/SlidingModeSubsystem' */
void SlidingModeSubsystem(boolean_T rtu_Enable, real_T rtu_ek, real_T
  rtu_Longitudinal_g, real_T rtu_SpeedCommand, real_T rtu_shangpoFlag,
  B_SlidingModeSubsystem_T *localB, DW_SlidingModeSubsystem_T *localDW)
{
  real_T rtb_UnitDelay;
  real_T rtb_Add1;
  real_T rtb_Switch6_i;

  /* Outputs for Enabled SubSystem: '<S3>/SlidingModeSubsystem' incorporates:
   *  EnablePort: '<S30>/Enable'
   */
  if (rtu_Enable) {
    /* UnitDelay: '<S30>/Unit Delay' */
    rtb_UnitDelay = localDW->UnitDelay_DSTATE;

    /* Sum: '<S30>/Add1' incorporates:
     *  Constant: '<S30>/C-para'
     *  Product: '<S30>/Product'
     *  UnitDelay: '<S30>/Unit Delay'
     */
    rtb_Add1 = g_scale * rtu_ek + localDW->UnitDelay_DSTATE;

    /* Switch: '<S35>/Switch6' incorporates:
     *  Constant: '<S35>/Constant'
     */
    if (rtb_Add1 != 0.0) {
      /* Switch: '<S35>/Switch1' incorporates:
       *  Constant: '<S35>/Constant1'
       *  Constant: '<S35>/Constant2'
       */
      if (rtb_Add1 > 0.0) {
        rtb_Switch6_i = 1.0;
      } else {
        rtb_Switch6_i = -1.0;
      }

      /* End of Switch: '<S35>/Switch1' */
    } else {
      rtb_Switch6_i = 0.0;
    }

    /* End of Switch: '<S35>/Switch6' */

    /* Sum: '<S30>/Add' incorporates:
     *  Constant: '<S30>/C-para'
     *  Constant: '<S30>/E-para'
     *  Constant: '<S30>/K-para'
     *  Gain: '<S30>/Gain3'
     *  Product: '<S30>/Divide'
     *  Product: '<S30>/Divide1'
     *  Product: '<S30>/Product1'
     *  Product: '<S30>/Product2'
     *  Sum: '<S34>/Diff'
     *  UnitDelay: '<S30>/Unit Delay2'
     *  UnitDelay: '<S34>/UD'
     */
    rtb_Add1 = (((e_scale/g_scale) * rtb_Switch6_i + rtb_Add1 * (k_scale/g_scale)) + 0.1 *
                localDW->UnitDelay2_DSTATE) + (rtu_SpeedCommand -
      localDW->UD_DSTATE);

    /* Switch: '<S30>/Switch6' incorporates:
     *  Constant: '<S30>/acc1'
     */
    if (rtu_Longitudinal_g > 0.1) {
      rtb_Switch6_i = rtu_Longitudinal_g;
    } else {
      rtb_Switch6_i = 0.0;
    }

    /* End of Switch: '<S30>/Switch6' */

    /* Switch: '<S30>/Switch1' incorporates:
     *  Constant: '<S33>/Constant'
     *  Logic: '<S30>/Logical Operator4'
     *  RelationalOperator: '<S33>/Compare'
     */
    if ((rtu_SpeedCommand >= 2.0) && (rtu_shangpoFlag != 0.0)) {
      /* Switch: '<S30>/Switch2' incorporates:
       *  Gain: '<S30>/Gain2'
       *  Gain: '<S30>/Gain7'
       */
      if (rtu_ek > -0.201) {
        rtb_Switch6_i *= 0.503;

        if(rtb_Switch6_i>0.15)
        	rtb_Switch6_i = 0.15;

      } else {
        rtb_Switch6_i *= 0.0;
      }
    } else {
      /* Switch: '<S30>/Switch2' incorporates:
       *  Constant: '<S30>/acc0'
       */
      rtb_Switch6_i = 0.0;
    }

    /* End of Switch: '<S30>/Switch1' */

    /* Sum: '<S30>/Add3' incorporates:
     *  Gain: '<S30>/Gain1'
     */
    localB->Add3 = 0.6 * rtb_Add1 + rtb_Switch6_i;

    /* Update for UnitDelay: '<S30>/Unit Delay' */
    localDW->UnitDelay_DSTATE = rtu_ek;

    /* Update for UnitDelay: '<S30>/Unit Delay2' */
    localDW->UnitDelay2_DSTATE = rtb_UnitDelay;

    /* Update for UnitDelay: '<S34>/UD' */
    localDW->UD_DSTATE = rtu_SpeedCommand;
  }

  /* End of Outputs for SubSystem: '<S3>/SlidingModeSubsystem' */
}

/* Start for atomic system: '<S1>/Brake_PID_Controller' */
void Brake_Controller_Start(DW_Brake_Controller_T *localDW)
{
  /* Start for Enabled SubSystem: '<S3>/SingleNNSubsystem' */
  SingleNN_Subsystem_Start(&localDW->SingleNNSubsystem);

  /* End of Start for SubSystem: '<S3>/SingleNNSubsystem' */
}

/* Output and update for atomic system: '<S1>/Brake_PID_Controller' */
void Brake_Controller(real_T rtu_carBrake, real_T rtu_SpeedCommand, boolean_T
                      rtu_High_Speed_Logic, real_T rtu_Speed_Measured, real_T
                      rtu_Longitudinal_g, boolean_T rtu_Ramp_Logic, boolean_T
                      rtu_ifclimbramp, real_T rtu_shangpoFlag,
                      B_Brake_Controller_T *localB, DW_Brake_Controller_T
                      *localDW)
{
  real_T rtb_Add4;
  boolean_T rtb_Compare_k;
  boolean_T rtb_Compare_dy;
  real_T rtb_Switch5_l;
  real_T rtu_Speed_Measured_0;
  boolean_T rtu_SpeedCommand_0;

  /* Sum: '<S3>/Add4' */
  rtb_Add4 = rtu_SpeedCommand - rtu_Speed_Measured;

  /* RelationalOperator: '<S26>/Compare' incorporates:
   *  Constant: '<S26>/Constant'
   */
  rtb_Compare_k = (rtu_Longitudinal_g > -0.3);

  /* RelationalOperator: '<S25>/Compare' incorporates:
   *  Constant: '<S25>/Constant'
   */
  rtb_Compare_dy = (rtu_carBrake < 1.0);

  /* Switch: '<S3>/Switch9' incorporates:
   *  Constant: '<S3>/Constant9'
   *  Logic: '<S3>/Logical Operator5'
   *  Switch: '<S3>/Switch7'
   */
  if (rtu_shangpoFlag > 0.0) {
    rtb_Switch5_l = 1.0;
  } else {
    if (rtu_SpeedCommand >= 3) {
      /* Switch: '<S3>/Switch7' incorporates:
       *  Constant: '<S14>/Constant'
       *  Constant: '<S28>/Constant'
       *  Logic: '<S3>/Logical Operator8'
       *  RelationalOperator: '<S14>/Compare'
       *  RelationalOperator: '<S28>/Compare'
       */
      rtu_SpeedCommand_0 = ((rtb_Add4 >= 0.5) || (rtb_Add4 < -0.5));
    }
    else if(rtu_SpeedCommand >= 1.8)
    {
    	rtu_SpeedCommand_0 = ((rtb_Add4 >= 0.3) || (rtb_Add4 < -0.3));
    }

    else {
      /* Switch: '<S3>/Switch7' incorporates:
       *  Constant: '<S21>/Constant'
       *  Constant: '<S22>/Constant'
       *  Logic: '<S3>/Logical Operator1'
       *  RelationalOperator: '<S21>/Compare'
       *  RelationalOperator: '<S22>/Compare'
       */
      rtu_SpeedCommand_0 = ((rtb_Add4 >= 0.05) || (rtb_Add4 < -0.1));
    }

    rtb_Switch5_l = (rtu_SpeedCommand_0 && rtb_Compare_dy);
  }

  /* End of Switch: '<S3>/Switch9' */

  /* Logic: '<S3>/Logical Operator9' */
  rtb_Compare_dy = (rtu_Ramp_Logic && rtb_Compare_dy && (rtb_Switch5_l != 0.0));

  /* Outputs for Enabled SubSystem: '<S3>/SlidingModeSubsystem' */

  /* SignalConversion: '<S3>/HiddenBuf_InsertedFor_SlidingModeSubsystem_at_inport_4' */
  SlidingModeSubsystem(rtb_Compare_dy, rtb_Add4, rtu_Longitudinal_g,
                       rtu_SpeedCommand, rtu_shangpoFlag,
                       &localB->SlidingModeSubsystem_o,
                       &localDW->SlidingModeSubsystem_o);

  /* End of Outputs for SubSystem: '<S3>/SlidingModeSubsystem' */

  /* Switch: '<S3>/Switch6' incorporates:
   *  Saturate: '<S3>/Saturation4'
   */
  if (rtu_Speed_Measured > 0.6) {
    /* Saturate: '<S3>/Saturation3' */
    if (rtb_Add4 > 1.0) {
      rtu_Speed_Measured_0 = 1.0;
    } else if (rtb_Add4 < -1.0) {
      rtu_Speed_Measured_0 = -1.0;
    } else {
      rtu_Speed_Measured_0 = rtb_Add4;
    }

    /* End of Saturate: '<S3>/Saturation3' */
  } else if (rtb_Add4 > 0.3) {
    /* Saturate: '<S3>/Saturation4' */
    rtu_Speed_Measured_0 = 0.3;
  } else if (rtb_Add4 < -0.3) {
    /* Saturate: '<S3>/Saturation4' */
    rtu_Speed_Measured_0 = -0.3;
  } else {
    /* Saturate: '<S3>/Saturation4' */
    rtu_Speed_Measured_0 = rtb_Add4;
  }

  /* End of Switch: '<S3>/Switch6' */

  /* Outputs for Enabled SubSystem: '<S3>/SingleNNSubsystem' */

  /* Logic: '<S3>/Logical Operator4' incorporates:
   *  RelationalOperator: '<S13>/Compare'
   */
  SingleNN_Subsystem((rtb_Switch5_l != 0.0) && (!rtb_Compare_dy),
                     rtu_Speed_Measured_0, &localB->SingleNNSubsystem,
                     &localDW->SingleNNSubsystem);

  /* End of Outputs for SubSystem: '<S3>/SingleNNSubsystem' */

  /* Switch: '<S3>/Switch3' */
  if (rtb_Switch5_l >= 1.0) {
    /* Switch: '<S3>/Switch2' */
    if (rtb_Compare_dy) {
      rtb_Switch5_l = localB->SlidingModeSubsystem_o.Add3;
    } else {
      rtb_Switch5_l = localB->SingleNNSubsystem.Saturation2;
    }

    /* End of Switch: '<S3>/Switch2' */

    /* Saturate: '<S3>/Saturation1' */
    if (rtb_Switch5_l > 2.0) {
      rtb_Switch5_l = 2.0;
    } else {
      if (rtb_Switch5_l < -2.0) {
        rtb_Switch5_l = -2.0;
      }
    }

    /* End of Saturate: '<S3>/Saturation1' */
  }

  /* End of Switch: '<S3>/Switch3' */

  /* Logic: '<S3>/Logical Operator3' incorporates:
   *  Abs: '<S3>/Abs'
   *  Constant: '<S18>/Constant'
   *  Constant: '<S19>/Constant'
   *  Constant: '<S27>/Constant'
   *  Logic: '<S3>/Logical Operator12'
   *  Logic: '<S3>/Logical Operator6'
   *  Logic: '<S3>/Logical Operator7'
   *  RelationalOperator: '<S18>/Compare'
   *  RelationalOperator: '<S19>/Compare'
   *  RelationalOperator: '<S27>/Compare'
   */
  rtb_Compare_k = (((rtb_Compare_k && (rtb_Switch5_l > 0.0)) || (rtb_Compare_k &&
    (rtb_Switch5_l < 0.0) && (fabs(rtb_Add4) < 0.3))) && rtu_High_Speed_Logic);

  /* RelationalOperator: '<S24>/Compare' incorporates:
   *  Constant: '<S24>/Constant'
   */
  rtb_Compare_dy = (rtb_Switch5_l == 0.0);

  /* Switch: '<S3>/Switch5' incorporates:
   *  Constant: '<S15>/Constant'
   *  Constant: '<S23>/Constant'
   *  Constant: '<S3>/Constant7'
   *  Logic: '<S3>/Logical Operator11'
   *  RelationalOperator: '<S15>/Compare'
   *  RelationalOperator: '<S16>/Compare'
   *  RelationalOperator: '<S23>/Compare'
   */
  if ((rtu_SpeedCommand > 0.0) && (rtu_Speed_Measured <= 0.15) &&
      (!rtu_ifclimbramp)) {
    rtb_Switch5_l = 0.1;
  }

  /* End of Switch: '<S3>/Switch5' */

  /* Saturate: '<S3>/Saturation2' */
  if (rtb_Switch5_l > 1.0) {
    localB->Saturation2 = 1.0;
  } else {
    localB->Saturation2 = rtb_Switch5_l;
  }

  /* End of Saturate: '<S3>/Saturation2' */

  /* Switch: '<S3>/Switch8' incorporates:
   *  Constant: '<S3>/Constant3'
   *  Constant: '<S3>/Constant6'
   *  Constant: '<S3>/Constant8'
   *  Sum: '<S3>/Add'
   *  Switch: '<S3>/Switch1'
   *  Switch: '<S3>/Switch4'
   */
  if (rtb_Compare_dy) {
    localB->Switch8 = 3.0;
  } else if (1 - rtb_Compare_k >= 1) {
    /* Switch: '<S3>/Switch4' incorporates:
     *  Constant: '<S3>/Constant5'
     */
    localB->Switch8 = 1.0;
  } else {
    localB->Switch8 = 2.0;
  }

  /* End of Switch: '<S3>/Switch8' */
}

/* Model step function */
void baic_car_longitudinal_custom(real_T IN_shangpoFlag, real_T IN_Shifter,
  real_T IN_Speed_Command_Planner, real_T IN_Speed_Measured, real_T
  IN_carBrakeStatus, real_T IN_Longitudinal_acc, real_T
  *OUT_ACC_TARGET_ACCELERATION, real_T *OUT_accFlag)
{
  real_T rtb_u0ms_Gain;
  real_T rtb_DiscreteFilter2;
  real_T rtb_Switch1;
  real_T rtb_DiscreteFilter1;
  real_T DiscreteFilter2_tmp;

  /* Switch: '<S1>/Switch1' incorporates:
   *  Constant: '<S1>/Stp_throttler2'
   *  Inport: '<Root>/ carBrakeStatus'
   *  Inport: '<Root>/Speed_Command_Planner'
   */
  if (IN_carBrakeStatus >= 1.0) {
    rtb_Switch1 = 0.0;
  } else {
    rtb_Switch1 = IN_Speed_Command_Planner;
  }

  /* End of Switch: '<S1>/Switch1' */

  /* DiscreteFilter: '<S4>/Discrete Filter2' incorporates:
   *  Gain: '<S4>/20ms_Gain'
   *  Inport: '<Root>/ Speed_Measured'
   *  Sum: '<S36>/Diff'
   *  UnitDelay: '<S36>/UD'
   */
  DiscreteFilter2_tmp = (IN_Speed_Measured -
    baic_car_longitudinal_ok_DW.UD_DSTATE) * 50.0 - -0.95 *
    baic_car_longitudinal_ok_DW.DiscreteFilter2_states;

  /* DiscreteFilter: '<S4>/Discrete Filter3' incorporates:
   *  Inport: '<Root>/ Longitudinal_acc'
   */
  rtb_u0ms_Gain = IN_Longitudinal_acc - -0.9 *
    baic_car_longitudinal_ok_DW.DiscreteFilter3_states;

  /* DiscreteFilter: '<S4>/Discrete Filter1' incorporates:
   *  DiscreteFilter: '<S4>/Discrete Filter2'
   *  DiscreteFilter: '<S4>/Discrete Filter3'
   *  Inport: '<Root>/Shifter'
   *  Product: '<S4>/Product'
   *  Sum: '<S4>/Subtract'
   */
  rtb_DiscreteFilter2 = (0.1 * rtb_u0ms_Gain * IN_Shifter - 0.05 *
    DiscreteFilter2_tmp) - -0.9 *
    baic_car_longitudinal_ok_DW.DiscreteFilter1_states;
  rtb_DiscreteFilter1 = 0.1 * rtb_DiscreteFilter2;

  /* Switch: '<S1>/Switch5' */
  if (!(rtb_DiscreteFilter1 >= -0.3)) {
    /* Saturate: '<S1>/Saturation1' */
    if (rtb_Switch1 > 1.8) {
      rtb_Switch1 = 1.8;
    } else {
      if (rtb_Switch1 < 0.0) {
        rtb_Switch1 = 0.0;
      }
    }

    /* End of Saturate: '<S1>/Saturation1' */
  }

  /* End of Switch: '<S1>/Switch5' */

  /* Outputs for Atomic SubSystem: '<S1>/ Switch Logic' */

  /* Inport: '<Root>/Shifter' incorporates:
   *  Inport: '<Root>/ Speed_Measured'
   *  Inport: '<Root>/ shangpoFlag'
   */
  Throttle_Brake_Switch_Logic(rtb_Switch1, IN_Shifter, IN_Speed_Measured,
    rtb_DiscreteFilter1, IN_shangpoFlag, &baic_car_longitudinal_ok_B.SwitchLogic);

  /* End of Outputs for SubSystem: '<S1>/ Switch Logic' */

  /* Outputs for Atomic SubSystem: '<S1>/Brake_PID_Controller' */

  /* Inport: '<Root>/ carBrakeStatus' incorporates:
   *  Inport: '<Root>/ Speed_Measured'
   *  Inport: '<Root>/ shangpoFlag'
   */
  Brake_Controller(IN_carBrakeStatus, rtb_Switch1,
                   baic_car_longitudinal_ok_B.SwitchLogic.LogicalOperator2,
                   IN_Speed_Measured, rtb_DiscreteFilter1,
                   baic_car_longitudinal_ok_B.SwitchLogic.LogicalOperator3,
                   baic_car_longitudinal_ok_B.SwitchLogic.Compare,
                   IN_shangpoFlag,
                   &baic_car_longitudinal_ok_B.Brake_PID_Controller,
                   &baic_car_longitudinal_ok_DW.Brake_PID_Controller);

  /* End of Outputs for SubSystem: '<S1>/Brake_PID_Controller' */

  /* Switch: '<S1>/Switch2' incorporates:
   *  Constant: '<S1>/Stp_throttler1'
   *  Inport: '<Root>/Shifter'
   */
  if (IN_Shifter != 0.0) {
    rtb_DiscreteFilter1 =
      baic_car_longitudinal_ok_B.Brake_PID_Controller.Saturation2;
  } else {
    rtb_DiscreteFilter1 = -1.38;
  }

  /* End of Switch: '<S1>/Switch2' */

  /* RateLimiter: '<S1>/Rate Limiter1' */
  rtb_Switch1 = rtb_DiscreteFilter1 - baic_car_longitudinal_ok_DW.PrevY;
  if (rtb_Switch1 > 0.1) {
    rtb_DiscreteFilter1 = baic_car_longitudinal_ok_DW.PrevY + 0.1;
  } else {
    if (rtb_Switch1 < -0.1) {
      rtb_DiscreteFilter1 = baic_car_longitudinal_ok_DW.PrevY + -0.1;
    }
  }

  baic_car_longitudinal_ok_DW.PrevY = rtb_DiscreteFilter1;

  /* End of RateLimiter: '<S1>/Rate Limiter1' */

  /* Outport: '<Root>/ACC_TARGET_ACCELERATION' */
  *OUT_ACC_TARGET_ACCELERATION = rtb_DiscreteFilter1;

  /* Outport: '<Root>/accFlag' */
  *OUT_accFlag = baic_car_longitudinal_ok_B.Brake_PID_Controller.Switch8;

  /* Update for UnitDelay: '<S36>/UD' incorporates:
   *  Update for Inport: '<Root>/ Speed_Measured'
   */
  baic_car_longitudinal_ok_DW.UD_DSTATE = IN_Speed_Measured;

  /* Update for DiscreteFilter: '<S4>/Discrete Filter2' */
  baic_car_longitudinal_ok_DW.DiscreteFilter2_states = DiscreteFilter2_tmp;

  /* Update for DiscreteFilter: '<S4>/Discrete Filter3' */
  baic_car_longitudinal_ok_DW.DiscreteFilter3_states = rtb_u0ms_Gain;

  /* Update for DiscreteFilter: '<S4>/Discrete Filter1' */
  baic_car_longitudinal_ok_DW.DiscreteFilter1_states = rtb_DiscreteFilter2;

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The resolution of this integer timer is 0.05, which is the step size
   * of the task. Size of "clockTick0" ensures timer will not overflow during the
   * application lifespan selected.
   */
  baic_car_longitudinal_ok_M->Timing.clockTick0++;
}

/* Model initialize function */
void baic_car_longitudinal_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)baic_car_longitudinal_ok_M, 0,
                sizeof(RT_MODEL_baic_car_longitudina_T));

  /* block I/O */
  (void) memset(((void *) &baic_car_longitudinal_ok_B), 0,
                sizeof(B_baic_car_longitudinal_ok_T));

  /* states (dwork) */
  (void) memset((void *)&baic_car_longitudinal_ok_DW, 0,
                sizeof(DW_baic_car_longitudinal_ok_T));

  /* Start for Atomic SubSystem: '<S1>/Brake_PID_Controller' */
  Brake_Controller_Start(&baic_car_longitudinal_ok_DW.Brake_PID_Controller);

  /* End of Start for SubSystem: '<S1>/Brake_PID_Controller' */

  /* InitializeConditions for RateLimiter: '<S1>/Rate Limiter1' */
  baic_car_longitudinal_ok_DW.PrevY = 0.0;
  printf("-------------baic_car_longitudinal_initialize----------------");
}

/* Model terminate function */
void baic_car_longitudinal_ok_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
