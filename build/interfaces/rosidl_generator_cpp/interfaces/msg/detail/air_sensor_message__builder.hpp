// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/AirSensorMessage.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__AIR_SENSOR_MESSAGE__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__AIR_SENSOR_MESSAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/msg/detail/air_sensor_message__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_AirSensorMessage_co2
{
public:
  explicit Init_AirSensorMessage_co2(::interfaces::msg::AirSensorMessage & msg)
  : msg_(msg)
  {}
  ::interfaces::msg::AirSensorMessage co2(::interfaces::msg::AirSensorMessage::_co2_type arg)
  {
    msg_.co2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::AirSensorMessage msg_;
};

class Init_AirSensorMessage_rh
{
public:
  explicit Init_AirSensorMessage_rh(::interfaces::msg::AirSensorMessage & msg)
  : msg_(msg)
  {}
  Init_AirSensorMessage_co2 rh(::interfaces::msg::AirSensorMessage::_rh_type arg)
  {
    msg_.rh = std::move(arg);
    return Init_AirSensorMessage_co2(msg_);
  }

private:
  ::interfaces::msg::AirSensorMessage msg_;
};

class Init_AirSensorMessage_t
{
public:
  explicit Init_AirSensorMessage_t(::interfaces::msg::AirSensorMessage & msg)
  : msg_(msg)
  {}
  Init_AirSensorMessage_rh t(::interfaces::msg::AirSensorMessage::_t_type arg)
  {
    msg_.t = std::move(arg);
    return Init_AirSensorMessage_rh(msg_);
  }

private:
  ::interfaces::msg::AirSensorMessage msg_;
};

class Init_AirSensorMessage_msg
{
public:
  explicit Init_AirSensorMessage_msg(::interfaces::msg::AirSensorMessage & msg)
  : msg_(msg)
  {}
  Init_AirSensorMessage_t msg(::interfaces::msg::AirSensorMessage::_msg_type arg)
  {
    msg_.msg = std::move(arg);
    return Init_AirSensorMessage_t(msg_);
  }

private:
  ::interfaces::msg::AirSensorMessage msg_;
};

class Init_AirSensorMessage_err
{
public:
  Init_AirSensorMessage_err()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AirSensorMessage_msg err(::interfaces::msg::AirSensorMessage::_err_type arg)
  {
    msg_.err = std::move(arg);
    return Init_AirSensorMessage_msg(msg_);
  }

private:
  ::interfaces::msg::AirSensorMessage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::AirSensorMessage>()
{
  return interfaces::msg::builder::Init_AirSensorMessage_err();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__AIR_SENSOR_MESSAGE__BUILDER_HPP_
