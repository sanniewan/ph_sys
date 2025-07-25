// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:srv/ActuatorService.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__ACTUATOR_SERVICE__BUILDER_HPP_
#define INTERFACES__SRV__DETAIL__ACTUATOR_SERVICE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/srv/detail/actuator_service__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_ActuatorService_Request_instruction
{
public:
  Init_ActuatorService_Request_instruction()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::srv::ActuatorService_Request instruction(::interfaces::srv::ActuatorService_Request::_instruction_type arg)
  {
    msg_.instruction = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::ActuatorService_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::ActuatorService_Request>()
{
  return interfaces::srv::builder::Init_ActuatorService_Request_instruction();
}

}  // namespace interfaces


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_ActuatorService_Response_state
{
public:
  explicit Init_ActuatorService_Response_state(::interfaces::srv::ActuatorService_Response & msg)
  : msg_(msg)
  {}
  ::interfaces::srv::ActuatorService_Response state(::interfaces::srv::ActuatorService_Response::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::ActuatorService_Response msg_;
};

class Init_ActuatorService_Response_msg
{
public:
  explicit Init_ActuatorService_Response_msg(::interfaces::srv::ActuatorService_Response & msg)
  : msg_(msg)
  {}
  Init_ActuatorService_Response_state msg(::interfaces::srv::ActuatorService_Response::_msg_type arg)
  {
    msg_.msg = std::move(arg);
    return Init_ActuatorService_Response_state(msg_);
  }

private:
  ::interfaces::srv::ActuatorService_Response msg_;
};

class Init_ActuatorService_Response_err
{
public:
  Init_ActuatorService_Response_err()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActuatorService_Response_msg err(::interfaces::srv::ActuatorService_Response::_err_type arg)
  {
    msg_.err = std::move(arg);
    return Init_ActuatorService_Response_msg(msg_);
  }

private:
  ::interfaces::srv::ActuatorService_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::ActuatorService_Response>()
{
  return interfaces::srv::builder::Init_ActuatorService_Response_err();
}

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__ACTUATOR_SERVICE__BUILDER_HPP_
