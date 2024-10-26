# generated from rosidl_generator_py/resource/_idl.py.em
# with input from location_msgs:msg/Mix.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Mix(type):
    """Metaclass of message 'Mix'."""

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
            module = import_type_support('location_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'location_msgs.msg.Mix')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mix
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mix
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mix
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mix
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mix

            from location_msgs.msg import Defects
            if Defects.__class__._TYPE_SUPPORT is None:
                Defects.__class__.__import_type_support__()

            from sensor_msgs.msg import NavSatFix
            if NavSatFix.__class__._TYPE_SUPPORT is None:
                NavSatFix.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Mix(metaclass=Metaclass_Mix):
    """Message class 'Mix'."""

    __slots__ = [
        '_id',
        '_gps_fix',
        '_yaw',
        '_defects',
    ]

    _fields_and_field_types = {
        'id': 'int32',
        'gps_fix': 'sensor_msgs/NavSatFix',
        'yaw': 'double',
        'defects': 'location_msgs/Defects',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'NavSatFix'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['location_msgs', 'msg'], 'Defects'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get('id', int())
        from sensor_msgs.msg import NavSatFix
        self.gps_fix = kwargs.get('gps_fix', NavSatFix())
        self.yaw = kwargs.get('yaw', float())
        from location_msgs.msg import Defects
        self.defects = kwargs.get('defects', Defects())

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
        if self.id != other.id:
            return False
        if self.gps_fix != other.gps_fix:
            return False
        if self.yaw != other.yaw:
            return False
        if self.defects != other.defects:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'id' field must be an integer in [-2147483648, 2147483647]"
        self._id = value

    @builtins.property
    def gps_fix(self):
        """Message field 'gps_fix'."""
        return self._gps_fix

    @gps_fix.setter
    def gps_fix(self, value):
        if __debug__:
            from sensor_msgs.msg import NavSatFix
            assert \
                isinstance(value, NavSatFix), \
                "The 'gps_fix' field must be a sub message of type 'NavSatFix'"
        self._gps_fix = value

    @builtins.property
    def yaw(self):
        """Message field 'yaw'."""
        return self._yaw

    @yaw.setter
    def yaw(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'yaw' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._yaw = value

    @builtins.property
    def defects(self):
        """Message field 'defects'."""
        return self._defects

    @defects.setter
    def defects(self, value):
        if __debug__:
            from location_msgs.msg import Defects
            assert \
                isinstance(value, Defects), \
                "The 'defects' field must be a sub message of type 'Defects'"
        self._defects = value
