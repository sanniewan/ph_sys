// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:srv/LiftService.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__LIFT_SERVICE__BUILDER_HPP_
#define INTERFACES__SRV__DETAIL__LIFT_SERVICE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/srv/detail/lift_service__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_LiftService_Request_height
{
public:
  explicit Init_LiftService_Request_height(::interfaces::srv::LiftService_Request & msg)
  : msg_(msg)
  {}
  ::interfaces::srv::LiftService_Request height(::interfaces::srv::LiftService_Request::_height_type arg)
  {
    msg_.height = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::LiftService_Request msg_;
};

class Init_LiftService_Request_instruction
{
public:
  Init_LiftService_Request_instruction()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LiftService_Request_height instruction(::interfaces::srv::LiftService_Request::_instruction_type arg)
  {
    msg_.instruction = std::move(arg);
    return Init_LiftService_Request_height(msg_);
  }

private:
  ::interfaces::srv::LiftService_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::LiftService_Request>()
{
  return interfaces::srv::builder::Init_LiftService_Request_instruction();
}

}  // namespace interfaces


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_LiftService_Response_height
{
public:
  explicit Init_LiftService_Response_height(::interfaces::srv::LiftService_Response & msg)
  : msg_(msg)
  {}
  ::interfaces::srv::LiftService_Response height(::interfaces::srv::LiftService_Response::_height_type arg)
  {
    msg_.height = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::LiftService_Response msg_;
};

class Init_LiftService_Response_state
{
public:
  explicit Init_LiftService_Response_state(::interfaces::srv::LiftService_Response & msg)
  : msg_(msg)
  {}
  Init_LiftService_Response_height state(::interfaces::srv::LiftService_Response::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_LiftService_Response_height(msg_);
  }

private:
  ::interfaces::srv::LiftService_Response msg_;
};

class Init_LiftService_Response_msg
{
public:
  explicit Init_LiftService_Response_msg(::interfaces::srv::LiftService_Response & msg)
  : msg_(msg)
  {}
  Init_LiftService_Response_state msg(::interfaces::srv::LiftService_Response::_msg_type arg)
  {
    msg_.msg = std::move(arg);
    return Init_LiftService_Response_state(msg_);
  }

private:
  ::interfaces::srv::LiftService_Response msg_;
};

class Init_LiftService_Response_err
{
public:
  Init_LiftService_Response_err()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LiftService_Response_msg err(::interfaces::srv::LiftService_Response::_err_type arg)
  {
    msg_.err = std::move(arg);
    return Init_LiftService_Response_msg(msg_);
  }

private:
  ::interfaces::srv::LiftService_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::LiftService_Response>()
{
  return interfaces::srv::builder::Init_LiftService_Response_err();
}

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__LIFT_SERVICE__BUILDER_HPP_
