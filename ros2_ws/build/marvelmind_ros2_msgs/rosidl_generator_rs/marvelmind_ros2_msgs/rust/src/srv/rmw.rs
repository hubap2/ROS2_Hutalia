#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "marvelmind_ros2_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__marvelmind_ros2_msgs__srv__MarvelmindAPI_Request() -> *const std::ffi::c_void;
}

#[link(name = "marvelmind_ros2_msgs__rosidl_generator_c")]
extern "C" {
    fn marvelmind_ros2_msgs__srv__MarvelmindAPI_Request__init(msg: *mut MarvelmindAPI_Request) -> bool;
    fn marvelmind_ros2_msgs__srv__MarvelmindAPI_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MarvelmindAPI_Request>, size: usize) -> bool;
    fn marvelmind_ros2_msgs__srv__MarvelmindAPI_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MarvelmindAPI_Request>);
    fn marvelmind_ros2_msgs__srv__MarvelmindAPI_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MarvelmindAPI_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<MarvelmindAPI_Request>) -> bool;
}

// Corresponds to marvelmind_ros2_msgs__srv__MarvelmindAPI_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MarvelmindAPI_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub command_id: i64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub request: rosidl_runtime_rs::Sequence<u8>,

}



impl Default for MarvelmindAPI_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !marvelmind_ros2_msgs__srv__MarvelmindAPI_Request__init(&mut msg as *mut _) {
        panic!("Call to marvelmind_ros2_msgs__srv__MarvelmindAPI_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MarvelmindAPI_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { marvelmind_ros2_msgs__srv__MarvelmindAPI_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { marvelmind_ros2_msgs__srv__MarvelmindAPI_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { marvelmind_ros2_msgs__srv__MarvelmindAPI_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MarvelmindAPI_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MarvelmindAPI_Request where Self: Sized {
  const TYPE_NAME: &'static str = "marvelmind_ros2_msgs/srv/MarvelmindAPI_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__marvelmind_ros2_msgs__srv__MarvelmindAPI_Request() }
  }
}


#[link(name = "marvelmind_ros2_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__marvelmind_ros2_msgs__srv__MarvelmindAPI_Response() -> *const std::ffi::c_void;
}

#[link(name = "marvelmind_ros2_msgs__rosidl_generator_c")]
extern "C" {
    fn marvelmind_ros2_msgs__srv__MarvelmindAPI_Response__init(msg: *mut MarvelmindAPI_Response) -> bool;
    fn marvelmind_ros2_msgs__srv__MarvelmindAPI_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MarvelmindAPI_Response>, size: usize) -> bool;
    fn marvelmind_ros2_msgs__srv__MarvelmindAPI_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MarvelmindAPI_Response>);
    fn marvelmind_ros2_msgs__srv__MarvelmindAPI_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MarvelmindAPI_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<MarvelmindAPI_Response>) -> bool;
}

// Corresponds to marvelmind_ros2_msgs__srv__MarvelmindAPI_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
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
    pub response: rosidl_runtime_rs::Sequence<u8>,

}



impl Default for MarvelmindAPI_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !marvelmind_ros2_msgs__srv__MarvelmindAPI_Response__init(&mut msg as *mut _) {
        panic!("Call to marvelmind_ros2_msgs__srv__MarvelmindAPI_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MarvelmindAPI_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { marvelmind_ros2_msgs__srv__MarvelmindAPI_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { marvelmind_ros2_msgs__srv__MarvelmindAPI_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { marvelmind_ros2_msgs__srv__MarvelmindAPI_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MarvelmindAPI_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MarvelmindAPI_Response where Self: Sized {
  const TYPE_NAME: &'static str = "marvelmind_ros2_msgs/srv/MarvelmindAPI_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__marvelmind_ros2_msgs__srv__MarvelmindAPI_Response() }
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


