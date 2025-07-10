from collections import OrderedDict

##############################################################
# Constants
##############################################################

## states
ON = True
OFF = False
LOW = 0
HIGH = 1

## Air
DEFAULT_THERMOSTAT_TEMPERATURE = 21.5
AIR_FAN_INITIAL_STATE = ON
AERATION_INITIAL_STATE = ON

## Air Sensor
AIR_SENSOR_PERIOD = 12*60  # seconds (Minimum 5)

## Camera
CAMERA_UPDATE_PERIOD = 60  # seconds

## Conveyor
CONVEYOR_UPDATE_PERIOD = 60  # seconds


## relay delays 
IRRIGATION_RELAY_DELAY  = 0.100 # sec, irrigation valves
TASKLIGHT_RELAY_DELAY   = 0.250 # sec, task light

DEFAULT_SSR_RELAY_DELAY = 0.200 # sec, solid state relay
DEFAULT_LPR_RELAY_DELAY = 0.100 # sec, high power relay
DEFAULT_HPR_RELAY_DELAY = 1.000 # sec, high power relay

## instructions
OPEN = "OPEN"
CLOSE = "CLOSE"
READ  = "READ"
WRITE = "WRITE"
IS_OPEN = "IS_OPEN"
IS_CLOSED = "IS_CLOSED"
IS_HIGH = "IS_HIGH"
IS_LOW = "IS_LOW"
SET_AS_INPUT = "SET_AS_INPUT"
SET_AS_OUTPUT = "SET_AS_OUTPUT"

## I2C bus device addresses
ADDR_SSR_1 = 0x20 # solid state relay board #1 (MCP23017)
ADDR_SSR_2 = 0x21 # solid state relay board #2 (MCP23017)
ADDR_GPIO  = 0x22 # GPIO expansion board (MCP23017)
ADDR_LPR   = 0x23 # low power relay board (PCF8575)
ADDR_HPR   = 0x24 # high power relay board (MCP23017)
ADDR_RHPR  = 0x21 # remote high power relay board (MCP23017)
ADDR_POT_1 = 0x28 # DS3502 potentiometer for conveyor
ADDR_DHT20 = 0x38 # AHT20 air temperature and RH sensor
ADDR_DOS_1 = 0x50 # dosing pump for PH DOWN in cultivation tank
ADDR_DOS_2 = 0x51 # dosing pump for PH UP in cultivation tank
ADDR_DOS_3 = 0x52 # dosing pump for nutrient A in cultivation tank
ADDR_DOS_4 = 0x53 # dosing pump for nutrient A in cultivation tank
ADDR_SCD30 = 0x61 # SCD30 air CO2, temperature and RH sensor
ADDR_SCD41 = 0x62 # SCD41 air CO2, temperaturem RH sensor
ADDR_PH_1  = 0x63 # Atlas Scientic PH sensor for cultivation circuit
ADDR_EC_1  = 0x64 # Atlas Scientic EC sensor for cultivation circuit
ADDR_T_1   = 0x66 # Atlas Scientic temperature sensor for cultivation circuit
ADDR_FLW_1 = 0x68 # Atlas Scientic flow meter for cultivation circuit
ADDR_P_1   = 0x6a # pressure sensor for cultivation tank water level
ADDR_P_2   = 0x6b # pressure sensor for cultivation circuit


##############################################################
# I2C Expander Boards
##############################################################

MCP23017_RELAY = "MCP23017_RELAY"  # MCP23017-based expander board with relays
PCF8575_RELAY  = "PCF8575_RELAY"   # PCF8575-based expander board with relays
MCP23017_GPIO  = "MCP23017_GPIO"   # MCP23017-based expander board for GPIO
# expander board types

I2C_EXPANDERS_FRONT = {
    ADDR_SSR_1 : (MCP23017_RELAY, "solid state relay board #1"),
    ADDR_SSR_2 : (MCP23017_RELAY, "solid state relay board #2"),
    ADDR_GPIO  : (MCP23017_GPIO,  "GPIO expansion board"),
    ADDR_LPR   : (PCF8575_RELAY,  "low power relay board"),
    ADDR_HPR   : (MCP23017_RELAY, "high power relay board"),
}
# I2C expander boards
# i2c_address : (board_type, board_description)

