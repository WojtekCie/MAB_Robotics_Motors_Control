// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from candle_ros2:srv/SetMode.idl
// generated code does not contain a copyright notice

#ifndef CANDLE_ROS2__SRV__DETAIL__SET_MODE__STRUCT_HPP_
#define CANDLE_ROS2__SRV__DETAIL__SET_MODE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__candle_ros2__srv__SetMode_Request __attribute__((deprecated))
#else
# define DEPRECATED__candle_ros2__srv__SetMode_Request __declspec(deprecated)
#endif

namespace candle_ros2
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetMode_Request_
{
  using Type = SetMode_Request_<ContainerAllocator>;

  explicit SetMode_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit SetMode_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _device_ids_type =
    std::vector<uint16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint16_t>>;
  _device_ids_type device_ids;
  using _mode_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _mode_type mode;

  // setters for named parameter idiom
  Type & set__device_ids(
    const std::vector<uint16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint16_t>> & _arg)
  {
    this->device_ids = _arg;
    return *this;
  }
  Type & set__mode(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->mode = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    candle_ros2::srv::SetMode_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const candle_ros2::srv::SetMode_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<candle_ros2::srv::SetMode_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<candle_ros2::srv::SetMode_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      candle_ros2::srv::SetMode_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<candle_ros2::srv::SetMode_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      candle_ros2::srv::SetMode_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<candle_ros2::srv::SetMode_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<candle_ros2::srv::SetMode_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<candle_ros2::srv::SetMode_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__candle_ros2__srv__SetMode_Request
    std::shared_ptr<candle_ros2::srv::SetMode_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__candle_ros2__srv__SetMode_Request
    std::shared_ptr<candle_ros2::srv::SetMode_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetMode_Request_ & other) const
  {
    if (this->device_ids != other.device_ids) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetMode_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetMode_Request_

// alias to use template instance with default allocator
using SetMode_Request =
  candle_ros2::srv::SetMode_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace candle_ros2


#ifndef _WIN32
# define DEPRECATED__candle_ros2__srv__SetMode_Response __attribute__((deprecated))
#else
# define DEPRECATED__candle_ros2__srv__SetMode_Response __declspec(deprecated)
#endif

namespace candle_ros2
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetMode_Response_
{
  using Type = SetMode_Response_<ContainerAllocator>;

  explicit SetMode_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit SetMode_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _success_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    candle_ros2::srv::SetMode_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const candle_ros2::srv::SetMode_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<candle_ros2::srv::SetMode_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<candle_ros2::srv::SetMode_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      candle_ros2::srv::SetMode_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<candle_ros2::srv::SetMode_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      candle_ros2::srv::SetMode_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<candle_ros2::srv::SetMode_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<candle_ros2::srv::SetMode_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<candle_ros2::srv::SetMode_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__candle_ros2__srv__SetMode_Response
    std::shared_ptr<candle_ros2::srv::SetMode_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__candle_ros2__srv__SetMode_Response
    std::shared_ptr<candle_ros2::srv::SetMode_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetMode_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetMode_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetMode_Response_

// alias to use template instance with default allocator
using SetMode_Response =
  candle_ros2::srv::SetMode_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace candle_ros2

namespace candle_ros2
{

namespace srv
{

struct SetMode
{
  using Request = candle_ros2::srv::SetMode_Request;
  using Response = candle_ros2::srv::SetMode_Response;
};

}  // namespace srv

}  // namespace candle_ros2

#endif  // CANDLE_ROS2__SRV__DETAIL__SET_MODE__STRUCT_HPP_
