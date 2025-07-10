
bool    err
string  msg
bool    result

# sender        : service client node name
# address       : expander board i2c address
# port          : expander board port
# instruction   : open, close, read, write, ...
# value         : for "write" instructions
# ---
# err           : instruction was successful (False) or failed (True)
# msg       : error/warning message
# result        : return value for sucessfully executed instructions
