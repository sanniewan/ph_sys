// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:srv/AirSensorSvc.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__AIR_SENSOR_SVC__TRAITS_HPP_
#define INTERFACES__SRV__DETAIL__AIR_SENSOR_SVC__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interfaces/srv/detail/air_sensor_svc__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const AirSensorSvc_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: threshold_t
  {
    out << "threshold_t: ";
    rosidl_generator_traits::value_to_yaml(msg.threshold_t, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AirSensorSvc_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: threshold_t
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "threshold_t: ";
    rosidl_generator_traits::value_to_yaml(msg.threshold_t, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AirSensorSvc_Request & msg, bool use_flow_style = false)
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
  const interfaces::srv::AirSensorSvc_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::srv::AirSensorSvc_Request & msg)
{
  return interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::srv::AirSensorSvc_Request>()
{
  return "interfaces::srv::AirSensorSvc_Request";
}

template<>
inline const char * name<interfaces::srv::AirSensorSvc_Request>()
{
  return "interfaces/srv/AirSensorSvc_Request";
}

template<>
struct has_fixed_size<interfaces::srv::AirSensorSvc_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interfaces::srv::AirSensorSvc_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interfaces::srv::AirSensorSvc_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const AirSensorSvc_Response & msg,
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
  const AirSensorSvc_Response & msg,
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

inline std::string to_yaml(const AirSensorSvc_Response & msg, bool use_flow_style = false)
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
  const interfaces::srv::AirSensorSvc_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::srv::AirSensorSvc_Response & msg)
{
  return interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::srv::AirSensorSvc_Response>()
{
  return "interfaces::srv::AirSensorSvc_Response";
}

template<>
inline const char * name<interfaces::srv::AirSensorSvc_Response>()
{
  return "interfaces/srv/AirSensorSvc_Response";
}

template<>
struct has_fixed_size<interfaces::srv::AirSensorSvc_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces::srv::AirSensorSvc_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interfaces::srv::AirSensorSvc_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::srv::AirSensorSvc>()
{
  return "interfaces::srv::AirSensorSvc";
}

template<>
inline const char * name<interfaces::srv::AirSensorSvc>()
{
  return "interfaces/srv/AirSensorSvc";
}

template<>
struct has_fixed_size<interfaces::srv::AirSensorSvc>
  : std::integral_constant<
    bool,
    has_fixed_size<interfaces::srv::AirSensorSvc_Request>::value &&
    has_fixed_size<interfaces::srv::AirSensorSvc_Response>::value
  >
{
};

template<>
struct has_bounded_size<interfaces::srv::AirSensorSvc>
  : std::integral_constant<
    bool,
    has_bounded_size<interfaces::srv::AirSensorSvc_Request>::value &&
    has_bounded_size<interfaces::srv::AirSensorSvc_Response>::value
  >
{
};

template<>
struct is_service<interfaces::srv::AirSensorSvc>
  : std::true_type
{
};

template<>
struct is_service_request<interfaces::srv::AirSensorSvc_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interfaces::srv::AirSensorSvc_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES__SRV__DETAIL__AIR_SENSOR_SVC__TRAITS_HPP_
