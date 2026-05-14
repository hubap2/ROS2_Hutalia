#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to marvelmind_ros2_msgs__srv__MarvelmindAPI_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MarvelmindAPI_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub command_id: i64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub request: Vec<u8>,

}



impl Default for MarvelmindAPI_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::MarvelmindAPI_Request::default())
  }
}

impl rosidl_runtime_rs::Message for MarvelmindAPI_Request {
  type RmwMsg = super::srv::rmw::MarvelmindAPI_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        command_id: msg.command_id,
        request: msg.request.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      command_id: msg.command_id,
        request: msg.request.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      command_id: msg.command_id,
      request: msg.request
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to marvelmind_ros2_msgs__srv__MarvelmindAPI_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MarvelmindAPI_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error_code: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub response: Vec<u8>,

}



impl Default for MarvelmindAPI_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::MarvelmindAPI_Response::default())
  }
}

impl rosidl_runtime_rs::Message for MarvelmindAPI_Response {
  type RmwMsg = super::srv::rmw::MarvelmindAPI_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        error_code: msg.error_code,
        response: msg.response.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
      error_code: msg.error_code,
        response: msg.response.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      error_code: msg.error_code,
      response: msg.response
          .into_iter()
          .collect(),
    }
  }
}






#[link(name = "marvelmind_ros2_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__marvelmind_ros2_msgs__srv__MarvelmindAPI() -> *const std::ffi::c_void;
}

// Corresponds to marvelmind_ros2_msgs__srv__MarvelmindAPI
#[allow(missing_docs, non_camel_case_types)]
pub struct MarvelmindAPI;

impl rosidl_runtime_rs::Service for MarvelmindAPI {
    type Request = MarvelmindAPI_Request;
    type Response = MarvelmindAPI_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__marvelmind_ros2_msgs__srv__MarvelmindAPI() }
    }
}


