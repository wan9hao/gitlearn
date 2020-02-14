// Auto-generated. Do not edit!

// (in-package ivactuator.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class ivactuator {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.uisteerangle = null;
      this.realstrtorque = null;
      this.uispeed = null;
      this.espaccel = null;
      this.shiftlvlposition = null;
      this.currentdrvmode = null;
      this.sysstatus = null;
      this.vehiclesysfault = null;
      this.batteryvoltage = null;
      this.reserve1 = null;
      this.reserve2 = null;
      this.reserve3 = null;
      this.reserve4 = null;
      this.isvalid = null;
    }
    else {
      if (initObj.hasOwnProperty('uisteerangle')) {
        this.uisteerangle = initObj.uisteerangle
      }
      else {
        this.uisteerangle = 0;
      }
      if (initObj.hasOwnProperty('realstrtorque')) {
        this.realstrtorque = initObj.realstrtorque
      }
      else {
        this.realstrtorque = 0;
      }
      if (initObj.hasOwnProperty('uispeed')) {
        this.uispeed = initObj.uispeed
      }
      else {
        this.uispeed = 0.0;
      }
      if (initObj.hasOwnProperty('espaccel')) {
        this.espaccel = initObj.espaccel
      }
      else {
        this.espaccel = 0;
      }
      if (initObj.hasOwnProperty('shiftlvlposition')) {
        this.shiftlvlposition = initObj.shiftlvlposition
      }
      else {
        this.shiftlvlposition = 0;
      }
      if (initObj.hasOwnProperty('currentdrvmode')) {
        this.currentdrvmode = initObj.currentdrvmode
      }
      else {
        this.currentdrvmode = 0;
      }
      if (initObj.hasOwnProperty('sysstatus')) {
        this.sysstatus = initObj.sysstatus
      }
      else {
        this.sysstatus = 0;
      }
      if (initObj.hasOwnProperty('vehiclesysfault')) {
        this.vehiclesysfault = initObj.vehiclesysfault
      }
      else {
        this.vehiclesysfault = 0;
      }
      if (initObj.hasOwnProperty('batteryvoltage')) {
        this.batteryvoltage = initObj.batteryvoltage
      }
      else {
        this.batteryvoltage = 0;
      }
      if (initObj.hasOwnProperty('reserve1')) {
        this.reserve1 = initObj.reserve1
      }
      else {
        this.reserve1 = 0;
      }
      if (initObj.hasOwnProperty('reserve2')) {
        this.reserve2 = initObj.reserve2
      }
      else {
        this.reserve2 = 0.0;
      }
      if (initObj.hasOwnProperty('reserve3')) {
        this.reserve3 = initObj.reserve3
      }
      else {
        this.reserve3 = 0;
      }
      if (initObj.hasOwnProperty('reserve4')) {
        this.reserve4 = initObj.reserve4
      }
      else {
        this.reserve4 = 0;
      }
      if (initObj.hasOwnProperty('isvalid')) {
        this.isvalid = initObj.isvalid
      }
      else {
        this.isvalid = false;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type ivactuator
    // Serialize message field [uisteerangle]
    bufferOffset = _serializer.int16(obj.uisteerangle, buffer, bufferOffset);
    // Serialize message field [realstrtorque]
    bufferOffset = _serializer.int16(obj.realstrtorque, buffer, bufferOffset);
    // Serialize message field [uispeed]
    bufferOffset = _serializer.float32(obj.uispeed, buffer, bufferOffset);
    // Serialize message field [espaccel]
    bufferOffset = _serializer.int16(obj.espaccel, buffer, bufferOffset);
    // Serialize message field [shiftlvlposition]
    bufferOffset = _serializer.uint8(obj.shiftlvlposition, buffer, bufferOffset);
    // Serialize message field [currentdrvmode]
    bufferOffset = _serializer.uint8(obj.currentdrvmode, buffer, bufferOffset);
    // Serialize message field [sysstatus]
    bufferOffset = _serializer.uint8(obj.sysstatus, buffer, bufferOffset);
    // Serialize message field [vehiclesysfault]
    bufferOffset = _serializer.uint8(obj.vehiclesysfault, buffer, bufferOffset);
    // Serialize message field [batteryvoltage]
    bufferOffset = _serializer.int16(obj.batteryvoltage, buffer, bufferOffset);
    // Serialize message field [reserve1]
    bufferOffset = _serializer.int8(obj.reserve1, buffer, bufferOffset);
    // Serialize message field [reserve2]
    bufferOffset = _serializer.float32(obj.reserve2, buffer, bufferOffset);
    // Serialize message field [reserve3]
    bufferOffset = _serializer.uint8(obj.reserve3, buffer, bufferOffset);
    // Serialize message field [reserve4]
    bufferOffset = _serializer.uint8(obj.reserve4, buffer, bufferOffset);
    // Serialize message field [isvalid]
    bufferOffset = _serializer.bool(obj.isvalid, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type ivactuator
    let len;
    let data = new ivactuator(null);
    // Deserialize message field [uisteerangle]
    data.uisteerangle = _deserializer.int16(buffer, bufferOffset);
    // Deserialize message field [realstrtorque]
    data.realstrtorque = _deserializer.int16(buffer, bufferOffset);
    // Deserialize message field [uispeed]
    data.uispeed = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [espaccel]
    data.espaccel = _deserializer.int16(buffer, bufferOffset);
    // Deserialize message field [shiftlvlposition]
    data.shiftlvlposition = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [currentdrvmode]
    data.currentdrvmode = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [sysstatus]
    data.sysstatus = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [vehiclesysfault]
    data.vehiclesysfault = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [batteryvoltage]
    data.batteryvoltage = _deserializer.int16(buffer, bufferOffset);
    // Deserialize message field [reserve1]
    data.reserve1 = _deserializer.int8(buffer, bufferOffset);
    // Deserialize message field [reserve2]
    data.reserve2 = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [reserve3]
    data.reserve3 = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [reserve4]
    data.reserve4 = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [isvalid]
    data.isvalid = _deserializer.bool(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 24;
  }

  static datatype() {
    // Returns string type for a message object
    return 'ivactuator/ivactuator';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '597be65a7f609d9cfeaade5944609f6b';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    int16 uisteerangle
    int16 realstrtorque
    float32 uispeed
    int16 espaccel
    uint8 shiftlvlposition
    uint8 currentdrvmode
    uint8 sysstatus
    uint8 vehiclesysfault
    int16 batteryvoltage
    int8  reserve1
    float32 reserve2
    uint8  reserve3
    uint8  reserve4
    bool isvalid
    
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new ivactuator(null);
    if (msg.uisteerangle !== undefined) {
      resolved.uisteerangle = msg.uisteerangle;
    }
    else {
      resolved.uisteerangle = 0
    }

    if (msg.realstrtorque !== undefined) {
      resolved.realstrtorque = msg.realstrtorque;
    }
    else {
      resolved.realstrtorque = 0
    }

    if (msg.uispeed !== undefined) {
      resolved.uispeed = msg.uispeed;
    }
    else {
      resolved.uispeed = 0.0
    }

    if (msg.espaccel !== undefined) {
      resolved.espaccel = msg.espaccel;
    }
    else {
      resolved.espaccel = 0
    }

    if (msg.shiftlvlposition !== undefined) {
      resolved.shiftlvlposition = msg.shiftlvlposition;
    }
    else {
      resolved.shiftlvlposition = 0
    }

    if (msg.currentdrvmode !== undefined) {
      resolved.currentdrvmode = msg.currentdrvmode;
    }
    else {
      resolved.currentdrvmode = 0
    }

    if (msg.sysstatus !== undefined) {
      resolved.sysstatus = msg.sysstatus;
    }
    else {
      resolved.sysstatus = 0
    }

    if (msg.vehiclesysfault !== undefined) {
      resolved.vehiclesysfault = msg.vehiclesysfault;
    }
    else {
      resolved.vehiclesysfault = 0
    }

    if (msg.batteryvoltage !== undefined) {
      resolved.batteryvoltage = msg.batteryvoltage;
    }
    else {
      resolved.batteryvoltage = 0
    }

    if (msg.reserve1 !== undefined) {
      resolved.reserve1 = msg.reserve1;
    }
    else {
      resolved.reserve1 = 0
    }

    if (msg.reserve2 !== undefined) {
      resolved.reserve2 = msg.reserve2;
    }
    else {
      resolved.reserve2 = 0.0
    }

    if (msg.reserve3 !== undefined) {
      resolved.reserve3 = msg.reserve3;
    }
    else {
      resolved.reserve3 = 0
    }

    if (msg.reserve4 !== undefined) {
      resolved.reserve4 = msg.reserve4;
    }
    else {
      resolved.reserve4 = 0
    }

    if (msg.isvalid !== undefined) {
      resolved.isvalid = msg.isvalid;
    }
    else {
      resolved.isvalid = false
    }

    return resolved;
    }
};

module.exports = ivactuator;
