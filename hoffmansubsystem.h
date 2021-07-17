/*
 * hoffmansubsystem.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "hoffmansubsystem".
 *
 * Model version              : 4.1
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C++ source code generated on : Mon May 24 02:35:19 2021
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_hoffmansubsystem_h_
#define RTW_HEADER_hoffmansubsystem_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "slros_initialize.h"
#include "hoffmansubsystem_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#include "rt_defines.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block signals (default storage) */
struct B_hoffmansubsystem_T {
  real_T TmpSignalConversionAtSFunct[30000];/* '<S3>/calculate e' */
  real_T ys[10000];                    /* '<S4>/straight line' */
  SL_Bus_hoffmansubsystem_nav_msgs_Odometry In1;/* '<S13>/In1' */
  SL_Bus_hoffmansubsystem_nav_msgs_Odometry b_varargout_2;
  SL_Bus_hoffmansubsystem_InteractiveMarkerPose_av2ao9 BusAssignment2;/* '<Root>/Bus Assignment2' */
  SL_Bus_hoffmansubsystem_geometry_msgs_Twist In1_k;/* '<S16>/In1' */
  SL_Bus_hoffmansubsystem_geometry_msgs_Twist BusAssignment1;/* '<Root>/Bus Assignment1' */
  real_T etmp;
  real_T e;                            /* '<S3>/calculate e' */
};

/* Block states (default storage) for system '<Root>' */
struct DW_hoffmansubsystem_T {
  ros_slros_internal_block_GetP_T obj; /* '<Root>/Get Parameter' */
  ros_slroscpp_internal_block_S_T obj_p;/* '<S7>/SourceBlock' */
  ros_slroscpp_internal_block_S_T obj_i;/* '<S5>/SourceBlock' */
  ros_slroscpp_internal_block_P_T obj_pi;/* '<S15>/SinkBlock' */
  ros_slroscpp_internal_block_P_T obj_m;/* '<S14>/SinkBlock' */
  boolean_T objisempty;                /* '<S7>/SourceBlock' */
  boolean_T objisempty_h;              /* '<S15>/SinkBlock' */
  boolean_T objisempty_m;              /* '<S14>/SinkBlock' */
  boolean_T objisempty_c;              /* '<S5>/SourceBlock' */
  boolean_T objisempty_c4;             /* '<Root>/Get Parameter' */
};

