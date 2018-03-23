# tip120_controller
All content by Casey Anderson unless denoted otherwise, 2018


## Overview

This repository provides `Printed Circuit Board` (`PCB`) files, as well as Software Examples, for an Arduino-based `TIP120` actuator controlled via Potentiometer (or any Voltage Divider). As described (in more detail) [here](http://bildr.org/2011/03/high-power-control-with-arduino-and-tip120/), the TIP120 is capable of actuating Brushless DC Motors, Vibration Motors, Solenoids, or Large Lights, to name only a few.


## PCB

The Double sided `Pin Through Hole` (PTH) PCB was created in EAGLE.

### BOM

* 1x Arduino Pro Mini (3.3V, 8MHz)
* 1x 10kR Potentiometer (or any other 10kR Voltage Divider)
* 1x EZ Switch
* 1x DC Coax (Center Positive)
* 1x 3.5mm Audio Jack (connected to output via 3.5mm cable)
* 1x TIP120
* 1x 1N4004 Diode
* 1x 220R
* 1x 2.2kR
* 1x 5mm LED
* 1x Motor/Solenoid/Light

### Photo

![](/images/pcb_angle.jpg)


## SOFTWARE

Currently only the absolute simplest example of PWM. More to follow.
