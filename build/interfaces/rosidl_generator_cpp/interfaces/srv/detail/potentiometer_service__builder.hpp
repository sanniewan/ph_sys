// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:srv/PotentiometerService.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__POTENTIOMETER_SERVICE__BUILDER_HPP_
#define INTERFACES__SRV__DETAIL__POTENTIOMETER_SERVICE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/srv/detail/potentiometer_service__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_PotentiometerService_Request_wiper
{
public:
  explicit Init_PotentiometerService_Request_wiper(::interfaces::srv::PotentiometerService_Request & msg)
  : msg_(msg)
  {}
  ::interfaces::srv::PotentiometerService_Request wiper(::interfaces::srv::PotentiometerService_Request::_wiper_type arg)
  {
    msg_.wiper = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::PotentiometerService_Request msg_;
};

class Init_PotentiometerService_Request_instruction
{
public:
  Init_PotentiometerService_Request_instruction()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PotentiometerService_Request_wiper instruction(::interfaces::srv::PotentiometerService_Request::_instruction_type arg)
  {
    msg_.instruction = std::move(arg);
    return Init_PotentiometerService_Request_wiper(msg_);
  }

private:
  ::interfaces::srv::PotentiometerService_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::PotentiometerService_Request>()
{
  return interfaces::srv::builder::Init_PotentiometerService_Request_instruction();
}

}  // namespace interfaces


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_PotentiometerService_Response_wiper
{
public:
  explicit Init_PotentiometerService_Response_wiper(::interfaces::srv::PotentiometerService_Response & msg)
  : msg_(msg)
  {}
  ::interfaces::srv::PotentiometerService_Response wiper(::interfaces::srv::PotentiometerService_Response::_wiper_type arg)
  {
    msg_.wiper = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::PotentiometerService_Response msg_;
};

class Init_PotentiometerService_Response_msg
{
public:
  explicit Init_PotentiometerService_Response_msg(::interfaces::srv::PotentiometerService_Response & msg)
  : msg_(msg)
  {}
  Init_PotentiometerService_Response_wiper msg(::interfaces::srv::PotentiometerService_Response::_msg_type arg)
  {
    msg_.msg = std::move(arg);
    return Init_PotentiometerService_Response_wiper(msg_);
  }

private:
  ::interfaces::srv::PotentiometerService_Response msg_;
};

class Init_PotentiometerService_Response_err
{
public:
  Init_PotentiometerService_Response_err()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PotentiometerService_Response_msg err(::interfaces::srv::PotentiometerService_Response::_err_type arg)
  {
    msg_.err = std::move(arg);
    return Init_PotentiometerService_Response_msg(msg_);
  }

private:
  ::interfaces::srv::PotentiometerService_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::PotentiometerService_Response>()
{
  return interfaces::srv::builder::Init_PotentiometerService_Response_err();
}

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__POTENTIOMETER_SERVICE__BUILDER_HPP_
