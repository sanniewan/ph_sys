// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:srv/AirSensorService.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__AIR_SENSOR_SERVICE__TRAITS_HPP_
#define INTERFACES__SRV__DETAIL__AIR_SENSOR_SERVICE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interfaces/srv/detail/air_sensor_service__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const AirSensorService_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AirSensorService_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AirSensorService_Request & msg, bool use_flow_style = false)
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
  const interfaces::srv::AirSensorService_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::srv::AirSensorService_Request & msg)
{
  return interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::srv::AirSensorService_Request>()
{
  return "interfaces::srv::AirSensorService_Request";
}

template<>
inline const char * name<interfaces::srv::AirSensorService_Request>()
{
  return "interfaces/srv/AirSensorService_Request";
}

template<>
struct has_fixed_size<interfaces::srv::AirSensorService_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interfaces::srv::AirSensorService_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interfaces::srv::AirSensorService_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const AirSensorService_Response & msg,
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

  // member: t
  {
    out << "t: ";
    rosidl_generator_traits::value_to_yaml(msg.t, out);
    out << ", ";
  }

  // member: rh
  {
    out << "rh: ";
    rosidl_generator_traits::value_to_yaml(msg.rh, out);
    out << ", ";
  }

  // member: co2
  {
    out << "co2: ";
    rosidl_generator_traits::value_to_yaml(msg.co2, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AirSensorService_Response & msg,
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

  // member: t
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "t: ";
    rosidl_generator_traits::value_to_yaml(msg.t, out);
    out << "\n";
  }

  // member: rh
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rh: ";
    rosidl_generator_traits::value_to_yaml(msg.rh, out);
    out << "\n";
  }

  // member: co2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "co2: ";
    rosidl_generator_traits::value_to_yaml(msg.co2, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AirSensorService_Response & msg, bool use_flow_style = false)
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
  const interfaces::srv::AirSensorService_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::srv::AirSensorService_Response & msg)
{
  return interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::srv::AirSensorService_Response>()
{
  return "interfaces::srv::AirSensorService_Response";
}

template<>
inline const char * name<interfaces::srv::AirSensorService_Response>()
{
  return "interfaces/srv/AirSensorService_Response";
}

template<>
struct has_fixed_size<interfaces::srv::AirSensorService_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces::srv::AirSensorService_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interfaces::srv::AirSensorService_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::srv::AirSensorService>()
{
  return "interfaces::srv::AirSensorService";
}

template<>
inline const char * name<interfaces::srv::AirSensorService>()
{
  return "interfaces/srv/AirSensorService";
}

template<>
struct has_fixed_size<interfaces::srv::AirSensorService>
  : std::integral_constant<
    bool,
    has_fixed_size<interfaces::srv::AirSensorService_Request>::value &&
    has_fixed_size<interfaces::srv::AirSensorService_Response>::value
  >
{
};

template<>
struct has_bounded_size<interfaces::srv::AirSensorService>
  : std::integral_constant<
    bool,
    has_bounded_size<interfaces::srv::AirSensorService_Request>::value &&
    has_bounded_size<interfaces::srv::AirSensorService_Response>::value
  >
{
};

template<>
struct is_service<interfaces::srv::AirSensorService>
  : std::true_type
{
};

template<>
struct is_service_request<interfaces::srv::AirSensorService_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interfaces::srv::AirSensorService_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES__SRV__DETAIL__AIR_SENSOR_SERVICE__TRAITS_HPP_
