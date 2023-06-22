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
from usage import *


def matrice():

    h = 1000
    l = 1000

    matrix = [[0 for x in range(h)] for y in range(l)] 
    matrix = [0][0] = 10
    matrix = [0][1] = 10
    matrix = [0][2] = 10
    matrix = [1][0] = 10
    matrix = [1][1] = 10
    matrix = [1][2] = 10
    matrix = [2][0] = 10
    matrix = [2][1] = 1
    matrix = [2][2] = 108

    

    print("Key matrix:")
    print("%i"%matrice[0][0], "\t%i"%matrice[0][1], "\t%i"%matrice[0][2], sep = "")

    print("%i"%matrice[1][0], "\t%i"%matrice[1][1], "\t%i"%matrice[1][2], sep = "")

    print("%i"%matrice[2][0], "\t%i"%matrice[2][1], "\t%i"%matrice[2][2], sep = "")


