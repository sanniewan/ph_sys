# generated from rosidl_generator_py/resource/_idl.py.em
# with input from interfaces:srv/WaterLevelDetectorSvc.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_WaterLevelDetectorSvc_Request(type):
    """Metaclass of message 'WaterLevelDetectorSvc_Request'."""

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
                'interfaces.srv.WaterLevelDetectorSvc_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__water_level_detector_svc__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__water_level_detector_svc__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__water_level_detector_svc__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__water_level_detector_svc__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__water_level_detector_svc__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class WaterLevelDetectorSvc_Request(metaclass=Metaclass_WaterLevelDetectorSvc_Request):
    """Message class 'WaterLevelDetectorSvc_Request'."""

    __slots__ = [
        '_threshold',
    ]

    _fields_and_field_types = {
        'threshold': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.threshold = kwargs.get('threshold', bool())

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
        if self.threshold != other.threshold:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def threshold(self):
        """Message field 'threshold'."""
        return self._threshold

    @threshold.setter
    def threshold(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'threshold' field must be of type 'bool'"
        self._threshold = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_WaterLevelDetectorSvc_Response(type):
    """Metaclass of message 'WaterLevelDetectorSvc_Response'."""

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
                'interfaces.srv.WaterLevelDetectorSvc_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__water_level_detector_svc__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__water_level_detector_svc__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__water_level_detector_svc__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__water_level_detector_svc__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__water_level_detector_svc__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class WaterLevelDetectorSvc_Response(metaclass=Metaclass_WaterLevelDetectorSvc_Response):
    """Message class 'WaterLevelDetectorSvc_Response'."""

    __slots__ = [
        '_err',
        '_msg',
        '_result',
    ]

    _fields_and_field_types = {
        'err': 'boolean',
        'msg': 'string',
        'result': 'boolean',
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
        self.result = kwargs.get('result', bool())

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
        if self.result != other.result:
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
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'result' field must be of type 'bool'"
        self._result = value


class Metaclass_WaterLevelDetectorSvc(type):
    """Metaclass of service 'WaterLevelDetectorSvc'."""

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
                'interfaces.srv.WaterLevelDetectorSvc')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__water_level_detector_svc

            from interfaces.srv import _water_level_detector_svc
            if _water_level_detector_svc.Metaclass_WaterLevelDetectorSvc_Request._TYPE_SUPPORT is None:
                _water_level_detector_svc.Metaclass_WaterLevelDetectorSvc_Request.__import_type_support__()
            if _water_level_detector_svc.Metaclass_WaterLevelDetectorSvc_Response._TYPE_SUPPORT is None:
                _water_level_detector_svc.Metaclass_WaterLevelDetectorSvc_Response.__import_type_support__()


class WaterLevelDetectorSvc(metaclass=Metaclass_WaterLevelDetectorSvc):
    from interfaces.srv._water_level_detector_svc import WaterLevelDetectorSvc_Request as Request
    from interfaces.srv._water_level_detector_svc import WaterLevelDetectorSvc_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
