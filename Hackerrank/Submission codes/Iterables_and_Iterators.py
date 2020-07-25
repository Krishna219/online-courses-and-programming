# Enter your code here. Read input from STDIN. Print output to STDOUT
from itertools import combinations
N = int(raw_input())
lst = raw_input().split()
l = int(raw_input())

#print N, lst, l

count = 0
comb = list(combinations(lst, l))
for val in comb:
    #print val
    if 'a' in val:
        count +=1

print float(count)/len(comb)
