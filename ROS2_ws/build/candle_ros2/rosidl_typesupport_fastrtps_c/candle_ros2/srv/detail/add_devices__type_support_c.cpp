// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from candle_ros2:srv/AddDevices.idl
// generated code does not contain a copyright notice
#include "candle_ros2/srv/detail/add_devices__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "candle_ros2/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "candle_ros2/srv/detail/add_devices__struct.h"
#include "candle_ros2/srv/detail/add_devices__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // device_ids
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // device_ids

// forward declare type support functions


using _AddDevices_Request__ros_msg_type = candle_ros2__srv__AddDevices_Request;

static bool _AddDevices_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AddDevices_Request__ros_msg_type * ros_message = static_cast<const _AddDevices_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: device_ids
  {
    size_t size = ros_message->device_ids.size;
    auto array_ptr = ros_message->device_ids.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _AddDevices_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AddDevices_Request__ros_msg_type * ros_message = static_cast<_AddDevices_Request__ros_msg_type *>(untyped_ros_message);
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

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_candle_ros2
size_t get_serialized_size_candle_ros2__srv__AddDevices_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AddDevices_Request__ros_msg_type * ros_message = static_cast<const _AddDevices_Request__ros_msg_type *>(untyped_ros_message);
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

  return current_alignment - initial_alignment;
}

static uint32_t _AddDevices_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_candle_ros2__srv__AddDevices_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_candle_ros2
size_t max_serialized_size_candle_ros2__srv__AddDevices_Request(
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

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = candle_ros2__srv__AddDevices_Request;
    is_plain =
      (
      offsetof(DataType, device_ids) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _AddDevices_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_candle_ros2__srv__AddDevices_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_AddDevices_Request = {
  "candle_ros2::srv",
  "AddDevices_Request",
  _AddDevices_Request__cdr_serialize,
  _AddDevices_Request__cdr_deserialize,
  _AddDevices_Request__get_serialized_size,
  _AddDevices_Request__max_serialized_size
};

static rosidl_message_type_support_t _AddDevices_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AddDevices_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, candle_ros2, srv, AddDevices_Request)() {
  return &_AddDevices_Request__type_support;
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
// #include "candle_ros2/srv/detail/add_devices__struct.h"
// already included above
// #include "candle_ros2/srv/detail/add_devices__functions.h"
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


using _AddDevices_Response__ros_msg_type = candle_ros2__srv__AddDevices_Response;

static bool _AddDevices_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AddDevices_Response__ros_msg_type * ros_message = static_cast<const _AddDevices_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    size_t size = ros_message->success.size;
    auto array_ptr = ros_message->success.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: total_devices
  {
    cdr << ros_message->total_devices;
  }

  return true;
}

static bool _AddDevices_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AddDevices_Response__ros_msg_type * ros_message = static_cast<_AddDevices_Response__ros_msg_type *>(untyped_ros_message);
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

  // Field name: total_devices
  {
    cdr >> ros_message->total_devices;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_candle_ros2
size_t get_serialized_size_candle_ros2__srv__AddDevices_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AddDevices_Response__ros_msg_type * ros_message = static_cast<const _AddDevices_Response__ros_msg_type *>(untyped_ros_message);
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
  // field.name total_devices
  {
    size_t item_size = sizeof(ros_message->total_devices);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _AddDevices_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_candle_ros2__srv__AddDevices_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_candle_ros2
size_t max_serialized_size_candle_ros2__srv__AddDevices_Response(
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
  // member: total_devices
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = candle_ros2__srv__AddDevices_Response;
    is_plain =
      (
      offsetof(DataType, total_devices) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _AddDevices_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_candle_ros2__srv__AddDevices_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_AddDevices_Response = {
  "candle_ros2::srv",
  "AddDevices_Response",
  _AddDevices_Response__cdr_serialize,
  _AddDevices_Response__cdr_deserialize,
  _AddDevices_Response__get_serialized_size,
  _AddDevices_Response__max_serialized_size
};

static rosidl_message_type_support_t _AddDevices_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AddDevices_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, candle_ros2, srv, AddDevices_Response)() {
  return &_AddDevices_Response__type_support;
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
#include "candle_ros2/srv/add_devices.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t AddDevices__callbacks = {
  "candle_ros2::srv",
  "AddDevices",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, candle_ros2, srv, AddDevices_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, candle_ros2, srv, AddDevices_Response)(),
};

static rosidl_service_type_support_t AddDevices__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &AddDevices__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, candle_ros2, srv, AddDevices)() {
  return &AddDevices__handle;
}

#if defined(__cplusplus)
}
#endif
