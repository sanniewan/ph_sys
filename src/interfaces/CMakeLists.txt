cmake_minimum_required(VERSION 3.8)
project(interfaces)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)

# find dependencies
find_package(rosidl_default_generators REQUIRED)
find_package(builtin_interfaces REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  
  "msg/ActuatorMessage.msg"
  "srv/ActuatorService.srv"

  "msg/ActuatorStatusRWC.msg"
  "srv/ActuatorServiceRWC.srv"

  "msg/AirSensorMessage.msg"
  "srv/AirSensorService.srv"

  "msg/ConveyorMessage.msg"
  "srv/ConveyorService.srv"
  
  "srv/I2cExpanderService.srv"

  "msg/PotentiometerMessage.msg"
  "srv/PotentiometerService.srv"
  
  "msg/FlowMeterMessage.msg"
  "srv/FlowMeterService.srv"

  "msg/IrrigationMessage.msg"
  "srv/IrrigationService.srv"

  "msg/LiftMessage.msg"
  "srv/LiftService.srv"

 "msg/PeristalticPumpMessage.msg"
  "srv/PeristalticPumpService.srv"

  "msg/ControllerMessage.msg"  
  "msg/ControllerMessage.msg"  
  "srv/PhControllerService.srv"

  "srv/ECControllerService.srv"

  "msg/DailySchedulerMessage.msg"
  "srv/IrrigationPumpsService.srv"

  "msg/SensorMessageInt16.msg"
  "srv/SensorServiceInt16.srv"

  "msg/SensorMessageFloat32.msg"
  "srv/SensorServiceFloat32.srv"

  "msg/WaterLevelDetectorMessage.msg"
  "srv/WaterLevelDetectorService.srv"

  "msg/ActuatorStatus.msg"

  "msg/AirInstruction.msg"
  "msg/AirStatus.msg"
  
  "msg/CameraInstruction.msg"
  "msg/CameraStatus.msg"

  "msg/IrrigationInstruction.msg"
  "msg/IrrigationStatus.msg"

  "msg/LiftInstruction.msg"
  "msg/LiftStatus.msg"
  
  "msg/LightInstruction.msg"
  "msg/LightStatus.msg"
  
  "msg/WaterLevelDet.msg"

  "msg/TankInstruction.msg"
  "msg/TankStatus.msg"
    
  "msg/VatInstruction.msg"
  "msg/VatStatus.msg"
  
  "srv/AirSensorSvc.srv"
  "srv/ExpanderService.srv"
  "srv/WaterLevelDetectorSvc.srv"
  "srv/GetBool.srv"
  
  DEPENDENCIES builtin_interfaces
  )

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
