//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: explicitaccel.cpp
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
#include "explicitaccel.h"
#include "explicitaccel_private.h"

// Block signals (default storage)
B_explicitaccel_T explicitaccel_B;

// Block states (default storage)
DW_explicitaccel_T explicitaccel_DW;

// Real-time model
RT_MODEL_explicitaccel_T explicitaccel_M_ = RT_MODEL_explicitaccel_T();
RT_MODEL_explicitaccel_T *const explicitaccel_M = &explicitaccel_M_;

// Forward declaration for local functions
static void explicitaccel_SystemCore_step(boolean_T *varargout_1,
  SL_Bus_explicitaccel_std_msgs_MultiArrayDimension varargout_2_Layout_Dim[16],
  uint32_T *varargout_2_Layout_Dim_SL_Info_, uint32_T
  *varargout_2_Layout_Dim_SL_Inf_0, uint32_T *varargout_2_Layout_DataOffset,
  real_T varargout_2_Data[128], uint32_T *varargout_2_Data_SL_Info_Curren,
  uint32_T *varargout_2_Data_SL_Info_Receiv);
static void explicitaccel_SystemCore_step(boolean_T *varargout_1,
  SL_Bus_explicitaccel_std_msgs_MultiArrayDimension varargout_2_Layout_Dim[16],
  uint32_T *varargout_2_Layout_Dim_SL_Info_, uint32_T
  *varargout_2_Layout_Dim_SL_Inf_0, uint32_T *varargout_2_Layout_DataOffset,
  real_T varargout_2_Data[128], uint32_T *varargout_2_Data_SL_Info_Curren,
  uint32_T *varargout_2_Data_SL_Info_Receiv)
{
  *varargout_1 = Sub_explicitaccel_599.getLatestMessage
    (&explicitaccel_B.b_varargout_2);
  memcpy(&varargout_2_Layout_Dim[0], &explicitaccel_B.b_varargout_2.Layout.Dim[0],
         sizeof(SL_Bus_explicitaccel_std_msgs_MultiArrayDimension) << 4U);
  *varargout_2_Layout_Dim_SL_Info_ =
    explicitaccel_B.b_varargout_2.Layout.Dim_SL_Info.CurrentLength;
  *varargout_2_Layout_Dim_SL_Inf_0 =
    explicitaccel_B.b_varargout_2.Layout.Dim_SL_Info.ReceivedLength;
  *varargout_2_Layout_DataOffset =
    explicitaccel_B.b_varargout_2.Layout.DataOffset;
  memcpy(&varargout_2_Data[0], &explicitaccel_B.b_varargout_2.Data[0], sizeof
         (real_T) << 7U);
  *varargout_2_Data_SL_Info_Curren =
    explicitaccel_B.b_varargout_2.Data_SL_Info.CurrentLength;
  *varargout_2_Data_SL_Info_Receiv =
    explicitaccel_B.b_varargout_2.Data_SL_Info.ReceivedLength;
}

