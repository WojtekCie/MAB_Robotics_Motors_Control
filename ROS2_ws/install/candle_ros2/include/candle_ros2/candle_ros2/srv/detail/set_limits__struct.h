// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from candle_ros2:srv/SetLimits.idl
// generated code does not contain a copyright notice

#ifndef CANDLE_ROS2__SRV__DETAIL__SET_LIMITS__STRUCT_H_
#define CANDLE_ROS2__SRV__DETAIL__SET_LIMITS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'device_ids'
// Member 'velocity_limit'
// Member 'torque_limit'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/SetLimits in the package candle_ros2.
typedef struct candle_ros2__srv__SetLimits_Request
{
  /// Device IDs
  rosidl_runtime_c__uint16__Sequence device_ids;
  /// Velocity limit for each device
  rosidl_runtime_c__float__Sequence velocity_limit;
  /// Torque limit for each device
  rosidl_runtime_c__float__Sequence torque_limit;
} candle_ros2__srv__SetLimits_Request;

// Struct for a sequence of candle_ros2__srv__SetLimits_Request.
typedef struct candle_ros2__srv__SetLimits_Request__Sequence
{
  candle_ros2__srv__SetLimits_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} candle_ros2__srv__SetLimits_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'success'
// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/SetLimits in the package candle_ros2.
typedef struct candle_ros2__srv__SetLimits_Response
{
  /// Success status for each device
  rosidl_runtime_c__boolean__Sequence success;
} candle_ros2__srv__SetLimits_Response;

// Struct for a sequence of candle_ros2__srv__SetLimits_Response.
typedef struct candle_ros2__srv__SetLimits_Response__Sequence
{
  candle_ros2__srv__SetLimits_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} candle_ros2__srv__SetLimits_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CANDLE_ROS2__SRV__DETAIL__SET_LIMITS__STRUCT_H_
