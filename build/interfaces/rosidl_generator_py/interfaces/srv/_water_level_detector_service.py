# generated from rosidl_generator_py/resource/_idl.py.em
# with input from interfaces:srv/WaterLevelDetectorService.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_WaterLevelDetectorService_Request(type):
    """Metaclass of message 'WaterLevelDetectorService_Request'."""

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
                'interfaces.srv.WaterLevelDetectorService_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__water_level_detector_service__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__water_level_detector_service__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__water_level_detector_service__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__water_level_detector_service__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__water_level_detector_service__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class WaterLevelDetectorService_Request(metaclass=Metaclass_WaterLevelDetectorService_Request):
    """Message class 'WaterLevelDetectorService_Request'."""

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

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
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


# Import statements for member types

import builtins  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_WaterLevelDetectorService_Response(type):
    """Metaclass of message 'WaterLevelDetectorService_Response'."""

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
                'interfaces.srv.WaterLevelDetectorService_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__water_level_detector_service__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__water_level_detector_service__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__water_level_detector_service__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__water_level_detector_service__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__water_level_detector_service__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class WaterLevelDetectorService_Response(metaclass=Metaclass_WaterLevelDetectorService_Response):
    """Message class 'WaterLevelDetectorService_Response'."""

    __slots__ = [
        '_err',
        '_msg',
        '_critical',
    ]

    _fields_and_field_types = {
        'err': 'boolean',
        'msg': 'string',
        'critical': 'boolean',
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
        self.critical = kwargs.get('critical', bool())

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
        if self.critical != other.critical:
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
    def critical(self):
        """Message field 'critical'."""
        return self._critical

    @critical.setter
    def critical(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'critical' field must be of type 'bool'"
        self._critical = value


class Metaclass_WaterLevelDetectorService(type):
    """Metaclass of service 'WaterLevelDetectorService'."""

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
                'interfaces.srv.WaterLevelDetectorService')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__water_level_detector_service

            from interfaces.srv import _water_level_detector_service
            if _water_level_detector_service.Metaclass_WaterLevelDetectorService_Request._TYPE_SUPPORT is None:
                _water_level_detector_service.Metaclass_WaterLevelDetectorService_Request.__import_type_support__()
            if _water_level_detector_service.Metaclass_WaterLevelDetectorService_Response._TYPE_SUPPORT is None:
                _water_level_detector_service.Metaclass_WaterLevelDetectorService_Response.__import_type_support__()


class WaterLevelDetectorService(metaclass=Metaclass_WaterLevelDetectorService):
    from interfaces.srv._water_level_detector_service import WaterLevelDetectorService_Request as Request
    from interfaces.srv._water_level_detector_service import WaterLevelDetectorService_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
