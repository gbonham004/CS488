
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "custom_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__custom_interfaces__action__RobotGoal_Goal() -> *const std::ffi::c_void;
}

#[link(name = "custom_interfaces__rosidl_generator_c")]
extern "C" {
    fn custom_interfaces__action__RobotGoal_Goal__init(msg: *mut RobotGoal_Goal) -> bool;
    fn custom_interfaces__action__RobotGoal_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RobotGoal_Goal>, size: usize) -> bool;
    fn custom_interfaces__action__RobotGoal_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RobotGoal_Goal>);
    fn custom_interfaces__action__RobotGoal_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RobotGoal_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<RobotGoal_Goal>) -> bool;
}

// Corresponds to custom_interfaces__action__RobotGoal_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RobotGoal_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_x: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_y: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_theta: f64,

}



impl Default for RobotGoal_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !custom_interfaces__action__RobotGoal_Goal__init(&mut msg as *mut _) {
        panic!("Call to custom_interfaces__action__RobotGoal_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RobotGoal_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__action__RobotGoal_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__action__RobotGoal_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__action__RobotGoal_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RobotGoal_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RobotGoal_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "custom_interfaces/action/RobotGoal_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__custom_interfaces__action__RobotGoal_Goal() }
  }
}


#[link(name = "custom_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__custom_interfaces__action__RobotGoal_Result() -> *const std::ffi::c_void;
}

#[link(name = "custom_interfaces__rosidl_generator_c")]
extern "C" {
    fn custom_interfaces__action__RobotGoal_Result__init(msg: *mut RobotGoal_Result) -> bool;
    fn custom_interfaces__action__RobotGoal_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RobotGoal_Result>, size: usize) -> bool;
    fn custom_interfaces__action__RobotGoal_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RobotGoal_Result>);
    fn custom_interfaces__action__RobotGoal_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RobotGoal_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<RobotGoal_Result>) -> bool;
}

// Corresponds to custom_interfaces__action__RobotGoal_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RobotGoal_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for RobotGoal_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !custom_interfaces__action__RobotGoal_Result__init(&mut msg as *mut _) {
        panic!("Call to custom_interfaces__action__RobotGoal_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RobotGoal_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__action__RobotGoal_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__action__RobotGoal_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__action__RobotGoal_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RobotGoal_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RobotGoal_Result where Self: Sized {
  const TYPE_NAME: &'static str = "custom_interfaces/action/RobotGoal_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__custom_interfaces__action__RobotGoal_Result() }
  }
}


#[link(name = "custom_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__custom_interfaces__action__RobotGoal_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "custom_interfaces__rosidl_generator_c")]
extern "C" {
    fn custom_interfaces__action__RobotGoal_Feedback__init(msg: *mut RobotGoal_Feedback) -> bool;
    fn custom_interfaces__action__RobotGoal_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RobotGoal_Feedback>, size: usize) -> bool;
    fn custom_interfaces__action__RobotGoal_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RobotGoal_Feedback>);
    fn custom_interfaces__action__RobotGoal_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RobotGoal_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<RobotGoal_Feedback>) -> bool;
}

// Corresponds to custom_interfaces__action__RobotGoal_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RobotGoal_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub current_x: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_y: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_theta: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub distance_from_goal: f64,

}



impl Default for RobotGoal_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !custom_interfaces__action__RobotGoal_Feedback__init(&mut msg as *mut _) {
        panic!("Call to custom_interfaces__action__RobotGoal_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RobotGoal_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__action__RobotGoal_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__action__RobotGoal_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__action__RobotGoal_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RobotGoal_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RobotGoal_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "custom_interfaces/action/RobotGoal_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__custom_interfaces__action__RobotGoal_Feedback() }
  }
}


#[link(name = "custom_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__custom_interfaces__action__RobotGoal_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "custom_interfaces__rosidl_generator_c")]
extern "C" {
    fn custom_interfaces__action__RobotGoal_FeedbackMessage__init(msg: *mut RobotGoal_FeedbackMessage) -> bool;
    fn custom_interfaces__action__RobotGoal_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RobotGoal_FeedbackMessage>, size: usize) -> bool;
    fn custom_interfaces__action__RobotGoal_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RobotGoal_FeedbackMessage>);
    fn custom_interfaces__action__RobotGoal_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RobotGoal_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<RobotGoal_FeedbackMessage>) -> bool;
}

// Corresponds to custom_interfaces__action__RobotGoal_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RobotGoal_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::RobotGoal_Feedback,

}



impl Default for RobotGoal_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !custom_interfaces__action__RobotGoal_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to custom_interfaces__action__RobotGoal_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RobotGoal_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__action__RobotGoal_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__action__RobotGoal_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__action__RobotGoal_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RobotGoal_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RobotGoal_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "custom_interfaces/action/RobotGoal_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__custom_interfaces__action__RobotGoal_FeedbackMessage() }
  }
}




