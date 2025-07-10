# generated from rosidl_generator_py/resource/_idl.py.em
# with input from interfaces:srv/IrrigationService.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_IrrigationService_Request(type):
    """Metaclass of message 'IrrigationService_Request'."""

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
                'interfaces.srv.IrrigationService_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__irrigation_service__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__irrigation_service__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__irrigation_service__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__irrigation_service__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__irrigation_service__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class IrrigationService_Request(metaclass=Metaclass_IrrigationService_Request):
    """Message class 'IrrigationService_Request'."""

    __slots__ = [
        '_instruction',
        '_valve',
    ]

    _fields_and_field_types = {
        'instruction': 'string',
        'valve': 'int8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.instruction = kwargs.get('instruction', str())
        self.valve = kwargs.get('valve', int())

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
        if self.valve != other.valve:
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
    def valve(self):
        """Message field 'valve'."""
        return self._valve

    @valve.setter
    def valve(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'valve' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'valve' field must be an integer in [-128, 127]"
        self._valve = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_IrrigationService_Response(type):
    """Metaclass of message 'IrrigationService_Response'."""

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
                'interfaces.srv.IrrigationService_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__irrigation_service__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__irrigation_service__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__irrigation_service__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__irrigation_service__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__irrigation_service__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class IrrigationService_Response(metaclass=Metaclass_IrrigationService_Response):
    """Message class 'IrrigationService_Response'."""

    __slots__ = [
        '_err',
        '_msg',
        '_state',
    ]

    _fields_and_field_types = {
        'err': 'boolean',
        'msg': 'string',
        'state': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.err = kwargs.get('err', bool())
        self.msg = kwargs.get('msg', str())
        self.state = kwargs.get('state', bool())

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
        if self.state != other.state:
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
    def state(self):
        """Message field 'state'."""
        return self._state

    @state.setter
    def state(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'state' field must be of type 'bool'"
        self._state = value


class Metaclass_IrrigationService(type):
    """Metaclass of service 'IrrigationService'."""

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
                'interfaces.srv.IrrigationService')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__irrigation_service

            from interfaces.srv import _irrigation_service
            if _irrigation_service.Metaclass_IrrigationService_Request._TYPE_SUPPORT is None:
                _irrigation_service.Metaclass_IrrigationService_Request.__import_type_support__()
            if _irrigation_service.Metaclass_IrrigationService_Response._TYPE_SUPPORT is None:
                _irrigation_service.Metaclass_IrrigationService_Response.__import_type_support__()


class IrrigationService(metaclass=Metaclass_IrrigationService):
    from interfaces.srv._irrigation_service import IrrigationService_Request as Request
    from interfaces.srv._irrigation_service import IrrigationService_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
