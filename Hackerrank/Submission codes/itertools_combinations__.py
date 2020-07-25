# Enter your code here. Read input from STDIN. Print output to STDOUT
# Enter your code here. Read input from STDIN. Print output to STDOUT
from itertools import combinations

s, k = raw_input().split()

k = int(k)

s = sorted(s)

comb = list(combinations(s,1))

for i in range(2, k+1):
    comb = comb + list(combinations(s,i))

#print comb
for val in comb:
    print "".join(val)