// Model step function
void explicitaccel_step(void)
{
  SL_Bus_explicitaccel_std_msgs_Bool rtb_BusAssignment6;
  SL_Bus_explicitaccel_std_msgs_Float64 rtb_BusAssignment2;
  SL_Bus_explicitaccel_std_msgs_Float64 rtb_BusAssignment3;
  SL_Bus_explicitaccel_std_msgs_Float64 rtb_BusAssignment4;
  int32_T i;
  int32_T k;
  int32_T weight_down;
  uint32_T b_varargout_2_Data_SL_Info_Curr;
  uint32_T b_varargout_2_Data_SL_Info_Rece;
  uint32_T b_varargout_2_Layout_DataOffset;
  uint32_T b_varargout_2_Layout_Dim_SL_I_0;
  uint32_T b_varargout_2_Layout_Dim_SL_Inf;
  boolean_T b_varargout_1;
  boolean_T exitg1;

  // Outputs for Atomic SubSystem: '<S1>/Subscribe8'
  // MATLABSystem: '<S21>/SourceBlock' incorporates:
  //   Inport: '<S26>/In1'

  b_varargout_1 = Sub_explicitaccel_559.getLatestMessage
    (&explicitaccel_B.b_varargout_2_c);

  // Outputs for Enabled SubSystem: '<S21>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S26>/Enable'

  if (b_varargout_1) {
    explicitaccel_B.In1_e = explicitaccel_B.b_varargout_2_c;
  }

  // End of MATLABSystem: '<S21>/SourceBlock'
  // End of Outputs for SubSystem: '<S21>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<S1>/Subscribe8'

  // Outputs for Atomic SubSystem: '<S1>/Subscribe6'
  // MATLABSystem: '<S20>/SourceBlock' incorporates:
  //   Inport: '<S25>/In1'

  b_varargout_1 = Sub_explicitaccel_562.getLatestMessage
    (&explicitaccel_B.b_varargout_2_c);

  // Outputs for Enabled SubSystem: '<S20>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S25>/Enable'

  if (b_varargout_1) {
    explicitaccel_B.In1_i = explicitaccel_B.b_varargout_2_c;
  }

  // End of MATLABSystem: '<S20>/SourceBlock'
  // End of Outputs for SubSystem: '<S20>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<S1>/Subscribe6'

  // Outputs for Atomic SubSystem: '<S1>/Subscribe4'
  // MATLABSystem: '<S19>/SourceBlock' incorporates:
  //   Inport: '<S24>/In1'

  b_varargout_1 = Sub_explicitaccel_624.getLatestMessage
    (&explicitaccel_B.b_varargout_2_c);

  // Outputs for Enabled SubSystem: '<S19>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S24>/Enable'

  if (b_varargout_1) {
    explicitaccel_B.In1_n = explicitaccel_B.b_varargout_2_c;
  }

  // End of MATLABSystem: '<S19>/SourceBlock'
  // End of Outputs for SubSystem: '<S19>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<S1>/Subscribe4'

  // Sum: '<S1>/Subtract2'
  explicitaccel_B.Subtract2 = explicitaccel_B.In1_n.Data +
    explicitaccel_B.In1_e.Data;

  // Outputs for Atomic SubSystem: '<S1>/Subscribe2'
  // MATLABSystem: '<S18>/SourceBlock' incorporates:
  //   Inport: '<S23>/In1'

  b_varargout_1 = Sub_explicitaccel_576.getLatestMessage
    (&explicitaccel_B.b_varargout_2_c);

  // Outputs for Enabled SubSystem: '<S18>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S23>/Enable'

  if (b_varargout_1) {
    explicitaccel_B.In1_k = explicitaccel_B.b_varargout_2_c;
  }

  // End of MATLABSystem: '<S18>/SourceBlock'
  // End of Outputs for SubSystem: '<S18>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<S1>/Subscribe2'

  // MATLABSystem: '<S1>/Current Time2'
  currentROSTimeBus(&explicitaccel_B.r);

  // Sum: '<S1>/Total Time2' incorporates:
  //   Gain: '<S1>/Gain2'
  //   MATLABSystem: '<S1>/Current Time2'

  explicitaccel_B.TotalTime2 = explicitaccel_P.Gain2_Gain *
    explicitaccel_B.r.Nsec + explicitaccel_B.r.Sec;

  // Sum: '<S1>/Subtract1' incorporates:
  //   Memory: '<S1>/Memory'

  explicitaccel_B.Subtract1 = explicitaccel_B.TotalTime2 -
    explicitaccel_DW.Memory_PreviousInput;

  // MATLABSystem: '<S1>/Get Parameter'
  ParamGet_explicitaccel_585.get_parameter(&explicitaccel_B.a_0);

  // Outputs for Atomic SubSystem: '<S1>/Subscribe'
  // MATLABSystem: '<S17>/SourceBlock' incorporates:
  //   Inport: '<S22>/In1'

  explicitaccel_SystemCore_step(&b_varargout_1,
    explicitaccel_B.b_varargout_2_Layout_Dim, &b_varargout_2_Layout_Dim_SL_Inf,
    &b_varargout_2_Layout_Dim_SL_I_0, &b_varargout_2_Layout_DataOffset,
    explicitaccel_B.b_varargout_2_Data, &b_varargout_2_Data_SL_Info_Curr,
    &b_varargout_2_Data_SL_Info_Rece);

  // Outputs for Enabled SubSystem: '<S17>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S22>/Enable'

  if (b_varargout_1) {
    memcpy(&explicitaccel_B.In1.Layout.Dim[0],
           &explicitaccel_B.b_varargout_2_Layout_Dim[0], sizeof
           (SL_Bus_explicitaccel_std_msgs_MultiArrayDimension) << 4U);
    explicitaccel_B.In1.Layout.Dim_SL_Info.CurrentLength =
      b_varargout_2_Layout_Dim_SL_Inf;
    explicitaccel_B.In1.Layout.Dim_SL_Info.ReceivedLength =
      b_varargout_2_Layout_Dim_SL_I_0;
    explicitaccel_B.In1.Layout.DataOffset = b_varargout_2_Layout_DataOffset;
    memcpy(&explicitaccel_B.In1.Data[0], &explicitaccel_B.b_varargout_2_Data[0],
           sizeof(real_T) << 7U);
    explicitaccel_B.In1.Data_SL_Info.CurrentLength =
      b_varargout_2_Data_SL_Info_Curr;
    explicitaccel_B.In1.Data_SL_Info.ReceivedLength =
      b_varargout_2_Data_SL_Info_Rece;
  }

  // End of MATLABSystem: '<S17>/SourceBlock'
  // End of Outputs for SubSystem: '<S17>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<S1>/Subscribe'

  // MATLABSystem: '<S1>/Get Parameter1'
  ParamGet_explicitaccel_631.get_parameter(&b_varargout_1);

  // MATLAB Function: '<S1>/MATLAB Function' incorporates:
  //   MATLABSystem: '<S1>/Get Parameter'
  //   MATLABSystem: '<S1>/Get Parameter1'

  weight_down = 4;
  if (!explicitaccel_DW.time_avg_target_not_empty) {
    explicitaccel_DW.t_length = 1.0;
    memset(&explicitaccel_DW.time_avg_target[0], 0, 1280U * sizeof(real_T));
    explicitaccel_DW.time_avg_target_not_empty = true;
    explicitaccel_DW.time_avg_target[1279] = explicitaccel_B.Subtract2;
  } else {
    for (i = 0; i < 1279; i++) {
      explicitaccel_DW.time_avg_target[i] = explicitaccel_DW.time_avg_target[i +
        1];
    }

    explicitaccel_DW.time_avg_target[1279] = explicitaccel_B.Subtract2;
    if (explicitaccel_DW.t_length < 1280.0) {
      explicitaccel_DW.t_length++;
    }
  }

  if (!explicitaccel_DW.previous_dx_not_empty) {
    explicitaccel_DW.previous_dx = explicitaccel_B.In1_i.Data;
    explicitaccel_DW.previous_dx_not_empty = true;
  }

  if (b_varargout_1) {
    if (!rtIsNaN(explicitaccel_B.In1.Data[0])) {
      i = 1;
    } else {
      i = 0;
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k < 129)) {
        if (!rtIsNaN(explicitaccel_B.In1.Data[k - 1])) {
          i = k;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }

    if (i == 0) {
      explicitaccel_B.v_des_data = explicitaccel_B.In1.Data[0];
    } else {
      explicitaccel_B.v_des_data = explicitaccel_B.In1.Data[i - 1];
      while (i + 1 < 129) {
        if (explicitaccel_B.v_des_data > explicitaccel_B.In1.Data[i]) {
          explicitaccel_B.v_des_data = explicitaccel_B.In1.Data[i];
        }

        i++;
      }
    }
  } else {
    weight_down = 0;
    explicitaccel_B.v_des_data = 15.0;
  }

  explicitaccel_B.v_des_dot = explicitaccel_DW.time_avg_target[0];
  for (i = 0; i < 1023; i++) {
    explicitaccel_B.v_des_dot += explicitaccel_DW.time_avg_target[i + 1];
  }

  explicitaccel_B.bsum = explicitaccel_DW.time_avg_target[1024];
  for (i = 0; i < 255; i++) {
    explicitaccel_B.bsum += explicitaccel_DW.time_avg_target[i + 1025];
  }

  if ((1.0 > explicitaccel_B.In1_e.Data) || rtIsNaN(explicitaccel_B.In1_e.Data))
  {
    explicitaccel_B.a_12 = 1.0;
  } else {
    explicitaccel_B.a_12 = explicitaccel_B.In1_e.Data;
  }

  explicitaccel_B.a_12 = (explicitaccel_B.In1_i.Data - 3.0 *
    explicitaccel_B.In1_e.Data) * 5.0 / explicitaccel_B.a_12;
  if ((0.0 > explicitaccel_B.a_12) || rtIsNaN(explicitaccel_B.a_12)) {
    explicitaccel_B.a_12 = 0.0;
  }

  explicitaccel_B.bsum = ((explicitaccel_B.a_12 * explicitaccel_B.a_12 * 0.1 +
    (explicitaccel_B.v_des_dot + explicitaccel_B.bsum) /
    explicitaccel_DW.t_length) + static_cast<real_T>(weight_down) *
    explicitaccel_B.v_des_data) / (static_cast<real_T>(weight_down) + 1.0);
  if (!explicitaccel_DW.previous_v_des_not_empty) {
    explicitaccel_DW.previous_v_des_not_empty = true;
    explicitaccel_B.v_des_dot = 0.0;
  } else {
    explicitaccel_B.v_des_dot = (explicitaccel_B.bsum -
      explicitaccel_DW.previous_v_des) / explicitaccel_B.Subtract1;
  }

  explicitaccel_DW.previous_v_des = explicitaccel_B.bsum;
  if (explicitaccel_B.In1_i.Data - 2.0 > 0.0) {
    explicitaccel_B.a_12 = explicitaccel_B.In1_i.Data - 2.0;
  } else {
    explicitaccel_B.a_12 = 0.0;
  }

  explicitaccel_B.v_max = sqrt((explicitaccel_B.Subtract2 *
    explicitaccel_B.Subtract2 * 0.5 / fabs(explicitaccel_B.a_0) +
    explicitaccel_B.a_12) * 6.0);
  if (!explicitaccel_DW.previous_v_max_not_empty) {
    explicitaccel_DW.previous_v_max_not_empty = true;
    explicitaccel_B.v_max_dot = 0.0;
  } else if (fabs(explicitaccel_B.In1_i.Data - explicitaccel_DW.previous_dx) >
             explicitaccel_B.Subtract1 * 50.0) {
    explicitaccel_B.v_max_dot = 0.0;
  } else {
    explicitaccel_B.v_max_dot = (explicitaccel_B.v_max -
      explicitaccel_DW.previous_v_max) / explicitaccel_B.Subtract1;
  }

  explicitaccel_DW.previous_v_max = explicitaccel_B.v_max;
  if ((0.0 > explicitaccel_B.In1_i.Data - 2.0) || rtIsNaN
      (explicitaccel_B.In1_i.Data - 2.0)) {
    explicitaccel_B.a_12 = 0.0;
  } else {
    explicitaccel_B.a_12 = explicitaccel_B.In1_i.Data - 2.0;
  }

  explicitaccel_B.a_12 = explicitaccel_B.In1_e.Data * explicitaccel_B.In1_e.Data
    * -0.5 / ((explicitaccel_B.Subtract2 + 0.001) * (explicitaccel_B.Subtract2 +
    0.001) * 0.5 / fabs(explicitaccel_B.In1_k.Data - 0.01) +
              explicitaccel_B.a_12);
  explicitaccel_B.a_0 = explicitaccel_B.In1_k.Data * explicitaccel_B.In1_e.Data /
    (explicitaccel_B.Subtract2 + 0.001);
  if (explicitaccel_B.In1_k.Data < 0.0) {
    if (explicitaccel_B.a_12 > explicitaccel_B.a_0) {
      explicitaccel_B.a_0 = explicitaccel_B.a_12;
    } else if (!(explicitaccel_B.Subtract2 >= explicitaccel_B.In1_e.Data)) {
      explicitaccel_B.a_0 = explicitaccel_B.In1_e.Data -
        explicitaccel_B.Subtract2;
      if (explicitaccel_B.In1_i.Data - 2.0 > 0.001) {
        explicitaccel_B.a_12 = explicitaccel_B.In1_i.Data - 2.0;
      } else {
        explicitaccel_B.a_12 = 0.001;
      }

      explicitaccel_B.a_0 = explicitaccel_B.In1_k.Data - explicitaccel_B.a_0 *
        explicitaccel_B.a_0 * 0.5 / explicitaccel_B.a_12;
    }
  } else if (explicitaccel_B.In1_k.Data >= 0.0) {
    if (explicitaccel_B.In1_e.Data >= explicitaccel_B.Subtract2) {
      explicitaccel_B.a_0 = explicitaccel_B.In1_e.Data -
        explicitaccel_B.Subtract2;
      if (explicitaccel_B.In1_i.Data - 2.0 > 0.001) {
        explicitaccel_B.a_12 = explicitaccel_B.In1_i.Data - 2.0;
      } else {
        explicitaccel_B.a_12 = 0.001;
      }

      explicitaccel_B.a_0 = explicitaccel_B.In1_k.Data - explicitaccel_B.a_0 *
        explicitaccel_B.a_0 * 0.5 / explicitaccel_B.a_12;
    } else {
      explicitaccel_B.a_0 = (explicitaccel_B.Subtract2 -
        explicitaccel_B.In1_e.Data) * explicitaccel_B.In1_k.Data +
        explicitaccel_B.In1_k.Data;
      if ((1.0 < explicitaccel_B.a_0) || rtIsNaN(explicitaccel_B.a_0)) {
        explicitaccel_B.a_0 = 1.0;
      }
    }
  } else {
    explicitaccel_B.a_0 = (rtNaN);
  }

  if ((explicitaccel_B.In1_e.Data > explicitaccel_B.Subtract2) || rtIsNaN
      (explicitaccel_B.Subtract2)) {
    explicitaccel_B.a_12 = explicitaccel_B.In1_e.Data;
  } else {
    explicitaccel_B.a_12 = explicitaccel_B.Subtract2;
  }

  if (explicitaccel_B.In1_i.Data > explicitaccel_B.a_12 * 5.0) {
    explicitaccel_B.a_0 = 1.0;
  }

  explicitaccel_DW.previous_dx = explicitaccel_B.In1_i.Data;
  explicitaccel_B.a_12 = -(explicitaccel_B.In1_e.Data - explicitaccel_B.bsum) +
    explicitaccel_B.v_des_dot;
  if (!(explicitaccel_B.a_12 > -1.0)) {
    explicitaccel_B.a_12 = -1.0;
  }

  explicitaccel_B.v_max_dot += -(explicitaccel_B.In1_e.Data -
    explicitaccel_B.v_max);
  if ((explicitaccel_B.a_12 < explicitaccel_B.v_max_dot) || rtIsNaN
      (explicitaccel_B.v_max_dot)) {
    explicitaccel_B.v_des_dot = explicitaccel_B.a_12;
  } else {
    explicitaccel_B.v_des_dot = explicitaccel_B.v_max_dot;
  }

  if ((!(explicitaccel_B.v_des_dot < explicitaccel_B.a_0)) && (!rtIsNaN
       (explicitaccel_B.a_0))) {
    explicitaccel_B.v_des_dot = explicitaccel_B.a_0;
  }

  if (!(explicitaccel_B.v_des_dot > -3.0)) {
    explicitaccel_B.v_des_dot = -3.0;
  }

  if (!(explicitaccel_B.v_des_dot < 1.0)) {
    explicitaccel_B.v_des_dot = 1.0;
  }

  if ((explicitaccel_B.In1_e.Data >= 30.0) && ((0.0 < explicitaccel_B.v_des_dot)
       || rtIsNaN(explicitaccel_B.v_des_dot))) {
    explicitaccel_B.v_des_dot = 0.0;
  }

  // BusAssignment: '<S1>/Bus Assignment1' incorporates:
  //   Constant: '<S1>/Constant'
  //   Constant: '<S2>/Constant'
  //   MATLAB Function: '<S1>/MATLAB Function'

  explicitaccel_B.BusAssignment1 = explicitaccel_P.Constant_Value_j;
  explicitaccel_B.BusAssignment1.Linear.X = explicitaccel_B.bsum;
  explicitaccel_B.BusAssignment1.Linear.Y = explicitaccel_B.v_des_data;
  explicitaccel_B.BusAssignment1.Linear.Z = 6.0;
  explicitaccel_B.BusAssignment1.Angular.Z = explicitaccel_P.Constant_Value_a;
  explicitaccel_B.BusAssignment1.Angular.X = explicitaccel_B.v_max;

  // Outputs for Atomic SubSystem: '<S1>/Publish1'
  // MATLABSystem: '<S11>/SinkBlock'
  Pub_explicitaccel_592.publish(&explicitaccel_B.BusAssignment1);

  // End of Outputs for SubSystem: '<S1>/Publish1'

  // MATLAB Function: '<S1>/MATLAB Function1' incorporates:
  //   MATLAB Function: '<S1>/MATLAB Function2'
  //   Memory: '<S1>/headway_memory'

  explicitaccel_B.Subtract2 -= explicitaccel_B.In1_e.Data;
  explicitaccel_B.alpha = explicitaccel_B.In1_i.Data /
    explicitaccel_B.In1_e.Data;
  explicitaccel_B.v_des_data = static_cast<real_T>(explicitaccel_B.In1_e.Data >
    0.0) * explicitaccel_B.alpha + static_cast<real_T>
    (explicitaccel_B.In1_e.Data <= 0.0) * 60.0;
  explicitaccel_B.bsum = static_cast<real_T>(explicitaccel_B.Subtract2 < 0.0) *
    (-explicitaccel_B.In1_i.Data / explicitaccel_B.Subtract2) +
    static_cast<real_T>(explicitaccel_B.Subtract2 >= 0.0) * 60.0;
  explicitaccel_B.v_max = explicitaccel_B.In1_i.Data -
    explicitaccel_DW.headway_memory_PreviousInput;

  // MATLAB Function: '<S1>/MATLAB Function2' incorporates:
  //   MATLAB Function: '<S1>/MATLAB Function'
  //   Memory: '<S1>/accel_memory'

  explicitaccel_B.alpha = (tanh((10.34 / explicitaccel_B.In1_i.Data *
    static_cast<real_T>(explicitaccel_B.Subtract2 < 0.0) + static_cast<real_T>
    (explicitaccel_B.Subtract2 >= 0.0)) * explicitaccel_B.Subtract2) * 0.5 + 0.5)
    * 0.25 + tanh((static_cast<real_T>(explicitaccel_B.In1_e.Data > 0.0) *
                   explicitaccel_B.alpha + static_cast<real_T>
                   (explicitaccel_B.In1_e.Data <= 0.0) * 60.0) * 1.32) * 0.75;
  explicitaccel_B.alpha = (1.0 - explicitaccel_B.alpha) *
    explicitaccel_B.v_des_dot + explicitaccel_B.alpha *
    explicitaccel_DW.accel_memory_PreviousInput;

  // MATLAB Function: '<S1>/MATLAB Function1' incorporates:
  //   MATLAB Function: '<S1>/MATLAB Function'
  //   Memory: '<S1>/accel_memory'

  if (explicitaccel_B.v_max <= -3.5) {
    if (fabs(explicitaccel_B.v_des_dot -
             explicitaccel_DW.accel_memory_PreviousInput) > 0.9 *
        explicitaccel_B.Subtract1) {
      if ((explicitaccel_B.Subtract2 >= 0.0) && (explicitaccel_B.v_des_data >
           2.0)) {
        weight_down = -1;
      } else if ((explicitaccel_B.Subtract2 < 0.0) && (explicitaccel_B.bsum >
                  4.5)) {
        weight_down = -1;
      } else {
        weight_down = 0;
      }
    } else {
      weight_down = 0;
    }
  } else if ((explicitaccel_B.v_max >= 3.5) && (fabs(explicitaccel_B.v_des_dot -
    explicitaccel_DW.accel_memory_PreviousInput) > 0.9 *
              explicitaccel_B.Subtract1)) {
    if ((explicitaccel_B.Subtract2 >= 0.0) && (explicitaccel_B.v_des_data > 2.0))
    {
      weight_down = 1;
    } else {
      weight_down = ((explicitaccel_B.Subtract2 < 0.0) && (explicitaccel_B.bsum >
        4.5));
    }
  } else {
    weight_down = 0;
  }

  // Switch: '<S1>/Switch'
  if ((weight_down != 0) && (!(fabs(explicitaccel_B.alpha -
         explicitaccel_B.v_des_dot) < 0.3 * explicitaccel_B.Subtract1))) {
    // MATLAB Function: '<S1>/MATLAB Function2' incorporates:
    //   MATLAB Function: '<S1>/MATLAB Function'

    explicitaccel_B.v_des_dot = explicitaccel_B.alpha;
  }

  // End of Switch: '<S1>/Switch'

  // BusAssignment: '<S1>/Bus Assignment5'
  explicitaccel_B.BusAssignment5.Data = explicitaccel_B.v_des_dot;

  // Outputs for Atomic SubSystem: '<S1>/Publish2'
  // MATLABSystem: '<S12>/SinkBlock'
  Pub_explicitaccel_609.publish(&explicitaccel_B.BusAssignment5);

  // End of Outputs for SubSystem: '<S1>/Publish2'

  // BusAssignment: '<S1>/Bus Assignment2' incorporates:
  //   MATLAB Function: '<S1>/MATLAB Function'

  rtb_BusAssignment2.Data = explicitaccel_B.a_12;

  // Outputs for Atomic SubSystem: '<S1>/Publish3'
  // MATLABSystem: '<S13>/SinkBlock'
  Pub_explicitaccel_610.publish(&rtb_BusAssignment2);

  // End of Outputs for SubSystem: '<S1>/Publish3'

  // BusAssignment: '<S1>/Bus Assignment3' incorporates:
  //   MATLAB Function: '<S1>/MATLAB Function'

  rtb_BusAssignment3.Data = explicitaccel_B.v_max_dot;

  // Outputs for Atomic SubSystem: '<S1>/Publish4'
  // MATLABSystem: '<S14>/SinkBlock'
  Pub_explicitaccel_611.publish(&rtb_BusAssignment3);

  // End of Outputs for SubSystem: '<S1>/Publish4'

  // BusAssignment: '<S1>/Bus Assignment4' incorporates:
  //   MATLAB Function: '<S1>/MATLAB Function'

  rtb_BusAssignment4.Data = explicitaccel_B.a_0;

  // Outputs for Atomic SubSystem: '<S1>/Publish5'
  // MATLABSystem: '<S15>/SinkBlock'
  Pub_explicitaccel_612.publish(&rtb_BusAssignment4);

  // End of Outputs for SubSystem: '<S1>/Publish5'

  // BusAssignment: '<S1>/Bus Assignment6' incorporates:
  //   MATLABSystem: '<S1>/Get Parameter1'

  rtb_BusAssignment6.Data = b_varargout_1;

  // Outputs for Atomic SubSystem: '<S1>/Publish6'
  // MATLABSystem: '<S16>/SinkBlock'
  Pub_explicitaccel_635.publish(&rtb_BusAssignment6);

  // End of Outputs for SubSystem: '<S1>/Publish6'

  // Update for Memory: '<S1>/Memory'
  explicitaccel_DW.Memory_PreviousInput = explicitaccel_B.TotalTime2;

  // Update for Memory: '<S1>/accel_memory'
  explicitaccel_DW.accel_memory_PreviousInput = explicitaccel_B.v_des_dot;

  // Update for Memory: '<S1>/headway_memory'
  explicitaccel_DW.headway_memory_PreviousInput = explicitaccel_B.In1_i.Data;
}

