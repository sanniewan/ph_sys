// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/CameraInstruction.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__CAMERA_INSTRUCTION__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__CAMERA_INSTRUCTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/msg/detail/camera_instruction__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_CameraInstruction_camera
{
public:
  explicit Init_CameraInstruction_camera(::interfaces::msg::CameraInstruction & msg)
  : msg_(msg)
  {}
  ::interfaces::msg::CameraInstruction camera(::interfaces::msg::CameraInstruction::_camera_type arg)
  {
    msg_.camera = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::CameraInstruction msg_;
};

class Init_CameraInstruction_instruction
{
public:
  Init_CameraInstruction_instruction()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CameraInstruction_camera instruction(::interfaces::msg::CameraInstruction::_instruction_type arg)
  {
    msg_.instruction = std::move(arg);
    return Init_CameraInstruction_camera(msg_);
  }

private:
  ::interfaces::msg::CameraInstruction msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::CameraInstruction>()
{
  return interfaces::msg::builder::Init_CameraInstruction_instruction();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__CAMERA_INSTRUCTION__BUILDER_HPP_
