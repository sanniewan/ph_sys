// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:msg/AirSensorMessage.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__AIR_SENSOR_MESSAGE__TRAITS_HPP_
#define INTERFACES__MSG__DETAIL__AIR_SENSOR_MESSAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interfaces/msg/detail/air_sensor_message__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const AirSensorMessage & msg,
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

  // member: t
  {
    out << "t: ";
    rosidl_generator_traits::value_to_yaml(msg.t, out);
    out << ", ";
  }

  // member: rh
  {
    out << "rh: ";
    rosidl_generator_traits::value_to_yaml(msg.rh, out);
    out << ", ";
  }

  // member: co2
  {
    out << "co2: ";
    rosidl_generator_traits::value_to_yaml(msg.co2, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AirSensorMessage & msg,
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

  // member: t
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "t: ";
    rosidl_generator_traits::value_to_yaml(msg.t, out);
    out << "\n";
  }

  // member: rh
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rh: ";
    rosidl_generator_traits::value_to_yaml(msg.rh, out);
    out << "\n";
  }

  // member: co2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "co2: ";
    rosidl_generator_traits::value_to_yaml(msg.co2, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AirSensorMessage & msg, bool use_flow_style = false)
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
  const interfaces::msg::AirSensorMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::msg::AirSensorMessage & msg)
{
  return interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::msg::AirSensorMessage>()
{
  return "interfaces::msg::AirSensorMessage";
}

template<>
inline const char * name<interfaces::msg::AirSensorMessage>()
{
  return "interfaces/msg/AirSensorMessage";
}

template<>
struct has_fixed_size<interfaces::msg::AirSensorMessage>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces::msg::AirSensorMessage>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interfaces::msg::AirSensorMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES__MSG__DETAIL__AIR_SENSOR_MESSAGE__TRAITS_HPP_
