#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "marvelmind_ros2_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__marvelmind_ros2_msgs__msg__BeaconDistance() -> *const std::ffi::c_void;
}

#[link(name = "marvelmind_ros2_msgs__rosidl_generator_c")]
extern "C" {
    fn marvelmind_ros2_msgs__msg__BeaconDistance__init(msg: *mut BeaconDistance) -> bool;
    fn marvelmind_ros2_msgs__msg__BeaconDistance__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<BeaconDistance>, size: usize) -> bool;
    fn marvelmind_ros2_msgs__msg__BeaconDistance__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<BeaconDistance>);
    fn marvelmind_ros2_msgs__msg__BeaconDistance__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<BeaconDistance>, out_seq: *mut rosidl_runtime_rs::Sequence<BeaconDistance>) -> bool;
}

// Corresponds to marvelmind_ros2_msgs__msg__BeaconDistance
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BeaconDistance {

    // This member is not documented.
    #[allow(missing_docs)]
    pub address_hedge: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub address_beacon: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub distance_m: f64,

}



impl Default for BeaconDistance {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !marvelmind_ros2_msgs__msg__BeaconDistance__init(&mut msg as *mut _) {
        panic!("Call to marvelmind_ros2_msgs__msg__BeaconDistance__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for BeaconDistance {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { marvelmind_ros2_msgs__msg__BeaconDistance__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { marvelmind_ros2_msgs__msg__BeaconDistance__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { marvelmind_ros2_msgs__msg__BeaconDistance__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for BeaconDistance {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for BeaconDistance where Self: Sized {
  const TYPE_NAME: &'static str = "marvelmind_ros2_msgs/msg/BeaconDistance";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__marvelmind_ros2_msgs__msg__BeaconDistance() }
  }
}


#[link(name = "marvelmind_ros2_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__marvelmind_ros2_msgs__msg__BeaconPositionAddressed() -> *const std::ffi::c_void;
}

#[link(name = "marvelmind_ros2_msgs__rosidl_generator_c")]
extern "C" {
    fn marvelmind_ros2_msgs__msg__BeaconPositionAddressed__init(msg: *mut BeaconPositionAddressed) -> bool;
    fn marvelmind_ros2_msgs__msg__BeaconPositionAddressed__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<BeaconPositionAddressed>, size: usize) -> bool;
    fn marvelmind_ros2_msgs__msg__BeaconPositionAddressed__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<BeaconPositionAddressed>);
    fn marvelmind_ros2_msgs__msg__BeaconPositionAddressed__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<BeaconPositionAddressed>, out_seq: *mut rosidl_runtime_rs::Sequence<BeaconPositionAddressed>) -> bool;
}

// Corresponds to marvelmind_ros2_msgs__msg__BeaconPositionAddressed
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BeaconPositionAddressed {

    // This member is not documented.
    #[allow(missing_docs)]
    pub address: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub x_m: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y_m: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub z_m: f64,

}



impl Default for BeaconPositionAddressed {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !marvelmind_ros2_msgs__msg__BeaconPositionAddressed__init(&mut msg as *mut _) {
        panic!("Call to marvelmind_ros2_msgs__msg__BeaconPositionAddressed__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for BeaconPositionAddressed {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { marvelmind_ros2_msgs__msg__BeaconPositionAddressed__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { marvelmind_ros2_msgs__msg__BeaconPositionAddressed__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { marvelmind_ros2_msgs__msg__BeaconPositionAddressed__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for BeaconPositionAddressed {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for BeaconPositionAddressed where Self: Sized {
  const TYPE_NAME: &'static str = "marvelmind_ros2_msgs/msg/BeaconPositionAddressed";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__marvelmind_ros2_msgs__msg__BeaconPositionAddressed() }
  }
}


#[link(name = "marvelmind_ros2_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__marvelmind_ros2_msgs__msg__HedgeImuFusion() -> *const std::ffi::c_void;
}

