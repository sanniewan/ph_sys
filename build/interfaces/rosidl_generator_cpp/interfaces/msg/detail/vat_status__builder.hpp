// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/VatStatus.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__VAT_STATUS__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__VAT_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/msg/detail/vat_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_VatStatus_level_4
{
public:
  explicit Init_VatStatus_level_4(::interfaces::msg::VatStatus & msg)
  : msg_(msg)
  {}
  ::interfaces::msg::VatStatus level_4(::interfaces::msg::VatStatus::_level_4_type arg)
  {
    msg_.level_4 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::VatStatus msg_;
};

class Init_VatStatus_level_3
{
public:
  explicit Init_VatStatus_level_3(::interfaces::msg::VatStatus & msg)
  : msg_(msg)
  {}
  Init_VatStatus_level_4 level_3(::interfaces::msg::VatStatus::_level_3_type arg)
  {
    msg_.level_3 = std::move(arg);
    return Init_VatStatus_level_4(msg_);
  }

private:
  ::interfaces::msg::VatStatus msg_;
};

class Init_VatStatus_level_2
{
public:
  explicit Init_VatStatus_level_2(::interfaces::msg::VatStatus & msg)
  : msg_(msg)
  {}
  Init_VatStatus_level_3 level_2(::interfaces::msg::VatStatus::_level_2_type arg)
  {
    msg_.level_2 = std::move(arg);
    return Init_VatStatus_level_3(msg_);
  }

private:
  ::interfaces::msg::VatStatus msg_;
};

class Init_VatStatus_level_1
{
public:
  Init_VatStatus_level_1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VatStatus_level_2 level_1(::interfaces::msg::VatStatus::_level_1_type arg)
  {
    msg_.level_1 = std::move(arg);
    return Init_VatStatus_level_2(msg_);
  }

private:
  ::interfaces::msg::VatStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::VatStatus>()
{
  return interfaces::msg::builder::Init_VatStatus_level_1();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__VAT_STATUS__BUILDER_HPP_
