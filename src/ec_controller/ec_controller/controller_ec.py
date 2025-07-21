class Controller:
    """
    A simple proportional controller.

    This class is independent of ROS and can be unit-tested.
    """

    def __init__(self, unit_name: str, target_low: float=900, target_high: float=1100, crit_low: float=200, crit_high: float=2000, kp: float = 0.1):
        self.target_low = target_low
        self.target_high = target_high
        self.crit_low = crit_low
        self.crit_high = crit_high
        self.unit_name = unit_name
        self.kp = kp

    def _compute(self, measurement: float) -> tuple[bool, str, float]:
        """
        Compute the control effort (volume mL) based on the error between the target and the measurement, if the measurement is out of range.

        Args:
            measurement (float): Current sensor reading.

        Returns:
            Tuple[bool, str, float]: A tuple containing:
                - Error/Warning flag: True if an error or warning occurred, False otherwise.
                - Error/Warning message: Description of the error or warning, empty if no error or warning.
                - float: Control output of the volume to dispense in mL
        """
        
        """Controller behavior in different ranges of pH

        Already acceptable EC values, do nothing:                           self.target_low <= measurement <= self.target_high
        In the critical, possibly malfunctioning range, dispense 0 mL:      self.crit_low > measurement or self.crit_high < measurement
        In the operating range, calculate the volume to dispense:           measurement < self.target_low or measurement > self.target_high 
        """
        if (self.target_low <= measurement <= self.target_high):
            return False, "", 0
        elif (self.crit_low > measurement or self.crit_high < measurement):
            msg = f"Warning: {self.unit_name} value has reached a critical {'low.' if (self.crit_low > measurement) else 'high.'}"
            return True, msg, 0
        else:
            # For typical EC system, error will usually be positive
            mid_target = (self.target_low + self.target_high)/2
            error = mid_target - measurement
            if error >= 0:
                control = self.kp * error
                msg = "Operating range, successfully computed volume to dispense."
                return False, msg, round(float(control), 3)
            # In case of negative error
            else:
                msg = f"Warning: {self.unit_name} value calculated to be higher than target {self.unit_name} value."
                return True, msg, 0