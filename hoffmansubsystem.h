/*
 * hoffmansubsystem.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "hoffmansubsystem".
 *
 * Model version              : 1.478
 * Simulink Coder version : 8.12 (R2017a) 16-Feb-2017
 * C++ source code generated on : Wed May 16 21:11:53 2018
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
#include "rt_defines.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block signals (auto storage) */
typedef struct {
  real_T MultiportSwitch[903];         /* '<S7>/Multiport Switch' */
  creal_T r[301];
  real_T ys[301];                      /* '<S7>/straight line' */
  real_T xs[301];                      /* '<S7>/straight line' */
  SL_Bus_hoffmansubsystem_nav_msgs_Odometry In1;/* '<S21>/In1' */
  SL_Bus_hoffmansubsystem_nav_msgs_Odometry varargout_2;
  SL_Bus_hoffmansubsystem_InteractiveMarkerPose_av2ao9 BusAssignment2;/* '<Root>/Bus Assignment2' */
  SL_Bus_hoffmansubsystem_geometry_msgs_Twist In1_k;/* '<S22>/In1' */
  SL_Bus_hoffmansubsystem_geometry_msgs_Twist BusAssignment1;/* '<Root>/Bus Assignment1' */
  real_T delta1;
  real_T q3;                           /* '<S27>/q3' */
} B_hoffmansubsystem_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  struct {
    void *LoggedData[2];
  } Scope_PWORK;                       /* '<S4>/Scope' */

  void *SourceBlock_PWORK;             /* '<S9>/SourceBlock' */
  void *SourceBlock_PWORK_m;           /* '<S8>/SourceBlock' */
  void *SinkBlock_PWORK;               /* '<S6>/SinkBlock' */
  void *SinkBlock_PWORK_d;             /* '<S5>/SinkBlock' */
  robotics_slros_internal_block_T obj; /* '<S6>/SinkBlock' */
  robotics_slros_internal_block_T obj_m;/* '<S5>/SinkBlock' */
  robotics_slros_internal_blo_p_T obj_p;/* '<S9>/SourceBlock' */
  robotics_slros_internal_blo_p_T obj_i;/* '<S8>/SourceBlock' */
  boolean_T objisempty;                /* '<S9>/SourceBlock' */
  boolean_T objisempty_c;              /* '<S8>/SourceBlock' */
  boolean_T objisempty_h;              /* '<S6>/SinkBlock' */
  boolean_T objisempty_m;              /* '<S5>/SinkBlock' */
} DW_hoffmansubsystem_T;

