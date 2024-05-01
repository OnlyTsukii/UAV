# generated from rosidl_generator_py/resource/_idl.py.em
# with input from nmea_msgs:msg/Gpgsa.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'sv_ids'
import array  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Gpgsa(type):
    """Metaclass of message 'Gpgsa'."""

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
                'nmea_msgs.msg.Gpgsa')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__gpgsa
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__gpgsa
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__gpgsa
            cls._TYPE_SUPPORT = module.type_support_msg__msg__gpgsa
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__gpgsa

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


class Gpgsa(metaclass=Metaclass_Gpgsa):
    """Message class 'Gpgsa'."""

    __slots__ = [
        '_header',
        '_message_id',
        '_auto_manual_mode',
        '_fix_mode',
        '_sv_ids',
        '_pdop',
        '_hdop',
        '_vdop',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'message_id': 'string',
        'auto_manual_mode': 'string',
        'fix_mode': 'uint8',
        'sv_ids': 'sequence<uint8>',
        'pdop': 'float',
        'hdop': 'float',
        'vdop': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
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
        self.auto_manual_mode = kwargs.get('auto_manual_mode', str())
        self.fix_mode = kwargs.get('fix_mode', int())
        self.sv_ids = array.array('B', kwargs.get('sv_ids', []))
        self.pdop = kwargs.get('pdop', float())
        self.hdop = kwargs.get('hdop', float())
        self.vdop = kwargs.get('vdop', float())

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
        if self.auto_manual_mode != other.auto_manual_mode:
            return False
        if self.fix_mode != other.fix_mode:
            return False
        if self.sv_ids != other.sv_ids:
            return False
        if self.pdop != other.pdop:
            return False
        if self.hdop != other.hdop:
            return False
        if self.vdop != other.vdop:
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
    def auto_manual_mode(self):
        """Message field 'auto_manual_mode'."""
        return self._auto_manual_mode

    @auto_manual_mode.setter
    def auto_manual_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'auto_manual_mode' field must be of type 'str'"
        self._auto_manual_mode = value

    @property
    def fix_mode(self):
        """Message field 'fix_mode'."""
        return self._fix_mode

    @fix_mode.setter
    def fix_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'fix_mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'fix_mode' field must be an unsigned integer in [0, 255]"
        self._fix_mode = value

    @property
    def sv_ids(self):
        """Message field 'sv_ids'."""
        return self._sv_ids

    @sv_ids.setter
    def sv_ids(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'sv_ids' array.array() must have the type code of 'B'"
            self._sv_ids = value
            return
        if __debug__:
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'sv_ids' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._sv_ids = array.array('B', value)

    @property
    def pdop(self):
        """Message field 'pdop'."""
        return self._pdop

    @pdop.setter
    def pdop(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pdop' field must be of type 'float'"
        self._pdop = value

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
    def vdop(self):
        """Message field 'vdop'."""
        return self._vdop

    @vdop.setter
    def vdop(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vdop' field must be of type 'float'"
        self._vdop = value
