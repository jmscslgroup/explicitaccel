//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: explicitaccel.h
//
// Code generated for Simulink model 'explicitaccel'.
//
// Model version                  : 3.216
// Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
// C/C++ source code generated on : Fri Sep 30 17:10:58 2022
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_explicitaccel_h_
#define RTW_HEADER_explicitaccel_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "slros_initialize.h"
#include "explicitaccel_types.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

// Block signals (default storage)
struct B_explicitaccel_T {
  SL_Bus_explicitaccel_std_msgs_Float64MultiArray In1;// '<S22>/In1'
  SL_Bus_explicitaccel_std_msgs_Float64MultiArray b_varargout_2;
  SL_Bus_explicitaccel_std_msgs_MultiArrayDimension b_varargout_2_Layout_Dim[16];
  real_T b_varargout_2_Data[128];
  SL_Bus_explicitaccel_geometry_msgs_Twist BusAssignment1;// '<S1>/Bus Assignment1' 
  char_T b_zeroDelimName[17];
  SL_Bus_explicitaccel_ros_time_Time r;
  char_T b_zeroDelimName_m[14];
  real_T v_des_data;
  real_T v_des_dot;
  real_T v_max;
  real_T v_max_dot;
  real_T a_12;
  real_T a_0;
  real_T bsum;
  real_T alpha;
  real_T Subtract2;                    // '<S1>/Subtract2'
  real_T TotalTime2;                   // '<S1>/Total Time2'
  real_T Subtract1;                    // '<S1>/Subtract1'
  SL_Bus_explicitaccel_std_msgs_Float64 In1_e;// '<S26>/In1'
  SL_Bus_explicitaccel_std_msgs_Float64 In1_i;// '<S25>/In1'
  SL_Bus_explicitaccel_std_msgs_Float64 In1_n;// '<S24>/In1'
  SL_Bus_explicitaccel_std_msgs_Float64 In1_k;// '<S23>/In1'
  SL_Bus_explicitaccel_std_msgs_Float64 b_varargout_2_c;
  SL_Bus_explicitaccel_std_msgs_Float64 BusAssignment5;// '<S1>/Bus Assignment5' 
};

// Block states (default storage) for system '<Root>'
struct DW_explicitaccel_T {
  ros_slros_internal_block_Curr_T obj; // '<S1>/Current Time2'
  ros_slros_internal_block_GetP_T obj_k;// '<S1>/Get Parameter1'
  ros_slros_internal_block_GetP_T obj_e;// '<S1>/Get Parameter'
  ros_slroscpp_internal_block_P_T obj_g;// '<S16>/SinkBlock'
  ros_slroscpp_internal_block_P_T obj_n;// '<S15>/SinkBlock'
  ros_slroscpp_internal_block_P_T obj_nj;// '<S14>/SinkBlock'
  ros_slroscpp_internal_block_P_T obj_nb;// '<S13>/SinkBlock'
  ros_slroscpp_internal_block_P_T obj_n5;// '<S12>/SinkBlock'
  ros_slroscpp_internal_block_P_T obj_c;// '<S11>/SinkBlock'
  ros_slroscpp_internal_block_S_T obj_ke;// '<S21>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_n0;// '<S20>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_h;// '<S19>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_d;// '<S18>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_ep;// '<S17>/SourceBlock'
  real_T Memory_PreviousInput;         // '<S1>/Memory'
  real_T accel_memory_PreviousInput;   // '<S1>/accel_memory'
  real_T headway_memory_PreviousInput; // '<S1>/headway_memory'
  real_T previous_v_max;               // '<S1>/MATLAB Function'
  real_T previous_v_des;               // '<S1>/MATLAB Function'
  real_T previous_dx;                  // '<S1>/MATLAB Function'
  real_T time_avg_target[1280];        // '<S1>/MATLAB Function'
  real_T t_length;                     // '<S1>/MATLAB Function'
  boolean_T previous_v_max_not_empty;  // '<S1>/MATLAB Function'
  boolean_T previous_v_des_not_empty;  // '<S1>/MATLAB Function'
  boolean_T previous_dx_not_empty;     // '<S1>/MATLAB Function'
  boolean_T time_avg_target_not_empty; // '<S1>/MATLAB Function'
};

// Parameters (default storage)
struct P_explicitaccel_T_ {
  SL_Bus_explicitaccel_std_msgs_Float64MultiArray Out1_Y0;// Computed Parameter: Out1_Y0
                                                             //  Referenced by: '<S22>/Out1'

  SL_Bus_explicitaccel_std_msgs_Float64MultiArray Constant_Value;// Computed Parameter: Constant_Value
                                                                    //  Referenced by: '<S17>/Constant'

  SL_Bus_explicitaccel_geometry_msgs_Twist Constant_Value_j;// Computed Parameter: Constant_Value_j
                                                               //  Referenced by: '<S2>/Constant'

  SL_Bus_explicitaccel_std_msgs_Bool Constant_Value_i;// Computed Parameter: Constant_Value_i
                                                         //  Referenced by: '<S7>/Constant'

  SL_Bus_explicitaccel_std_msgs_Float64 Constant_Value_jy;// Computed Parameter: Constant_Value_jy
                                                             //  Referenced by: '<S3>/Constant'

  SL_Bus_explicitaccel_std_msgs_Float64 Constant_Value_o;// Computed Parameter: Constant_Value_o
                                                            //  Referenced by: '<S4>/Constant'

  SL_Bus_explicitaccel_std_msgs_Float64 Constant_Value_og;// Computed Parameter: Constant_Value_og
                                                             //  Referenced by: '<S5>/Constant'

