string              instruction
int16               level           # lift
int16               conveyor_panel
int8                conveyor_speed
string              tank
string              vat
float32             volume
int8                valve
int8[<=64]          valves
int16[<=25]         light_unit
int16               position      # conveyor
int8                address         # address on i2c bus
int8                port            # port on i2c expander board
AddressPort         address_port    # i2c bus
AddressPort[]       address_port_list  # i2c bus
bool                state
float32             delay           # in seconds, expander