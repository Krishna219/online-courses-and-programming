# Enter your code here. Read input from STDIN. Print output to STDOUT
import numpy as np

A = raw_input()
B = raw_input()

A = np.array([int(a) for a in A.split(" ")])
B = np.array([int(b) for b in B.split(" ")])

print np.inner(A,B)
print np.outer(A,B)
