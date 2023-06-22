#!/bin/sh

cut -d ";" -f 3 | grep "$1" -i -c
