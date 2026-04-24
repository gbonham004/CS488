#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "custom_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__custom_interfaces__srv__SetCap_Request() -> *const std::ffi::c_void;
}

#[link(name = "custom_interfaces__rosidl_generator_c")]
extern "C" {
    fn custom_interfaces__srv__SetCap_Request__init(msg: *mut SetCap_Request) -> bool;
    fn custom_interfaces__srv__SetCap_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetCap_Request>, size: usize) -> bool;
    fn custom_interfaces__srv__SetCap_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetCap_Request>);
    fn custom_interfaces__srv__SetCap_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetCap_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetCap_Request>) -> bool;
}

// Corresponds to custom_interfaces__srv__SetCap_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetCap_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub new_cap: f64,

}



impl Default for SetCap_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !custom_interfaces__srv__SetCap_Request__init(&mut msg as *mut _) {
        panic!("Call to custom_interfaces__srv__SetCap_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetCap_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__srv__SetCap_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__srv__SetCap_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__srv__SetCap_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetCap_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetCap_Request where Self: Sized {
  const TYPE_NAME: &'static str = "custom_interfaces/srv/SetCap_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__custom_interfaces__srv__SetCap_Request() }
  }
}


#[link(name = "custom_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__custom_interfaces__srv__SetCap_Response() -> *const std::ffi::c_void;
}

#[link(name = "custom_interfaces__rosidl_generator_c")]
extern "C" {
    fn custom_interfaces__srv__SetCap_Response__init(msg: *mut SetCap_Response) -> bool;
    fn custom_interfaces__srv__SetCap_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetCap_Response>, size: usize) -> bool;
    fn custom_interfaces__srv__SetCap_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetCap_Response>);
    fn custom_interfaces__srv__SetCap_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetCap_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetCap_Response>) -> bool;
}

// Corresponds to custom_interfaces__srv__SetCap_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetCap_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub confirmation: rosidl_runtime_rs::String,

}



impl Default for SetCap_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !custom_interfaces__srv__SetCap_Response__init(&mut msg as *mut _) {
        panic!("Call to custom_interfaces__srv__SetCap_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetCap_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__srv__SetCap_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__srv__SetCap_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__srv__SetCap_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetCap_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetCap_Response where Self: Sized {
  const TYPE_NAME: &'static str = "custom_interfaces/srv/SetCap_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__custom_interfaces__srv__SetCap_Response() }
  }
}






#[link(name = "custom_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__custom_interfaces__srv__SetCap() -> *const std::ffi::c_void;
}

// Corresponds to custom_interfaces__srv__SetCap
#[allow(missing_docs, non_camel_case_types)]
pub struct SetCap;

impl rosidl_runtime_rs::Service for SetCap {
    type Request = SetCap_Request;
    type Response = SetCap_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__custom_interfaces__srv__SetCap() }
    }
}


