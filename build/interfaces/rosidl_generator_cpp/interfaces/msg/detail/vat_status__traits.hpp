// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:msg/VatStatus.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__VAT_STATUS__TRAITS_HPP_
#define INTERFACES__MSG__DETAIL__VAT_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interfaces/msg/detail/vat_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const VatStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: level_1
  {
    out << "level_1: ";
    rosidl_generator_traits::value_to_yaml(msg.level_1, out);
    out << ", ";
  }

  // member: level_2
  {
    out << "level_2: ";
    rosidl_generator_traits::value_to_yaml(msg.level_2, out);
    out << ", ";
  }

  // member: level_3
  {
    out << "level_3: ";
    rosidl_generator_traits::value_to_yaml(msg.level_3, out);
    out << ", ";
  }

  // member: level_4
  {
    out << "level_4: ";
    rosidl_generator_traits::value_to_yaml(msg.level_4, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VatStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: level_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "level_1: ";
    rosidl_generator_traits::value_to_yaml(msg.level_1, out);
    out << "\n";
  }

  // member: level_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "level_2: ";
    rosidl_generator_traits::value_to_yaml(msg.level_2, out);
    out << "\n";
  }

  // member: level_3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "level_3: ";
    rosidl_generator_traits::value_to_yaml(msg.level_3, out);
    out << "\n";
  }

  // member: level_4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "level_4: ";
    rosidl_generator_traits::value_to_yaml(msg.level_4, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VatStatus & msg, bool use_flow_style = false)
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
  const interfaces::msg::VatStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::msg::VatStatus & msg)
{
  return interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::msg::VatStatus>()
{
  return "interfaces::msg::VatStatus";
}

template<>
inline const char * name<interfaces::msg::VatStatus>()
{
  return "interfaces/msg/VatStatus";
}

template<>
struct has_fixed_size<interfaces::msg::VatStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interfaces::msg::VatStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interfaces::msg::VatStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES__MSG__DETAIL__VAT_STATUS__TRAITS_HPP_