#[link(name = "marvelmind_ros2_msgs__rosidl_generator_c")]
extern "C" {
    fn marvelmind_ros2_msgs__msg__HedgeImuFusion__init(msg: *mut HedgeImuFusion) -> bool;
    fn marvelmind_ros2_msgs__msg__HedgeImuFusion__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<HedgeImuFusion>, size: usize) -> bool;
    fn marvelmind_ros2_msgs__msg__HedgeImuFusion__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<HedgeImuFusion>);
    fn marvelmind_ros2_msgs__msg__HedgeImuFusion__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<HedgeImuFusion>, out_seq: *mut rosidl_runtime_rs::Sequence<HedgeImuFusion>) -> bool;
}

// Corresponds to marvelmind_ros2_msgs__msg__HedgeImuFusion
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HedgeImuFusion {

    // This member is not documented.
    #[allow(missing_docs)]
    pub timestamp_ms: i64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub x_m: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y_m: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub z_m: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub qw: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub qx: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub qy: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub qz: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub vx: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub vy: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub vz: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ax: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ay: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub az: f64,

}



impl Default for HedgeImuFusion {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !marvelmind_ros2_msgs__msg__HedgeImuFusion__init(&mut msg as *mut _) {
        panic!("Call to marvelmind_ros2_msgs__msg__HedgeImuFusion__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for HedgeImuFusion {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { marvelmind_ros2_msgs__msg__HedgeImuFusion__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { marvelmind_ros2_msgs__msg__HedgeImuFusion__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { marvelmind_ros2_msgs__msg__HedgeImuFusion__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for HedgeImuFusion {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for HedgeImuFusion where Self: Sized {
  const TYPE_NAME: &'static str = "marvelmind_ros2_msgs/msg/HedgeImuFusion";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__marvelmind_ros2_msgs__msg__HedgeImuFusion() }
  }
}


#[link(name = "marvelmind_ros2_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__marvelmind_ros2_msgs__msg__HedgeImuRaw() -> *const std::ffi::c_void;
}

#[link(name = "marvelmind_ros2_msgs__rosidl_generator_c")]
extern "C" {
    fn marvelmind_ros2_msgs__msg__HedgeImuRaw__init(msg: *mut HedgeImuRaw) -> bool;
    fn marvelmind_ros2_msgs__msg__HedgeImuRaw__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<HedgeImuRaw>, size: usize) -> bool;
    fn marvelmind_ros2_msgs__msg__HedgeImuRaw__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<HedgeImuRaw>);
    fn marvelmind_ros2_msgs__msg__HedgeImuRaw__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<HedgeImuRaw>, out_seq: *mut rosidl_runtime_rs::Sequence<HedgeImuRaw>) -> bool;
}

// Corresponds to marvelmind_ros2_msgs__msg__HedgeImuRaw
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HedgeImuRaw {

    // This member is not documented.
    #[allow(missing_docs)]
    pub timestamp_ms: i64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub acc_x: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub acc_y: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub acc_z: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub gyro_x: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub gyro_y: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub gyro_z: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub compass_x: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub compass_y: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub compass_z: i16,

}



impl Default for HedgeImuRaw {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !marvelmind_ros2_msgs__msg__HedgeImuRaw__init(&mut msg as *mut _) {
        panic!("Call to marvelmind_ros2_msgs__msg__HedgeImuRaw__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for HedgeImuRaw {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { marvelmind_ros2_msgs__msg__HedgeImuRaw__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { marvelmind_ros2_msgs__msg__HedgeImuRaw__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { marvelmind_ros2_msgs__msg__HedgeImuRaw__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for HedgeImuRaw {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for HedgeImuRaw where Self: Sized {
  const TYPE_NAME: &'static str = "marvelmind_ros2_msgs/msg/HedgeImuRaw";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__marvelmind_ros2_msgs__msg__HedgeImuRaw() }
  }
}


#[link(name = "marvelmind_ros2_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__marvelmind_ros2_msgs__msg__HedgePositionAddressed() -> *const std::ffi::c_void;
}

#[link(name = "marvelmind_ros2_msgs__rosidl_generator_c")]
extern "C" {
    fn marvelmind_ros2_msgs__msg__HedgePositionAddressed__init(msg: *mut HedgePositionAddressed) -> bool;
    fn marvelmind_ros2_msgs__msg__HedgePositionAddressed__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<HedgePositionAddressed>, size: usize) -> bool;
    fn marvelmind_ros2_msgs__msg__HedgePositionAddressed__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<HedgePositionAddressed>);
    fn marvelmind_ros2_msgs__msg__HedgePositionAddressed__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<HedgePositionAddressed>, out_seq: *mut rosidl_runtime_rs::Sequence<HedgePositionAddressed>) -> bool;
}

