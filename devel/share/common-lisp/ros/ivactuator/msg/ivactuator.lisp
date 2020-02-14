; Auto-generated. Do not edit!


(cl:in-package ivactuator-msg)


;//! \htmlinclude ivactuator.msg.html

(cl:defclass <ivactuator> (roslisp-msg-protocol:ros-message)
  ((uisteerangle
    :reader uisteerangle
    :initarg :uisteerangle
    :type cl:fixnum
    :initform 0)
   (realstrtorque
    :reader realstrtorque
    :initarg :realstrtorque
    :type cl:fixnum
    :initform 0)
   (uispeed
    :reader uispeed
    :initarg :uispeed
    :type cl:float
    :initform 0.0)
   (espaccel
    :reader espaccel
    :initarg :espaccel
    :type cl:fixnum
    :initform 0)
   (shiftlvlposition
    :reader shiftlvlposition
    :initarg :shiftlvlposition
    :type cl:fixnum
    :initform 0)
   (currentdrvmode
    :reader currentdrvmode
    :initarg :currentdrvmode
    :type cl:fixnum
    :initform 0)
   (sysstatus
    :reader sysstatus
    :initarg :sysstatus
    :type cl:fixnum
    :initform 0)
   (vehiclesysfault
    :reader vehiclesysfault
    :initarg :vehiclesysfault
    :type cl:fixnum
    :initform 0)
   (batteryvoltage
    :reader batteryvoltage
    :initarg :batteryvoltage
    :type cl:fixnum
    :initform 0)
   (reserve1
    :reader reserve1
    :initarg :reserve1
    :type cl:fixnum
    :initform 0)
   (reserve2
    :reader reserve2
    :initarg :reserve2
    :type cl:float
    :initform 0.0)
   (reserve3
    :reader reserve3
    :initarg :reserve3
    :type cl:fixnum
    :initform 0)
   (reserve4
    :reader reserve4
    :initarg :reserve4
    :type cl:fixnum
    :initform 0)
   (isvalid
    :reader isvalid
    :initarg :isvalid
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass ivactuator (<ivactuator>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <ivactuator>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'ivactuator)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name ivactuator-msg:<ivactuator> is deprecated: use ivactuator-msg:ivactuator instead.")))

(cl:ensure-generic-function 'uisteerangle-val :lambda-list '(m))
(cl:defmethod uisteerangle-val ((m <ivactuator>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ivactuator-msg:uisteerangle-val is deprecated.  Use ivactuator-msg:uisteerangle instead.")
  (uisteerangle m))

(cl:ensure-generic-function 'realstrtorque-val :lambda-list '(m))
(cl:defmethod realstrtorque-val ((m <ivactuator>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ivactuator-msg:realstrtorque-val is deprecated.  Use ivactuator-msg:realstrtorque instead.")
  (realstrtorque m))

(cl:ensure-generic-function 'uispeed-val :lambda-list '(m))
(cl:defmethod uispeed-val ((m <ivactuator>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ivactuator-msg:uispeed-val is deprecated.  Use ivactuator-msg:uispeed instead.")
  (uispeed m))

(cl:ensure-generic-function 'espaccel-val :lambda-list '(m))
(cl:defmethod espaccel-val ((m <ivactuator>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ivactuator-msg:espaccel-val is deprecated.  Use ivactuator-msg:espaccel instead.")
  (espaccel m))

(cl:ensure-generic-function 'shiftlvlposition-val :lambda-list '(m))
(cl:defmethod shiftlvlposition-val ((m <ivactuator>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ivactuator-msg:shiftlvlposition-val is deprecated.  Use ivactuator-msg:shiftlvlposition instead.")
  (shiftlvlposition m))

(cl:ensure-generic-function 'currentdrvmode-val :lambda-list '(m))
(cl:defmethod currentdrvmode-val ((m <ivactuator>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ivactuator-msg:currentdrvmode-val is deprecated.  Use ivactuator-msg:currentdrvmode instead.")
  (currentdrvmode m))

(cl:ensure-generic-function 'sysstatus-val :lambda-list '(m))
(cl:defmethod sysstatus-val ((m <ivactuator>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ivactuator-msg:sysstatus-val is deprecated.  Use ivactuator-msg:sysstatus instead.")
  (sysstatus m))

(cl:ensure-generic-function 'vehiclesysfault-val :lambda-list '(m))
(cl:defmethod vehiclesysfault-val ((m <ivactuator>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ivactuator-msg:vehiclesysfault-val is deprecated.  Use ivactuator-msg:vehiclesysfault instead.")
  (vehiclesysfault m))

(cl:ensure-generic-function 'batteryvoltage-val :lambda-list '(m))
(cl:defmethod batteryvoltage-val ((m <ivactuator>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ivactuator-msg:batteryvoltage-val is deprecated.  Use ivactuator-msg:batteryvoltage instead.")
  (batteryvoltage m))

(cl:ensure-generic-function 'reserve1-val :lambda-list '(m))
(cl:defmethod reserve1-val ((m <ivactuator>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ivactuator-msg:reserve1-val is deprecated.  Use ivactuator-msg:reserve1 instead.")
  (reserve1 m))

(cl:ensure-generic-function 'reserve2-val :lambda-list '(m))
(cl:defmethod reserve2-val ((m <ivactuator>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ivactuator-msg:reserve2-val is deprecated.  Use ivactuator-msg:reserve2 instead.")
  (reserve2 m))

(cl:ensure-generic-function 'reserve3-val :lambda-list '(m))
(cl:defmethod reserve3-val ((m <ivactuator>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ivactuator-msg:reserve3-val is deprecated.  Use ivactuator-msg:reserve3 instead.")
  (reserve3 m))

(cl:ensure-generic-function 'reserve4-val :lambda-list '(m))
(cl:defmethod reserve4-val ((m <ivactuator>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ivactuator-msg:reserve4-val is deprecated.  Use ivactuator-msg:reserve4 instead.")
  (reserve4 m))

(cl:ensure-generic-function 'isvalid-val :lambda-list '(m))
(cl:defmethod isvalid-val ((m <ivactuator>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ivactuator-msg:isvalid-val is deprecated.  Use ivactuator-msg:isvalid instead.")
  (isvalid m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <ivactuator>) ostream)
  "Serializes a message object of type '<ivactuator>"
  (cl:let* ((signed (cl:slot-value msg 'uisteerangle)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 65536) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'realstrtorque)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 65536) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    )
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'uispeed))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let* ((signed (cl:slot-value msg 'espaccel)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 65536) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    )
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'shiftlvlposition)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'currentdrvmode)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'sysstatus)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'vehiclesysfault)) ostream)
  (cl:let* ((signed (cl:slot-value msg 'batteryvoltage)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 65536) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'reserve1)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'reserve2))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'reserve3)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'reserve4)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'isvalid) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <ivactuator>) istream)
  "Deserializes a message object of type '<ivactuator>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'uisteerangle) (cl:if (cl:< unsigned 32768) unsigned (cl:- unsigned 65536))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'realstrtorque) (cl:if (cl:< unsigned 32768) unsigned (cl:- unsigned 65536))))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'uispeed) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'espaccel) (cl:if (cl:< unsigned 32768) unsigned (cl:- unsigned 65536))))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'shiftlvlposition)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'currentdrvmode)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'sysstatus)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'vehiclesysfault)) (cl:read-byte istream))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'batteryvoltage) (cl:if (cl:< unsigned 32768) unsigned (cl:- unsigned 65536))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'reserve1) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'reserve2) (roslisp-utils:decode-single-float-bits bits)))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'reserve3)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'reserve4)) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'isvalid) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<ivactuator>)))
  "Returns string type for a message object of type '<ivactuator>"
  "ivactuator/ivactuator")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'ivactuator)))
  "Returns string type for a message object of type 'ivactuator"
  "ivactuator/ivactuator")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<ivactuator>)))
  "Returns md5sum for a message object of type '<ivactuator>"
  "597be65a7f609d9cfeaade5944609f6b")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'ivactuator)))
  "Returns md5sum for a message object of type 'ivactuator"
  "597be65a7f609d9cfeaade5944609f6b")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<ivactuator>)))
  "Returns full string definition for message of type '<ivactuator>"
  (cl:format cl:nil "int16 uisteerangle~%int16 realstrtorque~%float32 uispeed~%int16 espaccel~%uint8 shiftlvlposition~%uint8 currentdrvmode~%uint8 sysstatus~%uint8 vehiclesysfault~%int16 batteryvoltage~%int8  reserve1~%float32 reserve2~%uint8  reserve3~%uint8  reserve4~%bool isvalid~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'ivactuator)))
  "Returns full string definition for message of type 'ivactuator"
  (cl:format cl:nil "int16 uisteerangle~%int16 realstrtorque~%float32 uispeed~%int16 espaccel~%uint8 shiftlvlposition~%uint8 currentdrvmode~%uint8 sysstatus~%uint8 vehiclesysfault~%int16 batteryvoltage~%int8  reserve1~%float32 reserve2~%uint8  reserve3~%uint8  reserve4~%bool isvalid~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <ivactuator>))
  (cl:+ 0
     2
     2
     4
     2
     1
     1
     1
     1
     2
     1
     4
     1
     1
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <ivactuator>))
  "Converts a ROS message object to a list"
  (cl:list 'ivactuator
    (cl:cons ':uisteerangle (uisteerangle msg))
    (cl:cons ':realstrtorque (realstrtorque msg))
    (cl:cons ':uispeed (uispeed msg))
    (cl:cons ':espaccel (espaccel msg))
    (cl:cons ':shiftlvlposition (shiftlvlposition msg))
    (cl:cons ':currentdrvmode (currentdrvmode msg))
    (cl:cons ':sysstatus (sysstatus msg))
    (cl:cons ':vehiclesysfault (vehiclesysfault msg))
    (cl:cons ':batteryvoltage (batteryvoltage msg))
    (cl:cons ':reserve1 (reserve1 msg))
    (cl:cons ':reserve2 (reserve2 msg))
    (cl:cons ':reserve3 (reserve3 msg))
    (cl:cons ':reserve4 (reserve4 msg))
    (cl:cons ':isvalid (isvalid msg))
))
