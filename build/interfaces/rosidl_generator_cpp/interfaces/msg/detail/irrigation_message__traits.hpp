// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:msg/IrrigationMessage.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__IRRIGATION_MESSAGE__TRAITS_HPP_
#define INTERFACES__MSG__DETAIL__IRRIGATION_MESSAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interfaces/msg/detail/irrigation_message__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const IrrigationMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: tank
  {
    out << "tank: ";
    rosidl_generator_traits::value_to_yaml(msg.tank, out);
    out << ", ";
  }

  // member: valve
  {
    out << "valve: ";
    rosidl_generator_traits::value_to_yaml(msg.valve, out);
    out << ", ";
  }

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

  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const IrrigationMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: tank
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tank: ";
    rosidl_generator_traits::value_to_yaml(msg.tank, out);
    out << "\n";
  }

  // member: valve
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "valve: ";
    rosidl_generator_traits::value_to_yaml(msg.valve, out);
    out << "\n";
  }

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

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const IrrigationMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace interfaces

namespace rosidl_generator_traits
{

[[deprecated("use interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaces::msg::IrrigationMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::msg::IrrigationMessage & msg)
{
  return interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::msg::IrrigationMessage>()
{
  return "interfaces::msg::IrrigationMessage";
}

template<>
inline const char * name<interfaces::msg::IrrigationMessage>()
{
  return "interfaces/msg/IrrigationMessage";
}

template<>
struct has_fixed_size<interfaces::msg::IrrigationMessage>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces::msg::IrrigationMessage>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interfaces::msg::IrrigationMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES__MSG__DETAIL__IRRIGATION_MESSAGE__TRAITS_HPP_