// Model initialize function
void explicitaccel_initialize(void)
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));

  {
    int32_T i;
    char_T b_zeroDelimTopic_4[13];
    char_T b_zeroDelimTopic_2[11];
    char_T b_zeroDelimTopic_0[10];
    char_T b_zeroDelimTopic_3[9];
    char_T b_zeroDelimTopic_1[8];
    char_T b_zeroDelimTopic[4];
    static const char_T tmp[9] = { 'l', 'e', 'a', 'd', '_', 'd', 'i', 's', 't' };

    static const char_T tmp_0[7] = { 'r', 'e', 'l', '_', 'v', 'e', 'l' };

    static const char_T tmp_1[10] = { 'l', 'e', 'a', 'd', '_', 'a', 'c', 'c',
      'e', 'l' };

    static const char_T tmp_2[9] = { 'd', 'o', 'w', 'n', '_', 'd', 'a', 't', 'a'
    };

    static const char_T tmp_3[7] = { 'c', 'm', 'd', '_', 'v', 'e', 'l' };

    static const char_T tmp_4[9] = { 'c', 'm', 'd', '_', 'a', 'c', 'c', 'e', 'l'
    };

    static const char_T tmp_5[9] = { 'a', '_', 'v', 'd', 'e', 's', 'o', 'u', 't'
    };

    static const char_T tmp_6[9] = { 'a', '_', 'v', 'm', 'a', 'x', 'o', 'u', 't'
    };

    static const char_T tmp_7[8] = { 'a', '_', 'm', 'n', 'g', 'o', 'u', 't' };

    static const char_T tmp_8[12] = { 'd', 'o', 'w', 'n', 'd', 'a', 't', 'a',
      'f', 'l', 'a', 'g' };

    static const char_T tmp_9[16] = { 'm', 'a', 'x', '_', 'd', 'e', 'a', 'c',
      'c', 'e', 'l', '_', 'l', 'e', 'a', 'd' };

    static const char_T tmp_a[13] = { 'u', 's', 'e', '_', 'd', 'o', 'w', 'n',
      '_', 'd', 'a', 't', 'a' };

    // InitializeConditions for Memory: '<S1>/Memory'
    explicitaccel_DW.Memory_PreviousInput =
      explicitaccel_P.Memory_InitialCondition;

    // InitializeConditions for Memory: '<S1>/accel_memory'
    explicitaccel_DW.accel_memory_PreviousInput =
      explicitaccel_P.accel_memory_InitialCondition;

    // InitializeConditions for Memory: '<S1>/headway_memory'
    explicitaccel_DW.headway_memory_PreviousInput =
      explicitaccel_P.headway_memory_InitialCondition;

    // SystemInitialize for Atomic SubSystem: '<S1>/Subscribe8'
    // SystemInitialize for Enabled SubSystem: '<S21>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S26>/Out1' incorporates:
    //   Inport: '<S26>/In1'

    explicitaccel_B.In1_e = explicitaccel_P.Out1_Y0_f;

    // End of SystemInitialize for SubSystem: '<S21>/Enabled Subsystem'

    // Start for MATLABSystem: '<S21>/SourceBlock'
    explicitaccel_DW.obj_ke.matlabCodegenIsDeleted = false;
    explicitaccel_DW.obj_ke.isInitialized = 1;
    b_zeroDelimTopic[0] = 'v';
    b_zeroDelimTopic[1] = 'e';
    b_zeroDelimTopic[2] = 'l';
    b_zeroDelimTopic[3] = '\x00';
    Sub_explicitaccel_559.createSubscriber(&b_zeroDelimTopic[0], 1);
    explicitaccel_DW.obj_ke.isSetupComplete = true;

    // End of SystemInitialize for SubSystem: '<S1>/Subscribe8'

    // SystemInitialize for Atomic SubSystem: '<S1>/Subscribe6'
    // SystemInitialize for Enabled SubSystem: '<S20>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S25>/Out1' incorporates:
    //   Inport: '<S25>/In1'

    explicitaccel_B.In1_i = explicitaccel_P.Out1_Y0_m;

    // End of SystemInitialize for SubSystem: '<S20>/Enabled Subsystem'

    // Start for MATLABSystem: '<S20>/SourceBlock'
    explicitaccel_DW.obj_n0.matlabCodegenIsDeleted = false;
    explicitaccel_DW.obj_n0.isInitialized = 1;
    for (i = 0; i < 9; i++) {
      b_zeroDelimTopic_0[i] = tmp[i];
    }

    b_zeroDelimTopic_0[9] = '\x00';
    Sub_explicitaccel_562.createSubscriber(&b_zeroDelimTopic_0[0], 1);
    explicitaccel_DW.obj_n0.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S20>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<S1>/Subscribe6'

    // SystemInitialize for Atomic SubSystem: '<S1>/Subscribe4'
    // SystemInitialize for Enabled SubSystem: '<S19>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S24>/Out1' incorporates:
    //   Inport: '<S24>/In1'

    explicitaccel_B.In1_n = explicitaccel_P.Out1_Y0_k;

    // End of SystemInitialize for SubSystem: '<S19>/Enabled Subsystem'

    // Start for MATLABSystem: '<S19>/SourceBlock'
    explicitaccel_DW.obj_h.matlabCodegenIsDeleted = false;
    explicitaccel_DW.obj_h.isInitialized = 1;
    for (i = 0; i < 7; i++) {
      b_zeroDelimTopic_1[i] = tmp_0[i];
    }

    b_zeroDelimTopic_1[7] = '\x00';
    Sub_explicitaccel_624.createSubscriber(&b_zeroDelimTopic_1[0], 1);
    explicitaccel_DW.obj_h.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S19>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<S1>/Subscribe4'

    // SystemInitialize for Atomic SubSystem: '<S1>/Subscribe2'
    // SystemInitialize for Enabled SubSystem: '<S18>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S23>/Out1' incorporates:
    //   Inport: '<S23>/In1'

    explicitaccel_B.In1_k = explicitaccel_P.Out1_Y0_j;

    // End of SystemInitialize for SubSystem: '<S18>/Enabled Subsystem'

    // Start for MATLABSystem: '<S18>/SourceBlock'
    explicitaccel_DW.obj_d.matlabCodegenIsDeleted = false;
    explicitaccel_DW.obj_d.isInitialized = 1;
    for (i = 0; i < 10; i++) {
      b_zeroDelimTopic_2[i] = tmp_1[i];
    }

    b_zeroDelimTopic_2[10] = '\x00';
    Sub_explicitaccel_576.createSubscriber(&b_zeroDelimTopic_2[0], 1);
    explicitaccel_DW.obj_d.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S18>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<S1>/Subscribe2'

    // SystemInitialize for Atomic SubSystem: '<S1>/Subscribe'
    // SystemInitialize for Enabled SubSystem: '<S17>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S22>/Out1' incorporates:
    //   Inport: '<S22>/In1'

    explicitaccel_B.In1 = explicitaccel_P.Out1_Y0;

    // End of SystemInitialize for SubSystem: '<S17>/Enabled Subsystem'

    // Start for MATLABSystem: '<S17>/SourceBlock'
    explicitaccel_DW.obj_ep.matlabCodegenIsDeleted = false;
    explicitaccel_DW.obj_ep.isInitialized = 1;
    for (i = 0; i < 9; i++) {
      b_zeroDelimTopic_0[i] = tmp_2[i];
    }

    b_zeroDelimTopic_0[9] = '\x00';
    Sub_explicitaccel_599.createSubscriber(&b_zeroDelimTopic_0[0], 1);
    explicitaccel_DW.obj_ep.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S17>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<S1>/Subscribe'

    // SystemInitialize for Atomic SubSystem: '<S1>/Publish1'
    // Start for MATLABSystem: '<S11>/SinkBlock'
    explicitaccel_DW.obj_c.matlabCodegenIsDeleted = false;
    explicitaccel_DW.obj_c.isInitialized = 1;
    for (i = 0; i < 7; i++) {
      b_zeroDelimTopic_1[i] = tmp_3[i];
    }

    b_zeroDelimTopic_1[7] = '\x00';
    Pub_explicitaccel_592.createPublisher(&b_zeroDelimTopic_1[0], 1);
    explicitaccel_DW.obj_c.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S11>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<S1>/Publish1'

    // SystemInitialize for Atomic SubSystem: '<S1>/Publish2'
    // Start for MATLABSystem: '<S12>/SinkBlock'
    explicitaccel_DW.obj_n5.matlabCodegenIsDeleted = false;
    explicitaccel_DW.obj_n5.isInitialized = 1;
    for (i = 0; i < 9; i++) {
      b_zeroDelimTopic_0[i] = tmp_4[i];
    }

    b_zeroDelimTopic_0[9] = '\x00';
    Pub_explicitaccel_609.createPublisher(&b_zeroDelimTopic_0[0], 1);
    explicitaccel_DW.obj_n5.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S12>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<S1>/Publish2'

    // SystemInitialize for Atomic SubSystem: '<S1>/Publish3'
    // Start for MATLABSystem: '<S13>/SinkBlock'
    explicitaccel_DW.obj_nb.matlabCodegenIsDeleted = false;
    explicitaccel_DW.obj_nb.isInitialized = 1;
    for (i = 0; i < 9; i++) {
      b_zeroDelimTopic_0[i] = tmp_5[i];
    }

    b_zeroDelimTopic_0[9] = '\x00';
    Pub_explicitaccel_610.createPublisher(&b_zeroDelimTopic_0[0], 1);
    explicitaccel_DW.obj_nb.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S13>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<S1>/Publish3'

    // SystemInitialize for Atomic SubSystem: '<S1>/Publish4'
    // Start for MATLABSystem: '<S14>/SinkBlock'
    explicitaccel_DW.obj_nj.matlabCodegenIsDeleted = false;
    explicitaccel_DW.obj_nj.isInitialized = 1;
    for (i = 0; i < 9; i++) {
      b_zeroDelimTopic_0[i] = tmp_6[i];
    }

    b_zeroDelimTopic_0[9] = '\x00';
    Pub_explicitaccel_611.createPublisher(&b_zeroDelimTopic_0[0], 1);
    explicitaccel_DW.obj_nj.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S14>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<S1>/Publish4'

    // SystemInitialize for Atomic SubSystem: '<S1>/Publish5'
    // Start for MATLABSystem: '<S15>/SinkBlock'
    explicitaccel_DW.obj_n.matlabCodegenIsDeleted = false;
    explicitaccel_DW.obj_n.isInitialized = 1;
    for (i = 0; i < 8; i++) {
      b_zeroDelimTopic_3[i] = tmp_7[i];
    }

    b_zeroDelimTopic_3[8] = '\x00';
    Pub_explicitaccel_612.createPublisher(&b_zeroDelimTopic_3[0], 1);
    explicitaccel_DW.obj_n.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S15>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<S1>/Publish5'

    // SystemInitialize for Atomic SubSystem: '<S1>/Publish6'
    // Start for MATLABSystem: '<S16>/SinkBlock'
    explicitaccel_DW.obj_g.matlabCodegenIsDeleted = false;
    explicitaccel_DW.obj_g.isInitialized = 1;
    for (i = 0; i < 12; i++) {
      b_zeroDelimTopic_4[i] = tmp_8[i];
    }

    b_zeroDelimTopic_4[12] = '\x00';
    Pub_explicitaccel_635.createPublisher(&b_zeroDelimTopic_4[0], 1);
    explicitaccel_DW.obj_g.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S16>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<S1>/Publish6'

    // Start for MATLABSystem: '<S1>/Current Time2'
    explicitaccel_DW.obj.matlabCodegenIsDeleted = false;
    explicitaccel_DW.obj.isInitialized = 1;
    explicitaccel_DW.obj.isSetupComplete = true;

    // Start for MATLABSystem: '<S1>/Get Parameter'
    explicitaccel_DW.obj_e.matlabCodegenIsDeleted = false;
    explicitaccel_DW.obj_e.isInitialized = 1;
    for (i = 0; i < 16; i++) {
      explicitaccel_B.b_zeroDelimName[i] = tmp_9[i];
    }

    explicitaccel_B.b_zeroDelimName[16] = '\x00';
    ParamGet_explicitaccel_585.initialize(&explicitaccel_B.b_zeroDelimName[0]);
    ParamGet_explicitaccel_585.initialize_error_codes(0, 1, 2, 3);
    ParamGet_explicitaccel_585.set_initial_value(-4.5);
    explicitaccel_DW.obj_e.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S1>/Get Parameter'

    // Start for MATLABSystem: '<S1>/Get Parameter1'
    explicitaccel_DW.obj_k.matlabCodegenIsDeleted = false;
    explicitaccel_DW.obj_k.isInitialized = 1;
    for (i = 0; i < 13; i++) {
      explicitaccel_B.b_zeroDelimName_m[i] = tmp_a[i];
    }

    explicitaccel_B.b_zeroDelimName_m[13] = '\x00';
    ParamGet_explicitaccel_631.initialize(&explicitaccel_B.b_zeroDelimName_m[0]);
    ParamGet_explicitaccel_631.initialize_error_codes(0, 1, 2, 3);
    ParamGet_explicitaccel_631.set_initial_value(false);
    explicitaccel_DW.obj_k.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S1>/Get Parameter1'
  }
}

