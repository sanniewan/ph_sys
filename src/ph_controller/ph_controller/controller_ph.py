class Controller:
    """
    A simple proportional controller.

    This class is independent of ROS and can be unit-tested.
    """

    def __init__(self, unit_name: str, target_low: float=5.5, target_high: float=6.5, crit_low: float=4, crit_high: float=8.5, kp: float = 0.01):
        self.target_low = target_low  # pH value
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

        Already acceptable pH values, do nothing:                           self.target_low <= measurement <= self.target_high
        In the critical, possibly malfunctioning range, dispense 0 mL:      self.crit_low > measurement or self.crit_high < measurement
        In the operating range, calculate the volume to dispense:           measurement < self.target_low or measurement > self.target_high 
        """
        if (self.target_low <= measurement <= self.target_high):
            return False, "", 0
        elif (self.crit_low > measurement or self.crit_high < measurement):
            msg = f"Warning: {self.unit_name} value has reached a critical {'low.' if (self.crit_low > measurement) else 'high.'}"
            return True, msg, 0
        else:
            # If error is negative, then ph_down pump activates.
            mid_target = (self.target_low + self.target_high)/2
            error = mid_target - measurement
            control = self.kp * error
            return False, "Operating range, successfully computed volume to dispense.", round(float(control), 2)
