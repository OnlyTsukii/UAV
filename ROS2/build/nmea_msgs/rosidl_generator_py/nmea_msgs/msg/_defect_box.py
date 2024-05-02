# generated from rosidl_generator_py/resource/_idl.py.em
# with input from nmea_msgs:msg/DefectBox.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DefectBox(type):
    """Metaclass of message 'DefectBox'."""

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
                'nmea_msgs.msg.DefectBox')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__defect_box
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__defect_box
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__defect_box
            cls._TYPE_SUPPORT = module.type_support_msg__msg__defect_box
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__defect_box

            from nmea_msgs.msg import PixelPoint
            if PixelPoint.__class__._TYPE_SUPPORT is None:
                PixelPoint.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DefectBox(metaclass=Metaclass_DefectBox):
    """Message class 'DefectBox'."""

    __slots__ = [
        '_center',
        '_top_left',
        '_top_right',
        '_bottom_left',
        '_bottom_right',
    ]

    _fields_and_field_types = {
        'center': 'nmea_msgs/PixelPoint',
        'top_left': 'nmea_msgs/PixelPoint',
        'top_right': 'nmea_msgs/PixelPoint',
        'bottom_left': 'nmea_msgs/PixelPoint',
        'bottom_right': 'nmea_msgs/PixelPoint',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['nmea_msgs', 'msg'], 'PixelPoint'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['nmea_msgs', 'msg'], 'PixelPoint'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['nmea_msgs', 'msg'], 'PixelPoint'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['nmea_msgs', 'msg'], 'PixelPoint'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['nmea_msgs', 'msg'], 'PixelPoint'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from nmea_msgs.msg import PixelPoint
        self.center = kwargs.get('center', PixelPoint())
        from nmea_msgs.msg import PixelPoint
        self.top_left = kwargs.get('top_left', PixelPoint())
        from nmea_msgs.msg import PixelPoint
        self.top_right = kwargs.get('top_right', PixelPoint())
        from nmea_msgs.msg import PixelPoint
        self.bottom_left = kwargs.get('bottom_left', PixelPoint())
        from nmea_msgs.msg import PixelPoint
        self.bottom_right = kwargs.get('bottom_right', PixelPoint())

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
        if self.center != other.center:
            return False
        if self.top_left != other.top_left:
            return False
        if self.top_right != other.top_right:
            return False
        if self.bottom_left != other.bottom_left:
            return False
        if self.bottom_right != other.bottom_right:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def center(self):
        """Message field 'center'."""
        return self._center

    @center.setter
    def center(self, value):
        if __debug__:
            from nmea_msgs.msg import PixelPoint
            assert \
                isinstance(value, PixelPoint), \
                "The 'center' field must be a sub message of type 'PixelPoint'"
        self._center = value

    @property
    def top_left(self):
        """Message field 'top_left'."""
        return self._top_left

    @top_left.setter
    def top_left(self, value):
        if __debug__:
            from nmea_msgs.msg import PixelPoint
            assert \
                isinstance(value, PixelPoint), \
                "The 'top_left' field must be a sub message of type 'PixelPoint'"
        self._top_left = value

    @property
    def top_right(self):
        """Message field 'top_right'."""
        return self._top_right

    @top_right.setter
    def top_right(self, value):
        if __debug__:
            from nmea_msgs.msg import PixelPoint
            assert \
                isinstance(value, PixelPoint), \
                "The 'top_right' field must be a sub message of type 'PixelPoint'"
        self._top_right = value

    @property
    def bottom_left(self):
        """Message field 'bottom_left'."""
        return self._bottom_left

    @bottom_left.setter
    def bottom_left(self, value):
        if __debug__:
            from nmea_msgs.msg import PixelPoint
            assert \
                isinstance(value, PixelPoint), \
                "The 'bottom_left' field must be a sub message of type 'PixelPoint'"
        self._bottom_left = value

    @property
    def bottom_right(self):
        """Message field 'bottom_right'."""
        return self._bottom_right

    @bottom_right.setter
    def bottom_right(self, value):
        if __debug__:
            from nmea_msgs.msg import PixelPoint
            assert \
                isinstance(value, PixelPoint), \
                "The 'bottom_right' field must be a sub message of type 'PixelPoint'"
        self._bottom_right = value
