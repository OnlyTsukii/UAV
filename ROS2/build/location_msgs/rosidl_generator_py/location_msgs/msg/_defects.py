# generated from rosidl_generator_py/resource/_idl.py.em
# with input from location_msgs:msg/Defects.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Defects(type):
    """Metaclass of message 'Defects'."""

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
                'location_msgs.msg.Defects')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__defects
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__defects
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__defects
            cls._TYPE_SUPPORT = module.type_support_msg__msg__defects
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__defects

            from location_msgs.msg import DefectBox
            if DefectBox.__class__._TYPE_SUPPORT is None:
                DefectBox.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Defects(metaclass=Metaclass_Defects):
    """Message class 'Defects'."""

    __slots__ = [
        '_img_width',
        '_img_height',
        '_defects',
    ]

    _fields_and_field_types = {
        'img_width': 'float',
        'img_height': 'float',
        'defects': 'sequence<location_msgs/DefectBox>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['location_msgs', 'msg'], 'DefectBox')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.img_width = kwargs.get('img_width', float())
        self.img_height = kwargs.get('img_height', float())
        self.defects = kwargs.get('defects', [])

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
        if self.img_width != other.img_width:
            return False
        if self.img_height != other.img_height:
            return False
        if self.defects != other.defects:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def img_width(self):
        """Message field 'img_width'."""
        return self._img_width

    @img_width.setter
    def img_width(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'img_width' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'img_width' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._img_width = value

    @builtins.property
    def img_height(self):
        """Message field 'img_height'."""
        return self._img_height

    @img_height.setter
    def img_height(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'img_height' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'img_height' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._img_height = value

    @builtins.property
    def defects(self):
        """Message field 'defects'."""
        return self._defects

    @defects.setter
    def defects(self, value):
        if __debug__:
            from location_msgs.msg import DefectBox
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
                 all(isinstance(v, DefectBox) for v in value) and
                 True), \
                "The 'defects' field must be a set or sequence and each value of type 'DefectBox'"
        self._defects = value
