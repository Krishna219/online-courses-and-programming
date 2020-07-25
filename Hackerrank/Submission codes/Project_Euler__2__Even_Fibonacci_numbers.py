#!/bin/python

import sys

def fib(n):
    a = 1
    b = 2
    ser = []
    if n > 2:
        ser.append(2)
    while 1:
        c = a + b
        if c > n:
            break
        #print c
        if c % 2 == 0:
            ser.append(c)
        a = b
        b = c
        
    return sum(ser)


t = int(raw_input().strip())
for a0 in xrange(t):
    n = long(raw_input().strip())
    print fib(n)
        
