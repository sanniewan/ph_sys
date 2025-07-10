# generated from rosidl_generator_py/resource/_idl.py.em
# with input from interfaces:msg/LightStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LightStatus(type):
    """Metaclass of message 'LightStatus'."""

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
                'interfaces.msg.LightStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__light_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__light_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__light_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__light_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__light_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LightStatus(metaclass=Metaclass_LightStatus):
    """Message class 'LightStatus'."""

    __slots__ = [
        '_growlight_state',
        '_growlight_level',
        '_tasklight_state',
    ]

    _fields_and_field_types = {
        'growlight_state': 'boolean',
        'growlight_level': 'int8',
        'tasklight_state': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.growlight_state = kwargs.get('growlight_state', bool())
        self.growlight_level = kwargs.get('growlight_level', int())
        self.tasklight_state = kwargs.get('tasklight_state', bool())

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
        if self.growlight_state != other.growlight_state:
            return False
        if self.growlight_level != other.growlight_level:
            return False
        if self.tasklight_state != other.tasklight_state:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def growlight_state(self):
        """Message field 'growlight_state'."""
        return self._growlight_state

    @growlight_state.setter
    def growlight_state(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'growlight_state' field must be of type 'bool'"
        self._growlight_state = value

    @builtins.property
    def growlight_level(self):
        """Message field 'growlight_level'."""
        return self._growlight_level

    @growlight_level.setter
    def growlight_level(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'growlight_level' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'growlight_level' field must be an integer in [-128, 127]"
        self._growlight_level = value

    @builtins.property
    def tasklight_state(self):
        """Message field 'tasklight_state'."""
        return self._tasklight_state

    @tasklight_state.setter
    def tasklight_state(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'tasklight_state' field must be of type 'bool'"
        self._tasklight_state = value
