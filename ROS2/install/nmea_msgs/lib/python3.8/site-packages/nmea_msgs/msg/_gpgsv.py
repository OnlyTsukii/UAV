# generated from rosidl_generator_py/resource/_idl.py.em
# with input from nmea_msgs:msg/Gpgsv.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Gpgsv(type):
    """Metaclass of message 'Gpgsv'."""

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
                'nmea_msgs.msg.Gpgsv')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__gpgsv
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__gpgsv
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__gpgsv
            cls._TYPE_SUPPORT = module.type_support_msg__msg__gpgsv
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__gpgsv

            from nmea_msgs.msg import GpgsvSatellite
            if GpgsvSatellite.__class__._TYPE_SUPPORT is None:
                GpgsvSatellite.__class__.__import_type_support__()

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


class Gpgsv(metaclass=Metaclass_Gpgsv):
    """Message class 'Gpgsv'."""

    __slots__ = [
        '_header',
        '_message_id',
        '_n_msgs',
        '_msg_number',
        '_n_satellites',
        '_satellites',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'message_id': 'string',
        'n_msgs': 'uint8',
        'msg_number': 'uint8',
        'n_satellites': 'uint8',
        'satellites': 'sequence<nmea_msgs/GpgsvSatellite>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['nmea_msgs', 'msg'], 'GpgsvSatellite')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.message_id = kwargs.get('message_id', str())
        self.n_msgs = kwargs.get('n_msgs', int())
        self.msg_number = kwargs.get('msg_number', int())
        self.n_satellites = kwargs.get('n_satellites', int())
        self.satellites = kwargs.get('satellites', [])

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
        if self.n_msgs != other.n_msgs:
            return False
        if self.msg_number != other.msg_number:
            return False
        if self.n_satellites != other.n_satellites:
            return False
        if self.satellites != other.satellites:
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
    def n_msgs(self):
        """Message field 'n_msgs'."""
        return self._n_msgs

    @n_msgs.setter
    def n_msgs(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'n_msgs' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'n_msgs' field must be an unsigned integer in [0, 255]"
        self._n_msgs = value

    @property
    def msg_number(self):
        """Message field 'msg_number'."""
        return self._msg_number

    @msg_number.setter
    def msg_number(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'msg_number' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'msg_number' field must be an unsigned integer in [0, 255]"
        self._msg_number = value

    @property
    def n_satellites(self):
        """Message field 'n_satellites'."""
        return self._n_satellites

    @n_satellites.setter
    def n_satellites(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'n_satellites' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'n_satellites' field must be an unsigned integer in [0, 255]"
        self._n_satellites = value

    @property
    def satellites(self):
        """Message field 'satellites'."""
        return self._satellites

    @satellites.setter
    def satellites(self, value):
        if __debug__:
            from nmea_msgs.msg import GpgsvSatellite
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, GpgsvSatellite) for v in value) and
                 True), \
                "The 'satellites' field must be a set or sequence and each value of type 'GpgsvSatellite'"
        self._satellites = value
