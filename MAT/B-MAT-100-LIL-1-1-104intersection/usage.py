##
## EPITECH PROJECT, 2023
## 104intersection
## File description:
## MAT
##

from sys import *
import math
from os import *
from random import *

def usage():
    print("\nUSAGE")
    print("    ./104intersection opt xp yp zp xv yv zv p\n")
    print("DESCRIPTION")
    print("    opt             surface option: 1 for a sphere, 2 for a cylinder, 3 for a cone")
    print("    (xp, yp, zp)    coordinates of a point by which the light ray passes through")
    print("    (xv, yv, zv)    coordinates of a vector parallel to the light ray")
    print("    p               parameter: radius of the sphere, radius of the cylinder, or")
    print("                    angle formed by the cone and the Z-axis\n")
