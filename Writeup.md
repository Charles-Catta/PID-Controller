# The PID Controller

The PID controller is made up of three main components: the proportional component, the integral and the derivative
## The Proportional Component 
The proportional component of the PID steers the steering wheel in proportion to how far off it is from the track. For example, the further off to the right our car might be from the center, the stronger the proportional component of the controller will try to steer to the left. Increasing the proportional gain will make the car converge to the center of the track faster but also runs the risk of making the car oscillate or worst sending it in circles if it is too far off from the track.

## The Integral
The integral component of the PID helps the car come back to a normal state in case its motion was disrupted by outside factors. It does so by summing all past cross track errors. If the car did, for example, experience an outside disruption, the integral term in the equation will diverge from a zero value forcing the two other terms in the equation, the proportional term and the derivative term, to compensate reducing the total steady state error in the system.


## The Derivative
The derivative component of the PID makes the car reduce its tendency to arrive at the center of the track with a too high angle of attack. It does so by increasing the resistance against having a large steering angle in proportion to how fast the car is currently steering towards the center of the track. Increasing the derivative gain results in a more dampened motion, if its value is too high, the car may not be able to turn fast enough at high speeds since its responsiveness is hindered.

## Parameters
The parameters were tuned manually using the intuition mentioned above.

for example:
  If the car is oscillating, the weight controlling the proportional term is most probably too high making the car arrive at the center line with a large angle of attack.

