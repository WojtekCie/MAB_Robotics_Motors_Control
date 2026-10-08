// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from candle_ros2:msg/ImpedanceCmd.idl
// generated code does not contain a copyright notice

#ifndef CANDLE_ROS2__MSG__DETAIL__IMPEDANCE_CMD__FUNCTIONS_H_
#define CANDLE_ROS2__MSG__DETAIL__IMPEDANCE_CMD__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "candle_ros2/msg/rosidl_generator_c__visibility_control.h"

#include "candle_ros2/msg/detail/impedance_cmd__struct.h"

/// Initialize msg/ImpedanceCmd message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * candle_ros2__msg__ImpedanceCmd
 * )) before or use
 * candle_ros2__msg__ImpedanceCmd__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
bool
candle_ros2__msg__ImpedanceCmd__init(candle_ros2__msg__ImpedanceCmd * msg);

/// Finalize msg/ImpedanceCmd message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
void
candle_ros2__msg__ImpedanceCmd__fini(candle_ros2__msg__ImpedanceCmd * msg);

/// Create msg/ImpedanceCmd message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * candle_ros2__msg__ImpedanceCmd__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
candle_ros2__msg__ImpedanceCmd *
candle_ros2__msg__ImpedanceCmd__create();

/// Destroy msg/ImpedanceCmd message.
/**
 * It calls
 * candle_ros2__msg__ImpedanceCmd__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
void
candle_ros2__msg__ImpedanceCmd__destroy(candle_ros2__msg__ImpedanceCmd * msg);

/// Check for msg/ImpedanceCmd message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
bool
candle_ros2__msg__ImpedanceCmd__are_equal(const candle_ros2__msg__ImpedanceCmd * lhs, const candle_ros2__msg__ImpedanceCmd * rhs);

/// Copy a msg/ImpedanceCmd message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
bool
candle_ros2__msg__ImpedanceCmd__copy(
  const candle_ros2__msg__ImpedanceCmd * input,
  candle_ros2__msg__ImpedanceCmd * output);

/// Initialize array of msg/ImpedanceCmd messages.
/**
 * It allocates the memory for the number of elements and calls
 * candle_ros2__msg__ImpedanceCmd__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
bool
candle_ros2__msg__ImpedanceCmd__Sequence__init(candle_ros2__msg__ImpedanceCmd__Sequence * array, size_t size);

/// Finalize array of msg/ImpedanceCmd messages.
/**
 * It calls
 * candle_ros2__msg__ImpedanceCmd__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
void
candle_ros2__msg__ImpedanceCmd__Sequence__fini(candle_ros2__msg__ImpedanceCmd__Sequence * array);

/// Create array of msg/ImpedanceCmd messages.
/**
 * It allocates the memory for the array and calls
 * candle_ros2__msg__ImpedanceCmd__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
candle_ros2__msg__ImpedanceCmd__Sequence *
candle_ros2__msg__ImpedanceCmd__Sequence__create(size_t size);

/// Destroy array of msg/ImpedanceCmd messages.
/**
 * It calls
 * candle_ros2__msg__ImpedanceCmd__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
void
candle_ros2__msg__ImpedanceCmd__Sequence__destroy(candle_ros2__msg__ImpedanceCmd__Sequence * array);

/// Check for msg/ImpedanceCmd message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
bool
candle_ros2__msg__ImpedanceCmd__Sequence__are_equal(const candle_ros2__msg__ImpedanceCmd__Sequence * lhs, const candle_ros2__msg__ImpedanceCmd__Sequence * rhs);

/// Copy an array of msg/ImpedanceCmd messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
bool
candle_ros2__msg__ImpedanceCmd__Sequence__copy(
  const candle_ros2__msg__ImpedanceCmd__Sequence * input,
  candle_ros2__msg__ImpedanceCmd__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CANDLE_ROS2__MSG__DETAIL__IMPEDANCE_CMD__FUNCTIONS_H_
