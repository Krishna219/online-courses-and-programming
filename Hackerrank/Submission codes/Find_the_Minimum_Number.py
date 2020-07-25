#!/bin/python

import sys


n = int(raw_input().strip())

string = "min(int, int)"

for i in range(3, n+1):
    string = "min(int, " + string + ")"
print string
