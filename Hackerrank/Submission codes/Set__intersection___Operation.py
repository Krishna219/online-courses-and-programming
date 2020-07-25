# Enter your code here. Read input from STDIN. Print output to STDOUT
n = raw_input()
A= set(map(int, raw_input().split()))

m = raw_input()
B= set(map(int, raw_input().split()))

print len(A.intersection(B))
