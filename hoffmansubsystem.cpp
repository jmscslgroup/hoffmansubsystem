/*
 * hoffmansubsystem.cpp
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

#include "hoffmansubsystem.h"
#include "hoffmansubsystem_private.h"

/* Block signals (default storage) */
B_hoffmansubsystem_T hoffmansubsystem_B;

/* Block states (default storage) */
DW_hoffmansubsystem_T hoffmansubsystem_DW;

/* Real-time model */
RT_MODEL_hoffmansubsystem_T hoffmansubsystem_M_ = RT_MODEL_hoffmansubsystem_T();
RT_MODEL_hoffmansubsystem_T *const hoffmansubsystem_M = &hoffmansubsystem_M_;
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

/* Model step function */
void hoffmansubsystem_step(void)
{
  real_T rtb_Product2;
  real_T rtb_Product3;
  real_T rtb_q0;
  real_T rtb_q3;
  real_T rtb_sincos_o1_idx_0;
  real_T u_tmp;
  int16_T b_index;
  int16_T i;
  boolean_T b_varargout_1;

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
  hoffmansubsystem_B.ys[9999] = 10000.0;
  hoffmansubsystem_B.ys[0] = 0.0;
  for (b_index = 0; b_index < 9998; b_index++) {
    hoffmansubsystem_B.ys[b_index + 1] = (static_cast<real_T>(b_index) + 1.0) *
      1.000100010001;
  }

  /* '<S12>:1:4' xs = r*cos(heading); */
  hoffmansubsystem_B.e = cos(hoffmansubsystem_P.heading_Value);

  /* '<S12>:1:5' ys = r*sin(heading); */
  hoffmansubsystem_B.etmp = sin(hoffmansubsystem_P.heading_Value);

  /* '<S12>:1:6' phis = heading*ones(1,length(r)); */
  for (i = 0; i < 10000; i++) {
    /* MATLAB Function: '<S4>/straight line' */
    rtb_Product3 = hoffmansubsystem_B.ys[i];

    /* SignalConversion generated from: '<S11>/ SFunction ' incorporates:
     *  Constant: '<S4>/heading'
     *  MATLAB Function: '<S3>/calculate e'
     *  MATLAB Function: '<S4>/straight line'
     */
    hoffmansubsystem_B.TmpSignalConversionAtSFunct[i] = rtb_Product3 *
      hoffmansubsystem_B.e;
    hoffmansubsystem_B.TmpSignalConversionAtSFunct[i + 10000] = rtb_Product3 *
      hoffmansubsystem_B.etmp;
    hoffmansubsystem_B.TmpSignalConversionAtSFunct[i + 20000] =
      hoffmansubsystem_P.heading_Value;
  }

  /* MATLAB Function: '<S3>/calculate e' incorporates:
   *  Gain: '<S26>/1//2'
   *  SignalConversion generated from: '<S11>/ SFunction '
   */
  /* MATLAB Function 'Hoffmann Controller1/calculate e': '<S11>:1' */
  /* '<S11>:1:3' path=reshape(pathV,[],3); */
  /* '<S11>:1:4' x1 = path(1,1); */
  /* '<S11>:1:5' y1 = path(1,2); */
  /* '<S11>:1:6' phi1=path(1,3); */
  /* '<S11>:1:7' etmp = inf; */
  /* '<S11>:1:8' e = inf; */
  hoffmansubsystem_B.e = (rtInf);

  /* '<S11>:1:9' index=1; */
  b_index = 0;

  /* '<S11>:1:11' for i=1:length(path) */
  for (i = 0; i < 10000; i++) {
    /* '<S11>:1:12' etmp = sqrt((x-path(i,1))^2+(y-path(i,2))^2); */
    hoffmansubsystem_B.etmp = hoffmansubsystem_B.In1.Pose.Pose.Position.X -
      hoffmansubsystem_B.TmpSignalConversionAtSFunct[i];
    rtb_Product3 = hoffmansubsystem_B.In1.Pose.Pose.Position.Y -
      hoffmansubsystem_B.TmpSignalConversionAtSFunct[i + 10000];
    hoffmansubsystem_B.etmp = sqrt(hoffmansubsystem_B.etmp *
      hoffmansubsystem_B.etmp + rtb_Product3 * rtb_Product3);

    /* '<S11>:1:13' if( etmp < e ) */
    if (hoffmansubsystem_B.etmp < hoffmansubsystem_B.e) {
      /* '<S11>:1:14' e = etmp; */
      hoffmansubsystem_B.e = hoffmansubsystem_B.etmp;

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
  rtb_sincos_o1_idx_0 = hoffmansubsystem_B.TmpSignalConversionAtSFunct[b_index +
    20000];
  u_tmp = hoffmansubsystem_B.TmpSignalConversionAtSFunct[b_index + 10000];
  rtb_Product3 = (hoffmansubsystem_B.TmpSignalConversionAtSFunct[b_index] -
                  hoffmansubsystem_B.In1.Pose.Pose.Position.X) * sin
    (rtb_sincos_o1_idx_0) - (u_tmp - hoffmansubsystem_B.In1.Pose.Pose.Position.Y)
    * cos(rtb_sincos_o1_idx_0);
  if (rtb_Product3 < 0.0) {
    rtb_Product3 = -1.0;
  } else if (rtb_Product3 > 0.0) {
    rtb_Product3 = 1.0;
  } else if (rtb_Product3 == 0.0) {
    rtb_Product3 = 0.0;
  } else {
    rtb_Product3 = (rtNaN);
  }

  hoffmansubsystem_B.e *= rtb_Product3;

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

  /* MATLABSystem: '<Root>/Get Parameter' */
  ParamGet_hoffmansubsystem_375.get_parameter(&hoffmansubsystem_B.etmp);

  /* Sqrt: '<S24>/sqrt' incorporates:
   *  Product: '<S25>/Product'
   *  Product: '<S25>/Product1'
   *  Product: '<S25>/Product2'
   *  Product: '<S25>/Product3'
   *  Sum: '<S25>/Sum'
   */
  rtb_Product3 = sqrt(((hoffmansubsystem_B.In1.Pose.Pose.Orientation.W *
                        hoffmansubsystem_B.In1.Pose.Pose.Orientation.W +
                        hoffmansubsystem_B.In1.Pose.Pose.Orientation.X *
                        hoffmansubsystem_B.In1.Pose.Pose.Orientation.X) +
                       hoffmansubsystem_B.In1.Pose.Pose.Orientation.Y *
                       hoffmansubsystem_B.In1.Pose.Pose.Orientation.Y) +
                      hoffmansubsystem_B.In1.Pose.Pose.Orientation.Z *
                      hoffmansubsystem_B.In1.Pose.Pose.Orientation.Z);

  /* Product: '<S19>/Product' */
  rtb_q3 = hoffmansubsystem_B.In1.Pose.Pose.Orientation.W / rtb_Product3;

  /* Product: '<S19>/Product1' */
  rtb_q0 = hoffmansubsystem_B.In1.Pose.Pose.Orientation.X / rtb_Product3;

  /* Product: '<S19>/Product2' */
  rtb_Product2 = hoffmansubsystem_B.In1.Pose.Pose.Orientation.Y / rtb_Product3;

  /* Product: '<S19>/Product3' */
  rtb_Product3 = hoffmansubsystem_B.In1.Pose.Pose.Orientation.Z / rtb_Product3;

  /* Sum: '<S3>/Sum' incorporates:
   *  Fcn: '<S17>/fcn1'
   *  Fcn: '<S17>/fcn2'
   *  Trigonometry: '<S18>/Trigonometric Function1'
   */
  rtb_Product3 = rt_atan2d_snf((rtb_q0 * rtb_Product2 + rtb_q3 * rtb_Product3) *
    2.0, ((rtb_q3 * rtb_q3 + rtb_q0 * rtb_q0) - rtb_Product2 * rtb_Product2) -
    rtb_Product3 * rtb_Product3) - rtb_sincos_o1_idx_0;

  /* MATLAB Function: '<S3>/calculate delta' */
  rtb_q3 = hoffmansubsystem_B.In1_k.Linear.X;
  rtb_q0 = rtb_Product3;

  /* MATLAB Function 'Hoffmann Controller1/calculate delta': '<S10>:1' */
  /* '<S10>:1:3' if( abs(v) < eps ) */
  if (fabs(hoffmansubsystem_B.In1_k.Linear.X) < 2.2204460492503131E-16) {
    /* '<S10>:1:4' v = eps; */
    rtb_q3 = 2.2204460492503131E-16;
  }

  /* '<S10>:1:9' if( phi < -pi ) */
  if (rtb_Product3 < -3.1415926535897931) {
    /* '<S10>:1:10' phi = phi+2*pi; */
    rtb_q0 = rtb_Product3 + 6.2831853071795862;
  } else if (rtb_Product3 > 3.1415926535897931) {
    /* '<S10>:1:11' elseif( phi > pi ) */
    /* '<S10>:1:12' phi = phi-2*pi; */
    rtb_q0 = rtb_Product3 - 6.2831853071795862;
  }

  /* BusAssignment: '<Root>/Bus Assignment1' incorporates:
   *  Constant: '<S1>/Constant'
   */
  /* '<S10>:1:15' delta = phi + atan2(k*e,v); */
  hoffmansubsystem_B.BusAssignment1 = hoffmansubsystem_P.Constant_Value_l;

  /* Switch: '<S3>/Switch' */
  if (hoffmansubsystem_B.e > hoffmansubsystem_P.Switch_Threshold) {
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
   *  Gain: '<S3>/Gain'
   *  MATLAB Function: '<S3>/calculate delta'
   *  MATLABSystem: '<Root>/Get Parameter'
   */
  hoffmansubsystem_B.BusAssignment1.Angular.Z = (rt_atan2d_snf
    (hoffmansubsystem_B.etmp * hoffmansubsystem_B.e, rtb_q3) + rtb_q0) *
    hoffmansubsystem_P.Gain_Gain;

  /* Outputs for Atomic SubSystem: '<S6>/Publish for follower vel' */
  /* MATLABSystem: '<S14>/SinkBlock' */
  Pub_hoffmansubsystem_21.publish(&hoffmansubsystem_B.BusAssignment1);

  /* End of Outputs for SubSystem: '<S6>/Publish for follower vel' */

  /* Gain: '<S26>/1//2' incorporates:
   *  Constant: '<S9>/Constant'
   */
  rtb_sincos_o1_idx_0 *= hoffmansubsystem_P.u2_Gain;
  rtb_q0 = hoffmansubsystem_P.u2_Gain * hoffmansubsystem_P.Constant_Value_bw;

  /* Trigonometry: '<S26>/sincos' incorporates:
   *  Gain: '<S26>/1//2'
   */
  hoffmansubsystem_B.etmp = cos(rtb_sincos_o1_idx_0);
  rtb_Product2 = sin(rtb_sincos_o1_idx_0);
  rtb_sincos_o1_idx_0 = cos(rtb_q0);
  rtb_q0 = sin(rtb_q0);

  /* BusAssignment: '<Root>/Bus Assignment2' incorporates:
   *  Constant: '<S2>/Constant'
   *  MATLAB Function: '<S3>/calculate e'
   *  SignalConversion generated from: '<S11>/ SFunction '
   */
  hoffmansubsystem_B.BusAssignment2 = hoffmansubsystem_P.Constant_Value_b;
  hoffmansubsystem_B.BusAssignment2.Pose.Position.X =
    hoffmansubsystem_B.TmpSignalConversionAtSFunct[b_index];
  hoffmansubsystem_B.BusAssignment2.Pose.Position.Y = u_tmp;

  /* Fcn: '<S26>/q1' incorporates:
   *  Fcn: '<S26>/q0'
   *  Trigonometry: '<S26>/sincos'
   */
  u_tmp = hoffmansubsystem_B.etmp * rtb_sincos_o1_idx_0;
  rtb_q3 = rtb_Product2 * rtb_q0;

  /* BusAssignment: '<Root>/Bus Assignment2' incorporates:
   *  Fcn: '<S26>/q1'
   */
  hoffmansubsystem_B.BusAssignment2.Pose.Orientation.X = u_tmp * rtb_q0 - rtb_q3
    * rtb_sincos_o1_idx_0;

  /* Fcn: '<S26>/q2' incorporates:
   *  Fcn: '<S26>/q3'
   *  Trigonometry: '<S26>/sincos'
   */
  rtb_Product2 *= rtb_sincos_o1_idx_0;
  hoffmansubsystem_B.etmp *= rtb_q0;

  /* BusAssignment: '<Root>/Bus Assignment2' incorporates:
   *  Fcn: '<S26>/q0'
   *  Fcn: '<S26>/q2'
   *  Fcn: '<S26>/q3'
   */
  hoffmansubsystem_B.BusAssignment2.Pose.Orientation.Y = hoffmansubsystem_B.etmp
    * rtb_sincos_o1_idx_0 + rtb_Product2 * rtb_q0;
  hoffmansubsystem_B.BusAssignment2.Pose.Orientation.Z = rtb_Product2 *
    rtb_sincos_o1_idx_0 - hoffmansubsystem_B.etmp * rtb_q0;
  hoffmansubsystem_B.BusAssignment2.Pose.Orientation.W = u_tmp *
    rtb_sincos_o1_idx_0 + rtb_q3 * rtb_q0;

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
    int16_T i;
    char_T b_zeroDelimTopic_0[16];
    char_T b_zeroDelimName[14];
    char_T b_zeroDelimTopic_2[9];
    char_T b_zeroDelimTopic_1[8];
    char_T b_zeroDelimTopic[5];
    static const char_T tmp[15] = { 'c', 'm', 'd', '_', 'c', 'o', 'n', 't', 'r',
      'o', 'l', '_', 'v', 'e', 'l' };

    static const char_T tmp_0[13] = { 'e', 'r', 'r', 'o', 'r', '_', 'c', 'o',
      'n', 't', 'r', 'o', 'l' };

    static const char_T tmp_1[7] = { 'c', 'm', 'd', '_', 'v', 'e', 'l' };

    static const char_T tmp_2[8] = { 'w', 'a', 'y', 'p', 'o', 'i', 'n', 't' };

    /* Start for Atomic SubSystem: '<Root>/Subscribe3' */
    /* Start for MATLABSystem: '<S5>/SourceBlock' */
    hoffmansubsystem_DW.obj_i.matlabCodegenIsDeleted = false;
    hoffmansubsystem_DW.objisempty_c = true;
    hoffmansubsystem_DW.obj_i.isInitialized = 1L;
    b_zeroDelimTopic[0] = 'o';
    b_zeroDelimTopic[1] = 'd';
    b_zeroDelimTopic[2] = 'o';
    b_zeroDelimTopic[3] = 'm';
    b_zeroDelimTopic[4] = '\x00';
    Sub_hoffmansubsystem_102.createSubscriber(&b_zeroDelimTopic[0], 1L);
    hoffmansubsystem_DW.obj_i.isSetupComplete = true;

    /* End of Start for SubSystem: '<Root>/Subscribe3' */

    /* Start for Atomic SubSystem: '<Root>/Velocity from control block ' */
    /* Start for MATLABSystem: '<S7>/SourceBlock' */
    hoffmansubsystem_DW.obj_p.matlabCodegenIsDeleted = false;
    hoffmansubsystem_DW.objisempty = true;
    hoffmansubsystem_DW.obj_p.isInitialized = 1L;
    for (i = 0; i < 15; i++) {
      b_zeroDelimTopic_0[i] = tmp[i];
    }

    b_zeroDelimTopic_0[15] = '\x00';
    Sub_hoffmansubsystem_150.createSubscriber(&b_zeroDelimTopic_0[0], 1L);
    hoffmansubsystem_DW.obj_p.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S7>/SourceBlock' */
    /* End of Start for SubSystem: '<Root>/Velocity from control block ' */

    /* Start for MATLABSystem: '<Root>/Get Parameter' */
    hoffmansubsystem_DW.obj.matlabCodegenIsDeleted = false;
    hoffmansubsystem_DW.objisempty_c4 = true;
    hoffmansubsystem_DW.obj.isInitialized = 1L;
    for (i = 0; i < 13; i++) {
      b_zeroDelimName[i] = tmp_0[i];
    }

    b_zeroDelimName[13] = '\x00';
    ParamGet_hoffmansubsystem_375.initialize(&b_zeroDelimName[0]);
    ParamGet_hoffmansubsystem_375.initialize_error_codes(0, 1, 2, 3);
    ParamGet_hoffmansubsystem_375.set_initial_value(0.7);
    hoffmansubsystem_DW.obj.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<Root>/Get Parameter' */

    /* Start for Atomic SubSystem: '<S6>/Publish for follower vel' */
    /* Start for MATLABSystem: '<S14>/SinkBlock' */
    hoffmansubsystem_DW.obj_m.matlabCodegenIsDeleted = false;
    hoffmansubsystem_DW.objisempty_m = true;
    hoffmansubsystem_DW.obj_m.isInitialized = 1L;
    for (i = 0; i < 7; i++) {
      b_zeroDelimTopic_1[i] = tmp_1[i];
    }

    b_zeroDelimTopic_1[7] = '\x00';
    Pub_hoffmansubsystem_21.createPublisher(&b_zeroDelimTopic_1[0], 1L);
    hoffmansubsystem_DW.obj_m.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S14>/SinkBlock' */
    /* End of Start for SubSystem: '<S6>/Publish for follower vel' */

    /* Start for Atomic SubSystem: '<S6>/Publish1' */
    /* Start for MATLABSystem: '<S15>/SinkBlock' */
    hoffmansubsystem_DW.obj_pi.matlabCodegenIsDeleted = false;
    hoffmansubsystem_DW.objisempty_h = true;
    hoffmansubsystem_DW.obj_pi.isInitialized = 1L;
    for (i = 0; i < 8; i++) {
      b_zeroDelimTopic_2[i] = tmp_2[i];
    }

    b_zeroDelimTopic_2[8] = '\x00';
    Pub_hoffmansubsystem_88.createPublisher(&b_zeroDelimTopic_2[0], 1L);
    hoffmansubsystem_DW.obj_pi.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S15>/SinkBlock' */
    /* End of Start for SubSystem: '<S6>/Publish1' */
  }

  /* SystemInitialize for Atomic SubSystem: '<Root>/Subscribe3' */
  /* SystemInitialize for Enabled SubSystem: '<S5>/Enabled Subsystem' */
  /* SystemInitialize for Outport: '<S13>/Out1' incorporates:
   *  Inport: '<S13>/In1'
   */
  hoffmansubsystem_B.In1 = hoffmansubsystem_P.Out1_Y0;

  /* End of SystemInitialize for SubSystem: '<S5>/Enabled Subsystem' */
  /* End of SystemInitialize for SubSystem: '<Root>/Subscribe3' */

  /* SystemInitialize for Atomic SubSystem: '<Root>/Velocity from control block ' */
  /* SystemInitialize for Enabled SubSystem: '<S7>/Enabled Subsystem' */
  /* SystemInitialize for Outport: '<S16>/Out1' incorporates:
   *  Inport: '<S16>/In1'
   */
  hoffmansubsystem_B.In1_k = hoffmansubsystem_P.Out1_Y0_n;

  /* End of SystemInitialize for SubSystem: '<S7>/Enabled Subsystem' */
  /* End of SystemInitialize for SubSystem: '<Root>/Velocity from control block ' */
}

/* Model terminate function */
void hoffmansubsystem_terminate(void)
{
  /* Terminate for Atomic SubSystem: '<Root>/Subscribe3' */
  /* Terminate for MATLABSystem: '<S5>/SourceBlock' */
  if (!hoffmansubsystem_DW.obj_i.matlabCodegenIsDeleted) {
    hoffmansubsystem_DW.obj_i.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S5>/SourceBlock' */
  /* End of Terminate for SubSystem: '<Root>/Subscribe3' */

  /* Terminate for Atomic SubSystem: '<Root>/Velocity from control block ' */
  /* Terminate for MATLABSystem: '<S7>/SourceBlock' */
  if (!hoffmansubsystem_DW.obj_p.matlabCodegenIsDeleted) {
    hoffmansubsystem_DW.obj_p.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S7>/SourceBlock' */
  /* End of Terminate for SubSystem: '<Root>/Velocity from control block ' */

  /* Terminate for MATLABSystem: '<Root>/Get Parameter' */
  if (!hoffmansubsystem_DW.obj.matlabCodegenIsDeleted) {
    hoffmansubsystem_DW.obj.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/Get Parameter' */

  /* Terminate for Atomic SubSystem: '<S6>/Publish for follower vel' */
  /* Terminate for MATLABSystem: '<S14>/SinkBlock' */
  if (!hoffmansubsystem_DW.obj_m.matlabCodegenIsDeleted) {
    hoffmansubsystem_DW.obj_m.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S14>/SinkBlock' */
  /* End of Terminate for SubSystem: '<S6>/Publish for follower vel' */

  /* Terminate for Atomic SubSystem: '<S6>/Publish1' */
  /* Terminate for MATLABSystem: '<S15>/SinkBlock' */
  if (!hoffmansubsystem_DW.obj_pi.matlabCodegenIsDeleted) {
    hoffmansubsystem_DW.obj_pi.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S15>/SinkBlock' */
  /* End of Terminate for SubSystem: '<S6>/Publish1' */
}