// Model terminate function
void explicitaccel_terminate(void)
{
  // Terminate for Atomic SubSystem: '<S1>/Subscribe8'
  // Terminate for MATLABSystem: '<S21>/SourceBlock'
  if (!explicitaccel_DW.obj_ke.matlabCodegenIsDeleted) {
    explicitaccel_DW.obj_ke.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S21>/SourceBlock'
  // End of Terminate for SubSystem: '<S1>/Subscribe8'

  // Terminate for Atomic SubSystem: '<S1>/Subscribe6'
  // Terminate for MATLABSystem: '<S20>/SourceBlock'
  if (!explicitaccel_DW.obj_n0.matlabCodegenIsDeleted) {
    explicitaccel_DW.obj_n0.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S20>/SourceBlock'
  // End of Terminate for SubSystem: '<S1>/Subscribe6'

  // Terminate for Atomic SubSystem: '<S1>/Subscribe4'
  // Terminate for MATLABSystem: '<S19>/SourceBlock'
  if (!explicitaccel_DW.obj_h.matlabCodegenIsDeleted) {
    explicitaccel_DW.obj_h.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S19>/SourceBlock'
  // End of Terminate for SubSystem: '<S1>/Subscribe4'

  // Terminate for Atomic SubSystem: '<S1>/Subscribe2'
  // Terminate for MATLABSystem: '<S18>/SourceBlock'
  if (!explicitaccel_DW.obj_d.matlabCodegenIsDeleted) {
    explicitaccel_DW.obj_d.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S18>/SourceBlock'
  // End of Terminate for SubSystem: '<S1>/Subscribe2'

  // Terminate for MATLABSystem: '<S1>/Current Time2'
  if (!explicitaccel_DW.obj.matlabCodegenIsDeleted) {
    explicitaccel_DW.obj.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S1>/Current Time2'

  // Terminate for MATLABSystem: '<S1>/Get Parameter'
  if (!explicitaccel_DW.obj_e.matlabCodegenIsDeleted) {
    explicitaccel_DW.obj_e.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S1>/Get Parameter'

  // Terminate for Atomic SubSystem: '<S1>/Subscribe'
  // Terminate for MATLABSystem: '<S17>/SourceBlock'
  if (!explicitaccel_DW.obj_ep.matlabCodegenIsDeleted) {
    explicitaccel_DW.obj_ep.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S17>/SourceBlock'
  // End of Terminate for SubSystem: '<S1>/Subscribe'

  // Terminate for MATLABSystem: '<S1>/Get Parameter1'
  if (!explicitaccel_DW.obj_k.matlabCodegenIsDeleted) {
    explicitaccel_DW.obj_k.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S1>/Get Parameter1'

  // Terminate for Atomic SubSystem: '<S1>/Publish1'
  // Terminate for MATLABSystem: '<S11>/SinkBlock'
  if (!explicitaccel_DW.obj_c.matlabCodegenIsDeleted) {
    explicitaccel_DW.obj_c.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S11>/SinkBlock'
  // End of Terminate for SubSystem: '<S1>/Publish1'

  // Terminate for Atomic SubSystem: '<S1>/Publish2'
  // Terminate for MATLABSystem: '<S12>/SinkBlock'
  if (!explicitaccel_DW.obj_n5.matlabCodegenIsDeleted) {
    explicitaccel_DW.obj_n5.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S12>/SinkBlock'
  // End of Terminate for SubSystem: '<S1>/Publish2'

  // Terminate for Atomic SubSystem: '<S1>/Publish3'
  // Terminate for MATLABSystem: '<S13>/SinkBlock'
  if (!explicitaccel_DW.obj_nb.matlabCodegenIsDeleted) {
    explicitaccel_DW.obj_nb.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S13>/SinkBlock'
  // End of Terminate for SubSystem: '<S1>/Publish3'

  // Terminate for Atomic SubSystem: '<S1>/Publish4'
  // Terminate for MATLABSystem: '<S14>/SinkBlock'
  if (!explicitaccel_DW.obj_nj.matlabCodegenIsDeleted) {
    explicitaccel_DW.obj_nj.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S14>/SinkBlock'
  // End of Terminate for SubSystem: '<S1>/Publish4'

  // Terminate for Atomic SubSystem: '<S1>/Publish5'
  // Terminate for MATLABSystem: '<S15>/SinkBlock'
  if (!explicitaccel_DW.obj_n.matlabCodegenIsDeleted) {
    explicitaccel_DW.obj_n.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S15>/SinkBlock'
  // End of Terminate for SubSystem: '<S1>/Publish5'

  // Terminate for Atomic SubSystem: '<S1>/Publish6'
  // Terminate for MATLABSystem: '<S16>/SinkBlock'
  if (!explicitaccel_DW.obj_g.matlabCodegenIsDeleted) {
    explicitaccel_DW.obj_g.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S16>/SinkBlock'
  // End of Terminate for SubSystem: '<S1>/Publish6'
}

//
// File trailer for generated code.
//
// [EOF]
//
