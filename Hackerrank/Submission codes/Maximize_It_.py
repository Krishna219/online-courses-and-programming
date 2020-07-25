# Enter your code here. Read input from STDIN. Print output to STDOUT
import itertools

K, M = raw_input().split()

K = int(K)
M = int(M)

lsts = []
for idx in range(K):
    lst = raw_input().split()
    lst = map(int, lst)
    lsts.append(lst[1:])

#print K, M
#print lsts

comb = list(itertools.product(*lsts))

max_val = 0
for val in comb:

    calc = sum(map(lambda x : x ** 2, val)) % M

    if calc > max_val:
        max_val = calc

print max_val
