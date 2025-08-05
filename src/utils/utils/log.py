from datetime import datetime
import os
import csv

MAIN_LOG_FILE = "/logs/pump_log.log"
PH_EC_CSV_FILE = "/logs/ph_ec_log.csv"

def write_log(message: str):
    """Write full message to main log and pH/EC values to CSV."""
    timestamp = datetime.now().strftime("%Y-%m-%d %H:%M:%S")

    # Write to main text log
    os.makedirs(os.path.dirname(MAIN_LOG_FILE), exist_ok=True)
    with open(MAIN_LOG_FILE, "a") as main_log:
        main_log.write(f"{timestamp}   <._.>   {message}\n")

    # Parse and write pH/EC values to CSV
    ph_prefix = "🌱 PH_S: pH sensor reading:"
    ec_prefix = "🥗 EC_S: EC sensor reading:"
    
    if ph_prefix in message:
        ph_value = message.split("pH=")[-1].strip()
        _write_ph_ec_csv(timestamp, ph=ph_value)
    
    elif ec_prefix in message:
        ec_value = message.split("EC=")[-1].strip()
        _write_ph_ec_csv(timestamp, ec=ec_value)

def _write_ph_ec_csv(timestamp: str, ph=None, ec=None):
    os.makedirs(os.path.dirname(PH_EC_CSV_FILE), exist_ok=True)

    # Check if file exists to determine if we need to write headers
    file_exists = os.path.isfile(PH_EC_CSV_FILE)
    
    with open(PH_EC_CSV_FILE, "a", newline="") as csvfile:
        writer = csv.DictWriter(csvfile, fieldnames=["timestamp", "pH", "EC"])
        if not file_exists:
            writer.writeheader()
        
        row = {"timestamp": timestamp, "pH": ph if ph else "", "EC": ec if ec else ""}
        writer.writerow(row)
