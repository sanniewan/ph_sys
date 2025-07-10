// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:msg/FlowMeterMessage.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__FLOW_METER_MESSAGE__TRAITS_HPP_
#define INTERFACES__MSG__DETAIL__FLOW_METER_MESSAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interfaces/msg/detail/flow_meter_message__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const FlowMeterMessage & msg,
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

  // member: flow_volume
  {
    out << "flow_volume: ";
    rosidl_generator_traits::value_to_yaml(msg.flow_volume, out);
    out << ", ";
  }

  // member: flow_rate
  {
    out << "flow_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.flow_rate, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FlowMeterMessage & msg,
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

  // member: flow_volume
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flow_volume: ";
    rosidl_generator_traits::value_to_yaml(msg.flow_volume, out);
    out << "\n";
  }

  // member: flow_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flow_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.flow_rate, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FlowMeterMessage & msg, bool use_flow_style = false)
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
  const interfaces::msg::FlowMeterMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::msg::FlowMeterMessage & msg)
{
  return interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::msg::FlowMeterMessage>()
{
  return "interfaces::msg::FlowMeterMessage";
}

template<>
inline const char * name<interfaces::msg::FlowMeterMessage>()
{
  return "interfaces/msg/FlowMeterMessage";
}

template<>
struct has_fixed_size<interfaces::msg::FlowMeterMessage>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces::msg::FlowMeterMessage>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interfaces::msg::FlowMeterMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES__MSG__DETAIL__FLOW_METER_MESSAGE__TRAITS_HPP_
