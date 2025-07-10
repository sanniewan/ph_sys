// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:srv/FlowMeterService.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__FLOW_METER_SERVICE__BUILDER_HPP_
#define INTERFACES__SRV__DETAIL__FLOW_METER_SERVICE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/srv/detail/flow_meter_service__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::FlowMeterService_Request>()
{
  return ::interfaces::srv::FlowMeterService_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace interfaces


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_FlowMeterService_Response_flow_rate
{
public:
  explicit Init_FlowMeterService_Response_flow_rate(::interfaces::srv::FlowMeterService_Response & msg)
  : msg_(msg)
  {}
  ::interfaces::srv::FlowMeterService_Response flow_rate(::interfaces::srv::FlowMeterService_Response::_flow_rate_type arg)
  {
    msg_.flow_rate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::FlowMeterService_Response msg_;
};

class Init_FlowMeterService_Response_flow_volume
{
public:
  explicit Init_FlowMeterService_Response_flow_volume(::interfaces::srv::FlowMeterService_Response & msg)
  : msg_(msg)
  {}
  Init_FlowMeterService_Response_flow_rate flow_volume(::interfaces::srv::FlowMeterService_Response::_flow_volume_type arg)
  {
    msg_.flow_volume = std::move(arg);
    return Init_FlowMeterService_Response_flow_rate(msg_);
  }

private:
  ::interfaces::srv::FlowMeterService_Response msg_;
};

class Init_FlowMeterService_Response_msg
{
public:
  explicit Init_FlowMeterService_Response_msg(::interfaces::srv::FlowMeterService_Response & msg)
  : msg_(msg)
  {}
  Init_FlowMeterService_Response_flow_volume msg(::interfaces::srv::FlowMeterService_Response::_msg_type arg)
  {
    msg_.msg = std::move(arg);
    return Init_FlowMeterService_Response_flow_volume(msg_);
  }

private:
  ::interfaces::srv::FlowMeterService_Response msg_;
};

class Init_FlowMeterService_Response_err
{
public:
  Init_FlowMeterService_Response_err()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FlowMeterService_Response_msg err(::interfaces::srv::FlowMeterService_Response::_err_type arg)
  {
    msg_.err = std::move(arg);
    return Init_FlowMeterService_Response_msg(msg_);
  }

private:
  ::interfaces::srv::FlowMeterService_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::FlowMeterService_Response>()
{
  return interfaces::srv::builder::Init_FlowMeterService_Response_err();
}

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__FLOW_METER_SERVICE__BUILDER_HPP_