I2C_EXPANDERS_BACK = {
    ADDR_RHPR  : (MCP23017_RELAY, "Remote high power relay board"),
    # ADDR_LPR   : (PCF8575_RELAY,  "low power relay board"),
}

##############################################################
# Aearator
##############################################################

AERATOR_RELAY = (ADDR_RHPR, 3) # Remote HPR bank 1, relay 4

##############################################################
# Conveyor
##############################################################

CONVEYOR_RELAYS = dict()
CONVEYOR_RELAYS['manual']       = (ADDR_LPR, 5) # LP RELAY #6
CONVEYOR_RELAYS['forward']      = (ADDR_LPR, 6) # LP RELAY #7
CONVEYOR_RELAYS['reverse']      = (ADDR_LPR, 7) # LP RELAY #8

CONVEYOR_GPIOS = dict()
CONVEYOR_GPIOS['manualSelect'] = (ADDR_GPIO, 7) # GPIO A7

##############################################################
# Fans
##############################################################
FAN = (ADDR_RHPR, 1)   # Remote HP RELAY bank 1, relay 2

##############################################################
# Irrigation
##############################################################
IRRIGATION_UPDATE_PERIOD = 60 #econds

IRRIGATION_VALVES = {
    ('cultivation', 1) :    (ADDR_SSR_1, 15), # P brown
    ('cultivation', 2) :    (ADDR_SSR_1, 14), # O blue
    ('cultivation', 3) :    (ADDR_SSR_1, 13), # N green
    ('cultivation', 4) :    (ADDR_SSR_1, 12), # M orange
    ('cultivation', 5) :    (ADDR_SSR_1, 11), # L yellow
    ('cultivation', 6) :    (ADDR_SSR_1, 10), # K brown
    ('cultivation', 7) :    (ADDR_SSR_1, 9),  # J blue
    ('cultivation', 8) :    (ADDR_SSR_1, 8),  # I green
    ('cultivation', 9) :    (ADDR_SSR_1, 7),  # H orange
    ('cultivation', 10) :   (ADDR_SSR_1, 6),  # G yellow
    ('cultivation', 11) :   (ADDR_SSR_1, 5),  # F
    ('cultivation', 12) :   (ADDR_SSR_1, 4),  # E
    ('cultivation', 13) :   (ADDR_SSR_1, 3),  # D
    ('cultivation', 14) :   (ADDR_SSR_1, 2),  # C
    ('cultivation', 15) :   (ADDR_SSR_1, 1),  # B
    # ('cultivation', 16) :   (ADDR_SSR_2, 0),  # A
    # ('cultivation', 17) :   (ADDR_SSR_1, 0), # P
    # ('cultivation', 18) :   (ADDR_SSR_1, 1), # O
    # ('cultivation', 19) :   (ADDR_SSR_1, 2), # N
    # ('cultivation', 20) :   (ADDR_SSR_1, 3), # M
    # ('cultivation', 21) :   (ADDR_SSR_1, 4), # L
    # ('cultivation', 22) :   (ADDR_SSR_1, 5), # K
    # ('cultivation', 23) :   (ADDR_SSR_1, 6),  # J
    # ('cultivation', 24) :   (ADDR_SSR_1, 7),  # I
    # ('cultivation', 25) :   (ADDR_SSR_1, 8),  # H
    # ('cultivation', 26) :   (ADDR_SSR_1, 9),  # G
    # ('cultivation', 27) :   (ADDR_SSR_1, 10),  # F
    # ('nursery', 5) :        (ADDR_SSR_1, 11),  # E
    # ('nursery', 4) :        (ADDR_SSR_1, 12),  # D
    # ('nursery', 3) :        (ADDR_SSR_1, 13),  # C
    # ('nursery', 2) :        (ADDR_SSR_1, 14),  # B
    # ('nursery', 1) :        (ADDR_SSR_1, 15),  # A
}

##############################################################
# Grow and Task Lights
##############################################################

LIGHT_UPDATE_PERIOD = 60  # seconds