/* Parameters (default storage) */
struct P_hoffmansubsystem_T_ {
  SL_Bus_hoffmansubsystem_nav_msgs_Odometry Out1_Y0;/* Computed Parameter: Out1_Y0
                                                     * Referenced by: '<S13>/Out1'
                                                     */
  SL_Bus_hoffmansubsystem_nav_msgs_Odometry Constant_Value;/* Computed Parameter: Constant_Value
                                                            * Referenced by: '<S5>/Constant'
                                                            */
  SL_Bus_hoffmansubsystem_InteractiveMarkerPose_av2ao9 Constant_Value_b;/* Computed Parameter: Constant_Value_b
                                                                      * Referenced by: '<S2>/Constant'
                                                                      */
  SL_Bus_hoffmansubsystem_geometry_msgs_Twist Constant_Value_l;/* Computed Parameter: Constant_Value_l
                                                                * Referenced by: '<S1>/Constant'
                                                                */
  SL_Bus_hoffmansubsystem_geometry_msgs_Twist Out1_Y0_n;/* Computed Parameter: Out1_Y0_n
                                                         * Referenced by: '<S16>/Out1'
                                                         */
  SL_Bus_hoffmansubsystem_geometry_msgs_Twist Constant_Value_j;/* Computed Parameter: Constant_Value_j
                                                                * Referenced by: '<S7>/Constant'
                                                                */
  real_T k1_Value;                     /* Expression: 0
                                        * Referenced by: '<S3>/k1'
                                        */
  real_T Constant_Value_je;            /* Expression: 1
                                        * Referenced by: '<S21>/Constant'
                                        */
  real_T Constant_Value_o;             /* Expression: 1
                                        * Referenced by: '<S22>/Constant'
                                        */
  real_T heading_Value;                /* Expression: 0
                                        * Referenced by: '<S4>/heading'
                                        */
  real_T Switch_Threshold;             /* Expression: 4
                                        * Referenced by: '<S3>/Switch'
                                        */
  real_T Gain_Gain;                    /* Expression: -1
                                        * Referenced by: '<S3>/Gain'
                                        */
  real_T Constant_Value_bw;            /* Expression: 0
                                        * Referenced by: '<S9>/Constant'
                                        */
  real_T u2_Gain;                      /* Expression: 0.5
                                        * Referenced by: '<S26>/1//2'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_hoffmansubsystem_T {
  const char_T *errorStatus;
};

/* Block parameters (default storage) */
#ifdef __cplusplus

extern "C" {

#endif

  extern P_hoffmansubsystem_T hoffmansubsystem_P;

#ifdef __cplusplus

}
#endif

/* Block signals (default storage) */
#ifdef __cplusplus

extern "C" {

#endif

  extern struct B_hoffmansubsystem_T hoffmansubsystem_B;

#ifdef __cplusplus

}
#endif

/* Block states (default storage) */
extern struct DW_hoffmansubsystem_T hoffmansubsystem_DW;

#ifdef __cplusplus

extern "C" {

#endif

  /* Model entry point functions */
  extern void hoffmansubsystem_initialize(void);
  extern void hoffmansubsystem_step(void);
  extern void hoffmansubsystem_terminate(void);

#ifdef __cplusplus

}
#endif

/* Real-time Model object */
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_hoffmansubsystem_T *const hoffmansubsystem_M;

#ifdef __cplusplus

}
#endif

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
 * '<Root>' : 'hoffmansubsystem'
 * '<S1>'   : 'hoffmansubsystem/Blank Message for cmd_vel'
 * '<S2>'   : 'hoffmansubsystem/Blank Message1'
 * '<S3>'   : 'hoffmansubsystem/Hoffmann Controller1'
 * '<S4>'   : 'hoffmansubsystem/Select desired path'
 * '<S5>'   : 'hoffmansubsystem/Subscribe3'
 * '<S6>'   : 'hoffmansubsystem/Subsystem'
 * '<S7>'   : 'hoffmansubsystem/Velocity from control block '
 * '<S8>'   : 'hoffmansubsystem/quaternion2heading'
 * '<S9>'   : 'hoffmansubsystem/yaw2quat'
 * '<S10>'  : 'hoffmansubsystem/Hoffmann Controller1/calculate delta'
 * '<S11>'  : 'hoffmansubsystem/Hoffmann Controller1/calculate e'
 * '<S12>'  : 'hoffmansubsystem/Select desired path/straight line'
 * '<S13>'  : 'hoffmansubsystem/Subscribe3/Enabled Subsystem'
 * '<S14>'  : 'hoffmansubsystem/Subsystem/Publish for follower vel'
 * '<S15>'  : 'hoffmansubsystem/Subsystem/Publish1'
 * '<S16>'  : 'hoffmansubsystem/Velocity from control block /Enabled Subsystem'
 * '<S17>'  : 'hoffmansubsystem/quaternion2heading/Quaternions to Rotation Angles'
 * '<S18>'  : 'hoffmansubsystem/quaternion2heading/Quaternions to Rotation Angles/Angle Calculation'
 * '<S19>'  : 'hoffmansubsystem/quaternion2heading/Quaternions to Rotation Angles/Quaternion Normalize'
 * '<S20>'  : 'hoffmansubsystem/quaternion2heading/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input'
 * '<S21>'  : 'hoffmansubsystem/quaternion2heading/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input/If Action Subsystem'
 * '<S22>'  : 'hoffmansubsystem/quaternion2heading/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input/If Action Subsystem1'
 * '<S23>'  : 'hoffmansubsystem/quaternion2heading/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input/If Action Subsystem2'
 * '<S24>'  : 'hoffmansubsystem/quaternion2heading/Quaternions to Rotation Angles/Quaternion Normalize/Quaternion Modulus'
 * '<S25>'  : 'hoffmansubsystem/quaternion2heading/Quaternions to Rotation Angles/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
 * '<S26>'  : 'hoffmansubsystem/yaw2quat/Rotation Angles to Quaternions'
 */
#endif                                 /* RTW_HEADER_hoffmansubsystem_h_ */
