// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/WaterLevelDet.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__WATER_LEVEL_DET__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__WATER_LEVEL_DET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/msg/detail/water_level_det__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_WaterLevelDet_result
{
public:
  explicit Init_WaterLevelDet_result(::interfaces::msg::WaterLevelDet & msg)
  : msg_(msg)
  {}
  ::interfaces::msg::WaterLevelDet result(::interfaces::msg::WaterLevelDet::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::WaterLevelDet msg_;
};

class Init_WaterLevelDet_msg
{
public:
  explicit Init_WaterLevelDet_msg(::interfaces::msg::WaterLevelDet & msg)
  : msg_(msg)
  {}
  Init_WaterLevelDet_result msg(::interfaces::msg::WaterLevelDet::_msg_type arg)
  {
    msg_.msg = std::move(arg);
    return Init_WaterLevelDet_result(msg_);
  }

private:
  ::interfaces::msg::WaterLevelDet msg_;
};

class Init_WaterLevelDet_err
{
public:
  Init_WaterLevelDet_err()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WaterLevelDet_msg err(::interfaces::msg::WaterLevelDet::_err_type arg)
  {
    msg_.err = std::move(arg);
    return Init_WaterLevelDet_msg(msg_);
  }

private:
  ::interfaces::msg::WaterLevelDet msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::WaterLevelDet>()
{
  return interfaces::msg::builder::Init_WaterLevelDet_err();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__WATER_LEVEL_DET__BUILDER_HPP_
