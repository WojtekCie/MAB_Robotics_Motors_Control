// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from candle_ros2:srv/Generic.idl
// generated code does not contain a copyright notice

#ifndef CANDLE_ROS2__SRV__DETAIL__GENERIC__BUILDER_HPP_
#define CANDLE_ROS2__SRV__DETAIL__GENERIC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "candle_ros2/srv/detail/generic__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace candle_ros2
{

namespace srv
{

namespace builder
{

class Init_Generic_Request_device_ids
{
public:
  Init_Generic_Request_device_ids()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::candle_ros2::srv::Generic_Request device_ids(::candle_ros2::srv::Generic_Request::_device_ids_type arg)
  {
    msg_.device_ids = std::move(arg);
    return std::move(msg_);
  }

private:
  ::candle_ros2::srv::Generic_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::candle_ros2::srv::Generic_Request>()
{
  return candle_ros2::srv::builder::Init_Generic_Request_device_ids();
}

}  // namespace candle_ros2


namespace candle_ros2
{

namespace srv
{

namespace builder
{

class Init_Generic_Response_success
{
public:
  Init_Generic_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::candle_ros2::srv::Generic_Response success(::candle_ros2::srv::Generic_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::candle_ros2::srv::Generic_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::candle_ros2::srv::Generic_Response>()
{
  return candle_ros2::srv::builder::Init_Generic_Response_success();
}

}  // namespace candle_ros2

#endif  // CANDLE_ROS2__SRV__DETAIL__GENERIC__BUILDER_HPP_
