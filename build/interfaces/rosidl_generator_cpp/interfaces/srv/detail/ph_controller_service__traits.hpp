// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:srv/PhControllerService.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__PH_CONTROLLER_SERVICE__TRAITS_HPP_
#define INTERFACES__SRV__DETAIL__PH_CONTROLLER_SERVICE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interfaces/srv/detail/ph_controller_service__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const PhControllerService_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: ph
  {
    out << "ph: ";
    rosidl_generator_traits::value_to_yaml(msg.ph, out);
    out << ", ";
  }

  // member: pump_type
  {
    out << "pump_type: ";
    rosidl_generator_traits::value_to_yaml(msg.pump_type, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PhControllerService_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ph
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ph: ";
    rosidl_generator_traits::value_to_yaml(msg.ph, out);
    out << "\n";
  }

  // member: pump_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pump_type: ";
    rosidl_generator_traits::value_to_yaml(msg.pump_type, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PhControllerService_Request & msg, bool use_flow_style = false)
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
  const interfaces::srv::PhControllerService_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::srv::PhControllerService_Request & msg)
{
  return interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::srv::PhControllerService_Request>()
{
  return "interfaces::srv::PhControllerService_Request";
}

template<>
inline const char * name<interfaces::srv::PhControllerService_Request>()
{
  return "interfaces/srv/PhControllerService_Request";
}

template<>
struct has_fixed_size<interfaces::srv::PhControllerService_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces::srv::PhControllerService_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interfaces::srv::PhControllerService_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const PhControllerService_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: pump_type
  {
    out << "pump_type: ";
    rosidl_generator_traits::value_to_yaml(msg.pump_type, out);
    out << ", ";
  }

  // member: warning
  {
    out << "warning: ";
    rosidl_generator_traits::value_to_yaml(msg.warning, out);
    out << ", ";
  }

  // member: msg
  {
    out << "msg: ";
    rosidl_generator_traits::value_to_yaml(msg.msg, out);
    out << ", ";
  }

  // member: volume
  {
    out << "volume: ";
    rosidl_generator_traits::value_to_yaml(msg.volume, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PhControllerService_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pump_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pump_type: ";
    rosidl_generator_traits::value_to_yaml(msg.pump_type, out);
    out << "\n";
  }

  // member: warning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "warning: ";
    rosidl_generator_traits::value_to_yaml(msg.warning, out);
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

  // member: volume
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "volume: ";
    rosidl_generator_traits::value_to_yaml(msg.volume, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PhControllerService_Response & msg, bool use_flow_style = false)
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
  const interfaces::srv::PhControllerService_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::srv::PhControllerService_Response & msg)
{
  return interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::srv::PhControllerService_Response>()
{
  return "interfaces::srv::PhControllerService_Response";
}

template<>
inline const char * name<interfaces::srv::PhControllerService_Response>()
{
  return "interfaces/srv/PhControllerService_Response";
}

template<>
struct has_fixed_size<interfaces::srv::PhControllerService_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces::srv::PhControllerService_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interfaces::srv::PhControllerService_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::srv::PhControllerService>()
{
  return "interfaces::srv::PhControllerService";
}

template<>
inline const char * name<interfaces::srv::PhControllerService>()
{
  return "interfaces/srv/PhControllerService";
}

template<>
struct has_fixed_size<interfaces::srv::PhControllerService>
  : std::integral_constant<
    bool,
    has_fixed_size<interfaces::srv::PhControllerService_Request>::value &&
    has_fixed_size<interfaces::srv::PhControllerService_Response>::value
  >
{
};

template<>
struct has_bounded_size<interfaces::srv::PhControllerService>
  : std::integral_constant<
    bool,
    has_bounded_size<interfaces::srv::PhControllerService_Request>::value &&
    has_bounded_size<interfaces::srv::PhControllerService_Response>::value
  >
{
};

template<>
struct is_service<interfaces::srv::PhControllerService>
  : std::true_type
{
};

template<>
struct is_service_request<interfaces::srv::PhControllerService_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interfaces::srv::PhControllerService_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES__SRV__DETAIL__PH_CONTROLLER_SERVICE__TRAITS_HPP_
