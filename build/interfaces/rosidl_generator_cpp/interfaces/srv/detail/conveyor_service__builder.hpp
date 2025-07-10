// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:srv/ConveyorService.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__CONVEYOR_SERVICE__BUILDER_HPP_
#define INTERFACES__SRV__DETAIL__CONVEYOR_SERVICE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/srv/detail/conveyor_service__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_ConveyorService_Request_speed
{
public:
  explicit Init_ConveyorService_Request_speed(::interfaces::srv::ConveyorService_Request & msg)
  : msg_(msg)
  {}
  ::interfaces::srv::ConveyorService_Request speed(::interfaces::srv::ConveyorService_Request::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::ConveyorService_Request msg_;
};

class Init_ConveyorService_Request_instruction
{
public:
  Init_ConveyorService_Request_instruction()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ConveyorService_Request_speed instruction(::interfaces::srv::ConveyorService_Request::_instruction_type arg)
  {
    msg_.instruction = std::move(arg);
    return Init_ConveyorService_Request_speed(msg_);
  }

private:
  ::interfaces::srv::ConveyorService_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::ConveyorService_Request>()
{
  return interfaces::srv::builder::Init_ConveyorService_Request_instruction();
}

}  // namespace interfaces


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_ConveyorService_Response_speed
{
public:
  explicit Init_ConveyorService_Response_speed(::interfaces::srv::ConveyorService_Response & msg)
  : msg_(msg)
  {}
  ::interfaces::srv::ConveyorService_Response speed(::interfaces::srv::ConveyorService_Response::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::ConveyorService_Response msg_;
};

class Init_ConveyorService_Response_status
{
public:
  explicit Init_ConveyorService_Response_status(::interfaces::srv::ConveyorService_Response & msg)
  : msg_(msg)
  {}
  Init_ConveyorService_Response_speed status(::interfaces::srv::ConveyorService_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ConveyorService_Response_speed(msg_);
  }

private:
  ::interfaces::srv::ConveyorService_Response msg_;
};

class Init_ConveyorService_Response_msg
{
public:
  explicit Init_ConveyorService_Response_msg(::interfaces::srv::ConveyorService_Response & msg)
  : msg_(msg)
  {}
  Init_ConveyorService_Response_status msg(::interfaces::srv::ConveyorService_Response::_msg_type arg)
  {
    msg_.msg = std::move(arg);
    return Init_ConveyorService_Response_status(msg_);
  }

private:
  ::interfaces::srv::ConveyorService_Response msg_;
};

class Init_ConveyorService_Response_err
{
public:
  Init_ConveyorService_Response_err()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ConveyorService_Response_msg err(::interfaces::srv::ConveyorService_Response::_err_type arg)
  {
    msg_.err = std::move(arg);
    return Init_ConveyorService_Response_msg(msg_);
  }

private:
  ::interfaces::srv::ConveyorService_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::ConveyorService_Response>()
{
  return interfaces::srv::builder::Init_ConveyorService_Response_err();
}

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__CONVEYOR_SERVICE__BUILDER_HPP_
