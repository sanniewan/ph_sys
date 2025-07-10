// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/TankStatus.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__TANK_STATUS__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__TANK_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/msg/detail/tank_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_TankStatus_aeration
{
public:
  explicit Init_TankStatus_aeration(::interfaces::msg::TankStatus & msg)
  : msg_(msg)
  {}
  ::interfaces::msg::TankStatus aeration(::interfaces::msg::TankStatus::_aeration_type arg)
  {
    msg_.aeration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::TankStatus msg_;
};

class Init_TankStatus_drain
{
public:
  explicit Init_TankStatus_drain(::interfaces::msg::TankStatus & msg)
  : msg_(msg)
  {}
  Init_TankStatus_aeration drain(::interfaces::msg::TankStatus::_drain_type arg)
  {
    msg_.drain = std::move(arg);
    return Init_TankStatus_aeration(msg_);
  }

private:
  ::interfaces::msg::TankStatus msg_;
};

class Init_TankStatus_intake
{
public:
  explicit Init_TankStatus_intake(::interfaces::msg::TankStatus & msg)
  : msg_(msg)
  {}
  Init_TankStatus_drain intake(::interfaces::msg::TankStatus::_intake_type arg)
  {
    msg_.intake = std::move(arg);
    return Init_TankStatus_drain(msg_);
  }

private:
  ::interfaces::msg::TankStatus msg_;
};

class Init_TankStatus_recycling
{
public:
  explicit Init_TankStatus_recycling(::interfaces::msg::TankStatus & msg)
  : msg_(msg)
  {}
  Init_TankStatus_intake recycling(::interfaces::msg::TankStatus::_recycling_type arg)
  {
    msg_.recycling = std::move(arg);
    return Init_TankStatus_intake(msg_);
  }

private:
  ::interfaces::msg::TankStatus msg_;
};

class Init_TankStatus_pump
{
public:
  explicit Init_TankStatus_pump(::interfaces::msg::TankStatus & msg)
  : msg_(msg)
  {}
  Init_TankStatus_recycling pump(::interfaces::msg::TankStatus::_pump_type arg)
  {
    msg_.pump = std::move(arg);
    return Init_TankStatus_recycling(msg_);
  }

private:
  ::interfaces::msg::TankStatus msg_;
};

class Init_TankStatus_water_level
{
public:
  explicit Init_TankStatus_water_level(::interfaces::msg::TankStatus & msg)
  : msg_(msg)
  {}
  Init_TankStatus_pump water_level(::interfaces::msg::TankStatus::_water_level_type arg)
  {
    msg_.water_level = std::move(arg);
    return Init_TankStatus_pump(msg_);
  }

private:
  ::interfaces::msg::TankStatus msg_;
};

class Init_TankStatus_critical_high
{
public:
  explicit Init_TankStatus_critical_high(::interfaces::msg::TankStatus & msg)
  : msg_(msg)
  {}
  Init_TankStatus_water_level critical_high(::interfaces::msg::TankStatus::_critical_high_type arg)
  {
    msg_.critical_high = std::move(arg);
    return Init_TankStatus_water_level(msg_);
  }

private:
  ::interfaces::msg::TankStatus msg_;
};

class Init_TankStatus_critical_low
{
public:
  explicit Init_TankStatus_critical_low(::interfaces::msg::TankStatus & msg)
  : msg_(msg)
  {}
  Init_TankStatus_critical_high critical_low(::interfaces::msg::TankStatus::_critical_low_type arg)
  {
    msg_.critical_low = std::move(arg);
    return Init_TankStatus_critical_high(msg_);
  }

private:
  ::interfaces::msg::TankStatus msg_;
};

class Init_TankStatus_circuit_p
{
public:
  explicit Init_TankStatus_circuit_p(::interfaces::msg::TankStatus & msg)
  : msg_(msg)
  {}
  Init_TankStatus_critical_low circuit_p(::interfaces::msg::TankStatus::_circuit_p_type arg)
  {
    msg_.circuit_p = std::move(arg);
    return Init_TankStatus_critical_low(msg_);
  }

private:
  ::interfaces::msg::TankStatus msg_;
};

class Init_TankStatus_flow_rate
{
public:
  explicit Init_TankStatus_flow_rate(::interfaces::msg::TankStatus & msg)
  : msg_(msg)
  {}
  Init_TankStatus_circuit_p flow_rate(::interfaces::msg::TankStatus::_flow_rate_type arg)
  {
    msg_.flow_rate = std::move(arg);
    return Init_TankStatus_circuit_p(msg_);
  }

private:
  ::interfaces::msg::TankStatus msg_;
};

class Init_TankStatus_flow_volume
{
public:
  explicit Init_TankStatus_flow_volume(::interfaces::msg::TankStatus & msg)
  : msg_(msg)
  {}
  Init_TankStatus_flow_rate flow_volume(::interfaces::msg::TankStatus::_flow_volume_type arg)
  {
    msg_.flow_volume = std::move(arg);
    return Init_TankStatus_flow_rate(msg_);
  }

private:
  ::interfaces::msg::TankStatus msg_;
};

class Init_TankStatus_t
{
public:
  explicit Init_TankStatus_t(::interfaces::msg::TankStatus & msg)
  : msg_(msg)
  {}
  Init_TankStatus_flow_volume t(::interfaces::msg::TankStatus::_t_type arg)
  {
    msg_.t = std::move(arg);
    return Init_TankStatus_flow_volume(msg_);
  }

private:
  ::interfaces::msg::TankStatus msg_;
};

class Init_TankStatus_ec
{
public:
  explicit Init_TankStatus_ec(::interfaces::msg::TankStatus & msg)
  : msg_(msg)
  {}
  Init_TankStatus_t ec(::interfaces::msg::TankStatus::_ec_type arg)
  {
    msg_.ec = std::move(arg);
    return Init_TankStatus_t(msg_);
  }

private:
  ::interfaces::msg::TankStatus msg_;
};

class Init_TankStatus_ph
{
public:
  explicit Init_TankStatus_ph(::interfaces::msg::TankStatus & msg)
  : msg_(msg)
  {}
  Init_TankStatus_ec ph(::interfaces::msg::TankStatus::_ph_type arg)
  {
    msg_.ph = std::move(arg);
    return Init_TankStatus_ec(msg_);
  }

private:
  ::interfaces::msg::TankStatus msg_;
};

class Init_TankStatus_tank
{
public:
  Init_TankStatus_tank()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TankStatus_ph tank(::interfaces::msg::TankStatus::_tank_type arg)
  {
    msg_.tank = std::move(arg);
    return Init_TankStatus_ph(msg_);
  }

private:
  ::interfaces::msg::TankStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::TankStatus>()
{
  return interfaces::msg::builder::Init_TankStatus_tank();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__TANK_STATUS__BUILDER_HPP_
