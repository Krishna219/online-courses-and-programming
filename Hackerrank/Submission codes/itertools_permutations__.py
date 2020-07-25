# Enter your code here. Read input from STDIN. Print output to STDOUT
from itertools import permutations

s, k = raw_input().split()

k = int(k)

for val in sorted(list(permutations(s,k))):
    print "".join(val)
