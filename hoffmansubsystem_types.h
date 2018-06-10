/*
 * hoffmansubsystem_types.h
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

#ifndef RTW_HEADER_hoffmansubsystem_types_h_
#define RTW_HEADER_hoffmansubsystem_types_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_hoffmansubsystem_geometry_msgs_Vector3_
#define DEFINED_TYPEDEF_FOR_SL_Bus_hoffmansubsystem_geometry_msgs_Vector3_

typedef struct {
  real_T X;
  real_T Y;
  real_T Z;
} SL_Bus_hoffmansubsystem_geometry_msgs_Vector3;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_hoffmansubsystem_geometry_msgs_Twist_
#define DEFINED_TYPEDEF_FOR_SL_Bus_hoffmansubsystem_geometry_msgs_Twist_

typedef struct {
  SL_Bus_hoffmansubsystem_geometry_msgs_Vector3 Linear;
  SL_Bus_hoffmansubsystem_geometry_msgs_Vector3 Angular;
} SL_Bus_hoffmansubsystem_geometry_msgs_Twist;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_ROSVariableLengthArrayInfo_
#define DEFINED_TYPEDEF_FOR_SL_Bus_ROSVariableLengthArrayInfo_

typedef struct {
  uint32_T CurrentLength;
  uint32_T ReceivedLength;
} SL_Bus_ROSVariableLengthArrayInfo;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_hoffmansubsystem_ros_time_Time_
#define DEFINED_TYPEDEF_FOR_SL_Bus_hoffmansubsystem_ros_time_Time_

typedef struct {
  real_T Sec;
  real_T Nsec;
} SL_Bus_hoffmansubsystem_ros_time_Time;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_hoffmansubsystem_std_msgs_Header_
#define DEFINED_TYPEDEF_FOR_SL_Bus_hoffmansubsystem_std_msgs_Header_

typedef struct {
  uint32_T Seq;
  uint8_T FrameId[128];
  SL_Bus_ROSVariableLengthArrayInfo FrameId_SL_Info;
  SL_Bus_hoffmansubsystem_ros_time_Time Stamp;
} SL_Bus_hoffmansubsystem_std_msgs_Header;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_hoffmansubsystem_geometry_msgs_Point_
#define DEFINED_TYPEDEF_FOR_SL_Bus_hoffmansubsystem_geometry_msgs_Point_

typedef struct {
  real_T X;
  real_T Y;
  real_T Z;
} SL_Bus_hoffmansubsystem_geometry_msgs_Point;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_hoffmansubsystem_geometry_msgs_Quaternion_
#define DEFINED_TYPEDEF_FOR_SL_Bus_hoffmansubsystem_geometry_msgs_Quaternion_

typedef struct {
  real_T X;
  real_T Y;
  real_T Z;
  real_T W;
} SL_Bus_hoffmansubsystem_geometry_msgs_Quaternion;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_hoffmansubsystem_geometry_msgs_Pose_
#define DEFINED_TYPEDEF_FOR_SL_Bus_hoffmansubsystem_geometry_msgs_Pose_

typedef struct {
  SL_Bus_hoffmansubsystem_geometry_msgs_Point Position;
  SL_Bus_hoffmansubsystem_geometry_msgs_Quaternion Orientation;
} SL_Bus_hoffmansubsystem_geometry_msgs_Pose;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_hoffmansubsystem_InteractiveMarkerPose_av2ao9_
#define DEFINED_TYPEDEF_FOR_SL_Bus_hoffmansubsystem_InteractiveMarkerPose_av2ao9_

typedef struct {
  uint8_T Name[128];
  SL_Bus_ROSVariableLengthArrayInfo Name_SL_Info;
  SL_Bus_hoffmansubsystem_std_msgs_Header Header;
  SL_Bus_hoffmansubsystem_geometry_msgs_Pose Pose;
} SL_Bus_hoffmansubsystem_InteractiveMarkerPose_av2ao9;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_hoffmansubsystem_geometry_msgs_PoseWithCovariance_
#define DEFINED_TYPEDEF_FOR_SL_Bus_hoffmansubsystem_geometry_msgs_PoseWithCovariance_

typedef struct {
  real_T Covariance[36];
  SL_Bus_hoffmansubsystem_geometry_msgs_Pose Pose;
} SL_Bus_hoffmansubsystem_geometry_msgs_PoseWithCovariance;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_hoffmansubsystem_geometry_msgs_TwistWithCovariance_
#define DEFINED_TYPEDEF_FOR_SL_Bus_hoffmansubsystem_geometry_msgs_TwistWithCovariance_

typedef struct {
  real_T Covariance[36];
  SL_Bus_hoffmansubsystem_geometry_msgs_Twist Twist;
} SL_Bus_hoffmansubsystem_geometry_msgs_TwistWithCovariance;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_hoffmansubsystem_nav_msgs_Odometry_
#define DEFINED_TYPEDEF_FOR_SL_Bus_hoffmansubsystem_nav_msgs_Odometry_

typedef struct {
  uint8_T ChildFrameId[128];
  SL_Bus_ROSVariableLengthArrayInfo ChildFrameId_SL_Info;
  SL_Bus_hoffmansubsystem_std_msgs_Header Header;
  SL_Bus_hoffmansubsystem_geometry_msgs_PoseWithCovariance Pose;
  SL_Bus_hoffmansubsystem_geometry_msgs_TwistWithCovariance Twist;
} SL_Bus_hoffmansubsystem_nav_msgs_Odometry;

#endif

/* Custom Type definition for MATLAB Function: '<S4>/calculate e' */
#ifndef typedef_struct_T_hoffmansubsystem_T
#define typedef_struct_T_hoffmansubsystem_T

