# Floor Heating Agent

> You are reading an archived version of this repository which contains old source code and some drafts during my thesis. Newer features are being developed on the `main` branch.

## A Brief History

This repository was my Master's thesis, namely "Feasibility Study of Applying Reinforcement Learning to Heat Control."

The heating system (actuator) is an underfloor setup which consisted of a high-resistance cable and a relay. When the relay is closed (on), electricity flow in the cable generates heat to warm up an enclosed room (Figure 1). Obviously, different control strategies, i.e., when the relay should be on/off and for how long, yield different performance. A common strategy used in many commercial thermostats combines PID with scheduled gains and some safety limits.

![Figure 1](images/underfloor_el_heating.png)
*Figure 1: Electrical underfloor heating setup*  [*(source)*](https://www.homebuilding.co.uk/advice/electric-underfloor-heating)

Tuning these gains is not easy, not to mention the complexity of various working conditions and user demands. Thus, my objectives were:

1. Construct a new learning-based algorithm (an agent) as a universal replacement
2. Examine its applicability and compare with existing methods
3. Provide a unique MATLAB/Simulink model for benchmarking any other controllers

If you want to read my thesis report, please send me an email to `nigel_xzzz@yahoo.com.vn`

## What's Next?

Despite being around for a hundred years, underfloor heating setup is still an active research field. There are many directions upon this point, for example:

1. Replace the electrical source with a heat pump
2. Detect hardware failures & bumplessly tranfer to PID during operation
3. Use simpler reinforcement learning techniques to aim at high explainability