// Corresponds to marvelmind_ros2_msgs__msg__HedgePositionAddressed
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HedgePositionAddressed {

    // This member is not documented.
    #[allow(missing_docs)]
    pub address: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub timestamp_ms: i64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub x_m: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y_m: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub z_m: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub flags: u8,

}



impl Default for HedgePositionAddressed {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !marvelmind_ros2_msgs__msg__HedgePositionAddressed__init(&mut msg as *mut _) {
        panic!("Call to marvelmind_ros2_msgs__msg__HedgePositionAddressed__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for HedgePositionAddressed {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { marvelmind_ros2_msgs__msg__HedgePositionAddressed__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { marvelmind_ros2_msgs__msg__HedgePositionAddressed__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { marvelmind_ros2_msgs__msg__HedgePositionAddressed__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for HedgePositionAddressed {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for HedgePositionAddressed where Self: Sized {
  const TYPE_NAME: &'static str = "marvelmind_ros2_msgs/msg/HedgePositionAddressed";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__marvelmind_ros2_msgs__msg__HedgePositionAddressed() }
  }
}


#[link(name = "marvelmind_ros2_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__marvelmind_ros2_msgs__msg__HedgePositionAngle() -> *const std::ffi::c_void;
}

#[link(name = "marvelmind_ros2_msgs__rosidl_generator_c")]
extern "C" {
    fn marvelmind_ros2_msgs__msg__HedgePositionAngle__init(msg: *mut HedgePositionAngle) -> bool;
    fn marvelmind_ros2_msgs__msg__HedgePositionAngle__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<HedgePositionAngle>, size: usize) -> bool;
    fn marvelmind_ros2_msgs__msg__HedgePositionAngle__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<HedgePositionAngle>);
    fn marvelmind_ros2_msgs__msg__HedgePositionAngle__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<HedgePositionAngle>, out_seq: *mut rosidl_runtime_rs::Sequence<HedgePositionAngle>) -> bool;
}

// Corresponds to marvelmind_ros2_msgs__msg__HedgePositionAngle
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HedgePositionAngle {

    // This member is not documented.
    #[allow(missing_docs)]
    pub address: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub timestamp_ms: i64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub x_m: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y_m: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub z_m: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub flags: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub angle: f64,

}



impl Default for HedgePositionAngle {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !marvelmind_ros2_msgs__msg__HedgePositionAngle__init(&mut msg as *mut _) {
        panic!("Call to marvelmind_ros2_msgs__msg__HedgePositionAngle__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for HedgePositionAngle {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { marvelmind_ros2_msgs__msg__HedgePositionAngle__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { marvelmind_ros2_msgs__msg__HedgePositionAngle__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { marvelmind_ros2_msgs__msg__HedgePositionAngle__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for HedgePositionAngle {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for HedgePositionAngle where Self: Sized {
  const TYPE_NAME: &'static str = "marvelmind_ros2_msgs/msg/HedgePositionAngle";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__marvelmind_ros2_msgs__msg__HedgePositionAngle() }
  }
}


#[link(name = "marvelmind_ros2_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__marvelmind_ros2_msgs__msg__HedgePosition() -> *const std::ffi::c_void;
}

#[link(name = "marvelmind_ros2_msgs__rosidl_generator_c")]
extern "C" {
    fn marvelmind_ros2_msgs__msg__HedgePosition__init(msg: *mut HedgePosition) -> bool;
    fn marvelmind_ros2_msgs__msg__HedgePosition__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<HedgePosition>, size: usize) -> bool;
    fn marvelmind_ros2_msgs__msg__HedgePosition__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<HedgePosition>);
    fn marvelmind_ros2_msgs__msg__HedgePosition__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<HedgePosition>, out_seq: *mut rosidl_runtime_rs::Sequence<HedgePosition>) -> bool;
}

