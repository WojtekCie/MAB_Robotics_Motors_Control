// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from candle_ros2:srv/SetLimits.idl
// generated code does not contain a copyright notice
#include "candle_ros2/srv/detail/set_limits__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "candle_ros2/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "candle_ros2/srv/detail/set_limits__struct.h"
#include "candle_ros2/srv/detail/set_limits__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // device_ids, torque_limit, velocity_limit
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // device_ids, torque_limit, velocity_limit

// forward declare type support functions


using _SetLimits_Request__ros_msg_type = candle_ros2__srv__SetLimits_Request;

static bool _SetLimits_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetLimits_Request__ros_msg_type * ros_message = static_cast<const _SetLimits_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: device_ids
  {
    size_t size = ros_message->device_ids.size;
    auto array_ptr = ros_message->device_ids.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: velocity_limit
  {
    size_t size = ros_message->velocity_limit.size;
    auto array_ptr = ros_message->velocity_limit.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: torque_limit
  {
    size_t size = ros_message->torque_limit.size;
    auto array_ptr = ros_message->torque_limit.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _SetLimits_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetLimits_Request__ros_msg_type * ros_message = static_cast<_SetLimits_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: device_ids
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->device_ids.data) {
      rosidl_runtime_c__uint16__Sequence__fini(&ros_message->device_ids);
    }
    if (!rosidl_runtime_c__uint16__Sequence__init(&ros_message->device_ids, size)) {
      fprintf(stderr, "failed to create array for field 'device_ids'");
      return false;
    }
    auto array_ptr = ros_message->device_ids.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: velocity_limit
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->velocity_limit.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->velocity_limit);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->velocity_limit, size)) {
      fprintf(stderr, "failed to create array for field 'velocity_limit'");
      return false;
    }
    auto array_ptr = ros_message->velocity_limit.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: torque_limit
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->torque_limit.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->torque_limit);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->torque_limit, size)) {
      fprintf(stderr, "failed to create array for field 'torque_limit'");
      return false;
    }
    auto array_ptr = ros_message->torque_limit.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_candle_ros2
size_t get_serialized_size_candle_ros2__srv__SetLimits_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetLimits_Request__ros_msg_type * ros_message = static_cast<const _SetLimits_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name device_ids
  {
    size_t array_size = ros_message->device_ids.size;
    auto array_ptr = ros_message->device_ids.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name velocity_limit
  {
    size_t array_size = ros_message->velocity_limit.size;
    auto array_ptr = ros_message->velocity_limit.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name torque_limit
  {
    size_t array_size = ros_message->torque_limit.size;
    auto array_ptr = ros_message->torque_limit.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SetLimits_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_candle_ros2__srv__SetLimits_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_candle_ros2
size_t max_serialized_size_candle_ros2__srv__SetLimits_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: device_ids
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: velocity_limit
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: torque_limit
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = candle_ros2__srv__SetLimits_Request;
    is_plain =
      (
      offsetof(DataType, torque_limit) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SetLimits_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_candle_ros2__srv__SetLimits_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SetLimits_Request = {
  "candle_ros2::srv",
  "SetLimits_Request",
  _SetLimits_Request__cdr_serialize,
  _SetLimits_Request__cdr_deserialize,
  _SetLimits_Request__get_serialized_size,
  _SetLimits_Request__max_serialized_size
};

static rosidl_message_type_support_t _SetLimits_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetLimits_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, candle_ros2, srv, SetLimits_Request)() {
  return &_SetLimits_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "candle_ros2/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "candle_ros2/srv/detail/set_limits__struct.h"
// already included above
// #include "candle_ros2/srv/detail/set_limits__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"  // success
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"  // success

// forward declare type support functions


using _SetLimits_Response__ros_msg_type = candle_ros2__srv__SetLimits_Response;

static bool _SetLimits_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetLimits_Response__ros_msg_type * ros_message = static_cast<const _SetLimits_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    size_t size = ros_message->success.size;
    auto array_ptr = ros_message->success.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _SetLimits_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetLimits_Response__ros_msg_type * ros_message = static_cast<_SetLimits_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->success.data) {
      rosidl_runtime_c__boolean__Sequence__fini(&ros_message->success);
    }
    if (!rosidl_runtime_c__boolean__Sequence__init(&ros_message->success, size)) {
      fprintf(stderr, "failed to create array for field 'success'");
      return false;
    }
    auto array_ptr = ros_message->success.data;
    for (size_t i = 0; i < size; ++i) {
      uint8_t tmp;
      cdr >> tmp;
      array_ptr[i] = tmp ? true : false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_candle_ros2
size_t get_serialized_size_candle_ros2__srv__SetLimits_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetLimits_Response__ros_msg_type * ros_message = static_cast<const _SetLimits_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name success
  {
    size_t array_size = ros_message->success.size;
    auto array_ptr = ros_message->success.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SetLimits_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_candle_ros2__srv__SetLimits_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_candle_ros2
size_t max_serialized_size_candle_ros2__srv__SetLimits_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: success
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = candle_ros2__srv__SetLimits_Response;
    is_plain =
      (
      offsetof(DataType, success) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SetLimits_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_candle_ros2__srv__SetLimits_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SetLimits_Response = {
  "candle_ros2::srv",
  "SetLimits_Response",
  _SetLimits_Response__cdr_serialize,
  _SetLimits_Response__cdr_deserialize,
  _SetLimits_Response__get_serialized_size,
  _SetLimits_Response__max_serialized_size
};

static rosidl_message_type_support_t _SetLimits_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetLimits_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, candle_ros2, srv, SetLimits_Response)() {
  return &_SetLimits_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "candle_ros2/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "candle_ros2/srv/set_limits.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SetLimits__callbacks = {
  "candle_ros2::srv",
  "SetLimits",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, candle_ros2, srv, SetLimits_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, candle_ros2, srv, SetLimits_Response)(),
};

static rosidl_service_type_support_t SetLimits__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &SetLimits__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, candle_ros2, srv, SetLimits)() {
  return &SetLimits__handle;
}

#if defined(__cplusplus)
}
#endif
