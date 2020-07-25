#!/bin/python

import sys


s = raw_input().strip()

count = 1
for i in range(len(s)):
    if s[i].isupper():
        count += 1
        
print count
