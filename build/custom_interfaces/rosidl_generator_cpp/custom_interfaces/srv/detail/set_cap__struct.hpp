// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_interfaces:srv/SetCap.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_interfaces/srv/set_cap.hpp"


#ifndef CUSTOM_INTERFACES__SRV__DETAIL__SET_CAP__STRUCT_HPP_
#define CUSTOM_INTERFACES__SRV__DETAIL__SET_CAP__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__custom_interfaces__srv__SetCap_Request __attribute__((deprecated))
#else
# define DEPRECATED__custom_interfaces__srv__SetCap_Request __declspec(deprecated)
#endif

namespace custom_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetCap_Request_
{
  using Type = SetCap_Request_<ContainerAllocator>;

  explicit SetCap_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->new_cap = 0.0;
    }
  }

  explicit SetCap_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->new_cap = 0.0;
    }
  }

  // field types and members
  using _new_cap_type =
    double;
  _new_cap_type new_cap;

  // setters for named parameter idiom
  Type & set__new_cap(
    const double & _arg)
  {
    this->new_cap = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_interfaces::srv::SetCap_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_interfaces::srv::SetCap_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_interfaces::srv::SetCap_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_interfaces::srv::SetCap_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::srv::SetCap_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::srv::SetCap_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::srv::SetCap_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::srv::SetCap_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_interfaces::srv::SetCap_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_interfaces::srv::SetCap_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_interfaces__srv__SetCap_Request
    std::shared_ptr<custom_interfaces::srv::SetCap_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_interfaces__srv__SetCap_Request
    std::shared_ptr<custom_interfaces::srv::SetCap_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetCap_Request_ & other) const
  {
    if (this->new_cap != other.new_cap) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetCap_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetCap_Request_

// alias to use template instance with default allocator
using SetCap_Request =
  custom_interfaces::srv::SetCap_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace custom_interfaces


#ifndef _WIN32
# define DEPRECATED__custom_interfaces__srv__SetCap_Response __attribute__((deprecated))
#else
# define DEPRECATED__custom_interfaces__srv__SetCap_Response __declspec(deprecated)
#endif

namespace custom_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetCap_Response_
{
  using Type = SetCap_Response_<ContainerAllocator>;

  explicit SetCap_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->confirmation = "";
    }
  }

  explicit SetCap_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : confirmation(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->confirmation = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _confirmation_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _confirmation_type confirmation;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__confirmation(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->confirmation = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_interfaces::srv::SetCap_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_interfaces::srv::SetCap_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_interfaces::srv::SetCap_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_interfaces::srv::SetCap_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::srv::SetCap_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::srv::SetCap_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::srv::SetCap_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::srv::SetCap_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_interfaces::srv::SetCap_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_interfaces::srv::SetCap_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_interfaces__srv__SetCap_Response
    std::shared_ptr<custom_interfaces::srv::SetCap_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_interfaces__srv__SetCap_Response
    std::shared_ptr<custom_interfaces::srv::SetCap_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetCap_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->confirmation != other.confirmation) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetCap_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetCap_Response_

// alias to use template instance with default allocator
using SetCap_Response =
  custom_interfaces::srv::SetCap_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace custom_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__custom_interfaces__srv__SetCap_Event __attribute__((deprecated))
#else
# define DEPRECATED__custom_interfaces__srv__SetCap_Event __declspec(deprecated)
#endif

namespace custom_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetCap_Event_
{
  using Type = SetCap_Event_<ContainerAllocator>;

  explicit SetCap_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit SetCap_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<custom_interfaces::srv::SetCap_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<custom_interfaces::srv::SetCap_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<custom_interfaces::srv::SetCap_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<custom_interfaces::srv::SetCap_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<custom_interfaces::srv::SetCap_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<custom_interfaces::srv::SetCap_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<custom_interfaces::srv::SetCap_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<custom_interfaces::srv::SetCap_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_interfaces::srv::SetCap_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_interfaces::srv::SetCap_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_interfaces::srv::SetCap_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_interfaces::srv::SetCap_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::srv::SetCap_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::srv::SetCap_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::srv::SetCap_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::srv::SetCap_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_interfaces::srv::SetCap_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_interfaces::srv::SetCap_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_interfaces__srv__SetCap_Event
    std::shared_ptr<custom_interfaces::srv::SetCap_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_interfaces__srv__SetCap_Event
    std::shared_ptr<custom_interfaces::srv::SetCap_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetCap_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetCap_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetCap_Event_

// alias to use template instance with default allocator
using SetCap_Event =
  custom_interfaces::srv::SetCap_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace custom_interfaces

namespace custom_interfaces
{

namespace srv
{

struct SetCap
{
  using Request = custom_interfaces::srv::SetCap_Request;
  using Response = custom_interfaces::srv::SetCap_Response;
  using Event = custom_interfaces::srv::SetCap_Event;
};

}  // namespace srv

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__SRV__DETAIL__SET_CAP__STRUCT_HPP_
