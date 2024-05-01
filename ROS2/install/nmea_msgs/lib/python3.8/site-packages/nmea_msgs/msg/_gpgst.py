# generated from rosidl_generator_py/resource/_idl.py.em
# with input from nmea_msgs:msg/Gpgst.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Gpgst(type):
    """Metaclass of message 'Gpgst'."""

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
                'nmea_msgs.msg.Gpgst')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__gpgst
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__gpgst
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__gpgst
            cls._TYPE_SUPPORT = module.type_support_msg__msg__gpgst
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__gpgst

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


class Gpgst(metaclass=Metaclass_Gpgst):
    """Message class 'Gpgst'."""

    __slots__ = [
        '_header',
        '_message_id',
        '_utc_seconds',
        '_rms',
        '_semi_major_dev',
        '_semi_minor_dev',
        '_orientation',
        '_lat_dev',
        '_lon_dev',
        '_alt_dev',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'message_id': 'string',
        'utc_seconds': 'double',
        'rms': 'float',
        'semi_major_dev': 'float',
        'semi_minor_dev': 'float',
        'orientation': 'float',
        'lat_dev': 'float',
        'lon_dev': 'float',
        'alt_dev': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.message_id = kwargs.get('message_id', str())
        self.utc_seconds = kwargs.get('utc_seconds', float())
        self.rms = kwargs.get('rms', float())
        self.semi_major_dev = kwargs.get('semi_major_dev', float())
        self.semi_minor_dev = kwargs.get('semi_minor_dev', float())
        self.orientation = kwargs.get('orientation', float())
        self.lat_dev = kwargs.get('lat_dev', float())
        self.lon_dev = kwargs.get('lon_dev', float())
        self.alt_dev = kwargs.get('alt_dev', float())

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
        if self.rms != other.rms:
            return False
        if self.semi_major_dev != other.semi_major_dev:
            return False
        if self.semi_minor_dev != other.semi_minor_dev:
            return False
        if self.orientation != other.orientation:
            return False
        if self.lat_dev != other.lat_dev:
            return False
        if self.lon_dev != other.lon_dev:
            return False
        if self.alt_dev != other.alt_dev:
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
    def rms(self):
        """Message field 'rms'."""
        return self._rms

    @rms.setter
    def rms(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rms' field must be of type 'float'"
        self._rms = value

    @property
    def semi_major_dev(self):
        """Message field 'semi_major_dev'."""
        return self._semi_major_dev

    @semi_major_dev.setter
    def semi_major_dev(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'semi_major_dev' field must be of type 'float'"
        self._semi_major_dev = value

    @property
    def semi_minor_dev(self):
        """Message field 'semi_minor_dev'."""
        return self._semi_minor_dev

    @semi_minor_dev.setter
    def semi_minor_dev(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'semi_minor_dev' field must be of type 'float'"
        self._semi_minor_dev = value

    @property
    def orientation(self):
        """Message field 'orientation'."""
        return self._orientation

    @orientation.setter
    def orientation(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'orientation' field must be of type 'float'"
        self._orientation = value

    @property
    def lat_dev(self):
        """Message field 'lat_dev'."""
        return self._lat_dev

    @lat_dev.setter
    def lat_dev(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lat_dev' field must be of type 'float'"
        self._lat_dev = value

    @property
    def lon_dev(self):
        """Message field 'lon_dev'."""
        return self._lon_dev

    @lon_dev.setter
    def lon_dev(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lon_dev' field must be of type 'float'"
        self._lon_dev = value

    @property
    def alt_dev(self):
        """Message field 'alt_dev'."""
        return self._alt_dev

    @alt_dev.setter
    def alt_dev(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'alt_dev' field must be of type 'float'"
        self._alt_dev = value
