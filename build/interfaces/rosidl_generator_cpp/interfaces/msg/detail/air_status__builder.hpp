// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/AirStatus.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__AIR_STATUS__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__AIR_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/msg/detail/air_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_AirStatus_aeration
{
public:
  explicit Init_AirStatus_aeration(::interfaces::msg::AirStatus & msg)
  : msg_(msg)
  {}
  ::interfaces::msg::AirStatus aeration(::interfaces::msg::AirStatus::_aeration_type arg)
  {
    msg_.aeration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::AirStatus msg_;
};

class Init_AirStatus_fan
{
public:
  explicit Init_AirStatus_fan(::interfaces::msg::AirStatus & msg)
  : msg_(msg)
  {}
  Init_AirStatus_aeration fan(::interfaces::msg::AirStatus::_fan_type arg)
  {
    msg_.fan = std::move(arg);
    return Init_AirStatus_aeration(msg_);
  }

private:
  ::interfaces::msg::AirStatus msg_;
};

class Init_AirStatus_co2
{
public:
  explicit Init_AirStatus_co2(::interfaces::msg::AirStatus & msg)
  : msg_(msg)
  {}
  Init_AirStatus_fan co2(::interfaces::msg::AirStatus::_co2_type arg)
  {
    msg_.co2 = std::move(arg);
    return Init_AirStatus_fan(msg_);
  }

private:
  ::interfaces::msg::AirStatus msg_;
};

class Init_AirStatus_rh2
{
public:
  explicit Init_AirStatus_rh2(::interfaces::msg::AirStatus & msg)
  : msg_(msg)
  {}
  Init_AirStatus_co2 rh2(::interfaces::msg::AirStatus::_rh2_type arg)
  {
    msg_.rh2 = std::move(arg);
    return Init_AirStatus_co2(msg_);
  }

private:
  ::interfaces::msg::AirStatus msg_;
};

class Init_AirStatus_t2
{
public:
  explicit Init_AirStatus_t2(::interfaces::msg::AirStatus & msg)
  : msg_(msg)
  {}
  Init_AirStatus_rh2 t2(::interfaces::msg::AirStatus::_t2_type arg)
  {
    msg_.t2 = std::move(arg);
    return Init_AirStatus_rh2(msg_);
  }

private:
  ::interfaces::msg::AirStatus msg_;
};

class Init_AirStatus_rh
{
public:
  explicit Init_AirStatus_rh(::interfaces::msg::AirStatus & msg)
  : msg_(msg)
  {}
  Init_AirStatus_t2 rh(::interfaces::msg::AirStatus::_rh_type arg)
  {
    msg_.rh = std::move(arg);
    return Init_AirStatus_t2(msg_);
  }

private:
  ::interfaces::msg::AirStatus msg_;
};

class Init_AirStatus_t
{
public:
  Init_AirStatus_t()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AirStatus_rh t(::interfaces::msg::AirStatus::_t_type arg)
  {
    msg_.t = std::move(arg);
    return Init_AirStatus_rh(msg_);
  }

private:
  ::interfaces::msg::AirStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::AirStatus>()
{
  return interfaces::msg::builder::Init_AirStatus_t();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__AIR_STATUS__BUILDER_HPP_
