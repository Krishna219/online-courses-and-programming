#!/bin/python

import sys


n,t = raw_input().strip().split(' ')
n,t = [int(n),int(t)]
c = map(int, raw_input().strip().split(' '))
# your code goes here
candies_added = 0
b = n
#print "Time                 = " + str(0)
#print "Candies-remaining    = " + str(b)
#print 
for i in range(t):
    b = b - c[i]
    #print "Time                 = " + str(i + 1)
    #print "Candies-removed      = " + str(c[i])
    if b < 5 and i < t -1:
        candy_increment = n - b
        #print "Candies-added        = " + str(candy_increment)
        b = b + candy_increment
        candies_added = candies_added + candy_increment
        #print "Total-added-candies  = " + str(candies_added)
    #print "Candies-remaining    = " + str(b)
    #print

print candies_added
        