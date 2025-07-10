// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:msg/TankStatus.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__TANK_STATUS__TRAITS_HPP_
#define INTERFACES__MSG__DETAIL__TANK_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interfaces/msg/detail/tank_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const TankStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: tank
  {
    out << "tank: ";
    rosidl_generator_traits::value_to_yaml(msg.tank, out);
    out << ", ";
  }

  // member: ph
  {
    out << "ph: ";
    rosidl_generator_traits::value_to_yaml(msg.ph, out);
    out << ", ";
  }

  // member: ec
  {
    out << "ec: ";
    rosidl_generator_traits::value_to_yaml(msg.ec, out);
    out << ", ";
  }

  // member: t
  {
    out << "t: ";
    rosidl_generator_traits::value_to_yaml(msg.t, out);
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
    out << ", ";
  }

  // member: circuit_p
  {
    out << "circuit_p: ";
    rosidl_generator_traits::value_to_yaml(msg.circuit_p, out);
    out << ", ";
  }

  // member: critical_low
  {
    out << "critical_low: ";
    rosidl_generator_traits::value_to_yaml(msg.critical_low, out);
    out << ", ";
  }

  // member: critical_high
  {
    out << "critical_high: ";
    rosidl_generator_traits::value_to_yaml(msg.critical_high, out);
    out << ", ";
  }

  // member: water_level
  {
    out << "water_level: ";
    rosidl_generator_traits::value_to_yaml(msg.water_level, out);
    out << ", ";
  }

  // member: pump
  {
    out << "pump: ";
    rosidl_generator_traits::value_to_yaml(msg.pump, out);
    out << ", ";
  }

  // member: recycling
  {
    out << "recycling: ";
    rosidl_generator_traits::value_to_yaml(msg.recycling, out);
    out << ", ";
  }

  // member: intake
  {
    out << "intake: ";
    rosidl_generator_traits::value_to_yaml(msg.intake, out);
    out << ", ";
  }

  // member: drain
  {
    out << "drain: ";
    rosidl_generator_traits::value_to_yaml(msg.drain, out);
    out << ", ";
  }

  // member: aeration
  {
    out << "aeration: ";
    rosidl_generator_traits::value_to_yaml(msg.aeration, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TankStatus & msg,
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

  // member: ph
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ph: ";
    rosidl_generator_traits::value_to_yaml(msg.ph, out);
    out << "\n";
  }

  // member: ec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ec: ";
    rosidl_generator_traits::value_to_yaml(msg.ec, out);
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

  // member: circuit_p
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "circuit_p: ";
    rosidl_generator_traits::value_to_yaml(msg.circuit_p, out);
    out << "\n";
  }

  // member: critical_low
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "critical_low: ";
    rosidl_generator_traits::value_to_yaml(msg.critical_low, out);
    out << "\n";
  }

  // member: critical_high
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "critical_high: ";
    rosidl_generator_traits::value_to_yaml(msg.critical_high, out);
    out << "\n";
  }

  // member: water_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "water_level: ";
    rosidl_generator_traits::value_to_yaml(msg.water_level, out);
    out << "\n";
  }

  // member: pump
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pump: ";
    rosidl_generator_traits::value_to_yaml(msg.pump, out);
    out << "\n";
  }

  // member: recycling
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "recycling: ";
    rosidl_generator_traits::value_to_yaml(msg.recycling, out);
    out << "\n";
  }

  // member: intake
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "intake: ";
    rosidl_generator_traits::value_to_yaml(msg.intake, out);
    out << "\n";
  }

  // member: drain
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "drain: ";
    rosidl_generator_traits::value_to_yaml(msg.drain, out);
    out << "\n";
  }

  // member: aeration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aeration: ";
    rosidl_generator_traits::value_to_yaml(msg.aeration, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TankStatus & msg, bool use_flow_style = false)
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
  const interfaces::msg::TankStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::msg::TankStatus & msg)
{
  return interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::msg::TankStatus>()
{
  return "interfaces::msg::TankStatus";
}

template<>
inline const char * name<interfaces::msg::TankStatus>()
{
  return "interfaces/msg/TankStatus";
}

template<>
struct has_fixed_size<interfaces::msg::TankStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces::msg::TankStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interfaces::msg::TankStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES__MSG__DETAIL__TANK_STATUS__TRAITS_HPP_