typedef struct {
  int16_T f1;
  int16_T f2;
} struct_T_hoffmansubsystem_T;

#endif                                 /*typedef_struct_T_hoffmansubsystem_T*/

#ifndef typedef_robotics_slros_internal_block_T
#define typedef_robotics_slros_internal_block_T

typedef struct {
  int32_T isInitialized;
} robotics_slros_internal_block_T;

#endif                                 /*typedef_robotics_slros_internal_block_T*/

#ifndef typedef_robotics_slros_internal_blo_p_T
#define typedef_robotics_slros_internal_blo_p_T

typedef struct {
  int32_T isInitialized;
} robotics_slros_internal_blo_p_T;

#endif                                 /*typedef_robotics_slros_internal_blo_p_T*/

#ifndef typedef_struct_T_hoffmansubsystem_p_T
#define typedef_struct_T_hoffmansubsystem_p_T

typedef struct {
  real_T f1[2];
} struct_T_hoffmansubsystem_p_T;

#endif                                 /*typedef_struct_T_hoffmansubsystem_p_T*/

#ifndef typedef_struct_T_hoffmansubsystem_px_T
#define typedef_struct_T_hoffmansubsystem_px_T

typedef struct {
  char_T f1[4];
} struct_T_hoffmansubsystem_px_T;

#endif                                 /*typedef_struct_T_hoffmansubsystem_px_T*/

#ifndef typedef_struct_T_hoffmansubsystem_pxo_T
#define typedef_struct_T_hoffmansubsystem_pxo_T

typedef struct {
  char_T f1[8];
} struct_T_hoffmansubsystem_pxo_T;

#endif                                 /*typedef_struct_T_hoffmansubsystem_pxo_T*/

#ifndef typedef_struct_T_hoffmansubsyste_pxo1_T
#define typedef_struct_T_hoffmansubsyste_pxo1_T

typedef struct {
  char_T f1[7];
} struct_T_hoffmansubsyste_pxo1_T;

#endif                                 /*typedef_struct_T_hoffmansubsyste_pxo1_T*/

#ifndef typedef_struct_T_hoffmansubsyst_pxo1n_T
#define typedef_struct_T_hoffmansubsyst_pxo1n_T

typedef struct {
  char_T f1[8];
  char_T f2[7];
  char_T f3[6];
} struct_T_hoffmansubsyst_pxo1n_T;

#endif                                 /*typedef_struct_T_hoffmansubsyst_pxo1n_T*/

/* Parameters (auto storage) */
typedef struct P_hoffmansubsystem_T_ P_hoffmansubsystem_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_hoffmansubsystem_T RT_MODEL_hoffmansubsystem_T;

#endif                                 /* RTW_HEADER_hoffmansubsystem_types_h_ */
