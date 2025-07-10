// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:srv/WaterLevelDetectorService.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__WATER_LEVEL_DETECTOR_SERVICE__BUILDER_HPP_
#define INTERFACES__SRV__DETAIL__WATER_LEVEL_DETECTOR_SERVICE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/srv/detail/water_level_detector_service__struct.hpp"
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
auto build<::interfaces::srv::WaterLevelDetectorService_Request>()
{
  return ::interfaces::srv::WaterLevelDetectorService_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace interfaces


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_WaterLevelDetectorService_Response_critical
{
public:
  explicit Init_WaterLevelDetectorService_Response_critical(::interfaces::srv::WaterLevelDetectorService_Response & msg)
  : msg_(msg)
  {}
  ::interfaces::srv::WaterLevelDetectorService_Response critical(::interfaces::srv::WaterLevelDetectorService_Response::_critical_type arg)
  {
    msg_.critical = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::WaterLevelDetectorService_Response msg_;
};

class Init_WaterLevelDetectorService_Response_msg
{
public:
  explicit Init_WaterLevelDetectorService_Response_msg(::interfaces::srv::WaterLevelDetectorService_Response & msg)
  : msg_(msg)
  {}
  Init_WaterLevelDetectorService_Response_critical msg(::interfaces::srv::WaterLevelDetectorService_Response::_msg_type arg)
  {
    msg_.msg = std::move(arg);
    return Init_WaterLevelDetectorService_Response_critical(msg_);
  }

private:
  ::interfaces::srv::WaterLevelDetectorService_Response msg_;
};

class Init_WaterLevelDetectorService_Response_err
{
public:
  Init_WaterLevelDetectorService_Response_err()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WaterLevelDetectorService_Response_msg err(::interfaces::srv::WaterLevelDetectorService_Response::_err_type arg)
  {
    msg_.err = std::move(arg);
    return Init_WaterLevelDetectorService_Response_msg(msg_);
  }

private:
  ::interfaces::srv::WaterLevelDetectorService_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::WaterLevelDetectorService_Response>()
{
  return interfaces::srv::builder::Init_WaterLevelDetectorService_Response_err();
}

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__WATER_LEVEL_DETECTOR_SERVICE__BUILDER_HPP_
