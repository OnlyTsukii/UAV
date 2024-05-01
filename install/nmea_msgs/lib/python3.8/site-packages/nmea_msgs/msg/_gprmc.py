# generated from rosidl_generator_py/resource/_idl.py.em
# with input from nmea_msgs:msg/Gprmc.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Gprmc(type):
    """Metaclass of message 'Gprmc'."""

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
                'nmea_msgs.msg.Gprmc')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__gprmc
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__gprmc
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__gprmc
            cls._TYPE_SUPPORT = module.type_support_msg__msg__gprmc
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__gprmc

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


class Gprmc(metaclass=Metaclass_Gprmc):
    """Message class 'Gprmc'."""

    __slots__ = [
        '_header',
        '_message_id',
        '_utc_seconds',
        '_position_status',
        '_lat',
        '_lon',
        '_lat_dir',
        '_lon_dir',
        '_speed',
        '_track',
        '_date',
        '_mag_var',
        '_mag_var_direction',
        '_mode_indicator',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'message_id': 'string',
        'utc_seconds': 'double',
        'position_status': 'string',
        'lat': 'double',
        'lon': 'double',
        'lat_dir': 'string',
        'lon_dir': 'string',
        'speed': 'float',
        'track': 'float',
        'date': 'string',
        'mag_var': 'float',
        'mag_var_direction': 'string',
        'mode_indicator': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
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
        self.position_status = kwargs.get('position_status', str())
        self.lat = kwargs.get('lat', float())
        self.lon = kwargs.get('lon', float())
        self.lat_dir = kwargs.get('lat_dir', str())
        self.lon_dir = kwargs.get('lon_dir', str())
        self.speed = kwargs.get('speed', float())
        self.track = kwargs.get('track', float())
        self.date = kwargs.get('date', str())
        self.mag_var = kwargs.get('mag_var', float())
        self.mag_var_direction = kwargs.get('mag_var_direction', str())
        self.mode_indicator = kwargs.get('mode_indicator', str())

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
        if self.position_status != other.position_status:
            return False
        if self.lat != other.lat:
            return False
        if self.lon != other.lon:
            return False
        if self.lat_dir != other.lat_dir:
            return False
        if self.lon_dir != other.lon_dir:
            return False
        if self.speed != other.speed:
            return False
        if self.track != other.track:
            return False
        if self.date != other.date:
            return False
        if self.mag_var != other.mag_var:
            return False
        if self.mag_var_direction != other.mag_var_direction:
            return False
        if self.mode_indicator != other.mode_indicator:
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
    def position_status(self):
        """Message field 'position_status'."""
        return self._position_status

    @position_status.setter
    def position_status(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'position_status' field must be of type 'str'"
        self._position_status = value

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
    def speed(self):
        """Message field 'speed'."""
        return self._speed

    @speed.setter
    def speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed' field must be of type 'float'"
        self._speed = value

    @property
    def track(self):
        """Message field 'track'."""
        return self._track

    @track.setter
    def track(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'track' field must be of type 'float'"
        self._track = value

    @property
    def date(self):
        """Message field 'date'."""
        return self._date

    @date.setter
    def date(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'date' field must be of type 'str'"
        self._date = value

    @property
    def mag_var(self):
        """Message field 'mag_var'."""
        return self._mag_var

    @mag_var.setter
    def mag_var(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'mag_var' field must be of type 'float'"
        self._mag_var = value

    @property
    def mag_var_direction(self):
        """Message field 'mag_var_direction'."""
        return self._mag_var_direction

    @mag_var_direction.setter
    def mag_var_direction(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'mag_var_direction' field must be of type 'str'"
        self._mag_var_direction = value

    @property
    def mode_indicator(self):
        """Message field 'mode_indicator'."""
        return self._mode_indicator

    @mode_indicator.setter
    def mode_indicator(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'mode_indicator' field must be of type 'str'"
        self._mode_indicator = value
