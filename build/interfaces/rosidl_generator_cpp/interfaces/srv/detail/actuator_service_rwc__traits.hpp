// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:srv/ActuatorServiceRWC.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__ACTUATOR_SERVICE_RWC__TRAITS_HPP_
#define INTERFACES__SRV__DETAIL__ACTUATOR_SERVICE_RWC__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interfaces/srv/detail/actuator_service_rwc__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ActuatorServiceRWC_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: instruction
  {
    out << "instruction: ";
    rosidl_generator_traits::value_to_yaml(msg.instruction, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ActuatorServiceRWC_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: instruction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "instruction: ";
    rosidl_generator_traits::value_to_yaml(msg.instruction, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ActuatorServiceRWC_Request & msg, bool use_flow_style = false)
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
  const interfaces::srv::ActuatorServiceRWC_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::srv::ActuatorServiceRWC_Request & msg)
{
  return interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::srv::ActuatorServiceRWC_Request>()
{
  return "interfaces::srv::ActuatorServiceRWC_Request";
}

template<>
inline const char * name<interfaces::srv::ActuatorServiceRWC_Request>()
{
  return "interfaces/srv/ActuatorServiceRWC_Request";
}

template<>
struct has_fixed_size<interfaces::srv::ActuatorServiceRWC_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces::srv::ActuatorServiceRWC_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interfaces::srv::ActuatorServiceRWC_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ActuatorServiceRWC_Response & msg,
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

  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ActuatorServiceRWC_Response & msg,
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

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ActuatorServiceRWC_Response & msg, bool use_flow_style = false)
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
  const interfaces::srv::ActuatorServiceRWC_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::srv::ActuatorServiceRWC_Response & msg)
{
  return interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::srv::ActuatorServiceRWC_Response>()
{
  return "interfaces::srv::ActuatorServiceRWC_Response";
}

template<>
inline const char * name<interfaces::srv::ActuatorServiceRWC_Response>()
{
  return "interfaces/srv/ActuatorServiceRWC_Response";
}

template<>
struct has_fixed_size<interfaces::srv::ActuatorServiceRWC_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces::srv::ActuatorServiceRWC_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interfaces::srv::ActuatorServiceRWC_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::srv::ActuatorServiceRWC>()
{
  return "interfaces::srv::ActuatorServiceRWC";
}

template<>
inline const char * name<interfaces::srv::ActuatorServiceRWC>()
{
  return "interfaces/srv/ActuatorServiceRWC";
}

template<>
struct has_fixed_size<interfaces::srv::ActuatorServiceRWC>
  : std::integral_constant<
    bool,
    has_fixed_size<interfaces::srv::ActuatorServiceRWC_Request>::value &&
    has_fixed_size<interfaces::srv::ActuatorServiceRWC_Response>::value
  >
{
};

template<>
struct has_bounded_size<interfaces::srv::ActuatorServiceRWC>
  : std::integral_constant<
    bool,
    has_bounded_size<interfaces::srv::ActuatorServiceRWC_Request>::value &&
    has_bounded_size<interfaces::srv::ActuatorServiceRWC_Response>::value
  >
{
};

template<>
struct is_service<interfaces::srv::ActuatorServiceRWC>
  : std::true_type
{
};

template<>
struct is_service_request<interfaces::srv::ActuatorServiceRWC_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interfaces::srv::ActuatorServiceRWC_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES__SRV__DETAIL__ACTUATOR_SERVICE_RWC__TRAITS_HPP_
