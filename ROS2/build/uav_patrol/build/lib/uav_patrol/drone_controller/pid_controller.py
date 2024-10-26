

class PIDController():
    def __init__(self, Kp=1, Ki=0.001, Kd=0.1, dt=0.1, err_thres=180):
        self.Kp = Kp
        self.Ki = Ki  
        self.Kd = Kd

        self.previous_error = 0.0  
        self.integral = 0.0  

        self.dt = dt
        self.err_thres = err_thres
    
    def pid_control(self, target, current):
        error = target - current

        if error > self.err_thres:
            error = self.err_thres
        elif error < -1 * self.err_thres:
            error = -1 * self.err_thres

        self.integral += error * self.dt

        derivative = (error - self.previous_error) / self.dt

        output = self.Kp * error + self.Ki * self.integral + self.Kd * derivative

        self.previous_error = error

        return output
    
    def reset(self):
        self.Kp = 1
        self.Ki = 0.001
        self.Kd = 0.1

        self.previous_error = 0.0  
        self.integral = 0.0  

        self.dt = 0.1