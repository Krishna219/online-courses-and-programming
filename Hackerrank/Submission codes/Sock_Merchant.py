#!/bin/python

import sys


n = int(raw_input().strip())
c = map(int,raw_input().strip().split(' '))
count = [0 for i in set(c)]
c1 = list(set(c))

for i in range(len(c1)):
    count[i] = c.count(c1[i])
    count[i] = count[i]//2
print sum(count)