#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to custom_interfaces__msg__TransLoc

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TransLoc {

    // This member is not documented.
    #[allow(missing_docs)]
    pub x: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y: f64,

}



impl Default for TransLoc {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TransLoc::default())
  }
}

impl rosidl_runtime_rs::Message for TransLoc {
  type RmwMsg = super::msg::rmw::TransLoc;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        x: msg.x,
        y: msg.y,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      x: msg.x,
      y: msg.y,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      x: msg.x,
      y: msg.y,
    }
  }
}


// Corresponds to custom_interfaces__msg__ObsList

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ObsList {

    // This member is not documented.
    #[allow(missing_docs)]
    pub x_list: Vec<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y_list: Vec<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub d_list: Vec<f64>,

}



impl Default for ObsList {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ObsList::default())
  }
}

impl rosidl_runtime_rs::Message for ObsList {
  type RmwMsg = super::msg::rmw::ObsList;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        x_list: msg.x_list.into(),
        y_list: msg.y_list.into(),
        d_list: msg.d_list.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        x_list: msg.x_list.as_slice().into(),
        y_list: msg.y_list.as_slice().into(),
        d_list: msg.d_list.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      x_list: msg.x_list
          .into_iter()
          .collect(),
      y_list: msg.y_list
          .into_iter()
          .collect(),
      d_list: msg.d_list
          .into_iter()
          .collect(),
    }
  }
}


