// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_interfaces:msg/ObsList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_interfaces/msg/obs_list.hpp"


#ifndef CUSTOM_INTERFACES__MSG__DETAIL__OBS_LIST__STRUCT_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__OBS_LIST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__custom_interfaces__msg__ObsList __attribute__((deprecated))
#else
# define DEPRECATED__custom_interfaces__msg__ObsList __declspec(deprecated)
#endif

namespace custom_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObsList_
{
  using Type = ObsList_<ContainerAllocator>;

  explicit ObsList_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit ObsList_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _x_list_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _x_list_type x_list;
  using _y_list_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _y_list_type y_list;
  using _d_list_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _d_list_type d_list;

  // setters for named parameter idiom
  Type & set__x_list(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->x_list = _arg;
    return *this;
  }
  Type & set__y_list(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->y_list = _arg;
    return *this;
  }
  Type & set__d_list(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->d_list = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_interfaces::msg::ObsList_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_interfaces::msg::ObsList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_interfaces::msg::ObsList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_interfaces::msg::ObsList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::msg::ObsList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::msg::ObsList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::msg::ObsList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::msg::ObsList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_interfaces::msg::ObsList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_interfaces::msg::ObsList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_interfaces__msg__ObsList
    std::shared_ptr<custom_interfaces::msg::ObsList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_interfaces__msg__ObsList
    std::shared_ptr<custom_interfaces::msg::ObsList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObsList_ & other) const
  {
    if (this->x_list != other.x_list) {
      return false;
    }
    if (this->y_list != other.y_list) {
      return false;
    }
    if (this->d_list != other.d_list) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObsList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObsList_

// alias to use template instance with default allocator
using ObsList =
  custom_interfaces::msg::ObsList_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__OBS_LIST__STRUCT_HPP_