#[link(name = "custom_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__custom_interfaces__action__RobotGoal_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "custom_interfaces__rosidl_generator_c")]
extern "C" {
    fn custom_interfaces__action__RobotGoal_SendGoal_Request__init(msg: *mut RobotGoal_SendGoal_Request) -> bool;
    fn custom_interfaces__action__RobotGoal_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RobotGoal_SendGoal_Request>, size: usize) -> bool;
    fn custom_interfaces__action__RobotGoal_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RobotGoal_SendGoal_Request>);
    fn custom_interfaces__action__RobotGoal_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RobotGoal_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<RobotGoal_SendGoal_Request>) -> bool;
}

// Corresponds to custom_interfaces__action__RobotGoal_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RobotGoal_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::RobotGoal_Goal,

}



impl Default for RobotGoal_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !custom_interfaces__action__RobotGoal_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to custom_interfaces__action__RobotGoal_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RobotGoal_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__action__RobotGoal_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__action__RobotGoal_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__action__RobotGoal_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RobotGoal_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RobotGoal_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "custom_interfaces/action/RobotGoal_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__custom_interfaces__action__RobotGoal_SendGoal_Request() }
  }
}


#[link(name = "custom_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__custom_interfaces__action__RobotGoal_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "custom_interfaces__rosidl_generator_c")]
extern "C" {
    fn custom_interfaces__action__RobotGoal_SendGoal_Response__init(msg: *mut RobotGoal_SendGoal_Response) -> bool;
    fn custom_interfaces__action__RobotGoal_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RobotGoal_SendGoal_Response>, size: usize) -> bool;
    fn custom_interfaces__action__RobotGoal_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RobotGoal_SendGoal_Response>);
    fn custom_interfaces__action__RobotGoal_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RobotGoal_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<RobotGoal_SendGoal_Response>) -> bool;
}

// Corresponds to custom_interfaces__action__RobotGoal_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RobotGoal_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for RobotGoal_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !custom_interfaces__action__RobotGoal_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to custom_interfaces__action__RobotGoal_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RobotGoal_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__action__RobotGoal_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__action__RobotGoal_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__action__RobotGoal_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RobotGoal_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RobotGoal_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "custom_interfaces/action/RobotGoal_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__custom_interfaces__action__RobotGoal_SendGoal_Response() }
  }
}


#[link(name = "custom_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__custom_interfaces__action__RobotGoal_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "custom_interfaces__rosidl_generator_c")]
extern "C" {
    fn custom_interfaces__action__RobotGoal_GetResult_Request__init(msg: *mut RobotGoal_GetResult_Request) -> bool;
    fn custom_interfaces__action__RobotGoal_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RobotGoal_GetResult_Request>, size: usize) -> bool;
    fn custom_interfaces__action__RobotGoal_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RobotGoal_GetResult_Request>);
    fn custom_interfaces__action__RobotGoal_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RobotGoal_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<RobotGoal_GetResult_Request>) -> bool;
}

// Corresponds to custom_interfaces__action__RobotGoal_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RobotGoal_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for RobotGoal_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !custom_interfaces__action__RobotGoal_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to custom_interfaces__action__RobotGoal_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RobotGoal_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__action__RobotGoal_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__action__RobotGoal_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__action__RobotGoal_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RobotGoal_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RobotGoal_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "custom_interfaces/action/RobotGoal_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__custom_interfaces__action__RobotGoal_GetResult_Request() }
  }
}


#[link(name = "custom_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__custom_interfaces__action__RobotGoal_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "custom_interfaces__rosidl_generator_c")]
extern "C" {
    fn custom_interfaces__action__RobotGoal_GetResult_Response__init(msg: *mut RobotGoal_GetResult_Response) -> bool;
    fn custom_interfaces__action__RobotGoal_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RobotGoal_GetResult_Response>, size: usize) -> bool;
    fn custom_interfaces__action__RobotGoal_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RobotGoal_GetResult_Response>);
    fn custom_interfaces__action__RobotGoal_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RobotGoal_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<RobotGoal_GetResult_Response>) -> bool;
}

// Corresponds to custom_interfaces__action__RobotGoal_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RobotGoal_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::RobotGoal_Result,

}



impl Default for RobotGoal_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !custom_interfaces__action__RobotGoal_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to custom_interfaces__action__RobotGoal_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RobotGoal_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__action__RobotGoal_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__action__RobotGoal_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__action__RobotGoal_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RobotGoal_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RobotGoal_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "custom_interfaces/action/RobotGoal_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__custom_interfaces__action__RobotGoal_GetResult_Response() }
  }
}






#[link(name = "custom_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__custom_interfaces__action__RobotGoal_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to custom_interfaces__action__RobotGoal_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct RobotGoal_SendGoal;

impl rosidl_runtime_rs::Service for RobotGoal_SendGoal {
    type Request = RobotGoal_SendGoal_Request;
    type Response = RobotGoal_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__custom_interfaces__action__RobotGoal_SendGoal() }
    }
}




#[link(name = "custom_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__custom_interfaces__action__RobotGoal_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to custom_interfaces__action__RobotGoal_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct RobotGoal_GetResult;

impl rosidl_runtime_rs::Service for RobotGoal_GetResult {
    type Request = RobotGoal_GetResult_Request;
    type Response = RobotGoal_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__custom_interfaces__action__RobotGoal_GetResult() }
    }
}


