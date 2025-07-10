# generated from rosidl_generator_py/resource/_idl.py.em
# with input from interfaces:msg/TankInstruction.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TankInstruction(type):
    """Metaclass of message 'TankInstruction'."""

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
                'interfaces.msg.TankInstruction')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__tank_instruction
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__tank_instruction
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__tank_instruction
            cls._TYPE_SUPPORT = module.type_support_msg__msg__tank_instruction
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__tank_instruction

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TankInstruction(metaclass=Metaclass_TankInstruction):
    """Message class 'TankInstruction'."""

    __slots__ = [
        '_instruction',
        '_tank',
        '_vat',
        '_quantity',
        '_ph_target',
        '_ec_target',
    ]

    _fields_and_field_types = {
        'instruction': 'string',
        'tank': 'string',
        'vat': 'int8',
        'quantity': 'float',
        'ph_target': 'float',
        'ec_target': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.instruction = kwargs.get('instruction', str())
        self.tank = kwargs.get('tank', str())
        self.vat = kwargs.get('vat', int())
        self.quantity = kwargs.get('quantity', float())
        self.ph_target = kwargs.get('ph_target', float())
        self.ec_target = kwargs.get('ec_target', float())

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
        if self.instruction != other.instruction:
            return False
        if self.tank != other.tank:
            return False
        if self.vat != other.vat:
            return False
        if self.quantity != other.quantity:
            return False
        if self.ph_target != other.ph_target:
            return False
        if self.ec_target != other.ec_target:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def instruction(self):
        """Message field 'instruction'."""
        return self._instruction

    @instruction.setter
    def instruction(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'instruction' field must be of type 'str'"
        self._instruction = value

    @builtins.property
    def tank(self):
        """Message field 'tank'."""
        return self._tank

    @tank.setter
    def tank(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'tank' field must be of type 'str'"
        self._tank = value

    @builtins.property
    def vat(self):
        """Message field 'vat'."""
        return self._vat

    @vat.setter
    def vat(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vat' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'vat' field must be an integer in [-128, 127]"
        self._vat = value

    @builtins.property
    def quantity(self):
        """Message field 'quantity'."""
        return self._quantity

    @quantity.setter
    def quantity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'quantity' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'quantity' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._quantity = value

    @builtins.property
    def ph_target(self):
        """Message field 'ph_target'."""
        return self._ph_target

    @ph_target.setter
    def ph_target(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ph_target' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ph_target' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ph_target = value

    @builtins.property
    def ec_target(self):
        """Message field 'ec_target'."""
        return self._ec_target

    @ec_target.setter
    def ec_target(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ec_target' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ec_target' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ec_target = value
