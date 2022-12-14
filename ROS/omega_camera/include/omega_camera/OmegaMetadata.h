// Generated by gencpp from file omega_camera/OmegaMetadata.msg
// DO NOT EDIT!


#ifndef OMEGA_CAMERA_MESSAGE_OMEGAMETADATA_H
#define OMEGA_CAMERA_MESSAGE_OMEGAMETADATA_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace omega_camera
{
template <class ContainerAllocator>
struct OmegaMetadata_
{
  typedef OmegaMetadata_<ContainerAllocator> Type;

  OmegaMetadata_()
    : rightwidth(0)
    , rightheight(0)
    , rightwidthrectified(0)
    , rightheightrectified(0)
    , dispwidth(0)
    , dispheight(0)
    , focallength(0.0)
    , baseline(0.0)
    , rightopticalcenterx(0.0)
    , rightopticalcentery(0.0)
    , temperature(0)
    , fps(0)
    , maxexposuretime(0)
    , greylevelpercentage(0)
    , blockingreadtimeout(0)
    , modeofstreaming()
    , serialnumber()  {
    }
  OmegaMetadata_(const ContainerAllocator& _alloc)
    : rightwidth(0)
    , rightheight(0)
    , rightwidthrectified(0)
    , rightheightrectified(0)
    , dispwidth(0)
    , dispheight(0)
    , focallength(0.0)
    , baseline(0.0)
    , rightopticalcenterx(0.0)
    , rightopticalcentery(0.0)
    , temperature(0)
    , fps(0)
    , maxexposuretime(0)
    , greylevelpercentage(0)
    , blockingreadtimeout(0)
    , modeofstreaming(_alloc)
    , serialnumber(_alloc)  {
  (void)_alloc;
    }



   typedef int16_t _rightwidth_type;
  _rightwidth_type rightwidth;

   typedef int16_t _rightheight_type;
  _rightheight_type rightheight;

   typedef int16_t _rightwidthrectified_type;
  _rightwidthrectified_type rightwidthrectified;

   typedef int16_t _rightheightrectified_type;
  _rightheightrectified_type rightheightrectified;

   typedef int16_t _dispwidth_type;
  _dispwidth_type dispwidth;

   typedef int16_t _dispheight_type;
  _dispheight_type dispheight;

   typedef double _focallength_type;
  _focallength_type focallength;

   typedef double _baseline_type;
  _baseline_type baseline;

   typedef double _rightopticalcenterx_type;
  _rightopticalcenterx_type rightopticalcenterx;

   typedef double _rightopticalcentery_type;
  _rightopticalcentery_type rightopticalcentery;

   typedef int16_t _temperature_type;
  _temperature_type temperature;

   typedef int16_t _fps_type;
  _fps_type fps;

   typedef int16_t _maxexposuretime_type;
  _maxexposuretime_type maxexposuretime;

   typedef int16_t _greylevelpercentage_type;
  _greylevelpercentage_type greylevelpercentage;

   typedef int16_t _blockingreadtimeout_type;
  _blockingreadtimeout_type blockingreadtimeout;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _modeofstreaming_type;
  _modeofstreaming_type modeofstreaming;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _serialnumber_type;
  _serialnumber_type serialnumber;





  typedef boost::shared_ptr< ::omega_camera::OmegaMetadata_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::omega_camera::OmegaMetadata_<ContainerAllocator> const> ConstPtr;

}; // struct OmegaMetadata_

typedef ::omega_camera::OmegaMetadata_<std::allocator<void> > OmegaMetadata;

typedef boost::shared_ptr< ::omega_camera::OmegaMetadata > OmegaMetadataPtr;
typedef boost::shared_ptr< ::omega_camera::OmegaMetadata const> OmegaMetadataConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::omega_camera::OmegaMetadata_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::omega_camera::OmegaMetadata_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::omega_camera::OmegaMetadata_<ContainerAllocator1> & lhs, const ::omega_camera::OmegaMetadata_<ContainerAllocator2> & rhs)
{
  return lhs.rightwidth == rhs.rightwidth &&
    lhs.rightheight == rhs.rightheight &&
    lhs.rightwidthrectified == rhs.rightwidthrectified &&
    lhs.rightheightrectified == rhs.rightheightrectified &&
    lhs.dispwidth == rhs.dispwidth &&
    lhs.dispheight == rhs.dispheight &&
    lhs.focallength == rhs.focallength &&
    lhs.baseline == rhs.baseline &&
    lhs.rightopticalcenterx == rhs.rightopticalcenterx &&
    lhs.rightopticalcentery == rhs.rightopticalcentery &&
    lhs.temperature == rhs.temperature &&
    lhs.fps == rhs.fps &&
    lhs.maxexposuretime == rhs.maxexposuretime &&
    lhs.greylevelpercentage == rhs.greylevelpercentage &&
    lhs.blockingreadtimeout == rhs.blockingreadtimeout &&
    lhs.modeofstreaming == rhs.modeofstreaming &&
    lhs.serialnumber == rhs.serialnumber;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::omega_camera::OmegaMetadata_<ContainerAllocator1> & lhs, const ::omega_camera::OmegaMetadata_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace omega_camera

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::omega_camera::OmegaMetadata_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::omega_camera::OmegaMetadata_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::omega_camera::OmegaMetadata_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::omega_camera::OmegaMetadata_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::omega_camera::OmegaMetadata_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::omega_camera::OmegaMetadata_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::omega_camera::OmegaMetadata_<ContainerAllocator> >
{
  static const char* value()
  {
    return "21446cfad4da84aa726e37d442a702d4";
  }

  static const char* value(const ::omega_camera::OmegaMetadata_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x21446cfad4da84aaULL;
  static const uint64_t static_value2 = 0x726e37d442a702d4ULL;
};

template<class ContainerAllocator>
struct DataType< ::omega_camera::OmegaMetadata_<ContainerAllocator> >
{
  static const char* value()
  {
    return "omega_camera/OmegaMetadata";
  }

  static const char* value(const ::omega_camera::OmegaMetadata_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::omega_camera::OmegaMetadata_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int16 rightwidth\n"
"int16 rightheight\n"
"int16 rightwidthrectified\n"
"int16 rightheightrectified\n"
"int16 dispwidth\n"
"int16 dispheight\n"
"float64 focallength\n"
"float64 baseline\n"
"float64 rightopticalcenterx\n"
"float64 rightopticalcentery\n"
"int16 temperature\n"
"int16 fps\n"
"int16 maxexposuretime\n"
"int16 greylevelpercentage\n"
"int16 blockingreadtimeout\n"
"string modeofstreaming\n"
"string serialnumber\n"
;
  }

  static const char* value(const ::omega_camera::OmegaMetadata_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::omega_camera::OmegaMetadata_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.rightwidth);
      stream.next(m.rightheight);
      stream.next(m.rightwidthrectified);
      stream.next(m.rightheightrectified);
      stream.next(m.dispwidth);
      stream.next(m.dispheight);
      stream.next(m.focallength);
      stream.next(m.baseline);
      stream.next(m.rightopticalcenterx);
      stream.next(m.rightopticalcentery);
      stream.next(m.temperature);
      stream.next(m.fps);
      stream.next(m.maxexposuretime);
      stream.next(m.greylevelpercentage);
      stream.next(m.blockingreadtimeout);
      stream.next(m.modeofstreaming);
      stream.next(m.serialnumber);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct OmegaMetadata_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::omega_camera::OmegaMetadata_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::omega_camera::OmegaMetadata_<ContainerAllocator>& v)
  {
    s << indent << "rightwidth: ";
    Printer<int16_t>::stream(s, indent + "  ", v.rightwidth);
    s << indent << "rightheight: ";
    Printer<int16_t>::stream(s, indent + "  ", v.rightheight);
    s << indent << "rightwidthrectified: ";
    Printer<int16_t>::stream(s, indent + "  ", v.rightwidthrectified);
    s << indent << "rightheightrectified: ";
    Printer<int16_t>::stream(s, indent + "  ", v.rightheightrectified);
    s << indent << "dispwidth: ";
    Printer<int16_t>::stream(s, indent + "  ", v.dispwidth);
    s << indent << "dispheight: ";
    Printer<int16_t>::stream(s, indent + "  ", v.dispheight);
    s << indent << "focallength: ";
    Printer<double>::stream(s, indent + "  ", v.focallength);
    s << indent << "baseline: ";
    Printer<double>::stream(s, indent + "  ", v.baseline);
    s << indent << "rightopticalcenterx: ";
    Printer<double>::stream(s, indent + "  ", v.rightopticalcenterx);
    s << indent << "rightopticalcentery: ";
    Printer<double>::stream(s, indent + "  ", v.rightopticalcentery);
    s << indent << "temperature: ";
    Printer<int16_t>::stream(s, indent + "  ", v.temperature);
    s << indent << "fps: ";
    Printer<int16_t>::stream(s, indent + "  ", v.fps);
    s << indent << "maxexposuretime: ";
    Printer<int16_t>::stream(s, indent + "  ", v.maxexposuretime);
    s << indent << "greylevelpercentage: ";
    Printer<int16_t>::stream(s, indent + "  ", v.greylevelpercentage);
    s << indent << "blockingreadtimeout: ";
    Printer<int16_t>::stream(s, indent + "  ", v.blockingreadtimeout);
    s << indent << "modeofstreaming: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.modeofstreaming);
    s << indent << "serialnumber: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.serialnumber);
  }
};

} // namespace message_operations
} // namespace ros

#endif // OMEGA_CAMERA_MESSAGE_OMEGAMETADATA_H
