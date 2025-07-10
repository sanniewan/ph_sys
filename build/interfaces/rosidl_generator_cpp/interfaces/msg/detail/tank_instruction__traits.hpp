// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:msg/TankInstruction.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__TANK_INSTRUCTION__TRAITS_HPP_
#define INTERFACES__MSG__DETAIL__TANK_INSTRUCTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interfaces/msg/detail/tank_instruction__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const TankInstruction & msg,
  std::ostream & out)
{
  out << "{";
  // member: instruction
  {
    out << "instruction: ";
    rosidl_generator_traits::value_to_yaml(msg.instruction, out);
    out << ", ";
  }

  // member: tank
  {
    out << "tank: ";
    rosidl_generator_traits::value_to_yaml(msg.tank, out);
    out << ", ";
  }

  // member: vat
  {
    out << "vat: ";
    rosidl_generator_traits::value_to_yaml(msg.vat, out);
    out << ", ";
  }

  // member: quantity
  {
    out << "quantity: ";
    rosidl_generator_traits::value_to_yaml(msg.quantity, out);
    out << ", ";
  }

  // member: ph_target
  {
    out << "ph_target: ";
    rosidl_generator_traits::value_to_yaml(msg.ph_target, out);
    out << ", ";
  }

  // member: ec_target
  {
    out << "ec_target: ";
    rosidl_generator_traits::value_to_yaml(msg.ec_target, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TankInstruction & msg,
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

  // member: tank
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tank: ";
    rosidl_generator_traits::value_to_yaml(msg.tank, out);
    out << "\n";
  }

  // member: vat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vat: ";
    rosidl_generator_traits::value_to_yaml(msg.vat, out);
    out << "\n";
  }

  // member: quantity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "quantity: ";
    rosidl_generator_traits::value_to_yaml(msg.quantity, out);
    out << "\n";
  }

  // member: ph_target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ph_target: ";
    rosidl_generator_traits::value_to_yaml(msg.ph_target, out);
    out << "\n";
  }

  // member: ec_target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ec_target: ";
    rosidl_generator_traits::value_to_yaml(msg.ec_target, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TankInstruction & msg, bool use_flow_style = false)
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
  const interfaces::msg::TankInstruction & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::msg::TankInstruction & msg)
{
  return interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::msg::TankInstruction>()
{
  return "interfaces::msg::TankInstruction";
}

template<>
inline const char * name<interfaces::msg::TankInstruction>()
{
  return "interfaces/msg/TankInstruction";
}

template<>
struct has_fixed_size<interfaces::msg::TankInstruction>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces::msg::TankInstruction>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interfaces::msg::TankInstruction>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES__MSG__DETAIL__TANK_INSTRUCTION__TRAITS_HPP_