/* Parameters (auto storage) */
struct P_hoffmansubsystem_T_ {
  SL_Bus_hoffmansubsystem_nav_msgs_Odometry Out1_Y0;/* Computed Parameter: Out1_Y0
                                                     * Referenced by: '<S21>/Out1'
                                                     */
  SL_Bus_hoffmansubsystem_nav_msgs_Odometry Constant_Value;/* Computed Parameter: Constant_Value
                                                            * Referenced by: '<S8>/Constant'
                                                            */
  SL_Bus_hoffmansubsystem_InteractiveMarkerPose_av2ao9 Constant_Value_b;/* Computed Parameter: Constant_Value_b
                                                                      * Referenced by: '<S2>/Constant'
                                                                      */
  SL_Bus_hoffmansubsystem_geometry_msgs_Twist Out1_Y0_n;/* Computed Parameter: Out1_Y0_n
                                                         * Referenced by: '<S22>/Out1'
                                                         */
  SL_Bus_hoffmansubsystem_geometry_msgs_Twist Constant_Value_j;/* Computed Parameter: Constant_Value_j
                                                                * Referenced by: '<S9>/Constant'
                                                                */
  SL_Bus_hoffmansubsystem_geometry_msgs_Twist Constant_Value_l;/* Computed Parameter: Constant_Value_l
                                                                * Referenced by: '<S1>/Constant'
                                                                */
  real_T k1_Value;                     /* Expression: 0
                                        * Referenced by: '<S4>/k1'
                                        */
  real_T pathChoice_Value;             /* Expression: 1
                                        * Referenced by: '<S7>/pathChoice '
                                        */
  real_T radius_Value;                 /* Expression: 36.6
                                        * Referenced by: '<S7>/radius'
                                        */
  real_T startpoint_Value[2];          /* Expression: [36.606 0]
                                        * Referenced by: '<S7>/start point'
                                        */
  real_T len_Value;                    /* Expression: 36.6
                                        * Referenced by: '<S7>/len'
                                        */
  real_T heading_Value;                /* Expression: 0
                                        * Referenced by: '<S7>/heading'
                                        */
  real_T Switch_Threshold;             /* Expression: 4
                                        * Referenced by: '<S4>/Switch'
                                        */
  real_T k_Value;                      /* Expression: .7
                                        * Referenced by: '<S4>/k'
                                        */
  real_T Gain_Gain;                    /* Expression: -1
                                        * Referenced by: '<S4>/Gain'
                                        */
  real_T Constant_Value_bw;            /* Expression: 0
                                        * Referenced by: '<S11>/Constant'
                                        */
  real_T u2_Gain;                      /* Expression: 0.5
                                        * Referenced by: '<S27>/1//2'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_hoffmansubsystem_T {
  const char_T *errorStatus;
};

/* Block parameters (auto storage) */
#ifdef __cplusplus

extern "C" {

#endif

  extern P_hoffmansubsystem_T hoffmansubsystem_P;

#ifdef __cplusplus

}
#endif

/* Block signals (auto storage) */
extern B_hoffmansubsystem_T hoffmansubsystem_B;

/* Block states (auto storage) */
extern DW_hoffmansubsystem_T hoffmansubsystem_DW;

#ifdef __cplusplus

extern "C" {

#endif

#ifdef __cplusplus

}
#endif

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
 * '<S3>'   : 'hoffmansubsystem/Hoffmann Controller'
 * '<S4>'   : 'hoffmansubsystem/Hoffmann Controller1'
 * '<S5>'   : 'hoffmansubsystem/Publish for follower vel'
 * '<S6>'   : 'hoffmansubsystem/Publish1'
 * '<S7>'   : 'hoffmansubsystem/Select desired path'
 * '<S8>'   : 'hoffmansubsystem/Subscribe3'
 * '<S9>'   : 'hoffmansubsystem/Velocity from control block '
 * '<S10>'  : 'hoffmansubsystem/quaternion2heading'
 * '<S11>'  : 'hoffmansubsystem/yaw2quat'
 * '<S12>'  : 'hoffmansubsystem/Hoffmann Controller/calculate delta'
 * '<S13>'  : 'hoffmansubsystem/Hoffmann Controller/calculate e'
 * '<S14>'  : 'hoffmansubsystem/Hoffmann Controller1/calculate delta'
 * '<S15>'  : 'hoffmansubsystem/Hoffmann Controller1/calculate e'
 * '<S16>'  : 'hoffmansubsystem/Select desired path/Calculate Path'
 * '<S17>'  : 'hoffmansubsystem/Select desired path/Subscribe1'
 * '<S18>'  : 'hoffmansubsystem/Select desired path/circle centered'
 * '<S19>'  : 'hoffmansubsystem/Select desired path/straight line'
 * '<S20>'  : 'hoffmansubsystem/Select desired path/Subscribe1/Enabled Subsystem'
 * '<S21>'  : 'hoffmansubsystem/Subscribe3/Enabled Subsystem'
 * '<S22>'  : 'hoffmansubsystem/Velocity from control block /Enabled Subsystem'
 * '<S23>'  : 'hoffmansubsystem/quaternion2heading/Quaternions to Rotation Angles'
 * '<S24>'  : 'hoffmansubsystem/quaternion2heading/Quaternions to Rotation Angles/Quaternion Normalize'
 * '<S25>'  : 'hoffmansubsystem/quaternion2heading/Quaternions to Rotation Angles/Quaternion Normalize/Quaternion Modulus'
 * '<S26>'  : 'hoffmansubsystem/quaternion2heading/Quaternions to Rotation Angles/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
 * '<S27>'  : 'hoffmansubsystem/yaw2quat/Rotation Angles to Quaternions'
 */
#endif                                 /* RTW_HEADER_hoffmansubsystem_h_ */
