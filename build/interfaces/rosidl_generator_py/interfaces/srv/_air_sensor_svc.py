# generated from rosidl_generator_py/resource/_idl.py.em
# with input from interfaces:srv/AirSensorSvc.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AirSensorSvc_Request(type):
    """Metaclass of message 'AirSensorSvc_Request'."""

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
                'interfaces.srv.AirSensorSvc_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__air_sensor_svc__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__air_sensor_svc__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__air_sensor_svc__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__air_sensor_svc__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__air_sensor_svc__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AirSensorSvc_Request(metaclass=Metaclass_AirSensorSvc_Request):
    """Message class 'AirSensorSvc_Request'."""

    __slots__ = [
        '_threshold_t',
    ]

    _fields_and_field_types = {
        'threshold_t': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.threshold_t = kwargs.get('threshold_t', float())

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
        if self.threshold_t != other.threshold_t:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def threshold_t(self):
        """Message field 'threshold_t'."""
        return self._threshold_t

    @threshold_t.setter
    def threshold_t(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'threshold_t' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'threshold_t' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._threshold_t = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_AirSensorSvc_Response(type):
    """Metaclass of message 'AirSensorSvc_Response'."""

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
                'interfaces.srv.AirSensorSvc_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__air_sensor_svc__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__air_sensor_svc__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__air_sensor_svc__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__air_sensor_svc__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__air_sensor_svc__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AirSensorSvc_Response(metaclass=Metaclass_AirSensorSvc_Response):
    """Message class 'AirSensorSvc_Response'."""

    __slots__ = [
        '_err',
        '_msg',
        '_t',
        '_rh',
        '_co2',
    ]

    _fields_and_field_types = {
        'err': 'boolean',
        'msg': 'string',
        't': 'float',
        'rh': 'int8',
        'co2': 'int16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.err = kwargs.get('err', bool())
        self.msg = kwargs.get('msg', str())
        self.t = kwargs.get('t', float())
        self.rh = kwargs.get('rh', int())
        self.co2 = kwargs.get('co2', int())

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
        if self.err != other.err:
            return False
        if self.msg != other.msg:
            return False
        if self.t != other.t:
            return False
        if self.rh != other.rh:
            return False
        if self.co2 != other.co2:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def err(self):
        """Message field 'err'."""
        return self._err

    @err.setter
    def err(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'err' field must be of type 'bool'"
        self._err = value

    @builtins.property
    def msg(self):
        """Message field 'msg'."""
        return self._msg

    @msg.setter
    def msg(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'msg' field must be of type 'str'"
        self._msg = value

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
    def rh(self):
        """Message field 'rh'."""
        return self._rh

    @rh.setter
    def rh(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rh' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'rh' field must be an integer in [-128, 127]"
        self._rh = value

    @builtins.property
    def co2(self):
        """Message field 'co2'."""
        return self._co2

    @co2.setter
    def co2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'co2' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'co2' field must be an integer in [-32768, 32767]"
        self._co2 = value


class Metaclass_AirSensorSvc(type):
    """Metaclass of service 'AirSensorSvc'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interfaces.srv.AirSensorSvc')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__air_sensor_svc

            from interfaces.srv import _air_sensor_svc
            if _air_sensor_svc.Metaclass_AirSensorSvc_Request._TYPE_SUPPORT is None:
                _air_sensor_svc.Metaclass_AirSensorSvc_Request.__import_type_support__()
            if _air_sensor_svc.Metaclass_AirSensorSvc_Response._TYPE_SUPPORT is None:
                _air_sensor_svc.Metaclass_AirSensorSvc_Response.__import_type_support__()


class AirSensorSvc(metaclass=Metaclass_AirSensorSvc):
    from interfaces.srv._air_sensor_svc import AirSensorSvc_Request as Request
    from interfaces.srv._air_sensor_svc import AirSensorSvc_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