// Corresponds to marvelmind_ros2_msgs__msg__HedgePosition
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HedgePosition {

    // This member is not documented.
    #[allow(missing_docs)]
    pub timestamp_ms: i64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub x_m: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y_m: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub z_m: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub flags: u8,

}



impl Default for HedgePosition {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !marvelmind_ros2_msgs__msg__HedgePosition__init(&mut msg as *mut _) {
        panic!("Call to marvelmind_ros2_msgs__msg__HedgePosition__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for HedgePosition {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { marvelmind_ros2_msgs__msg__HedgePosition__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { marvelmind_ros2_msgs__msg__HedgePosition__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { marvelmind_ros2_msgs__msg__HedgePosition__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for HedgePosition {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for HedgePosition where Self: Sized {
  const TYPE_NAME: &'static str = "marvelmind_ros2_msgs/msg/HedgePosition";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__marvelmind_ros2_msgs__msg__HedgePosition() }
  }
}


#[link(name = "marvelmind_ros2_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__marvelmind_ros2_msgs__msg__HedgeQuality() -> *const std::ffi::c_void;
}

#[link(name = "marvelmind_ros2_msgs__rosidl_generator_c")]
extern "C" {
    fn marvelmind_ros2_msgs__msg__HedgeQuality__init(msg: *mut HedgeQuality) -> bool;
    fn marvelmind_ros2_msgs__msg__HedgeQuality__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<HedgeQuality>, size: usize) -> bool;
    fn marvelmind_ros2_msgs__msg__HedgeQuality__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<HedgeQuality>);
    fn marvelmind_ros2_msgs__msg__HedgeQuality__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<HedgeQuality>, out_seq: *mut rosidl_runtime_rs::Sequence<HedgeQuality>) -> bool;
}

// Corresponds to marvelmind_ros2_msgs__msg__HedgeQuality
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HedgeQuality {

    // This member is not documented.
    #[allow(missing_docs)]
    pub address: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub quality_percents: u8,

}



impl Default for HedgeQuality {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !marvelmind_ros2_msgs__msg__HedgeQuality__init(&mut msg as *mut _) {
        panic!("Call to marvelmind_ros2_msgs__msg__HedgeQuality__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for HedgeQuality {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { marvelmind_ros2_msgs__msg__HedgeQuality__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { marvelmind_ros2_msgs__msg__HedgeQuality__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { marvelmind_ros2_msgs__msg__HedgeQuality__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for HedgeQuality {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for HedgeQuality where Self: Sized {
  const TYPE_NAME: &'static str = "marvelmind_ros2_msgs/msg/HedgeQuality";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__marvelmind_ros2_msgs__msg__HedgeQuality() }
  }
}


#[link(name = "marvelmind_ros2_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__marvelmind_ros2_msgs__msg__HedgeTelemetry() -> *const std::ffi::c_void;
}

#[link(name = "marvelmind_ros2_msgs__rosidl_generator_c")]
extern "C" {
    fn marvelmind_ros2_msgs__msg__HedgeTelemetry__init(msg: *mut HedgeTelemetry) -> bool;
    fn marvelmind_ros2_msgs__msg__HedgeTelemetry__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<HedgeTelemetry>, size: usize) -> bool;
    fn marvelmind_ros2_msgs__msg__HedgeTelemetry__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<HedgeTelemetry>);
    fn marvelmind_ros2_msgs__msg__HedgeTelemetry__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<HedgeTelemetry>, out_seq: *mut rosidl_runtime_rs::Sequence<HedgeTelemetry>) -> bool;
}

// Corresponds to marvelmind_ros2_msgs__msg__HedgeTelemetry
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HedgeTelemetry {

    // This member is not documented.
    #[allow(missing_docs)]
    pub battery_voltage: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rssi_dbm: i8,

}



impl Default for HedgeTelemetry {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !marvelmind_ros2_msgs__msg__HedgeTelemetry__init(&mut msg as *mut _) {
        panic!("Call to marvelmind_ros2_msgs__msg__HedgeTelemetry__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for HedgeTelemetry {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { marvelmind_ros2_msgs__msg__HedgeTelemetry__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { marvelmind_ros2_msgs__msg__HedgeTelemetry__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { marvelmind_ros2_msgs__msg__HedgeTelemetry__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for HedgeTelemetry {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for HedgeTelemetry where Self: Sized {
  const TYPE_NAME: &'static str = "marvelmind_ros2_msgs/msg/HedgeTelemetry";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__marvelmind_ros2_msgs__msg__HedgeTelemetry() }
  }
}


#[link(name = "marvelmind_ros2_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__marvelmind_ros2_msgs__msg__MarvelmindWaypoint() -> *const std::ffi::c_void;
}

