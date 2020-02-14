;; Auto-generated. Do not edit!


(when (boundp 'ivactuator::ivactuator)
  (if (not (find-package "IVACTUATOR"))
    (make-package "IVACTUATOR"))
  (shadow 'ivactuator (find-package "IVACTUATOR")))
(unless (find-package "IVACTUATOR::IVACTUATOR")
  (make-package "IVACTUATOR::IVACTUATOR"))

(in-package "ROS")
;;//! \htmlinclude ivactuator.msg.html


(defclass ivactuator::ivactuator
  :super ros::object
  :slots (_uisteerangle _realstrtorque _uispeed _espaccel _shiftlvlposition _currentdrvmode _sysstatus _vehiclesysfault _batteryvoltage _reserve1 _reserve2 _reserve3 _reserve4 _isvalid ))

(defmethod ivactuator::ivactuator
  (:init
   (&key
    ((:uisteerangle __uisteerangle) 0)
    ((:realstrtorque __realstrtorque) 0)
    ((:uispeed __uispeed) 0.0)
    ((:espaccel __espaccel) 0)
    ((:shiftlvlposition __shiftlvlposition) 0)
    ((:currentdrvmode __currentdrvmode) 0)
    ((:sysstatus __sysstatus) 0)
    ((:vehiclesysfault __vehiclesysfault) 0)
    ((:batteryvoltage __batteryvoltage) 0)
    ((:reserve1 __reserve1) 0)
    ((:reserve2 __reserve2) 0.0)
    ((:reserve3 __reserve3) 0)
    ((:reserve4 __reserve4) 0)
    ((:isvalid __isvalid) nil)
    )
   (send-super :init)
   (setq _uisteerangle (round __uisteerangle))
   (setq _realstrtorque (round __realstrtorque))
   (setq _uispeed (float __uispeed))
   (setq _espaccel (round __espaccel))
   (setq _shiftlvlposition (round __shiftlvlposition))
   (setq _currentdrvmode (round __currentdrvmode))
   (setq _sysstatus (round __sysstatus))
   (setq _vehiclesysfault (round __vehiclesysfault))
   (setq _batteryvoltage (round __batteryvoltage))
   (setq _reserve1 (round __reserve1))
   (setq _reserve2 (float __reserve2))
   (setq _reserve3 (round __reserve3))
   (setq _reserve4 (round __reserve4))
   (setq _isvalid __isvalid)
   self)
  (:uisteerangle
   (&optional __uisteerangle)
   (if __uisteerangle (setq _uisteerangle __uisteerangle)) _uisteerangle)
  (:realstrtorque
   (&optional __realstrtorque)
   (if __realstrtorque (setq _realstrtorque __realstrtorque)) _realstrtorque)
  (:uispeed
   (&optional __uispeed)
   (if __uispeed (setq _uispeed __uispeed)) _uispeed)
  (:espaccel
   (&optional __espaccel)
   (if __espaccel (setq _espaccel __espaccel)) _espaccel)
  (:shiftlvlposition
   (&optional __shiftlvlposition)
   (if __shiftlvlposition (setq _shiftlvlposition __shiftlvlposition)) _shiftlvlposition)
  (:currentdrvmode
   (&optional __currentdrvmode)
   (if __currentdrvmode (setq _currentdrvmode __currentdrvmode)) _currentdrvmode)
  (:sysstatus
   (&optional __sysstatus)
   (if __sysstatus (setq _sysstatus __sysstatus)) _sysstatus)
  (:vehiclesysfault
   (&optional __vehiclesysfault)
   (if __vehiclesysfault (setq _vehiclesysfault __vehiclesysfault)) _vehiclesysfault)
  (:batteryvoltage
   (&optional __batteryvoltage)
   (if __batteryvoltage (setq _batteryvoltage __batteryvoltage)) _batteryvoltage)
  (:reserve1
   (&optional __reserve1)
   (if __reserve1 (setq _reserve1 __reserve1)) _reserve1)
  (:reserve2
   (&optional __reserve2)
   (if __reserve2 (setq _reserve2 __reserve2)) _reserve2)
  (:reserve3
   (&optional __reserve3)
   (if __reserve3 (setq _reserve3 __reserve3)) _reserve3)
  (:reserve4
   (&optional __reserve4)
   (if __reserve4 (setq _reserve4 __reserve4)) _reserve4)
  (:isvalid
   (&optional __isvalid)
   (if __isvalid (setq _isvalid __isvalid)) _isvalid)
  (:serialization-length
   ()
   (+
    ;; int16 _uisteerangle
    2
    ;; int16 _realstrtorque
    2
    ;; float32 _uispeed
    4
    ;; int16 _espaccel
    2
    ;; uint8 _shiftlvlposition
    1
    ;; uint8 _currentdrvmode
    1
    ;; uint8 _sysstatus
    1
    ;; uint8 _vehiclesysfault
    1
    ;; int16 _batteryvoltage
    2
    ;; int8 _reserve1
    1
    ;; float32 _reserve2
    4
    ;; uint8 _reserve3
    1
    ;; uint8 _reserve4
    1
    ;; bool _isvalid
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int16 _uisteerangle
       (write-word _uisteerangle s)
     ;; int16 _realstrtorque
       (write-word _realstrtorque s)
     ;; float32 _uispeed
       (sys::poke _uispeed (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; int16 _espaccel
       (write-word _espaccel s)
     ;; uint8 _shiftlvlposition
       (write-byte _shiftlvlposition s)
     ;; uint8 _currentdrvmode
       (write-byte _currentdrvmode s)
     ;; uint8 _sysstatus
       (write-byte _sysstatus s)
     ;; uint8 _vehiclesysfault
       (write-byte _vehiclesysfault s)
     ;; int16 _batteryvoltage
       (write-word _batteryvoltage s)
     ;; int8 _reserve1
       (write-byte _reserve1 s)
     ;; float32 _reserve2
       (sys::poke _reserve2 (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; uint8 _reserve3
       (write-byte _reserve3 s)
     ;; uint8 _reserve4
       (write-byte _reserve4 s)
     ;; bool _isvalid
       (if _isvalid (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int16 _uisteerangle
     (setq _uisteerangle (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; int16 _realstrtorque
     (setq _realstrtorque (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; float32 _uispeed
     (setq _uispeed (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; int16 _espaccel
     (setq _espaccel (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; uint8 _shiftlvlposition
     (setq _shiftlvlposition (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _currentdrvmode
     (setq _currentdrvmode (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _sysstatus
     (setq _sysstatus (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _vehiclesysfault
     (setq _vehiclesysfault (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; int16 _batteryvoltage
     (setq _batteryvoltage (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; int8 _reserve1
     (setq _reserve1 (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _reserve1 127) (setq _reserve1 (- _reserve1 256)))
   ;; float32 _reserve2
     (setq _reserve2 (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; uint8 _reserve3
     (setq _reserve3 (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _reserve4
     (setq _reserve4 (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; bool _isvalid
     (setq _isvalid (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(setf (get ivactuator::ivactuator :md5sum-) "597be65a7f609d9cfeaade5944609f6b")
(setf (get ivactuator::ivactuator :datatype-) "ivactuator/ivactuator")
(setf (get ivactuator::ivactuator :definition-)
      "int16 uisteerangle
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


")



(provide :ivactuator/ivactuator "597be65a7f609d9cfeaade5944609f6b")


