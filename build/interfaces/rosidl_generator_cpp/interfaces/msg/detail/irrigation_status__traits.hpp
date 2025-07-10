// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:msg/IrrigationStatus.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__IRRIGATION_STATUS__TRAITS_HPP_
#define INTERFACES__MSG__DETAIL__IRRIGATION_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interfaces/msg/detail/irrigation_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const IrrigationStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: valves
  {
    out << "valves: ";
    rosidl_generator_traits::value_to_yaml(msg.valves, out);
    out << ", ";
  }

  // member: pumps
  {
    out << "pumps: ";
    rosidl_generator_traits::value_to_yaml(msg.pumps, out);
    out << ", ";
  }

  // member: pressure
  {
    out << "pressure: ";
    rosidl_generator_traits::value_to_yaml(msg.pressure, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const IrrigationStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: valves
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "valves: ";
    rosidl_generator_traits::value_to_yaml(msg.valves, out);
    out << "\n";
  }

  // member: pumps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pumps: ";
    rosidl_generator_traits::value_to_yaml(msg.pumps, out);
    out << "\n";
  }

  // member: pressure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pressure: ";
    rosidl_generator_traits::value_to_yaml(msg.pressure, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const IrrigationStatus & msg, bool use_flow_style = false)
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
  const interfaces::msg::IrrigationStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::msg::IrrigationStatus & msg)
{
  return interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::msg::IrrigationStatus>()
{
  return "interfaces::msg::IrrigationStatus";
}

template<>
inline const char * name<interfaces::msg::IrrigationStatus>()
{
  return "interfaces/msg/IrrigationStatus";
}

template<>
struct has_fixed_size<interfaces::msg::IrrigationStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces::msg::IrrigationStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interfaces::msg::IrrigationStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES__MSG__DETAIL__IRRIGATION_STATUS__TRAITS_HPP_
