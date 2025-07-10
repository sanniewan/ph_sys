
bool    err
string  msg
bool    state

# sender        : service client node name
# address       : expander board i2c address
# port          : expander board port
# instruction   : open, close, read, write, ...
# value         : True or False value to "write" (write instructions only)
# ---
# err           : instruction was successful (False) or failed (True)
# msg           : error/warning message
# state         : return value for sucessfully executed instructions
