# Enter your code here. Read input from STDIN. Print output to STDOUT

import itertools 

s = raw_input()
  
L = list(s)#[("a", 1), ("a", 2), ("b", 3), ("b", 4)] 
  
# Key function 
key_func = lambda x: x[0] 
  
for key, group in itertools.groupby(L, key_func): 
    print(len(list(group)), int(key)), 
