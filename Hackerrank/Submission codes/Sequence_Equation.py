# Enter your code here. Read input from STDIN. Print output to STDOUT
import sys

[n] = map(int, raw_input().strip().split(' '))

p = map(int, raw_input().strip().split(' '))

#print n
#print p
y = 0
for i in xrange(n):
    #print i+1, p[i]
    print p.index(p.index(i+1)+1)+1
        
#print y