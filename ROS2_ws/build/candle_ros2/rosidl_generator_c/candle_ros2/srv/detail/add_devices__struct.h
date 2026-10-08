// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from candle_ros2:srv/AddDevices.idl
// generated code does not contain a copyright notice

#ifndef CANDLE_ROS2__SRV__DETAIL__ADD_DEVICES__STRUCT_H_
#define CANDLE_ROS2__SRV__DETAIL__ADD_DEVICES__STRUCT_H_

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
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/AddDevices in the package candle_ros2.
typedef struct candle_ros2__srv__AddDevices_Request
{
  /// Device IDs
  rosidl_runtime_c__uint16__Sequence device_ids;
} candle_ros2__srv__AddDevices_Request;

// Struct for a sequence of candle_ros2__srv__AddDevices_Request.
typedef struct candle_ros2__srv__AddDevices_Request__Sequence
{
  candle_ros2__srv__AddDevices_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} candle_ros2__srv__AddDevices_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'success'
// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/AddDevices in the package candle_ros2.
typedef struct candle_ros2__srv__AddDevices_Response
{
  /// Success status for each device
  rosidl_runtime_c__boolean__Sequence success;
  /// Total number of devices
  uint16_t total_devices;
} candle_ros2__srv__AddDevices_Response;

// Struct for a sequence of candle_ros2__srv__AddDevices_Response.
typedef struct candle_ros2__srv__AddDevices_Response__Sequence
{
  candle_ros2__srv__AddDevices_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} candle_ros2__srv__AddDevices_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CANDLE_ROS2__SRV__DETAIL__ADD_DEVICES__STRUCT_H_
