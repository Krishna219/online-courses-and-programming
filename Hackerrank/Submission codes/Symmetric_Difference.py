# Enter your code here. Read input from STDIN. Print output to STDOUT
n = raw_input()
A = set(map(int, raw_input().split()))
m = raw_input()
B = set(map(int, raw_input().split()))

dif = list(A.union(B) - A.intersection(B))
dif.sort()
for val in dif:
    print val
