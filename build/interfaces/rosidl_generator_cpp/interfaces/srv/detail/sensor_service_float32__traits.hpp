// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:srv/SensorServiceFloat32.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__SENSOR_SERVICE_FLOAT32__TRAITS_HPP_
#define INTERFACES__SRV__DETAIL__SENSOR_SERVICE_FLOAT32__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interfaces/srv/detail/sensor_service_float32__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SensorServiceFloat32_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SensorServiceFloat32_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SensorServiceFloat32_Request & msg, bool use_flow_style = false)
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

}  // namespace interfaces

namespace rosidl_generator_traits
{

[[deprecated("use interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaces::srv::SensorServiceFloat32_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::srv::SensorServiceFloat32_Request & msg)
{
  return interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::srv::SensorServiceFloat32_Request>()
{
  return "interfaces::srv::SensorServiceFloat32_Request";
}

template<>
inline const char * name<interfaces::srv::SensorServiceFloat32_Request>()
{
  return "interfaces/srv/SensorServiceFloat32_Request";
}

template<>
struct has_fixed_size<interfaces::srv::SensorServiceFloat32_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interfaces::srv::SensorServiceFloat32_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interfaces::srv::SensorServiceFloat32_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SensorServiceFloat32_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: err
  {
    out << "err: ";
    rosidl_generator_traits::value_to_yaml(msg.err, out);
    out << ", ";
  }

  // member: msg
  {
    out << "msg: ";
    rosidl_generator_traits::value_to_yaml(msg.msg, out);
    out << ", ";
  }

  // member: data
  {
    out << "data: ";
    rosidl_generator_traits::value_to_yaml(msg.data, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SensorServiceFloat32_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: err
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "err: ";
    rosidl_generator_traits::value_to_yaml(msg.err, out);
    out << "\n";
  }

  // member: msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "msg: ";
    rosidl_generator_traits::value_to_yaml(msg.msg, out);
    out << "\n";
  }

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data: ";
    rosidl_generator_traits::value_to_yaml(msg.data, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SensorServiceFloat32_Response & msg, bool use_flow_style = false)
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

}  // namespace interfaces

namespace rosidl_generator_traits
{

[[deprecated("use interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaces::srv::SensorServiceFloat32_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::srv::SensorServiceFloat32_Response & msg)
{
  return interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::srv::SensorServiceFloat32_Response>()
{
  return "interfaces::srv::SensorServiceFloat32_Response";
}

template<>
inline const char * name<interfaces::srv::SensorServiceFloat32_Response>()
{
  return "interfaces/srv/SensorServiceFloat32_Response";
}

template<>
struct has_fixed_size<interfaces::srv::SensorServiceFloat32_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces::srv::SensorServiceFloat32_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interfaces::srv::SensorServiceFloat32_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::srv::SensorServiceFloat32>()
{
  return "interfaces::srv::SensorServiceFloat32";
}

template<>
inline const char * name<interfaces::srv::SensorServiceFloat32>()
{
  return "interfaces/srv/SensorServiceFloat32";
}

template<>
struct has_fixed_size<interfaces::srv::SensorServiceFloat32>
  : std::integral_constant<
    bool,
    has_fixed_size<interfaces::srv::SensorServiceFloat32_Request>::value &&
    has_fixed_size<interfaces::srv::SensorServiceFloat32_Response>::value
  >
{
};

template<>
struct has_bounded_size<interfaces::srv::SensorServiceFloat32>
  : std::integral_constant<
    bool,
    has_bounded_size<interfaces::srv::SensorServiceFloat32_Request>::value &&
    has_bounded_size<interfaces::srv::SensorServiceFloat32_Response>::value
  >
{
};

template<>
struct is_service<interfaces::srv::SensorServiceFloat32>
  : std::true_type
{
};

template<>
struct is_service_request<interfaces::srv::SensorServiceFloat32_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interfaces::srv::SensorServiceFloat32_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES__SRV__DETAIL__SENSOR_SERVICE_FLOAT32__TRAITS_HPP_
