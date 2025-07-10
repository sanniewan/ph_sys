# generated from rosidl_generator_py/resource/_idl.py.em
# with input from interfaces:msg/VatStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VatStatus(type):
    """Metaclass of message 'VatStatus'."""

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
            module = import_type_support('interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interfaces.msg.VatStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vat_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vat_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vat_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vat_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vat_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class VatStatus(metaclass=Metaclass_VatStatus):
    """Message class 'VatStatus'."""

    __slots__ = [
        '_level_1',
        '_level_2',
        '_level_3',
        '_level_4',
    ]

    _fields_and_field_types = {
        'level_1': 'int8',
        'level_2': 'int8',
        'level_3': 'int8',
        'level_4': 'int8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.level_1 = kwargs.get('level_1', int())
        self.level_2 = kwargs.get('level_2', int())
        self.level_3 = kwargs.get('level_3', int())
        self.level_4 = kwargs.get('level_4', int())

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
        if self.level_1 != other.level_1:
            return False
        if self.level_2 != other.level_2:
            return False
        if self.level_3 != other.level_3:
            return False
        if self.level_4 != other.level_4:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def level_1(self):
        """Message field 'level_1'."""
        return self._level_1

    @level_1.setter
    def level_1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'level_1' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'level_1' field must be an integer in [-128, 127]"
        self._level_1 = value

    @builtins.property
    def level_2(self):
        """Message field 'level_2'."""
        return self._level_2

    @level_2.setter
    def level_2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'level_2' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'level_2' field must be an integer in [-128, 127]"
        self._level_2 = value

    @builtins.property
    def level_3(self):
        """Message field 'level_3'."""
        return self._level_3

    @level_3.setter
    def level_3(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'level_3' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'level_3' field must be an integer in [-128, 127]"
        self._level_3 = value

    @builtins.property
    def level_4(self):
        """Message field 'level_4'."""
        return self._level_4

    @level_4.setter
    def level_4(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'level_4' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'level_4' field must be an integer in [-128, 127]"
        self._level_4 = value
