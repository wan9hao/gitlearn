// Generated by gencpp from file ivactuator/ivactuator.msg
// DO NOT EDIT!


#ifndef IVACTUATOR_MESSAGE_IVACTUATOR_H
#define IVACTUATOR_MESSAGE_IVACTUATOR_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ivactuator
{
template <class ContainerAllocator>
struct ivactuator_
{
  typedef ivactuator_<ContainerAllocator> Type;

  ivactuator_()
    : uisteerangle(0)
    , realstrtorque(0)
    , uispeed(0.0)
    , espaccel(0)
    , shiftlvlposition(0)
    , currentdrvmode(0)
    , sysstatus(0)
    , vehiclesysfault(0)
    , batteryvoltage(0)
    , reserve1(0)
    , reserve2(0.0)
    , reserve3(0)
    , reserve4(0)
    , isvalid(false)  {
    }
  ivactuator_(const ContainerAllocator& _alloc)
    : uisteerangle(0)
    , realstrtorque(0)
    , uispeed(0.0)
    , espaccel(0)
    , shiftlvlposition(0)
    , currentdrvmode(0)
    , sysstatus(0)
    , vehiclesysfault(0)
    , batteryvoltage(0)
    , reserve1(0)
    , reserve2(0.0)
    , reserve3(0)
    , reserve4(0)
    , isvalid(false)  {
  (void)_alloc;
    }



   typedef int16_t _uisteerangle_type;
  _uisteerangle_type uisteerangle;

   typedef int16_t _realstrtorque_type;
  _realstrtorque_type realstrtorque;

   typedef float _uispeed_type;
  _uispeed_type uispeed;

   typedef int16_t _espaccel_type;
  _espaccel_type espaccel;

   typedef uint8_t _shiftlvlposition_type;
  _shiftlvlposition_type shiftlvlposition;

   typedef uint8_t _currentdrvmode_type;
  _currentdrvmode_type currentdrvmode;

   typedef uint8_t _sysstatus_type;
  _sysstatus_type sysstatus;

   typedef uint8_t _vehiclesysfault_type;
  _vehiclesysfault_type vehiclesysfault;

   typedef int16_t _batteryvoltage_type;
  _batteryvoltage_type batteryvoltage;

   typedef int8_t _reserve1_type;
  _reserve1_type reserve1;

   typedef float _reserve2_type;
  _reserve2_type reserve2;

   typedef uint8_t _reserve3_type;
  _reserve3_type reserve3;

   typedef uint8_t _reserve4_type;
  _reserve4_type reserve4;

   typedef uint8_t _isvalid_type;
  _isvalid_type isvalid;





  typedef boost::shared_ptr< ::ivactuator::ivactuator_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ivactuator::ivactuator_<ContainerAllocator> const> ConstPtr;

}; // struct ivactuator_

typedef ::ivactuator::ivactuator_<std::allocator<void> > ivactuator;

typedef boost::shared_ptr< ::ivactuator::ivactuator > ivactuatorPtr;
typedef boost::shared_ptr< ::ivactuator::ivactuator const> ivactuatorConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ivactuator::ivactuator_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ivactuator::ivactuator_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace ivactuator

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'ivactuator': ['/home/wong/catkin_wh/src/ivactuator/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::ivactuator::ivactuator_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ivactuator::ivactuator_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ivactuator::ivactuator_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ivactuator::ivactuator_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ivactuator::ivactuator_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ivactuator::ivactuator_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ivactuator::ivactuator_<ContainerAllocator> >
{
  static const char* value()
  {
    return "597be65a7f609d9cfeaade5944609f6b";
  }

  static const char* value(const ::ivactuator::ivactuator_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x597be65a7f609d9cULL;
  static const uint64_t static_value2 = 0xfeaade5944609f6bULL;
};

template<class ContainerAllocator>
struct DataType< ::ivactuator::ivactuator_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ivactuator/ivactuator";
  }

  static const char* value(const ::ivactuator::ivactuator_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ivactuator::ivactuator_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int16 uisteerangle\n\
int16 realstrtorque\n\
float32 uispeed\n\
int16 espaccel\n\
uint8 shiftlvlposition\n\
uint8 currentdrvmode\n\
uint8 sysstatus\n\
uint8 vehiclesysfault\n\
int16 batteryvoltage\n\
int8  reserve1\n\
float32 reserve2\n\
uint8  reserve3\n\
uint8  reserve4\n\
bool isvalid\n\
\n\
";
  }

  static const char* value(const ::ivactuator::ivactuator_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ivactuator::ivactuator_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.uisteerangle);
      stream.next(m.realstrtorque);
      stream.next(m.uispeed);
      stream.next(m.espaccel);
      stream.next(m.shiftlvlposition);
      stream.next(m.currentdrvmode);
      stream.next(m.sysstatus);
      stream.next(m.vehiclesysfault);
      stream.next(m.batteryvoltage);
      stream.next(m.reserve1);
      stream.next(m.reserve2);
      stream.next(m.reserve3);
      stream.next(m.reserve4);
      stream.next(m.isvalid);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ivactuator_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ivactuator::ivactuator_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ivactuator::ivactuator_<ContainerAllocator>& v)
  {
    s << indent << "uisteerangle: ";
    Printer<int16_t>::stream(s, indent + "  ", v.uisteerangle);
    s << indent << "realstrtorque: ";
    Printer<int16_t>::stream(s, indent + "  ", v.realstrtorque);
    s << indent << "uispeed: ";
    Printer<float>::stream(s, indent + "  ", v.uispeed);
    s << indent << "espaccel: ";
    Printer<int16_t>::stream(s, indent + "  ", v.espaccel);
    s << indent << "shiftlvlposition: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.shiftlvlposition);
    s << indent << "currentdrvmode: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.currentdrvmode);
    s << indent << "sysstatus: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.sysstatus);
    s << indent << "vehiclesysfault: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.vehiclesysfault);
    s << indent << "batteryvoltage: ";
    Printer<int16_t>::stream(s, indent + "  ", v.batteryvoltage);
    s << indent << "reserve1: ";
    Printer<int8_t>::stream(s, indent + "  ", v.reserve1);
    s << indent << "reserve2: ";
    Printer<float>::stream(s, indent + "  ", v.reserve2);
    s << indent << "reserve3: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.reserve3);
    s << indent << "reserve4: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.reserve4);
    s << indent << "isvalid: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.isvalid);
  }
};

} // namespace message_operations
} // namespace ros

#endif // IVACTUATOR_MESSAGE_IVACTUATOR_H
