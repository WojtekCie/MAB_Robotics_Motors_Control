// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from candle_ros2:srv/SetMode.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "candle_ros2/srv/detail/set_mode__rosidl_typesupport_introspection_c.h"
#include "candle_ros2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "candle_ros2/srv/detail/set_mode__functions.h"
#include "candle_ros2/srv/detail/set_mode__struct.h"


// Include directives for member types
// Member `device_ids`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `mode`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void candle_ros2__srv__SetMode_Request__rosidl_typesupport_introspection_c__SetMode_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  candle_ros2__srv__SetMode_Request__init(message_memory);
}

void candle_ros2__srv__SetMode_Request__rosidl_typesupport_introspection_c__SetMode_Request_fini_function(void * message_memory)
{
  candle_ros2__srv__SetMode_Request__fini(message_memory);
}

size_t candle_ros2__srv__SetMode_Request__rosidl_typesupport_introspection_c__size_function__SetMode_Request__device_ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint16__Sequence * member =
    (const rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  return member->size;
}

const void * candle_ros2__srv__SetMode_Request__rosidl_typesupport_introspection_c__get_const_function__SetMode_Request__device_ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint16__Sequence * member =
    (const rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  return &member->data[index];
}

void * candle_ros2__srv__SetMode_Request__rosidl_typesupport_introspection_c__get_function__SetMode_Request__device_ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint16__Sequence * member =
    (rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  return &member->data[index];
}

void candle_ros2__srv__SetMode_Request__rosidl_typesupport_introspection_c__fetch_function__SetMode_Request__device_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint16_t * item =
    ((const uint16_t *)
    candle_ros2__srv__SetMode_Request__rosidl_typesupport_introspection_c__get_const_function__SetMode_Request__device_ids(untyped_member, index));
  uint16_t * value =
    (uint16_t *)(untyped_value);
  *value = *item;
}

void candle_ros2__srv__SetMode_Request__rosidl_typesupport_introspection_c__assign_function__SetMode_Request__device_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint16_t * item =
    ((uint16_t *)
    candle_ros2__srv__SetMode_Request__rosidl_typesupport_introspection_c__get_function__SetMode_Request__device_ids(untyped_member, index));
  const uint16_t * value =
    (const uint16_t *)(untyped_value);
  *item = *value;
}

bool candle_ros2__srv__SetMode_Request__rosidl_typesupport_introspection_c__resize_function__SetMode_Request__device_ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint16__Sequence * member =
    (rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  rosidl_runtime_c__uint16__Sequence__fini(member);
  return rosidl_runtime_c__uint16__Sequence__init(member, size);
}

