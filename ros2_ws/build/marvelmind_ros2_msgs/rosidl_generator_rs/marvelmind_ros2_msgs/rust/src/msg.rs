#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to marvelmind_ros2_msgs__msg__BeaconDistance

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::BeaconDistance::default())
  }
}

impl rosidl_runtime_rs::Message for BeaconDistance {
  type RmwMsg = super::msg::rmw::BeaconDistance;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        address_hedge: msg.address_hedge,
        address_beacon: msg.address_beacon,
        distance_m: msg.distance_m,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      address_hedge: msg.address_hedge,
      address_beacon: msg.address_beacon,
      distance_m: msg.distance_m,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      address_hedge: msg.address_hedge,
      address_beacon: msg.address_beacon,
      distance_m: msg.distance_m,
    }
  }
}


// Corresponds to marvelmind_ros2_msgs__msg__BeaconPositionAddressed

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::BeaconPositionAddressed::default())
  }
}

impl rosidl_runtime_rs::Message for BeaconPositionAddressed {
  type RmwMsg = super::msg::rmw::BeaconPositionAddressed;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        address: msg.address,
        x_m: msg.x_m,
        y_m: msg.y_m,
        z_m: msg.z_m,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      address: msg.address,
      x_m: msg.x_m,
      y_m: msg.y_m,
      z_m: msg.z_m,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      address: msg.address,
      x_m: msg.x_m,
      y_m: msg.y_m,
      z_m: msg.z_m,
    }
  }
}


// Corresponds to marvelmind_ros2_msgs__msg__HedgeImuFusion

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::HedgeImuFusion::default())
  }
}

impl rosidl_runtime_rs::Message for HedgeImuFusion {
  type RmwMsg = super::msg::rmw::HedgeImuFusion;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp_ms: msg.timestamp_ms,
        x_m: msg.x_m,
        y_m: msg.y_m,
        z_m: msg.z_m,
        qw: msg.qw,
        qx: msg.qx,
        qy: msg.qy,
        qz: msg.qz,
        vx: msg.vx,
        vy: msg.vy,
        vz: msg.vz,
        ax: msg.ax,
        ay: msg.ay,
        az: msg.az,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp_ms: msg.timestamp_ms,
      x_m: msg.x_m,
      y_m: msg.y_m,
      z_m: msg.z_m,
      qw: msg.qw,
      qx: msg.qx,
      qy: msg.qy,
      qz: msg.qz,
      vx: msg.vx,
      vy: msg.vy,
      vz: msg.vz,
      ax: msg.ax,
      ay: msg.ay,
      az: msg.az,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp_ms: msg.timestamp_ms,
      x_m: msg.x_m,
      y_m: msg.y_m,
      z_m: msg.z_m,
      qw: msg.qw,
      qx: msg.qx,
      qy: msg.qy,
      qz: msg.qz,
      vx: msg.vx,
      vy: msg.vy,
      vz: msg.vz,
      ax: msg.ax,
      ay: msg.ay,
      az: msg.az,
    }
  }
}


// Corresponds to marvelmind_ros2_msgs__msg__HedgeImuRaw

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::HedgeImuRaw::default())
  }
}

impl rosidl_runtime_rs::Message for HedgeImuRaw {
  type RmwMsg = super::msg::rmw::HedgeImuRaw;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp_ms: msg.timestamp_ms,
        acc_x: msg.acc_x,
        acc_y: msg.acc_y,
        acc_z: msg.acc_z,
        gyro_x: msg.gyro_x,
        gyro_y: msg.gyro_y,
        gyro_z: msg.gyro_z,
        compass_x: msg.compass_x,
        compass_y: msg.compass_y,
        compass_z: msg.compass_z,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp_ms: msg.timestamp_ms,
      acc_x: msg.acc_x,
      acc_y: msg.acc_y,
      acc_z: msg.acc_z,
      gyro_x: msg.gyro_x,
      gyro_y: msg.gyro_y,
      gyro_z: msg.gyro_z,
      compass_x: msg.compass_x,
      compass_y: msg.compass_y,
      compass_z: msg.compass_z,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp_ms: msg.timestamp_ms,
      acc_x: msg.acc_x,
      acc_y: msg.acc_y,
      acc_z: msg.acc_z,
      gyro_x: msg.gyro_x,
      gyro_y: msg.gyro_y,
      gyro_z: msg.gyro_z,
      compass_x: msg.compass_x,
      compass_y: msg.compass_y,
      compass_z: msg.compass_z,
    }
  }
}


// Corresponds to marvelmind_ros2_msgs__msg__HedgePositionAddressed

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::HedgePositionAddressed::default())
  }
}

