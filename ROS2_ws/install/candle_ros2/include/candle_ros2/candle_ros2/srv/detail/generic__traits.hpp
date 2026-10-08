// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from candle_ros2:srv/Generic.idl
// generated code does not contain a copyright notice

#ifndef CANDLE_ROS2__SRV__DETAIL__GENERIC__TRAITS_HPP_
#define CANDLE_ROS2__SRV__DETAIL__GENERIC__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "candle_ros2/srv/detail/generic__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace candle_ros2
{

namespace srv
{

inline void to_flow_style_yaml(
  const Generic_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: device_ids
  {
    if (msg.device_ids.size() == 0) {
      out << "device_ids: []";
    } else {
      out << "device_ids: [";
      size_t pending_items = msg.device_ids.size();
      for (auto item : msg.device_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Generic_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: device_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.device_ids.size() == 0) {
      out << "device_ids: []\n";
    } else {
      out << "device_ids:\n";
      for (auto item : msg.device_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Generic_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace candle_ros2

namespace rosidl_generator_traits
{

[[deprecated("use candle_ros2::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const candle_ros2::srv::Generic_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  candle_ros2::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use candle_ros2::srv::to_yaml() instead")]]
inline std::string to_yaml(const candle_ros2::srv::Generic_Request & msg)
{
  return candle_ros2::srv::to_yaml(msg);
}

template<>
inline const char * data_type<candle_ros2::srv::Generic_Request>()
{
  return "candle_ros2::srv::Generic_Request";
}

template<>
inline const char * name<candle_ros2::srv::Generic_Request>()
{
  return "candle_ros2/srv/Generic_Request";
}

template<>
struct has_fixed_size<candle_ros2::srv::Generic_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<candle_ros2::srv::Generic_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<candle_ros2::srv::Generic_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace candle_ros2
{

namespace srv
{

inline void to_flow_style_yaml(
  const Generic_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    if (msg.success.size() == 0) {
      out << "success: []";
    } else {
      out << "success: [";
      size_t pending_items = msg.success.size();
      for (auto item : msg.success) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Generic_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.success.size() == 0) {
      out << "success: []\n";
    } else {
      out << "success:\n";
      for (auto item : msg.success) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Generic_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace candle_ros2

namespace rosidl_generator_traits
{

[[deprecated("use candle_ros2::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const candle_ros2::srv::Generic_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  candle_ros2::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use candle_ros2::srv::to_yaml() instead")]]
inline std::string to_yaml(const candle_ros2::srv::Generic_Response & msg)
{
  return candle_ros2::srv::to_yaml(msg);
}

template<>
inline const char * data_type<candle_ros2::srv::Generic_Response>()
{
  return "candle_ros2::srv::Generic_Response";
}

template<>
inline const char * name<candle_ros2::srv::Generic_Response>()
{
  return "candle_ros2/srv/Generic_Response";
}

template<>
struct has_fixed_size<candle_ros2::srv::Generic_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<candle_ros2::srv::Generic_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<candle_ros2::srv::Generic_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<candle_ros2::srv::Generic>()
{
  return "candle_ros2::srv::Generic";
}

template<>
inline const char * name<candle_ros2::srv::Generic>()
{
  return "candle_ros2/srv/Generic";
}

template<>
struct has_fixed_size<candle_ros2::srv::Generic>
  : std::integral_constant<
    bool,
    has_fixed_size<candle_ros2::srv::Generic_Request>::value &&
    has_fixed_size<candle_ros2::srv::Generic_Response>::value
  >
{
};

template<>
struct has_bounded_size<candle_ros2::srv::Generic>
  : std::integral_constant<
    bool,
    has_bounded_size<candle_ros2::srv::Generic_Request>::value &&
    has_bounded_size<candle_ros2::srv::Generic_Response>::value
  >
{
};

template<>
struct is_service<candle_ros2::srv::Generic>
  : std::true_type
{
};

template<>
struct is_service_request<candle_ros2::srv::Generic_Request>
  : std::true_type
{
};

template<>
struct is_service_response<candle_ros2::srv::Generic_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CANDLE_ROS2__SRV__DETAIL__GENERIC__TRAITS_HPP_
