# 3DP Peristaltic Pump (DC)

Another peristaltic pump! Why? Because the previous one ([old project](https://github.com/jkugalde/3D-Printed-peristaltic-pump)) was too small and weak, and i had to do a DC version anyways. This one is stronger and easier to control.

<img src="/img/1.png" width="300">

# Design

You can read the previous project for background, as this new design is similar.

The chosen hose is a 5x8 mm silicone hose (IDXOD). As a bigger hose will move more fluid it also needs more pressure, so a DC motor with gearbox was selected. The rollers are three pair of bearings to cover the width of the flattened hose. Again, the idea was to keep the size small as possible. 

The case has some 5 mm holes to attach the pump to some structure. In my case, V-Slot profiles.

# Parts and materiales

<img src="/img/exploded.png" width="700">

ID | 3D printed parts                    | Quantity
 ----- | ---------------------------   | ------------
A | Case | 1
B | Lower lid | 1
C | Upper lid| 1
D | Impeller| 1

ID | Comercial parts                   | Quantity
 ----- | ---------------------------   | ------------
1 | DC Motor 12V 60RPM | 1
2 | 605ZZ | 6
3 | M5 nut | 8
4 | Low profile M5 nut | 3
5 | M5x10 bolt| 8
6 | M5x15 flat head bolt | 3
7 | M3x8 sinkhead bolt | 2
8 | M3x10 set screws | 3
9 | M3 nut | 3
10 | 5x8 mm silicone hose | -
11 | M4 washer | 1

The washer is to prevent friction from the impeller against the lid. 

NOTE: You can use another type of bolts as long as they have an optimal length.

# Manufacture

## 3D printing

I printed the parts with PLA, 0.3 mm layer height and without supports nor raft, but i think that it is a better idea to use support if you have good settings.

I think that the orientation is pretty obvious, but here is an image anyway. 

<img src="/img/3dp.png" width="700">

The files are in this repository, native inventor parts, .STEP and .STL. It is important that you adjust the tolerances in the parts, as your printer may be different than mine, which is not working really well :c .

After printing remove any extra hair or leftovers and maybe drill trough the holes to get the right diameter.

## Assembly

<img src="/img/imp.png" width="700">

1) Press the M5 low profile nuts against the impeller
2) Put the M3 nuts in the impeller
3) Put the set screws in the nuts, without passing through the shaft hole
4) Bolt the M5x15 bolts with the M5 nuts, with two bearings in between

<img src="/img/assem1.png" width="700">

5) Press the M5 nuts against the case
6) Pass the hose through the small hole on the case (I), and then through the other one (II) from the inside. It is easier with a twisting motion.
7) Bolt the motor against the lower lid with the M3 sinkhead bolts.

<img src="/img/assem2.png" width="700">

8) Put the case on top of the lower lid, and then impeller with the washer in between, tweak it around to displace the hose so it is against the inner wall of the case and pressed by the bearings.
9) Tighten the set screws using the hole (III), be sure that one of them is pressing the flat side of the shaft. Turn the motor and tweak around the pieces to get access to the rest of the screws.
10) Bolt the lids with the M5x10 bolts.

# Tests

## Electronics

There are a lot of options to control a DC Motor, a good one is with an H Bridge, like the L298N. You will also need an Arduino, some cables and a 12V/2A power source.

<img src="/img/elec.png" width="700">

## Software

I wrote a simple program in Arduino, which controls the direction and speed of the pump if you want to try it that way. 

## Setup

This pump is part of a bigger machine, you can read more about it [here](https://gitlab.com/fablab-u-de-chile/biomixer). It has a glycerine container which is connected to one end of the hose. The other end drops the fluid in a vase. Also, a load cell measures the mass inside the vase.

## Tests

Works real fine #trustme. Also tested with pruning paste for another project. I uploaded a video in this repository, pumping glycerine.

# Further work

The lower lid may be reinforced, as the motor moves a little bit.