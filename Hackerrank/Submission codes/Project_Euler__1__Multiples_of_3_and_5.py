#!/bin/python

import sys


t = int(raw_input().strip())
for a0 in xrange(t):
    n = int(raw_input().strip())
    threes = n // 3
    fives = n // 5
    tf = n//15
    if n%3 == 0:
        threes -= 1
    if n%5 == 0:
        fives -= 1
    if n%15 == 0:
        tf -= 1
    sum_threes = 3 * threes * (threes + 1)/2
    sum_fives = 5 * fives * (fives + 1)/2
    sum_tf = 15 * tf * (tf + 1)/2
    #print threes, fives, sum_threes, sum_fives, sum_tf
    print sum_threes + sum_fives - sum_tf
