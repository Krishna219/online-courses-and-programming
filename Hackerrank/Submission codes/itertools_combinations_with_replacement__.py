# Enter your code here. Read input from STDIN. Print output to STDOUT
from itertools import combinations_with_replacement

s, k = raw_input().split()

k = int(k)

s = sorted(s)

comb = list(combinations_with_replacement(s,k))

for val in comb:
    print "".join(val)
