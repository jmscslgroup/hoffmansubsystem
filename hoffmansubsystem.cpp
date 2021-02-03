/*
 * hoffmansubsystem.cpp
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "hoffmansubsystem".
 *
 * Model version              : 1.521
 * Simulink Coder version : 9.2 (R2019b) 18-Jul-2019
 * C++ source code generated on : Thu Aug 27 16:54:53 2020
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "hoffmansubsystem.h"
#include "hoffmansubsystem_private.h"

/* Block signals (default storage) */
B_hoffmansubsystem_T hoffmansubsystem_B;

/* Block states (default storage) */
DW_hoffmansubsystem_T hoffmansubsystem_DW;

/* Real-time model */
RT_MODEL_hoffmansubsystem_T hoffmansubsystem_M_ = RT_MODEL_hoffmansubsystem_T();
RT_MODEL_hoffmansubsystem_T *const hoffmansubsystem_M = &hoffmansubsystem_M_;

/* Forward declaration for local functions */
static void hoffmansubsystem_linspace(real_T d1, real_T d2, real_T y[10000]);
static void matlabCodegenHandle_matlabCodeg(ros_slros_internal_block_Subs_T *obj);
static void matlabCodegenHandle_matlabCod_p(ros_slros_internal_block_Publ_T *obj);

/* Function for MATLAB Function: '<S4>/straight line' */
static void hoffmansubsystem_linspace(real_T d1, real_T d2, real_T y[10000])
{
  real_T delta1;
  real_T delta2;
  int16_T c_k;
  y[9999] = d2;
  y[0] = d1;
  if (d1 == -d2) {
    for (c_k = 0; c_k < 9998; c_k++) {
      y[c_k + 1] = ((static_cast<real_T>(c_k) + 2.0) * 2.0 - 10001.0) / 9999.0 *
        d2;
    }
  } else if (((d1 < 0.0) != (d2 < 0.0)) && ((fabs(d1) > 8.9884656743115785E+307)
              || (fabs(d2) > 8.9884656743115785E+307))) {
    delta1 = d1 / 9999.0;
    delta2 = d2 / 9999.0;
    for (c_k = 0; c_k < 9998; c_k++) {
      y[c_k + 1] = ((static_cast<real_T>(c_k) + 1.0) * delta2 + d1) - (
        static_cast<real_T>(c_k) + 1.0) * delta1;
    }
  } else {
    delta1 = (d2 - d1) / 9999.0;
    for (c_k = 0; c_k < 9998; c_k++) {
      y[c_k + 1] = (static_cast<real_T>(c_k) + 1.0) * delta1 + d1;
    }
  }
}

real_T rt_atan2d_snf(real_T u0, real_T u1)
{
  real_T y;
  int16_T u0_0;
  int16_T u1_0;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else if (rtIsInf(u0) && rtIsInf(u1)) {
    if (u0 > 0.0) {
      u0_0 = 1;
    } else {
      u0_0 = -1;
    }

    if (u1 > 0.0) {
      u1_0 = 1;
    } else {
      u1_0 = -1;
    }

    y = atan2(static_cast<real_T>(u0_0), static_cast<real_T>(u1_0));
  } else if (u1 == 0.0) {
    if (u0 > 0.0) {
      y = RT_PI / 2.0;
    } else if (u0 < 0.0) {
      y = -(RT_PI / 2.0);
    } else {
      y = 0.0;
    }
  } else {
    y = atan2(u0, u1);
  }

  return y;
}

