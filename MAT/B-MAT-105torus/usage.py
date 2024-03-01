##
## EPITECH PROJECT, 2022
## 103
## File description:
## cipher
##

import math
import sys
from math import *
from sys import *

def usage():
  print("USAGE\n"
        "    ./105torus opt a0 a1 a2 a3 a4 n\n\n"
        "DESCRIPTION\n"
        "    opt       method option:\n"
        "                  1 for the bisection method\n"
        "                  2 for Newton's  method\n"
        "                  3 for the secant method\n"
        "    a[0-4]    coefficients of the equation\n"
        "    n         precision (the application of the polynomial to the solution should\n"
        "              be smaller than 10^-n)")
  sys.exit(0)