// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:msg/VatInstruction.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__VAT_INSTRUCTION__TRAITS_HPP_
#define INTERFACES__MSG__DETAIL__VAT_INSTRUCTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interfaces/msg/detail/vat_instruction__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const VatInstruction & msg,
  std::ostream & out)
{
  out << "{";
  // member: instruction
  {
    out << "instruction: ";
    rosidl_generator_traits::value_to_yaml(msg.instruction, out);
    out << ", ";
  }

  // member: vat
  {
    out << "vat: ";
    rosidl_generator_traits::value_to_yaml(msg.vat, out);
    out << ", ";
  }

  // member: tank
  {
    out << "tank: ";
    rosidl_generator_traits::value_to_yaml(msg.tank, out);
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
  const VatInstruction & msg,
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

  // member: vat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vat: ";
    rosidl_generator_traits::value_to_yaml(msg.vat, out);
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

inline std::string to_yaml(const VatInstruction & msg, bool use_flow_style = false)
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
  const interfaces::msg::VatInstruction & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::msg::VatInstruction & msg)
{
  return interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::msg::VatInstruction>()
{
  return "interfaces::msg::VatInstruction";
}

template<>
inline const char * name<interfaces::msg::VatInstruction>()
{
  return "interfaces/msg/VatInstruction";
}

template<>
struct has_fixed_size<interfaces::msg::VatInstruction>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces::msg::VatInstruction>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interfaces::msg::VatInstruction>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES__MSG__DETAIL__VAT_INSTRUCTION__TRAITS_HPP_
