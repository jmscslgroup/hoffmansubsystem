/*
 * hoffmansubsystem.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "hoffmansubsystem".
 *
 * Model version              : 1.506
 * Simulink Coder version : 9.1 (R2019a) 23-Nov-2018
 * C++ source code generated on : Wed Oct 30 12:47:55 2019
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
#include <stddef.h>
#include <string.h>
#ifndef hoffmansubsystem_COMMON_INCLUDES_
# define hoffmansubsystem_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "slros_initialize.h"
#endif                                 /* hoffmansubsystem_COMMON_INCLUDES_ */

#include "hoffmansubsystem_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#include "rtGetNaN.h"
#include "rt_defines.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block signals (default storage) */
typedef struct {
  real_T MultiportSwitch[9003];        /* '<S4>/Multiport Switch' */
  creal_T r[3001];
  real_T ys[3001];                     /* '<S4>/straight line' */
  real_T xs[3001];                     /* '<S4>/straight line' */
  SL_Bus_hoffmansubsystem_nav_msgs_Odometry In1;/* '<S14>/In1' */
  SL_Bus_hoffmansubsystem_nav_msgs_Odometry b_varargout_2;
  SL_Bus_hoffmansubsystem_InteractiveMarkerPose_av2ao9 BusAssignment2;/* '<Root>/Bus Assignment2' */
  SL_Bus_hoffmansubsystem_geometry_msgs_Twist In1_k;/* '<S17>/In1' */
  SL_Bus_hoffmansubsystem_geometry_msgs_Twist BusAssignment1;/* '<Root>/Bus Assignment1' */
  char_T cv0[28];
  creal_T r_m;
  real_T etmp;
  real_T Product3;                     /* '<S20>/Product3' */
  real_T Product2;                     /* '<S20>/Product2' */
  real_T q0;                           /* '<S27>/q0' */
  real_T rtb_sincos_o2_idx_0;
} B_hoffmansubsystem_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  robotics_slros_internal_block_T obj; /* '<S4>/Get Parameter1' */
  robotics_slros_internal_block_T obj_o;/* '<Root>/Get Parameter7' */
  robotics_slros_internal_blo_p_T obj_p;/* '<S7>/SourceBlock' */
  robotics_slros_internal_blo_p_T obj_i;/* '<S5>/SourceBlock' */
  robotics_slros_internal_bl_px_T obj_pi;/* '<S16>/SinkBlock' */
  robotics_slros_internal_bl_px_T obj_m;/* '<S15>/SinkBlock' */
  struct {
    void *LoggedData[2];
  } Scope_PWORK;                       /* '<S3>/Scope' */

  boolean_T objisempty;                /* '<S7>/SourceBlock' */
  boolean_T objisempty_h;              /* '<S16>/SinkBlock' */
  boolean_T objisempty_m;              /* '<S15>/SinkBlock' */
  boolean_T objisempty_c;              /* '<S5>/SourceBlock' */
  boolean_T objisempty_g;              /* '<S4>/Get Parameter1' */
  boolean_T objisempty_cw;             /* '<Root>/Get Parameter7' */
} DW_hoffmansubsystem_T;