#[link(name = "marvelmind_ros2_msgs__rosidl_generator_c")]
extern "C" {
    fn marvelmind_ros2_msgs__msg__MarvelmindWaypoint__init(msg: *mut MarvelmindWaypoint) -> bool;
    fn marvelmind_ros2_msgs__msg__MarvelmindWaypoint__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MarvelmindWaypoint>, size: usize) -> bool;
    fn marvelmind_ros2_msgs__msg__MarvelmindWaypoint__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MarvelmindWaypoint>);
    fn marvelmind_ros2_msgs__msg__MarvelmindWaypoint__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MarvelmindWaypoint>, out_seq: *mut rosidl_runtime_rs::Sequence<MarvelmindWaypoint>) -> bool;
}

// Corresponds to marvelmind_ros2_msgs__msg__MarvelmindWaypoint
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MarvelmindWaypoint {

    // This member is not documented.
    #[allow(missing_docs)]
    pub total_items: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub item_index: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub movement_type: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub param1: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub param2: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub param3: i16,

}



impl Default for MarvelmindWaypoint {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !marvelmind_ros2_msgs__msg__MarvelmindWaypoint__init(&mut msg as *mut _) {
        panic!("Call to marvelmind_ros2_msgs__msg__MarvelmindWaypoint__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MarvelmindWaypoint {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { marvelmind_ros2_msgs__msg__MarvelmindWaypoint__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { marvelmind_ros2_msgs__msg__MarvelmindWaypoint__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { marvelmind_ros2_msgs__msg__MarvelmindWaypoint__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MarvelmindWaypoint {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MarvelmindWaypoint where Self: Sized {
  const TYPE_NAME: &'static str = "marvelmind_ros2_msgs/msg/MarvelmindWaypoint";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__marvelmind_ros2_msgs__msg__MarvelmindWaypoint() }
  }
}


#[link(name = "marvelmind_ros2_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__marvelmind_ros2_msgs__msg__MarvelmindUserData() -> *const std::ffi::c_void;
}

#[link(name = "marvelmind_ros2_msgs__rosidl_generator_c")]
extern "C" {
    fn marvelmind_ros2_msgs__msg__MarvelmindUserData__init(msg: *mut MarvelmindUserData) -> bool;
    fn marvelmind_ros2_msgs__msg__MarvelmindUserData__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MarvelmindUserData>, size: usize) -> bool;
    fn marvelmind_ros2_msgs__msg__MarvelmindUserData__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MarvelmindUserData>);
    fn marvelmind_ros2_msgs__msg__MarvelmindUserData__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MarvelmindUserData>, out_seq: *mut rosidl_runtime_rs::Sequence<MarvelmindUserData>) -> bool;
}

// Corresponds to marvelmind_ros2_msgs__msg__MarvelmindUserData
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MarvelmindUserData {

    // This member is not documented.
    #[allow(missing_docs)]
    pub timestamp_ms: i64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: rosidl_runtime_rs::Sequence<u8>,

}



impl Default for MarvelmindUserData {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !marvelmind_ros2_msgs__msg__MarvelmindUserData__init(&mut msg as *mut _) {
        panic!("Call to marvelmind_ros2_msgs__msg__MarvelmindUserData__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MarvelmindUserData {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { marvelmind_ros2_msgs__msg__MarvelmindUserData__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { marvelmind_ros2_msgs__msg__MarvelmindUserData__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { marvelmind_ros2_msgs__msg__MarvelmindUserData__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MarvelmindUserData {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MarvelmindUserData where Self: Sized {
  const TYPE_NAME: &'static str = "marvelmind_ros2_msgs/msg/MarvelmindUserData";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__marvelmind_ros2_msgs__msg__MarvelmindUserData() }
  }
}


