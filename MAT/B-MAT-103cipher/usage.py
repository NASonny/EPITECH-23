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
        "    ./103cipher message key flag\n\n"
        "DESCRIPTION\n"
        "    message     a message, made of ASCII characters\n"
        "    key         the encryption key, made of ASCII characters\n"
        "    flag        0 for the message to be encrypted, 1 to be decrypted")
  sys.exit(0)