static void matlabCodegenHandle_matlabCodeg(ros_slros_internal_block_Subs_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

static void matlabCodegenHandle_matlabCod_p(ros_slros_internal_block_Publ_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

/* Model step function */
void hoffmansubsystem_step(void)
{
  /* local block i/o variables */
  real_T rtb_Sum;
  real_T rtb_e;
  int16_T b_index;
  boolean_T b_varargout_1;
  int16_T i;
  real_T rtb_sincos_o2_idx_0;
  real_T rtb_sincos_o2_idx_1;
  real_T tmp;

  /* Outputs for Atomic SubSystem: '<Root>/Subscribe3' */
  /* MATLABSystem: '<S5>/SourceBlock' incorporates:
   *  Inport: '<S13>/In1'
   */
  b_varargout_1 = Sub_hoffmansubsystem_102.getLatestMessage
    (&hoffmansubsystem_B.b_varargout_2);

  /* Outputs for Enabled SubSystem: '<S5>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S13>/Enable'
   */
  if (b_varargout_1) {
    hoffmansubsystem_B.In1 = hoffmansubsystem_B.b_varargout_2;
  }

  /* End of MATLABSystem: '<S5>/SourceBlock' */
  /* End of Outputs for SubSystem: '<S5>/Enabled Subsystem' */
  /* End of Outputs for SubSystem: '<Root>/Subscribe3' */

  /* MATLAB Function: '<S4>/straight line' incorporates:
   *  Constant: '<S4>/heading'
   */
  /* MATLAB Function 'Select desired path/straight line': '<S12>:1' */
  /* '<S12>:1:3' r = linspace(0,10000,10000); */
  hoffmansubsystem_linspace(0.0, 10000.0, hoffmansubsystem_B.ys);

  /* '<S12>:1:4' xs = r*cos(heading); */
  hoffmansubsystem_B.Product3 = cos(hoffmansubsystem_P.heading_Value);
  for (i = 0; i < 10000; i++) {
    hoffmansubsystem_B.xs[i] = hoffmansubsystem_B.ys[i] *
      hoffmansubsystem_B.Product3;
  }

  /* '<S12>:1:5' ys = r*sin(heading); */
  hoffmansubsystem_B.Product3 = sin(hoffmansubsystem_P.heading_Value);

  /* '<S12>:1:6' phis = heading*ones(1,length(r)); */
  for (i = 0; i < 10000; i++) {
    hoffmansubsystem_B.rtb_ys_m = hoffmansubsystem_B.ys[i] *
      hoffmansubsystem_B.Product3;

    /* SignalConversion generated from: '<S11>/ SFunction ' incorporates:
     *  MATLAB Function: '<S3>/calculate e'
     */
    hoffmansubsystem_B.TmpSignalConversionAtSFunct[i] = hoffmansubsystem_B.xs[i];
    hoffmansubsystem_B.TmpSignalConversionAtSFunct[i + 10000] =
      hoffmansubsystem_B.rtb_ys_m;
    hoffmansubsystem_B.TmpSignalConversionAtSFunct[i + 20000] =
      hoffmansubsystem_P.heading_Value;
    hoffmansubsystem_B.ys[i] = hoffmansubsystem_B.rtb_ys_m;
  }

  /* End of MATLAB Function: '<S4>/straight line' */

  /* MATLAB Function: '<S3>/calculate e' incorporates:
   *  Gain: '<S26>/1//2'
   */
  /* MATLAB Function 'Hoffmann Controller1/calculate e': '<S11>:1' */
  /* '<S11>:1:3' path=reshape(pathV,[],3); */
  /* '<S11>:1:4' x1 = path(1,1); */
  /* '<S11>:1:5' y1 = path(1,2); */
  /* '<S11>:1:6' phi1=path(1,3); */
  /* '<S11>:1:7' etmp = inf; */
  /* '<S11>:1:8' e = inf; */
  hoffmansubsystem_B.Product3 = (rtInf);

  /* '<S11>:1:9' index=1; */
  b_index = 0;

  /* '<S11>:1:11' for i=1:length(path) */
  for (i = 0; i < 10000; i++) {
    /* '<S11>:1:12' etmp = sqrt((x-path(i,1))^2+(y-path(i,2))^2); */
    hoffmansubsystem_B.etmp = hoffmansubsystem_B.In1.Pose.Pose.Position.X -
      hoffmansubsystem_B.TmpSignalConversionAtSFunct[i];
    hoffmansubsystem_B.q0 = hoffmansubsystem_B.In1.Pose.Pose.Position.Y -
      hoffmansubsystem_B.TmpSignalConversionAtSFunct[i + 10000];
    hoffmansubsystem_B.etmp = sqrt(hoffmansubsystem_B.etmp *
      hoffmansubsystem_B.etmp + hoffmansubsystem_B.q0 * hoffmansubsystem_B.q0);

    /* '<S11>:1:13' if( etmp < e ) */
    if (hoffmansubsystem_B.etmp < hoffmansubsystem_B.Product3) {
      /* '<S11>:1:14' e = etmp; */
      hoffmansubsystem_B.Product3 = hoffmansubsystem_B.etmp;

      /* '<S11>:1:15' index=i; */
      b_index = i;
    }
  }

  /* '<S11>:1:19' xpathOut=path(index,1); */
  /* '<S11>:1:20' ypathOut=path(index,2); */
  /* '<S11>:1:21' phipath=path(index,3); */
  /* '<S11>:1:23' ex1 = (path(index,1)-x); */
  /* '<S11>:1:24' ey1 = (path(index,2)-y); */
  /* '<S11>:1:25' ex2 = cos(phipath); */
  /* '<S11>:1:26' ey2 = sin(phipath); */
  /* '<S11>:1:27' sinnnn = ex1*ey2-ey1*ex2; */
  /* '<S11>:1:28' e = sign(sinnnn)*e; */
  rtb_sincos_o2_idx_0 = hoffmansubsystem_B.TmpSignalConversionAtSFunct[b_index +
    20000];
  hoffmansubsystem_B.rtb_ys_m =
    hoffmansubsystem_B.TmpSignalConversionAtSFunct[b_index + 10000];
  hoffmansubsystem_B.etmp =
    (hoffmansubsystem_B.TmpSignalConversionAtSFunct[b_index] -
     hoffmansubsystem_B.In1.Pose.Pose.Position.X) * sin(rtb_sincos_o2_idx_0) -
    (hoffmansubsystem_B.rtb_ys_m - hoffmansubsystem_B.In1.Pose.Pose.Position.Y) *
    cos(rtb_sincos_o2_idx_0);
  if (hoffmansubsystem_B.etmp < 0.0) {
    hoffmansubsystem_B.etmp = -1.0;
  } else if (hoffmansubsystem_B.etmp > 0.0) {
    hoffmansubsystem_B.etmp = 1.0;
  } else if (hoffmansubsystem_B.etmp == 0.0) {
    hoffmansubsystem_B.etmp = 0.0;
  } else {
    hoffmansubsystem_B.etmp = (rtNaN);
  }

  rtb_e = hoffmansubsystem_B.etmp * hoffmansubsystem_B.Product3;

  /* Outputs for Atomic SubSystem: '<Root>/Velocity from control block ' */
  /* MATLABSystem: '<S7>/SourceBlock' incorporates:
   *  Inport: '<S16>/In1'
   */
  b_varargout_1 = Sub_hoffmansubsystem_150.getLatestMessage
    (&hoffmansubsystem_B.BusAssignment1);

  /* Outputs for Enabled SubSystem: '<S7>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S16>/Enable'
   */
  if (b_varargout_1) {
    hoffmansubsystem_B.In1_k = hoffmansubsystem_B.BusAssignment1;
  }

  /* End of MATLABSystem: '<S7>/SourceBlock' */
  /* End of Outputs for SubSystem: '<S7>/Enabled Subsystem' */
  /* End of Outputs for SubSystem: '<Root>/Velocity from control block ' */

  /* Sqrt: '<S24>/sqrt' incorporates:
   *  Product: '<S25>/Product'
   *  Product: '<S25>/Product1'
   *  Product: '<S25>/Product2'
   *  Product: '<S25>/Product3'
   *  Sum: '<S25>/Sum'
   */
  hoffmansubsystem_B.Product3 = sqrt
    (((hoffmansubsystem_B.In1.Pose.Pose.Orientation.W *
       hoffmansubsystem_B.In1.Pose.Pose.Orientation.W +
       hoffmansubsystem_B.In1.Pose.Pose.Orientation.X *
       hoffmansubsystem_B.In1.Pose.Pose.Orientation.X) +
      hoffmansubsystem_B.In1.Pose.Pose.Orientation.Y *
      hoffmansubsystem_B.In1.Pose.Pose.Orientation.Y) +
     hoffmansubsystem_B.In1.Pose.Pose.Orientation.Z *
     hoffmansubsystem_B.In1.Pose.Pose.Orientation.Z);

  /* Product: '<S19>/Product' */
  hoffmansubsystem_B.etmp = hoffmansubsystem_B.In1.Pose.Pose.Orientation.W /
    hoffmansubsystem_B.Product3;

  /* Product: '<S19>/Product1' */
  hoffmansubsystem_B.q0 = hoffmansubsystem_B.In1.Pose.Pose.Orientation.X /
    hoffmansubsystem_B.Product3;

  /* Product: '<S19>/Product2' */
  hoffmansubsystem_B.Product2 = hoffmansubsystem_B.In1.Pose.Pose.Orientation.Y /
    hoffmansubsystem_B.Product3;

  /* Product: '<S19>/Product3' */
  hoffmansubsystem_B.Product3 = hoffmansubsystem_B.In1.Pose.Pose.Orientation.Z /
    hoffmansubsystem_B.Product3;

  /* Sum: '<S3>/Sum' incorporates:
   *  Fcn: '<S17>/fcn1'
   *  Fcn: '<S17>/fcn2'
   *  Trigonometry: '<S18>/Trigonometric Function1'
   */
  rtb_Sum = rt_atan2d_snf((hoffmansubsystem_B.q0 * hoffmansubsystem_B.Product2 +
    hoffmansubsystem_B.etmp * hoffmansubsystem_B.Product3) * 2.0,
    ((hoffmansubsystem_B.etmp * hoffmansubsystem_B.etmp + hoffmansubsystem_B.q0 *
      hoffmansubsystem_B.q0) - hoffmansubsystem_B.Product2 *
     hoffmansubsystem_B.Product2) - hoffmansubsystem_B.Product3 *
    hoffmansubsystem_B.Product3) - rtb_sincos_o2_idx_0;

  /* MATLAB Function: '<S3>/calculate delta' */
  hoffmansubsystem_B.Product3 = hoffmansubsystem_B.In1_k.Linear.X;
  hoffmansubsystem_B.etmp = rtb_Sum;

  /* MATLAB Function 'Hoffmann Controller1/calculate delta': '<S10>:1' */
  /* '<S10>:1:3' if( abs(v) < eps ) */
  if (fabs(hoffmansubsystem_B.In1_k.Linear.X) < 2.2204460492503131E-16) {
    /* '<S10>:1:4' v = eps; */
    hoffmansubsystem_B.Product3 = 2.2204460492503131E-16;
  }

  /* '<S10>:1:9' if( phi < -pi ) */
  if (rtb_Sum < -3.1415926535897931) {
    /* '<S10>:1:10' phi = phi+2*pi; */
    hoffmansubsystem_B.etmp = rtb_Sum + 6.2831853071795862;
  } else {
    if (rtb_Sum > 3.1415926535897931) {
      /* '<S10>:1:11' elseif( phi > pi ) */
      /* '<S10>:1:12' phi = phi-2*pi; */
      hoffmansubsystem_B.etmp = rtb_Sum - 6.2831853071795862;
    }
  }

  /* BusAssignment: '<Root>/Bus Assignment1' incorporates:
   *  Constant: '<S1>/Constant'
   */
  /* '<S10>:1:15' delta = phi + atan2(k*e,v); */
  hoffmansubsystem_B.BusAssignment1 = hoffmansubsystem_P.Constant_Value_l;

  /* Switch: '<S3>/Switch' */
  if (rtb_e > hoffmansubsystem_P.Switch_Threshold) {
    /* BusAssignment: '<Root>/Bus Assignment1' incorporates:
     *  Constant: '<S3>/k1'
     */
    hoffmansubsystem_B.BusAssignment1.Linear.X = hoffmansubsystem_P.k1_Value;
  } else {
    /* BusAssignment: '<Root>/Bus Assignment1' */
    hoffmansubsystem_B.BusAssignment1.Linear.X =
      hoffmansubsystem_B.In1_k.Linear.X;
  }

  /* End of Switch: '<S3>/Switch' */

  /* BusAssignment: '<Root>/Bus Assignment1' incorporates:
   *  Constant: '<S3>/k'
   *  Gain: '<S3>/Gain'
   *  MATLAB Function: '<S3>/calculate delta'
   */
  hoffmansubsystem_B.BusAssignment1.Angular.Z = (rt_atan2d_snf
    (hoffmansubsystem_P.k_Value * rtb_e, hoffmansubsystem_B.Product3) +
    hoffmansubsystem_B.etmp) * hoffmansubsystem_P.Gain_Gain;

  /* Outputs for Atomic SubSystem: '<S6>/Publish for follower vel' */
  /* MATLABSystem: '<S14>/SinkBlock' */
  Pub_hoffmansubsystem_21.publish(&hoffmansubsystem_B.BusAssignment1);

  /* End of Outputs for SubSystem: '<S6>/Publish for follower vel' */

  /* Gain: '<S26>/1//2' incorporates:
   *  Constant: '<S9>/Constant'
   */
  hoffmansubsystem_B.Product2 = rtb_sincos_o2_idx_0 * hoffmansubsystem_P.u2_Gain;
  hoffmansubsystem_B.q0 = hoffmansubsystem_P.u2_Gain *
    hoffmansubsystem_P.Constant_Value_bw;

  /* Trigonometry: '<S26>/sincos' incorporates:
   *  Gain: '<S26>/1//2'
   */
  rtb_sincos_o2_idx_0 = cos(hoffmansubsystem_B.Product2);
  hoffmansubsystem_B.Product2 = sin(hoffmansubsystem_B.Product2);
  rtb_sincos_o2_idx_1 = cos(hoffmansubsystem_B.q0);
  hoffmansubsystem_B.etmp = sin(hoffmansubsystem_B.q0);
  hoffmansubsystem_B.Product3 = cos(hoffmansubsystem_B.q0);
  hoffmansubsystem_B.q0 = sin(hoffmansubsystem_B.q0);

  /* BusAssignment: '<Root>/Bus Assignment2' incorporates:
   *  Constant: '<S2>/Constant'
   *  MATLAB Function: '<S3>/calculate e'
   */
  hoffmansubsystem_B.BusAssignment2 = hoffmansubsystem_P.Constant_Value_b;
  hoffmansubsystem_B.BusAssignment2.Pose.Position.X =
    hoffmansubsystem_B.TmpSignalConversionAtSFunct[b_index];
  hoffmansubsystem_B.BusAssignment2.Pose.Position.Y =
    hoffmansubsystem_B.rtb_ys_m;

  /* Fcn: '<S26>/q1' incorporates:
   *  Fcn: '<S26>/q0'
   */
  hoffmansubsystem_B.rtb_ys_m = rtb_sincos_o2_idx_0 * rtb_sincos_o2_idx_1;
  tmp = hoffmansubsystem_B.Product2 * hoffmansubsystem_B.etmp;

  /* BusAssignment: '<Root>/Bus Assignment2' incorporates:
   *  Fcn: '<S26>/q1'
   */
  hoffmansubsystem_B.BusAssignment2.Pose.Orientation.X =
    hoffmansubsystem_B.rtb_ys_m * hoffmansubsystem_B.q0 - tmp *
    hoffmansubsystem_B.Product3;

  /* Fcn: '<S26>/q2' incorporates:
   *  Fcn: '<S26>/q3'
   */
  hoffmansubsystem_B.Product2 *= rtb_sincos_o2_idx_1;
  rtb_sincos_o2_idx_0 *= hoffmansubsystem_B.etmp;

  /* BusAssignment: '<Root>/Bus Assignment2' incorporates:
   *  Fcn: '<S26>/q0'
   *  Fcn: '<S26>/q2'
   *  Fcn: '<S26>/q3'
   */
  hoffmansubsystem_B.BusAssignment2.Pose.Orientation.Y = rtb_sincos_o2_idx_0 *
    hoffmansubsystem_B.Product3 + hoffmansubsystem_B.Product2 *
    hoffmansubsystem_B.q0;
  hoffmansubsystem_B.BusAssignment2.Pose.Orientation.Z =
    hoffmansubsystem_B.Product2 * hoffmansubsystem_B.Product3 -
    rtb_sincos_o2_idx_0 * hoffmansubsystem_B.q0;
  hoffmansubsystem_B.BusAssignment2.Pose.Orientation.W =
    hoffmansubsystem_B.rtb_ys_m * hoffmansubsystem_B.Product3 + tmp *
    hoffmansubsystem_B.q0;

  /* Outputs for Atomic SubSystem: '<S6>/Publish1' */
  /* MATLABSystem: '<S15>/SinkBlock' */
  Pub_hoffmansubsystem_88.publish(&hoffmansubsystem_B.BusAssignment2);

  /* End of Outputs for SubSystem: '<S6>/Publish1' */
}

/* Model initialize function */
void hoffmansubsystem_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* block I/O */
  (void) memset((static_cast<void *>(&hoffmansubsystem_B)), 0,
                sizeof(B_hoffmansubsystem_T));

  /* states (dwork) */
  (void) memset(static_cast<void *>(&hoffmansubsystem_DW), 0,
                sizeof(DW_hoffmansubsystem_T));

  {
    char_T tmp[9];
    char_T tmp_0[8];
    char_T tmp_1[16];
    char_T tmp_2[5];
    int16_T i;
    static const char_T tmp_3[15] = { 'c', 'm', 'd', '_', 'c', 'o', 'n', 't',
      'r', 'o', 'l', '_', 'v', 'e', 'l' };

    static const char_T tmp_4[7] = { 'c', 'm', 'd', '_', 'v', 'e', 'l' };

    static const char_T tmp_5[8] = { 'w', 'a', 'y', 'p', 'o', 'i', 'n', 't' };

    /* Start for Atomic SubSystem: '<Root>/Subscribe3' */
    /* Start for MATLABSystem: '<S5>/SourceBlock' */
    hoffmansubsystem_DW.obj_i.matlabCodegenIsDeleted = false;
    hoffmansubsystem_DW.objisempty_c = true;
    hoffmansubsystem_DW.obj_i.isInitialized = 1L;
    tmp_2[0] = 'o';
    tmp_2[1] = 'd';
    tmp_2[2] = 'o';
    tmp_2[3] = 'm';
    tmp_2[4] = '\x00';
    Sub_hoffmansubsystem_102.createSubscriber(tmp_2, 1L);
    hoffmansubsystem_DW.obj_i.isSetupComplete = true;

    /* End of Start for SubSystem: '<Root>/Subscribe3' */

    /* Start for Atomic SubSystem: '<Root>/Velocity from control block ' */
    /* Start for MATLABSystem: '<S7>/SourceBlock' */
    hoffmansubsystem_DW.obj.matlabCodegenIsDeleted = false;
    hoffmansubsystem_DW.objisempty = true;
    hoffmansubsystem_DW.obj.isInitialized = 1L;
    for (i = 0; i < 15; i++) {
      tmp_1[i] = tmp_3[i];
    }

    tmp_1[15] = '\x00';
    Sub_hoffmansubsystem_150.createSubscriber(tmp_1, 1L);
    hoffmansubsystem_DW.obj.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S7>/SourceBlock' */
    /* End of Start for SubSystem: '<Root>/Velocity from control block ' */

    /* Start for Atomic SubSystem: '<S6>/Publish for follower vel' */
    /* Start for MATLABSystem: '<S14>/SinkBlock' */
    hoffmansubsystem_DW.obj_m.matlabCodegenIsDeleted = false;
    hoffmansubsystem_DW.objisempty_m = true;
    hoffmansubsystem_DW.obj_m.isInitialized = 1L;
    for (i = 0; i < 7; i++) {
      tmp_0[i] = tmp_4[i];
    }

    tmp_0[7] = '\x00';
    Pub_hoffmansubsystem_21.createPublisher(tmp_0, 1L);
    hoffmansubsystem_DW.obj_m.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S14>/SinkBlock' */
    /* End of Start for SubSystem: '<S6>/Publish for follower vel' */

    /* Start for Atomic SubSystem: '<S6>/Publish1' */
    /* Start for MATLABSystem: '<S15>/SinkBlock' */
    hoffmansubsystem_DW.obj_p.matlabCodegenIsDeleted = false;
    hoffmansubsystem_DW.objisempty_h = true;
    hoffmansubsystem_DW.obj_p.isInitialized = 1L;
    for (i = 0; i < 8; i++) {
      tmp[i] = tmp_5[i];
    }

    tmp[8] = '\x00';
    Pub_hoffmansubsystem_88.createPublisher(tmp, 1L);
    hoffmansubsystem_DW.obj_p.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S15>/SinkBlock' */
    /* End of Start for SubSystem: '<S6>/Publish1' */
  }

  /* SystemInitialize for Atomic SubSystem: '<Root>/Subscribe3' */
  /* SystemInitialize for Enabled SubSystem: '<S5>/Enabled Subsystem' */
  /* SystemInitialize for Outport: '<S13>/Out1' */
  hoffmansubsystem_B.In1 = hoffmansubsystem_P.Out1_Y0;

  /* End of SystemInitialize for SubSystem: '<S5>/Enabled Subsystem' */
  /* End of SystemInitialize for SubSystem: '<Root>/Subscribe3' */

  /* SystemInitialize for Atomic SubSystem: '<Root>/Velocity from control block ' */
  /* SystemInitialize for Enabled SubSystem: '<S7>/Enabled Subsystem' */
  /* SystemInitialize for Outport: '<S16>/Out1' */
  hoffmansubsystem_B.In1_k = hoffmansubsystem_P.Out1_Y0_n;

  /* End of SystemInitialize for SubSystem: '<S7>/Enabled Subsystem' */
  /* End of SystemInitialize for SubSystem: '<Root>/Velocity from control block ' */
}

/* Model terminate function */
void hoffmansubsystem_terminate(void)
{
  /* Terminate for Atomic SubSystem: '<Root>/Subscribe3' */
  /* Terminate for MATLABSystem: '<S5>/SourceBlock' */
  matlabCodegenHandle_matlabCodeg(&hoffmansubsystem_DW.obj_i);

  /* End of Terminate for SubSystem: '<Root>/Subscribe3' */

  /* Terminate for Atomic SubSystem: '<Root>/Velocity from control block ' */
  /* Terminate for MATLABSystem: '<S7>/SourceBlock' */
  matlabCodegenHandle_matlabCodeg(&hoffmansubsystem_DW.obj);

  /* End of Terminate for SubSystem: '<Root>/Velocity from control block ' */

  /* Terminate for Atomic SubSystem: '<S6>/Publish for follower vel' */
  /* Terminate for MATLABSystem: '<S14>/SinkBlock' */
  matlabCodegenHandle_matlabCod_p(&hoffmansubsystem_DW.obj_m);

  /* End of Terminate for SubSystem: '<S6>/Publish for follower vel' */

  /* Terminate for Atomic SubSystem: '<S6>/Publish1' */
  /* Terminate for MATLABSystem: '<S15>/SinkBlock' */
  matlabCodegenHandle_matlabCod_p(&hoffmansubsystem_DW.obj_p);

  /* End of Terminate for SubSystem: '<S6>/Publish1' */
}
