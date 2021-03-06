# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from ivactuator/ivactuator.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class ivactuator(genpy.Message):
  _md5sum = "597be65a7f609d9cfeaade5944609f6b"
  _type = "ivactuator/ivactuator"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """int16 uisteerangle
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

"""
  __slots__ = ['uisteerangle','realstrtorque','uispeed','espaccel','shiftlvlposition','currentdrvmode','sysstatus','vehiclesysfault','batteryvoltage','reserve1','reserve2','reserve3','reserve4','isvalid']
  _slot_types = ['int16','int16','float32','int16','uint8','uint8','uint8','uint8','int16','int8','float32','uint8','uint8','bool']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       uisteerangle,realstrtorque,uispeed,espaccel,shiftlvlposition,currentdrvmode,sysstatus,vehiclesysfault,batteryvoltage,reserve1,reserve2,reserve3,reserve4,isvalid

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(ivactuator, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.uisteerangle is None:
        self.uisteerangle = 0
      if self.realstrtorque is None:
        self.realstrtorque = 0
      if self.uispeed is None:
        self.uispeed = 0.
      if self.espaccel is None:
        self.espaccel = 0
      if self.shiftlvlposition is None:
        self.shiftlvlposition = 0
      if self.currentdrvmode is None:
        self.currentdrvmode = 0
      if self.sysstatus is None:
        self.sysstatus = 0
      if self.vehiclesysfault is None:
        self.vehiclesysfault = 0
      if self.batteryvoltage is None:
        self.batteryvoltage = 0
      if self.reserve1 is None:
        self.reserve1 = 0
      if self.reserve2 is None:
        self.reserve2 = 0.
      if self.reserve3 is None:
        self.reserve3 = 0
      if self.reserve4 is None:
        self.reserve4 = 0
      if self.isvalid is None:
        self.isvalid = False
    else:
      self.uisteerangle = 0
      self.realstrtorque = 0
      self.uispeed = 0.
      self.espaccel = 0
      self.shiftlvlposition = 0
      self.currentdrvmode = 0
      self.sysstatus = 0
      self.vehiclesysfault = 0
      self.batteryvoltage = 0
      self.reserve1 = 0
      self.reserve2 = 0.
      self.reserve3 = 0
      self.reserve4 = 0
      self.isvalid = False

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_2hfh4Bhbf3B().pack(_x.uisteerangle, _x.realstrtorque, _x.uispeed, _x.espaccel, _x.shiftlvlposition, _x.currentdrvmode, _x.sysstatus, _x.vehiclesysfault, _x.batteryvoltage, _x.reserve1, _x.reserve2, _x.reserve3, _x.reserve4, _x.isvalid))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      _x = self
      start = end
      end += 24
      (_x.uisteerangle, _x.realstrtorque, _x.uispeed, _x.espaccel, _x.shiftlvlposition, _x.currentdrvmode, _x.sysstatus, _x.vehiclesysfault, _x.batteryvoltage, _x.reserve1, _x.reserve2, _x.reserve3, _x.reserve4, _x.isvalid,) = _get_struct_2hfh4Bhbf3B().unpack(str[start:end])
      self.isvalid = bool(self.isvalid)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_2hfh4Bhbf3B().pack(_x.uisteerangle, _x.realstrtorque, _x.uispeed, _x.espaccel, _x.shiftlvlposition, _x.currentdrvmode, _x.sysstatus, _x.vehiclesysfault, _x.batteryvoltage, _x.reserve1, _x.reserve2, _x.reserve3, _x.reserve4, _x.isvalid))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      _x = self
      start = end
      end += 24
      (_x.uisteerangle, _x.realstrtorque, _x.uispeed, _x.espaccel, _x.shiftlvlposition, _x.currentdrvmode, _x.sysstatus, _x.vehiclesysfault, _x.batteryvoltage, _x.reserve1, _x.reserve2, _x.reserve3, _x.reserve4, _x.isvalid,) = _get_struct_2hfh4Bhbf3B().unpack(str[start:end])
      self.isvalid = bool(self.isvalid)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_2hfh4Bhbf3B = None
def _get_struct_2hfh4Bhbf3B():
    global _struct_2hfh4Bhbf3B
    if _struct_2hfh4Bhbf3B is None:
        _struct_2hfh4Bhbf3B = struct.Struct("<2hfh4Bhbf3B")
    return _struct_2hfh4Bhbf3B