/* Parameters (default storage) */
struct P_hoffmansubsystem_T_ {
  SL_Bus_hoffmansubsystem_nav_msgs_Odometry Out1_Y0;/* Computed Parameter: Out1_Y0
                                                     * Referenced by: '<S14>/Out1'
                                                     */
  SL_Bus_hoffmansubsystem_nav_msgs_Odometry Constant_Value;/* Computed Parameter: Constant_Value
                                                            * Referenced by: '<S5>/Constant'
                                                            */
  SL_Bus_hoffmansubsystem_InteractiveMarkerPose_av2ao9 Constant_Value_b;/* Computed Parameter: Constant_Value_b
                                                                      * Referenced by: '<S2>/Constant'
                                                                      */
  SL_Bus_hoffmansubsystem_geometry_msgs_Twist Out1_Y0_n;/* Computed Parameter: Out1_Y0_n
                                                         * Referenced by: '<S17>/Out1'
                                                         */
  SL_Bus_hoffmansubsystem_geometry_msgs_Twist Constant_Value_j;/* Computed Parameter: Constant_Value_j
                                                                * Referenced by: '<S7>/Constant'
                                                                */
  SL_Bus_hoffmansubsystem_geometry_msgs_Twist Constant_Value_l;/* Computed Parameter: Constant_Value_l
                                                                * Referenced by: '<S1>/Constant'
                                                                */
  real_T k1_Value;                     /* Expression: 0
                                        * Referenced by: '<S3>/k1'
                                        */
  real_T Constant_Value_je;            /* Expression: 1
                                        * Referenced by: '<S22>/Constant'
                                        */
  real_T Constant_Value_o;             /* Expression: 1
                                        * Referenced by: '<S23>/Constant'
                                        */
  real_T pathChoice_Value;             /* Expression: 1
                                        * Referenced by: '<S4>/pathChoice '
                                        */
  real_T Constant_Value_lw;            /* Expression: 0.0
                                        * Referenced by: '<S4>/Constant'
                                        */
  real_T len_Value;                    /* Expression: 36.6
                                        * Referenced by: '<S4>/len'
                                        */
  real_T heading_Value;                /* Expression: 0
                                        * Referenced by: '<S4>/heading'
                                        */
  real_T Switch_Threshold;             /* Expression: 4
                                        * Referenced by: '<S3>/Switch'
                                        */
  real_T k_Value;                      /* Expression: .7
                                        * Referenced by: '<S3>/k'
                                        */
  real_T Gain_Gain;                    /* Expression: -1
                                        * Referenced by: '<S3>/Gain'
                                        */
  real_T Constant_Value_bw;            /* Expression: 0
                                        * Referenced by: '<S9>/Constant'
                                        */
  real_T u2_Gain;                      /* Expression: 0.5
                                        * Referenced by: '<S27>/1//2'
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
extern B_hoffmansubsystem_T hoffmansubsystem_B;

/* Block states (default storage) */
extern DW_hoffmansubsystem_T hoffmansubsystem_DW;

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
 * '<S12>'  : 'hoffmansubsystem/Select desired path/circle centered'
 * '<S13>'  : 'hoffmansubsystem/Select desired path/straight line'
 * '<S14>'  : 'hoffmansubsystem/Subscribe3/Enabled Subsystem'
 * '<S15>'  : 'hoffmansubsystem/Subsystem/Publish for follower vel'
 * '<S16>'  : 'hoffmansubsystem/Subsystem/Publish1'
 * '<S17>'  : 'hoffmansubsystem/Velocity from control block /Enabled Subsystem'
 * '<S18>'  : 'hoffmansubsystem/quaternion2heading/Quaternions to Rotation Angles'
 * '<S19>'  : 'hoffmansubsystem/quaternion2heading/Quaternions to Rotation Angles/Angle Calculation'
 * '<S20>'  : 'hoffmansubsystem/quaternion2heading/Quaternions to Rotation Angles/Quaternion Normalize'
 * '<S21>'  : 'hoffmansubsystem/quaternion2heading/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input'
 * '<S22>'  : 'hoffmansubsystem/quaternion2heading/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input/If Action Subsystem'
 * '<S23>'  : 'hoffmansubsystem/quaternion2heading/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input/If Action Subsystem1'
 * '<S24>'  : 'hoffmansubsystem/quaternion2heading/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input/If Action Subsystem2'
 * '<S25>'  : 'hoffmansubsystem/quaternion2heading/Quaternions to Rotation Angles/Quaternion Normalize/Quaternion Modulus'
 * '<S26>'  : 'hoffmansubsystem/quaternion2heading/Quaternions to Rotation Angles/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
 * '<S27>'  : 'hoffmansubsystem/yaw2quat/Rotation Angles to Quaternions'
 */
#endif                                 /* RTW_HEADER_hoffmansubsystem_h_ */