size_t candle_ros2__srv__SetMode_Request__rosidl_typesupport_introspection_c__size_function__SetMode_Request__mode(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * candle_ros2__srv__SetMode_Request__rosidl_typesupport_introspection_c__get_const_function__SetMode_Request__mode(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * candle_ros2__srv__SetMode_Request__rosidl_typesupport_introspection_c__get_function__SetMode_Request__mode(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void candle_ros2__srv__SetMode_Request__rosidl_typesupport_introspection_c__fetch_function__SetMode_Request__mode(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    candle_ros2__srv__SetMode_Request__rosidl_typesupport_introspection_c__get_const_function__SetMode_Request__mode(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void candle_ros2__srv__SetMode_Request__rosidl_typesupport_introspection_c__assign_function__SetMode_Request__mode(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    candle_ros2__srv__SetMode_Request__rosidl_typesupport_introspection_c__get_function__SetMode_Request__mode(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool candle_ros2__srv__SetMode_Request__rosidl_typesupport_introspection_c__resize_function__SetMode_Request__mode(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember candle_ros2__srv__SetMode_Request__rosidl_typesupport_introspection_c__SetMode_Request_message_member_array[2] = {
  {
    "device_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(candle_ros2__srv__SetMode_Request, device_ids),  // bytes offset in struct
    NULL,  // default value
    candle_ros2__srv__SetMode_Request__rosidl_typesupport_introspection_c__size_function__SetMode_Request__device_ids,  // size() function pointer
    candle_ros2__srv__SetMode_Request__rosidl_typesupport_introspection_c__get_const_function__SetMode_Request__device_ids,  // get_const(index) function pointer
    candle_ros2__srv__SetMode_Request__rosidl_typesupport_introspection_c__get_function__SetMode_Request__device_ids,  // get(index) function pointer
    candle_ros2__srv__SetMode_Request__rosidl_typesupport_introspection_c__fetch_function__SetMode_Request__device_ids,  // fetch(index, &value) function pointer
    candle_ros2__srv__SetMode_Request__rosidl_typesupport_introspection_c__assign_function__SetMode_Request__device_ids,  // assign(index, value) function pointer
    candle_ros2__srv__SetMode_Request__rosidl_typesupport_introspection_c__resize_function__SetMode_Request__device_ids  // resize(index) function pointer
  },
  {
    "mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(candle_ros2__srv__SetMode_Request, mode),  // bytes offset in struct
    NULL,  // default value
    candle_ros2__srv__SetMode_Request__rosidl_typesupport_introspection_c__size_function__SetMode_Request__mode,  // size() function pointer
    candle_ros2__srv__SetMode_Request__rosidl_typesupport_introspection_c__get_const_function__SetMode_Request__mode,  // get_const(index) function pointer
    candle_ros2__srv__SetMode_Request__rosidl_typesupport_introspection_c__get_function__SetMode_Request__mode,  // get(index) function pointer
    candle_ros2__srv__SetMode_Request__rosidl_typesupport_introspection_c__fetch_function__SetMode_Request__mode,  // fetch(index, &value) function pointer
    candle_ros2__srv__SetMode_Request__rosidl_typesupport_introspection_c__assign_function__SetMode_Request__mode,  // assign(index, value) function pointer
    candle_ros2__srv__SetMode_Request__rosidl_typesupport_introspection_c__resize_function__SetMode_Request__mode  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers candle_ros2__srv__SetMode_Request__rosidl_typesupport_introspection_c__SetMode_Request_message_members = {
  "candle_ros2__srv",  // message namespace
  "SetMode_Request",  // message name
  2,  // number of fields
  sizeof(candle_ros2__srv__SetMode_Request),
  candle_ros2__srv__SetMode_Request__rosidl_typesupport_introspection_c__SetMode_Request_message_member_array,  // message members
  candle_ros2__srv__SetMode_Request__rosidl_typesupport_introspection_c__SetMode_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  candle_ros2__srv__SetMode_Request__rosidl_typesupport_introspection_c__SetMode_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t candle_ros2__srv__SetMode_Request__rosidl_typesupport_introspection_c__SetMode_Request_message_type_support_handle = {
  0,
  &candle_ros2__srv__SetMode_Request__rosidl_typesupport_introspection_c__SetMode_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_candle_ros2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, candle_ros2, srv, SetMode_Request)() {
  if (!candle_ros2__srv__SetMode_Request__rosidl_typesupport_introspection_c__SetMode_Request_message_type_support_handle.typesupport_identifier) {
    candle_ros2__srv__SetMode_Request__rosidl_typesupport_introspection_c__SetMode_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &candle_ros2__srv__SetMode_Request__rosidl_typesupport_introspection_c__SetMode_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "candle_ros2/srv/detail/set_mode__rosidl_typesupport_introspection_c.h"
// already included above
// #include "candle_ros2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "candle_ros2/srv/detail/set_mode__functions.h"
// already included above
// #include "candle_ros2/srv/detail/set_mode__struct.h"


// Include directives for member types
// Member `success`
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void candle_ros2__srv__SetMode_Response__rosidl_typesupport_introspection_c__SetMode_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  candle_ros2__srv__SetMode_Response__init(message_memory);
}

void candle_ros2__srv__SetMode_Response__rosidl_typesupport_introspection_c__SetMode_Response_fini_function(void * message_memory)
{
  candle_ros2__srv__SetMode_Response__fini(message_memory);
}

size_t candle_ros2__srv__SetMode_Response__rosidl_typesupport_introspection_c__size_function__SetMode_Response__success(
  const void * untyped_member)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return member->size;
}

const void * candle_ros2__srv__SetMode_Response__rosidl_typesupport_introspection_c__get_const_function__SetMode_Response__success(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void * candle_ros2__srv__SetMode_Response__rosidl_typesupport_introspection_c__get_function__SetMode_Response__success(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void candle_ros2__srv__SetMode_Response__rosidl_typesupport_introspection_c__fetch_function__SetMode_Response__success(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    candle_ros2__srv__SetMode_Response__rosidl_typesupport_introspection_c__get_const_function__SetMode_Response__success(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void candle_ros2__srv__SetMode_Response__rosidl_typesupport_introspection_c__assign_function__SetMode_Response__success(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    candle_ros2__srv__SetMode_Response__rosidl_typesupport_introspection_c__get_function__SetMode_Response__success(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

bool candle_ros2__srv__SetMode_Response__rosidl_typesupport_introspection_c__resize_function__SetMode_Response__success(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  rosidl_runtime_c__boolean__Sequence__fini(member);
  return rosidl_runtime_c__boolean__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember candle_ros2__srv__SetMode_Response__rosidl_typesupport_introspection_c__SetMode_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(candle_ros2__srv__SetMode_Response, success),  // bytes offset in struct
    NULL,  // default value
    candle_ros2__srv__SetMode_Response__rosidl_typesupport_introspection_c__size_function__SetMode_Response__success,  // size() function pointer
    candle_ros2__srv__SetMode_Response__rosidl_typesupport_introspection_c__get_const_function__SetMode_Response__success,  // get_const(index) function pointer
    candle_ros2__srv__SetMode_Response__rosidl_typesupport_introspection_c__get_function__SetMode_Response__success,  // get(index) function pointer
    candle_ros2__srv__SetMode_Response__rosidl_typesupport_introspection_c__fetch_function__SetMode_Response__success,  // fetch(index, &value) function pointer
    candle_ros2__srv__SetMode_Response__rosidl_typesupport_introspection_c__assign_function__SetMode_Response__success,  // assign(index, value) function pointer
    candle_ros2__srv__SetMode_Response__rosidl_typesupport_introspection_c__resize_function__SetMode_Response__success  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers candle_ros2__srv__SetMode_Response__rosidl_typesupport_introspection_c__SetMode_Response_message_members = {
  "candle_ros2__srv",  // message namespace
  "SetMode_Response",  // message name
  1,  // number of fields
  sizeof(candle_ros2__srv__SetMode_Response),
  candle_ros2__srv__SetMode_Response__rosidl_typesupport_introspection_c__SetMode_Response_message_member_array,  // message members
  candle_ros2__srv__SetMode_Response__rosidl_typesupport_introspection_c__SetMode_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  candle_ros2__srv__SetMode_Response__rosidl_typesupport_introspection_c__SetMode_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t candle_ros2__srv__SetMode_Response__rosidl_typesupport_introspection_c__SetMode_Response_message_type_support_handle = {
  0,
  &candle_ros2__srv__SetMode_Response__rosidl_typesupport_introspection_c__SetMode_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_candle_ros2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, candle_ros2, srv, SetMode_Response)() {
  if (!candle_ros2__srv__SetMode_Response__rosidl_typesupport_introspection_c__SetMode_Response_message_type_support_handle.typesupport_identifier) {
    candle_ros2__srv__SetMode_Response__rosidl_typesupport_introspection_c__SetMode_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &candle_ros2__srv__SetMode_Response__rosidl_typesupport_introspection_c__SetMode_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "candle_ros2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "candle_ros2/srv/detail/set_mode__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers candle_ros2__srv__detail__set_mode__rosidl_typesupport_introspection_c__SetMode_service_members = {
  "candle_ros2__srv",  // service namespace
  "SetMode",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // candle_ros2__srv__detail__set_mode__rosidl_typesupport_introspection_c__SetMode_Request_message_type_support_handle,
  NULL  // response message
  // candle_ros2__srv__detail__set_mode__rosidl_typesupport_introspection_c__SetMode_Response_message_type_support_handle
};

static rosidl_service_type_support_t candle_ros2__srv__detail__set_mode__rosidl_typesupport_introspection_c__SetMode_service_type_support_handle = {
  0,
  &candle_ros2__srv__detail__set_mode__rosidl_typesupport_introspection_c__SetMode_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, candle_ros2, srv, SetMode_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, candle_ros2, srv, SetMode_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_candle_ros2
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, candle_ros2, srv, SetMode)() {
  if (!candle_ros2__srv__detail__set_mode__rosidl_typesupport_introspection_c__SetMode_service_type_support_handle.typesupport_identifier) {
    candle_ros2__srv__detail__set_mode__rosidl_typesupport_introspection_c__SetMode_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)candle_ros2__srv__detail__set_mode__rosidl_typesupport_introspection_c__SetMode_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, candle_ros2, srv, SetMode_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, candle_ros2, srv, SetMode_Response)()->data;
  }

  return &candle_ros2__srv__detail__set_mode__rosidl_typesupport_introspection_c__SetMode_service_type_support_handle;
}
