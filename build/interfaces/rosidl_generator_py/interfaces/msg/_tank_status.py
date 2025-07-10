# generated from rosidl_generator_py/resource/_idl.py.em
# with input from interfaces:msg/TankStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TankStatus(type):
    """Metaclass of message 'TankStatus'."""

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
                'interfaces.msg.TankStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__tank_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__tank_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__tank_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__tank_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__tank_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TankStatus(metaclass=Metaclass_TankStatus):
    """Message class 'TankStatus'."""

    __slots__ = [
        '_tank',
        '_ph',
        '_ec',
        '_t',
        '_flow_volume',
        '_flow_rate',
        '_circuit_p',
        '_critical_low',
        '_critical_high',
        '_water_level',
        '_pump',
        '_recycling',
        '_intake',
        '_drain',
        '_aeration',
    ]

    _fields_and_field_types = {
        'tank': 'string',
        'ph': 'float',
        'ec': 'float',
        't': 'float',
        'flow_volume': 'float',
        'flow_rate': 'float',
        'circuit_p': 'float',
        'critical_low': 'boolean',
        'critical_high': 'boolean',
        'water_level': 'float',
        'pump': 'boolean',
        'recycling': 'boolean',
        'intake': 'boolean',
        'drain': 'boolean',
        'aeration': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.tank = kwargs.get('tank', str())
        self.ph = kwargs.get('ph', float())
        self.ec = kwargs.get('ec', float())
        self.t = kwargs.get('t', float())
        self.flow_volume = kwargs.get('flow_volume', float())
        self.flow_rate = kwargs.get('flow_rate', float())
        self.circuit_p = kwargs.get('circuit_p', float())
        self.critical_low = kwargs.get('critical_low', bool())
        self.critical_high = kwargs.get('critical_high', bool())
        self.water_level = kwargs.get('water_level', float())
        self.pump = kwargs.get('pump', bool())
        self.recycling = kwargs.get('recycling', bool())
        self.intake = kwargs.get('intake', bool())
        self.drain = kwargs.get('drain', bool())
        self.aeration = kwargs.get('aeration', bool())

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
        if self.tank != other.tank:
            return False
        if self.ph != other.ph:
            return False
        if self.ec != other.ec:
            return False
        if self.t != other.t:
            return False
        if self.flow_volume != other.flow_volume:
            return False
        if self.flow_rate != other.flow_rate:
            return False
        if self.circuit_p != other.circuit_p:
            return False
        if self.critical_low != other.critical_low:
            return False
        if self.critical_high != other.critical_high:
            return False
        if self.water_level != other.water_level:
            return False
        if self.pump != other.pump:
            return False
        if self.recycling != other.recycling:
            return False
        if self.intake != other.intake:
            return False
        if self.drain != other.drain:
            return False
        if self.aeration != other.aeration:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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
    def ph(self):
        """Message field 'ph'."""
        return self._ph

    @ph.setter
    def ph(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ph' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ph' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ph = value

    @builtins.property
    def ec(self):
        """Message field 'ec'."""
        return self._ec

    @ec.setter
    def ec(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ec' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ec' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ec = value

    @builtins.property
    def t(self):
        """Message field 't'."""
        return self._t

    @t.setter
    def t(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 't' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 't' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._t = value

    @builtins.property
    def flow_volume(self):
        """Message field 'flow_volume'."""
        return self._flow_volume

    @flow_volume.setter
    def flow_volume(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'flow_volume' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'flow_volume' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._flow_volume = value

    @builtins.property
    def flow_rate(self):
        """Message field 'flow_rate'."""
        return self._flow_rate

    @flow_rate.setter
    def flow_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'flow_rate' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'flow_rate' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._flow_rate = value

    @builtins.property
    def circuit_p(self):
        """Message field 'circuit_p'."""
        return self._circuit_p

    @circuit_p.setter
    def circuit_p(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'circuit_p' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'circuit_p' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._circuit_p = value

    @builtins.property
    def critical_low(self):
        """Message field 'critical_low'."""
        return self._critical_low

    @critical_low.setter
    def critical_low(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'critical_low' field must be of type 'bool'"
        self._critical_low = value

    @builtins.property
    def critical_high(self):
        """Message field 'critical_high'."""
        return self._critical_high

    @critical_high.setter
    def critical_high(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'critical_high' field must be of type 'bool'"
        self._critical_high = value

    @builtins.property
    def water_level(self):
        """Message field 'water_level'."""
        return self._water_level

    @water_level.setter
    def water_level(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'water_level' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'water_level' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._water_level = value

    @builtins.property
    def pump(self):
        """Message field 'pump'."""
        return self._pump

    @pump.setter
    def pump(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'pump' field must be of type 'bool'"
        self._pump = value

    @builtins.property
    def recycling(self):
        """Message field 'recycling'."""
        return self._recycling

    @recycling.setter
    def recycling(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'recycling' field must be of type 'bool'"
        self._recycling = value

    @builtins.property
    def intake(self):
        """Message field 'intake'."""
        return self._intake

    @intake.setter
    def intake(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'intake' field must be of type 'bool'"
        self._intake = value

    @builtins.property
    def drain(self):
        """Message field 'drain'."""
        return self._drain

    @drain.setter
    def drain(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'drain' field must be of type 'bool'"
        self._drain = value

    @builtins.property
    def aeration(self):
        """Message field 'aeration'."""
        return self._aeration

    @aeration.setter
    def aeration(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'aeration' field must be of type 'bool'"
        self._aeration = value