  SL_Bus_explicitaccel_std_msgs_Float64 Constant_Value_f;// Computed Parameter: Constant_Value_f
                                                            //  Referenced by: '<S6>/Constant'

  SL_Bus_explicitaccel_std_msgs_Float64 Out1_Y0_j;// Computed Parameter: Out1_Y0_j
                                                     //  Referenced by: '<S23>/Out1'

  SL_Bus_explicitaccel_std_msgs_Float64 Constant_Value_g;// Computed Parameter: Constant_Value_g
                                                            //  Referenced by: '<S18>/Constant'

  SL_Bus_explicitaccel_std_msgs_Float64 Out1_Y0_k;// Computed Parameter: Out1_Y0_k
                                                     //  Referenced by: '<S24>/Out1'

  SL_Bus_explicitaccel_std_msgs_Float64 Constant_Value_n;// Computed Parameter: Constant_Value_n
                                                            //  Referenced by: '<S19>/Constant'

  SL_Bus_explicitaccel_std_msgs_Float64 Out1_Y0_m;// Computed Parameter: Out1_Y0_m
                                                     //  Referenced by: '<S25>/Out1'

  SL_Bus_explicitaccel_std_msgs_Float64 Constant_Value_k;// Computed Parameter: Constant_Value_k
                                                            //  Referenced by: '<S20>/Constant'

  SL_Bus_explicitaccel_std_msgs_Float64 Out1_Y0_f;// Computed Parameter: Out1_Y0_f
                                                     //  Referenced by: '<S26>/Out1'

  SL_Bus_explicitaccel_std_msgs_Float64 Constant_Value_p;// Computed Parameter: Constant_Value_p
                                                            //  Referenced by: '<S21>/Constant'

  real_T Gain2_Gain;                   // Expression: 1e-9
                                          //  Referenced by: '<S1>/Gain2'

  real_T Memory_InitialCondition;      // Expression: 0
                                          //  Referenced by: '<S1>/Memory'

  real_T Constant_Value_a;             // Expression: 0
                                          //  Referenced by: '<S1>/Constant'

  real_T accel_memory_InitialCondition;// Expression: 0
                                          //  Referenced by: '<S1>/accel_memory'

  real_T headway_memory_InitialCondition;// Expression: 252
                                            //  Referenced by: '<S1>/headway_memory'

};

// Real-time Model Data Structure
struct tag_RTM_explicitaccel_T {
  const char_T *errorStatus;
};

// Block parameters (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern P_explicitaccel_T explicitaccel_P;

#ifdef __cplusplus

}
#endif

// Block signals (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern struct B_explicitaccel_T explicitaccel_B;

#ifdef __cplusplus

}
#endif

// Block states (default storage)
extern struct DW_explicitaccel_T explicitaccel_DW;

#ifdef __cplusplus

extern "C" {

#endif

  // Model entry point functions
  extern void explicitaccel_initialize(void);
  extern void explicitaccel_step(void);
  extern void explicitaccel_terminate(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_explicitaccel_T *const explicitaccel_M;

#ifdef __cplusplus

}
#endif

//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'explicitaccel'
//  '<S1>'   : 'explicitaccel/MicroAccel'
//  '<S2>'   : 'explicitaccel/MicroAccel/Blank Message1'
//  '<S3>'   : 'explicitaccel/MicroAccel/Blank Message2'
//  '<S4>'   : 'explicitaccel/MicroAccel/Blank Message3'
//  '<S5>'   : 'explicitaccel/MicroAccel/Blank Message4'
//  '<S6>'   : 'explicitaccel/MicroAccel/Blank Message5'
//  '<S7>'   : 'explicitaccel/MicroAccel/Blank Message6'
//  '<S8>'   : 'explicitaccel/MicroAccel/MATLAB Function'
//  '<S9>'   : 'explicitaccel/MicroAccel/MATLAB Function1'
//  '<S10>'  : 'explicitaccel/MicroAccel/MATLAB Function2'
//  '<S11>'  : 'explicitaccel/MicroAccel/Publish1'
//  '<S12>'  : 'explicitaccel/MicroAccel/Publish2'
//  '<S13>'  : 'explicitaccel/MicroAccel/Publish3'
//  '<S14>'  : 'explicitaccel/MicroAccel/Publish4'
//  '<S15>'  : 'explicitaccel/MicroAccel/Publish5'
//  '<S16>'  : 'explicitaccel/MicroAccel/Publish6'
//  '<S17>'  : 'explicitaccel/MicroAccel/Subscribe'
//  '<S18>'  : 'explicitaccel/MicroAccel/Subscribe2'
//  '<S19>'  : 'explicitaccel/MicroAccel/Subscribe4'
//  '<S20>'  : 'explicitaccel/MicroAccel/Subscribe6'
//  '<S21>'  : 'explicitaccel/MicroAccel/Subscribe8'
//  '<S22>'  : 'explicitaccel/MicroAccel/Subscribe/Enabled Subsystem'
//  '<S23>'  : 'explicitaccel/MicroAccel/Subscribe2/Enabled Subsystem'
//  '<S24>'  : 'explicitaccel/MicroAccel/Subscribe4/Enabled Subsystem'
//  '<S25>'  : 'explicitaccel/MicroAccel/Subscribe6/Enabled Subsystem'
//  '<S26>'  : 'explicitaccel/MicroAccel/Subscribe8/Enabled Subsystem'

#endif                                 // RTW_HEADER_explicitaccel_h_

//
// File trailer for generated code.
//
// [EOF]
//
