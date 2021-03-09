# 3DP Peristaltic Pump (DC)

(the images are missing, will be there soon)

Another peristaltic pump! Why? Because the previous one ([old project](https://github.com/jkugalde/3D-Printed-peristaltic-pump)]) was too small and i had to do a DC version anyways. This one is stronger and easier to control.

# Design

You can read the previous project to have more background, as this new design is similar.

The chosen hose is a 5x8 mm silicone hose (IDXOD). As a bigger hose will move more fluid it also needs more pressure, so a DC motor with gearbox was selected. The rollers are three pair of bearings to cover the width of the flattened hose. Again, the idea was to keep the size small as possible. 

The case has some 5 mm holes to attach the pump to some structure. In my case, V-Slot profiles.

# Parts and materiales

3D printed parts                    | Quantity
 ---------------------------   | ------------
Case | 1
Lower lid | 1
Upper lid| 1
Impeller| 1

Comercial parts                   | Quantity
 ---------------------------   | ------------
DC Motor 12V 60RPM | 1
605ZZ | 6
M5 nut | 8
Low profile M5 nut
M5x10 bolt| 8
M5x15 flat head bolt | 3
M3x10 parker bolt | 3
M3x8 sinkhead bolt | 2
M3 nut | 3
5x8 mm silicone hose | -
M4 washer | -

The washer is to prevent friction from the impeller against the lid. 

# Manufacture

## 3D printing

I printed the parts with PLA, 0.3 mm layer height and without supports nor raft. 

I think that the orientation is pretty obvious: by the flat side. The files are in this repository, native inventor parts, .STEP and .STL. It is important that you adjust the tolerances in the parts, as your printer may be different than mine.

After printing remove any extra hair or leftovers and maybe drill trough the holes to get the right diameter.

## Assembly

a)

- Put the M3 nuts in the impeller
- Put the bolts in the nuts, without passing through the shaft hole
- Press the M5 low profile nuts against the impeller
- Bolt the M5x15 bolts, with two bearings in between

b)

- Press the M5 nuts against the case
- Bolt the motor to the lower lid with the sink bolts
- Put the case on top of the motor
- Pass the hose through the big hole on the case, and then through the other one
- Put the washer and the impeller on the shaft all the way through. 
- Accomodate the hose

c) 

- Bolt the case and the lower lid.
- Tighten the M3 bolts with an allen key trough the hole in the case. 
- Rotate the impeller by hand or with electrical power and repeat the last step.
- Bolt the case and the upper lid.

# Tests

## Electronics

There are a lot of options to control a DC Motor, a good one is with an H Bridge, like the L298N. You will also need an Arduino, some cables and a 12V/2A power source.

## Software

I wrote a simple program in Arduino, which controls the direction and speed of the pump if you want to try it that way. 

## Setup

This pump is part of a bigger machine, you can read more about it [here](https://gitlab.com/fablab-u-de-chile/biomixer). It has a glycerine container which is connected to one end of the hose. The other end drops the fluid in a vase. Also, a load cell measures the mass inside the vase.

## Tests

Works real fine. Also tested with pruning paste for another project.

# Further work

The lower lid may be reinforced, as the motor moves a little bit.