GROWLIGHT_RELAYS = {
    0: (ADDR_LPR, 1), # LP RELAY #2
    1: (ADDR_LPR, 2), # LP RELAY #3
    2: (ADDR_LPR, 3), # LP RELAY #4
    3: (ADDR_LPR, 4), # LP RELAY #5
}
# dictionary with growlight relay info: (expander I2C address, port)

GROWLIGHT_DEFAULT_LEVEL = 1
# the default level when growlight is turned on: 1, 2, 3, or 4

TASKLIGHT_RELAY = (ADDR_RHPR, 2) # Remote HP , bank 1, Relay #3

# dictionary with tasklight relay info: (expander I2C address, port)
 
TASKLIGHT_INITIAL_STATE = ON 
# default state when Farm boots up: ON or OFF


##############################################################
# Tank
##############################################################

NURSERY_TANK = 'nursery'
CULTIVATION_TANK = 'cultivation'

TANKS = {
    CULTIVATION_TANK,
    #NURSERY_TANK, 
    }

TANK_UPDATE_PERIOD = 6  # seconds
WATER_SENSOR_PERIOD = 10  # seconds

DEFAULT_IRRIGATION_PUMP_STATE = ON
DEFAULT_RECYCLING_PUMP_STATE = ON


WATER_TEMPERATURE_SENSORS = {
    'cultivation' : ADDR_T_1,
}

WATER_PH_SENSORS = {
    'cultivation' : ADDR_PH_1,
}

WATER_EC_SENSORS = {
    'cultivation' : ADDR_EC_1,
}

WATER_FLOW_METERS = {
    'cultivation' : (ADDR_FLW_1, "3/8")
}   

WATER_PRESSURE_SENSORS = {
    'cultivation_level'   : ADDR_P_1,
    'cultivation_circuit' : ADDR_P_2,
}

# FLOAT_SWITCHES = {
#     'cultivation_low'  : (ADDR_RGPIO, 0), # remote GPIO board, port A, IO0
#     'cultivation_high' : (ADDR_RGPIO, 1), # remote GPIO board, port A, IO1
#     'ph_down_low'      : (ADDR_RGPIO, 2), # remote GPIO board, port A, IO2 (pH Down)
#     'ph_up_low'        : (ADDR_RGPIO, 3), # remote GPIO board, port A, IO3 (pH Up)
#     'nutr_a_low'       : (ADDR_RGPIO, 4), # remote GPIO board, port A, IO4 (nutr. A)
#     'nutr_b_low'       : (ADDR_RGPIO, 5), # remote GPIO board, port A, IO5 (nutr. B)
# }

FLOAT_SWITCHES = {
    'cultivation_low'  : 13, # RPi GPIO 13
    'cultivation_high' : 19, # RPi GPIO 19
    'ph_down_low'      : 26, # RPi GPIO 26 (pH Down)
    'ph_up_low'        : 16, # RPi GPIO 16 (pH Up)
    'nutr_a_low'       : 20, # RPi GPIO 20 (nutr. A)
    'nutr_b_low'       : 21, # RPi GPIO 21 (nutr. B)
}

IRRIGATION_PUMPS = {
    'cultivation' : (ADDR_RHPR, 0),   # Remote HP RELAY bank 1, relay 1
}

RECYCLING_PUMPS = {
    'cultivation' : (ADDR_RHPR, 7), # Remote HP RELAY bank 1, relay 8
}

SOLENOID_VALVES = {
    'cultivation_fill'          : (ADDR_RHPR, 4), # Remote High Power Relay bank 1, relay 5
    'cultivation_drain'         : (ADDR_RHPR, 5), # Remote High Power Relay bank 1, relay 6
    'cultivation_circulation'   : (ADDR_RHPR, 6), # Remote High Power Relay bank 1, relay 7
}

DOSING_PUMPS = {
    'cultivation_ph_down' : ADDR_DOS_1,
    'cultivation_ph_up'   : ADDR_DOS_2,
    'cultivation_nutr_a'  : ADDR_DOS_3,
    'cultivation_nutr_b'  : ADDR_DOS_4,
}

##############################################################
# Vats
##############################################################
VATS = {
    '1': 'ph_down', 
    '2': 'ph_up', 
    '3': 'nutr_a', 
    '4': 'nutr_b',
}

## Vats
VAT_UPDATE_PERIOD = 60  # seconds

