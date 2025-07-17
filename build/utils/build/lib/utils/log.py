from datetime import datetime
import os

def write_log(message: str, filename: str = "/logs/pump_log.log"):
    os.makedirs(os.path.dirname(filename), exist_ok=True)
    timestamp = datetime.now().strftime("%Y-%m-%d %H:%M:%S")
    with open(filename, "a") as f:
        f.write(f"{timestamp}   <._.>   {message}\n")