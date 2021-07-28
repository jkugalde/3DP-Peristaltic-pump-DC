# Electronics

The usual way of using a DC motor is with an H-bridge and a controller like Arduino., as the figure below shows:

<img src="/img/elec.png" width="600">

## Control

The system can be operated in a open or closed loop. These programs are included in [src](/src).

### Open loop

For an open loop control you need the previous circuit and do some tests that relates the input of the motor with the flow, and then build a regression and/or use some timer.

### Closed loop

For a more precise operation it is possible to use a [load cell](https://www.instructables.com/Arduino-Scale-With-5kg-Load-Cell-and-HX711-Amplifi/) to get feedback about the dispensed mass, as the next diagram shows:

<img src="/img/elec2.png" width="600">

To use the load cell, it is necessary to download the HX711 library for Arudino. The included sketch uses a 1kg load cell and a proportional controller. It requires the input of desired ml and translates it to mass (gr) using the specific volume of the substance.

## Components

 ITEM              | Quantity
 ---------------------------   | ------------
Arduino UNO | 1
H-Bridge L298N | 1
Load Cell 1 kg | 1
Amplifier HX711 | 1

+ wires.