impl rosidl_runtime_rs::Message for HedgePositionAddressed {
  type RmwMsg = super::msg::rmw::HedgePositionAddressed;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        address: msg.address,
        timestamp_ms: msg.timestamp_ms,
        x_m: msg.x_m,
        y_m: msg.y_m,
        z_m: msg.z_m,
        flags: msg.flags,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      address: msg.address,
      timestamp_ms: msg.timestamp_ms,
      x_m: msg.x_m,
      y_m: msg.y_m,
      z_m: msg.z_m,
      flags: msg.flags,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      address: msg.address,
      timestamp_ms: msg.timestamp_ms,
      x_m: msg.x_m,
      y_m: msg.y_m,
      z_m: msg.z_m,
      flags: msg.flags,
    }
  }
}


// Corresponds to marvelmind_ros2_msgs__msg__HedgePositionAngle

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::HedgePositionAngle::default())
  }
}

impl rosidl_runtime_rs::Message for HedgePositionAngle {
  type RmwMsg = super::msg::rmw::HedgePositionAngle;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        address: msg.address,
        timestamp_ms: msg.timestamp_ms,
        x_m: msg.x_m,
        y_m: msg.y_m,
        z_m: msg.z_m,
        flags: msg.flags,
        angle: msg.angle,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      address: msg.address,
      timestamp_ms: msg.timestamp_ms,
      x_m: msg.x_m,
      y_m: msg.y_m,
      z_m: msg.z_m,
      flags: msg.flags,
      angle: msg.angle,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      address: msg.address,
      timestamp_ms: msg.timestamp_ms,
      x_m: msg.x_m,
      y_m: msg.y_m,
      z_m: msg.z_m,
      flags: msg.flags,
      angle: msg.angle,
    }
  }
}


// Corresponds to marvelmind_ros2_msgs__msg__HedgePosition

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::HedgePosition::default())
  }
}

impl rosidl_runtime_rs::Message for HedgePosition {
  type RmwMsg = super::msg::rmw::HedgePosition;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp_ms: msg.timestamp_ms,
        x_m: msg.x_m,
        y_m: msg.y_m,
        z_m: msg.z_m,
        flags: msg.flags,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp_ms: msg.timestamp_ms,
      x_m: msg.x_m,
      y_m: msg.y_m,
      z_m: msg.z_m,
      flags: msg.flags,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp_ms: msg.timestamp_ms,
      x_m: msg.x_m,
      y_m: msg.y_m,
      z_m: msg.z_m,
      flags: msg.flags,
    }
  }
}


// Corresponds to marvelmind_ros2_msgs__msg__HedgeQuality

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::HedgeQuality::default())
  }
}

impl rosidl_runtime_rs::Message for HedgeQuality {
  type RmwMsg = super::msg::rmw::HedgeQuality;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        address: msg.address,
        quality_percents: msg.quality_percents,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      address: msg.address,
      quality_percents: msg.quality_percents,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      address: msg.address,
      quality_percents: msg.quality_percents,
    }
  }
}


// Corresponds to marvelmind_ros2_msgs__msg__HedgeTelemetry

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::HedgeTelemetry::default())
  }
}

impl rosidl_runtime_rs::Message for HedgeTelemetry {
  type RmwMsg = super::msg::rmw::HedgeTelemetry;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        battery_voltage: msg.battery_voltage,
        rssi_dbm: msg.rssi_dbm,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      battery_voltage: msg.battery_voltage,
      rssi_dbm: msg.rssi_dbm,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      battery_voltage: msg.battery_voltage,
      rssi_dbm: msg.rssi_dbm,
    }
  }
}


// Corresponds to marvelmind_ros2_msgs__msg__MarvelmindWaypoint

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MarvelmindWaypoint::default())
  }
}

impl rosidl_runtime_rs::Message for MarvelmindWaypoint {
  type RmwMsg = super::msg::rmw::MarvelmindWaypoint;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        total_items: msg.total_items,
        item_index: msg.item_index,
        movement_type: msg.movement_type,
        param1: msg.param1,
        param2: msg.param2,
        param3: msg.param3,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      total_items: msg.total_items,
      item_index: msg.item_index,
      movement_type: msg.movement_type,
      param1: msg.param1,
      param2: msg.param2,
      param3: msg.param3,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      total_items: msg.total_items,
      item_index: msg.item_index,
      movement_type: msg.movement_type,
      param1: msg.param1,
      param2: msg.param2,
      param3: msg.param3,
    }
  }
}


// Corresponds to marvelmind_ros2_msgs__msg__MarvelmindUserData

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MarvelmindUserData {

    // This member is not documented.
    #[allow(missing_docs)]
    pub timestamp_ms: i64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: Vec<u8>,

}



impl Default for MarvelmindUserData {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MarvelmindUserData::default())
  }
}

impl rosidl_runtime_rs::Message for MarvelmindUserData {
  type RmwMsg = super::msg::rmw::MarvelmindUserData;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp_ms: msg.timestamp_ms,
        data: msg.data.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp_ms: msg.timestamp_ms,
        data: msg.data.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp_ms: msg.timestamp_ms,
      data: msg.data
          .into_iter()
          .collect(),
    }
  }
}


