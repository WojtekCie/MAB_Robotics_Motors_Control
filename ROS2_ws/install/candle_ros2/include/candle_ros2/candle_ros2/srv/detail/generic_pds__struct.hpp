// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from candle_ros2:srv/GenericPds.idl
// generated code does not contain a copyright notice

#ifndef CANDLE_ROS2__SRV__DETAIL__GENERIC_PDS__STRUCT_HPP_
#define CANDLE_ROS2__SRV__DETAIL__GENERIC_PDS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__candle_ros2__srv__GenericPds_Request __attribute__((deprecated))
#else
# define DEPRECATED__candle_ros2__srv__GenericPds_Request __declspec(deprecated)
#endif

namespace candle_ros2
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GenericPds_Request_
{
  using Type = GenericPds_Request_<ContainerAllocator>;

  explicit GenericPds_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GenericPds_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    candle_ros2::srv::GenericPds_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const candle_ros2::srv::GenericPds_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<candle_ros2::srv::GenericPds_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<candle_ros2::srv::GenericPds_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      candle_ros2::srv::GenericPds_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<candle_ros2::srv::GenericPds_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      candle_ros2::srv::GenericPds_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<candle_ros2::srv::GenericPds_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<candle_ros2::srv::GenericPds_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<candle_ros2::srv::GenericPds_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__candle_ros2__srv__GenericPds_Request
    std::shared_ptr<candle_ros2::srv::GenericPds_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__candle_ros2__srv__GenericPds_Request
    std::shared_ptr<candle_ros2::srv::GenericPds_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GenericPds_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GenericPds_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GenericPds_Request_

// alias to use template instance with default allocator
using GenericPds_Request =
  candle_ros2::srv::GenericPds_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace candle_ros2


#ifndef _WIN32
# define DEPRECATED__candle_ros2__srv__GenericPds_Response __attribute__((deprecated))
#else
# define DEPRECATED__candle_ros2__srv__GenericPds_Response __declspec(deprecated)
#endif

namespace candle_ros2
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GenericPds_Response_
{
  using Type = GenericPds_Response_<ContainerAllocator>;

  explicit GenericPds_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit GenericPds_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    candle_ros2::srv::GenericPds_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const candle_ros2::srv::GenericPds_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<candle_ros2::srv::GenericPds_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<candle_ros2::srv::GenericPds_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      candle_ros2::srv::GenericPds_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<candle_ros2::srv::GenericPds_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      candle_ros2::srv::GenericPds_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<candle_ros2::srv::GenericPds_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<candle_ros2::srv::GenericPds_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<candle_ros2::srv::GenericPds_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__candle_ros2__srv__GenericPds_Response
    std::shared_ptr<candle_ros2::srv::GenericPds_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__candle_ros2__srv__GenericPds_Response
    std::shared_ptr<candle_ros2::srv::GenericPds_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GenericPds_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const GenericPds_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GenericPds_Response_

// alias to use template instance with default allocator
using GenericPds_Response =
  candle_ros2::srv::GenericPds_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace candle_ros2

namespace candle_ros2
{

namespace srv
{

struct GenericPds
{
  using Request = candle_ros2::srv::GenericPds_Request;
  using Response = candle_ros2::srv::GenericPds_Response;
};

}  // namespace srv

}  // namespace candle_ros2

#endif  // CANDLE_ROS2__SRV__DETAIL__GENERIC_PDS__STRUCT_HPP_
