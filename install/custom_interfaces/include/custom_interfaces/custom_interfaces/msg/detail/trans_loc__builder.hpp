// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:msg/TransLoc.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_interfaces/msg/trans_loc.hpp"


#ifndef CUSTOM_INTERFACES__MSG__DETAIL__TRANS_LOC__BUILDER_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__TRANS_LOC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interfaces/msg/detail/trans_loc__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interfaces
{

namespace msg
{

namespace builder
{

class Init_TransLoc_y
{
public:
  explicit Init_TransLoc_y(::custom_interfaces::msg::TransLoc & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::msg::TransLoc y(::custom_interfaces::msg::TransLoc::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::msg::TransLoc msg_;
};

class Init_TransLoc_x
{
public:
  Init_TransLoc_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TransLoc_y x(::custom_interfaces::msg::TransLoc::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_TransLoc_y(msg_);
  }

private:
  ::custom_interfaces::msg::TransLoc msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::msg::TransLoc>()
{
  return custom_interfaces::msg::builder::Init_TransLoc_x();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__TRANS_LOC__BUILDER_HPP_
