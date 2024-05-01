# generated from rosidl_generator_py/resource/_idl.py.em
# with input from nmea_msgs:msg/Gpgga.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Gpgga(type):
    """Metaclass of message 'Gpgga'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('nmea_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'nmea_msgs.msg.Gpgga')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__gpgga
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__gpgga
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__gpgga
            cls._TYPE_SUPPORT = module.type_support_msg__msg__gpgga
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__gpgga

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Gpgga(metaclass=Metaclass_Gpgga):
    """Message class 'Gpgga'."""

    __slots__ = [
        '_header',
        '_message_id',
        '_utc_seconds',
        '_lat',
        '_lon',
        '_lat_dir',
        '_lon_dir',
        '_gps_qual',
        '_num_sats',
        '_hdop',
        '_alt',
        '_altitude_units',
        '_undulation',
        '_undulation_units',
        '_diff_age',
        '_station_id',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'message_id': 'string',
        'utc_seconds': 'double',
        'lat': 'double',
        'lon': 'double',
        'lat_dir': 'string',
        'lon_dir': 'string',
        'gps_qual': 'uint32',
        'num_sats': 'uint32',
        'hdop': 'float',
        'alt': 'float',
        'altitude_units': 'string',
        'undulation': 'float',
        'undulation_units': 'string',
        'diff_age': 'uint32',
        'station_id': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.message_id = kwargs.get('message_id', str())
        self.utc_seconds = kwargs.get('utc_seconds', float())
        self.lat = kwargs.get('lat', float())
        self.lon = kwargs.get('lon', float())
        self.lat_dir = kwargs.get('lat_dir', str())
        self.lon_dir = kwargs.get('lon_dir', str())
        self.gps_qual = kwargs.get('gps_qual', int())
        self.num_sats = kwargs.get('num_sats', int())
        self.hdop = kwargs.get('hdop', float())
        self.alt = kwargs.get('alt', float())
        self.altitude_units = kwargs.get('altitude_units', str())
        self.undulation = kwargs.get('undulation', float())
        self.undulation_units = kwargs.get('undulation_units', str())
        self.diff_age = kwargs.get('diff_age', int())
        self.station_id = kwargs.get('station_id', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.message_id != other.message_id:
            return False
        if self.utc_seconds != other.utc_seconds:
            return False
        if self.lat != other.lat:
            return False
        if self.lon != other.lon:
            return False
        if self.lat_dir != other.lat_dir:
            return False
        if self.lon_dir != other.lon_dir:
            return False
        if self.gps_qual != other.gps_qual:
            return False
        if self.num_sats != other.num_sats:
            return False
        if self.hdop != other.hdop:
            return False
        if self.alt != other.alt:
            return False
        if self.altitude_units != other.altitude_units:
            return False
        if self.undulation != other.undulation:
            return False
        if self.undulation_units != other.undulation_units:
            return False
        if self.diff_age != other.diff_age:
            return False
        if self.station_id != other.station_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @property
    def message_id(self):
        """Message field 'message_id'."""
        return self._message_id

    @message_id.setter
    def message_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message_id' field must be of type 'str'"
        self._message_id = value

    @property
    def utc_seconds(self):
        """Message field 'utc_seconds'."""
        return self._utc_seconds

    @utc_seconds.setter
    def utc_seconds(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'utc_seconds' field must be of type 'float'"
        self._utc_seconds = value

    @property
    def lat(self):
        """Message field 'lat'."""
        return self._lat

    @lat.setter
    def lat(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lat' field must be of type 'float'"
        self._lat = value

    @property
    def lon(self):
        """Message field 'lon'."""
        return self._lon

    @lon.setter
    def lon(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lon' field must be of type 'float'"
        self._lon = value

    @property
    def lat_dir(self):
        """Message field 'lat_dir'."""
        return self._lat_dir

    @lat_dir.setter
    def lat_dir(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'lat_dir' field must be of type 'str'"
        self._lat_dir = value

    @property
    def lon_dir(self):
        """Message field 'lon_dir'."""
        return self._lon_dir

    @lon_dir.setter
    def lon_dir(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'lon_dir' field must be of type 'str'"
        self._lon_dir = value

    @property
    def gps_qual(self):
        """Message field 'gps_qual'."""
        return self._gps_qual

    @gps_qual.setter
    def gps_qual(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gps_qual' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'gps_qual' field must be an unsigned integer in [0, 4294967295]"
        self._gps_qual = value

    @property
    def num_sats(self):
        """Message field 'num_sats'."""
        return self._num_sats

    @num_sats.setter
    def num_sats(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'num_sats' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'num_sats' field must be an unsigned integer in [0, 4294967295]"
        self._num_sats = value

    @property
    def hdop(self):
        """Message field 'hdop'."""
        return self._hdop

    @hdop.setter
    def hdop(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'hdop' field must be of type 'float'"
        self._hdop = value

    @property
    def alt(self):
        """Message field 'alt'."""
        return self._alt

    @alt.setter
    def alt(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'alt' field must be of type 'float'"
        self._alt = value

    @property
    def altitude_units(self):
        """Message field 'altitude_units'."""
        return self._altitude_units

    @altitude_units.setter
    def altitude_units(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'altitude_units' field must be of type 'str'"
        self._altitude_units = value

    @property
    def undulation(self):
        """Message field 'undulation'."""
        return self._undulation

    @undulation.setter
    def undulation(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'undulation' field must be of type 'float'"
        self._undulation = value

    @property
    def undulation_units(self):
        """Message field 'undulation_units'."""
        return self._undulation_units

    @undulation_units.setter
    def undulation_units(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'undulation_units' field must be of type 'str'"
        self._undulation_units = value

    @property
    def diff_age(self):
        """Message field 'diff_age'."""
        return self._diff_age

    @diff_age.setter
    def diff_age(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'diff_age' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'diff_age' field must be an unsigned integer in [0, 4294967295]"
        self._diff_age = value

    @property
    def station_id(self):
        """Message field 'station_id'."""
        return self._station_id

    @station_id.setter
    def station_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'station_id' field must be of type 'str'"
        self._station_id = value
