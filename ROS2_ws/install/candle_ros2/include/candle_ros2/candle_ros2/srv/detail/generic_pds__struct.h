// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from candle_ros2:srv/GenericPds.idl
// generated code does not contain a copyright notice

#ifndef CANDLE_ROS2__SRV__DETAIL__GENERIC_PDS__STRUCT_H_
#define CANDLE_ROS2__SRV__DETAIL__GENERIC_PDS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GenericPds in the package candle_ros2.
typedef struct candle_ros2__srv__GenericPds_Request
{
  uint8_t structure_needs_at_least_one_member;
} candle_ros2__srv__GenericPds_Request;

// Struct for a sequence of candle_ros2__srv__GenericPds_Request.
typedef struct candle_ros2__srv__GenericPds_Request__Sequence
{
  candle_ros2__srv__GenericPds_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} candle_ros2__srv__GenericPds_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'success'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/GenericPds in the package candle_ros2.
typedef struct candle_ros2__srv__GenericPds_Response
{
  /// Success status for each device
  rosidl_runtime_c__boolean__Sequence success;
} candle_ros2__srv__GenericPds_Response;

// Struct for a sequence of candle_ros2__srv__GenericPds_Response.
typedef struct candle_ros2__srv__GenericPds_Response__Sequence
{
  candle_ros2__srv__GenericPds_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} candle_ros2__srv__GenericPds_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CANDLE_ROS2__SRV__DETAIL__GENERIC_PDS__STRUCT_H_
