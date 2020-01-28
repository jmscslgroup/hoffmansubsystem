/*
 * hoffmansubsystem_types.h
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

#ifndef typedef_d_robotics_slcore_internal_bl_T
#define typedef_d_robotics_slcore_internal_bl_T

typedef struct {
  int16_T __dummy;
} d_robotics_slcore_internal_bl_T;

#endif                               /*typedef_d_robotics_slcore_internal_bl_T*/

#ifndef typedef_robotics_slros_internal_block_T
#define typedef_robotics_slros_internal_block_T

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  real_T ticksUntilNextHit;
  d_robotics_slcore_internal_bl_T SampleTimeHandler;
} robotics_slros_internal_block_T;

#endif                               /*typedef_robotics_slros_internal_block_T*/

#ifndef typedef_robotics_slros_internal_blo_p_T
#define typedef_robotics_slros_internal_blo_p_T

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
} robotics_slros_internal_blo_p_T;

#endif                               /*typedef_robotics_slros_internal_blo_p_T*/

#ifndef typedef_robotics_slros_internal_bl_px_T
#define typedef_robotics_slros_internal_bl_px_T

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
} robotics_slros_internal_bl_px_T;

#endif                               /*typedef_robotics_slros_internal_bl_px_T*/

/* Parameters (default storage) */
typedef struct P_hoffmansubsystem_T_ P_hoffmansubsystem_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_hoffmansubsystem_T RT_MODEL_hoffmansubsystem_T;

#endif                                /* RTW_HEADER_hoffmansubsystem_types_h_ */
