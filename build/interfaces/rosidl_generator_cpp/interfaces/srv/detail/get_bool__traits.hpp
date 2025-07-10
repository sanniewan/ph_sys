// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:srv/GetBool.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__GET_BOOL__TRAITS_HPP_
#define INTERFACES__SRV__DETAIL__GET_BOOL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interfaces/srv/detail/get_bool__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetBool_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetBool_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetBool_Request & msg, bool use_flow_style = false)
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
  const interfaces::srv::GetBool_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::srv::GetBool_Request & msg)
{
  return interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::srv::GetBool_Request>()
{
  return "interfaces::srv::GetBool_Request";
}

template<>
inline const char * name<interfaces::srv::GetBool_Request>()
{
  return "interfaces/srv/GetBool_Request";
}

template<>
struct has_fixed_size<interfaces::srv::GetBool_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interfaces::srv::GetBool_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interfaces::srv::GetBool_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetBool_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetBool_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
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

inline std::string to_yaml(const GetBool_Response & msg, bool use_flow_style = false)
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
  const interfaces::srv::GetBool_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::srv::GetBool_Response & msg)
{
  return interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::srv::GetBool_Response>()
{
  return "interfaces::srv::GetBool_Response";
}

template<>
inline const char * name<interfaces::srv::GetBool_Response>()
{
  return "interfaces/srv/GetBool_Response";
}

template<>
struct has_fixed_size<interfaces::srv::GetBool_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interfaces::srv::GetBool_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interfaces::srv::GetBool_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::srv::GetBool>()
{
  return "interfaces::srv::GetBool";
}

template<>
inline const char * name<interfaces::srv::GetBool>()
{
  return "interfaces/srv/GetBool";
}

template<>
struct has_fixed_size<interfaces::srv::GetBool>
  : std::integral_constant<
    bool,
    has_fixed_size<interfaces::srv::GetBool_Request>::value &&
    has_fixed_size<interfaces::srv::GetBool_Response>::value
  >
{
};

template<>
struct has_bounded_size<interfaces::srv::GetBool>
  : std::integral_constant<
    bool,
    has_bounded_size<interfaces::srv::GetBool_Request>::value &&
    has_bounded_size<interfaces::srv::GetBool_Response>::value
  >
{
};

template<>
struct is_service<interfaces::srv::GetBool>
  : std::true_type
{
};

template<>
struct is_service_request<interfaces::srv::GetBool_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interfaces::srv::GetBool_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES__SRV__DETAIL__GET_BOOL__TRAITS_HPP_
