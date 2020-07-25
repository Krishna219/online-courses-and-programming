#!/bin/python

import sys

n = int(raw_input().strip())
vow = "aeiou"
cons ="bcdfghjklmnpqrstvwxz"

def pwds(len_pass):
    passwords = []
    if len_pass == 1:
        passwords.extend([ i for i in vow])
        passwords.extend([ i for i in cons])
        return passwords
    if len_pass > 1:
        p = pwds(len_pass - 1)
        for i in p:
            if i[0] not in vow:
                passwords.extend([ "".join([k, i]) for k in vow ])
            else:
                passwords.extend([ "".join([k, i]) for k in cons] )
        
    return passwords

def num_of_pass(l):
    num = 0
    for i in range(2):
        p = 1
        if i % 2 == 0:
            for j in range(l):
                if j % 2 == 0:
                    p *= len(vow)
                else:
                    p *= len(cons)

        else:
            for j in range(l):
                if j % 2 == 0:
                    p *= len(cons)
                else:
                    p *= len(vow)
        num += p
    return num

#print len(vowels), len(cons)


#for i in range(1,7):
#    print num_of_pass(i)

for i in range(1, 7):
    if i == n:
        p = pwds(n)
        for k in p:
            print k