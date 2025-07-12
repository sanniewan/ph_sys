# generated from rosidl_generator_py/resource/_idl.py.em
# with input from interfaces:srv/PhControllerService.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PhControllerService_Request(type):
    """Metaclass of message 'PhControllerService_Request'."""

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
                'interfaces.srv.PhControllerService_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__ph_controller_service__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__ph_controller_service__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__ph_controller_service__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__ph_controller_service__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__ph_controller_service__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PhControllerService_Request(metaclass=Metaclass_PhControllerService_Request):
    """Message class 'PhControllerService_Request'."""

    __slots__ = [
        '_ph',
    ]

    _fields_and_field_types = {
        'ph': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.ph = kwargs.get('ph', float())

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
        if self.ph != other.ph:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_PhControllerService_Response(type):
    """Metaclass of message 'PhControllerService_Response'."""

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
                'interfaces.srv.PhControllerService_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__ph_controller_service__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__ph_controller_service__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__ph_controller_service__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__ph_controller_service__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__ph_controller_service__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PhControllerService_Response(metaclass=Metaclass_PhControllerService_Response):
    """Message class 'PhControllerService_Response'."""

    __slots__ = [
        '_warning',
        '_msg',
        '_volume',
    ]

    _fields_and_field_types = {
        'warning': 'boolean',
        'msg': 'string',
        'volume': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.warning = kwargs.get('warning', bool())
        self.msg = kwargs.get('msg', str())
        self.volume = kwargs.get('volume', float())

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
        if self.warning != other.warning:
            return False
        if self.msg != other.msg:
            return False
        if self.volume != other.volume:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def warning(self):
        """Message field 'warning'."""
        return self._warning

    @warning.setter
    def warning(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'warning' field must be of type 'bool'"
        self._warning = value

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
    def volume(self):
        """Message field 'volume'."""
        return self._volume

    @volume.setter
    def volume(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'volume' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'volume' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._volume = value


class Metaclass_PhControllerService(type):
    """Metaclass of service 'PhControllerService'."""

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
                'interfaces.srv.PhControllerService')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__ph_controller_service

            from interfaces.srv import _ph_controller_service
            if _ph_controller_service.Metaclass_PhControllerService_Request._TYPE_SUPPORT is None:
                _ph_controller_service.Metaclass_PhControllerService_Request.__import_type_support__()
            if _ph_controller_service.Metaclass_PhControllerService_Response._TYPE_SUPPORT is None:
                _ph_controller_service.Metaclass_PhControllerService_Response.__import_type_support__()


class PhControllerService(metaclass=Metaclass_PhControllerService):
    from interfaces.srv._ph_controller_service import PhControllerService_Request as Request
    from interfaces.srv._ph_controller_service import PhControllerService_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
