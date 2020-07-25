n = input()
s = set(map(int, raw_input().split()))

n = input()

for val in range(n):
    op = raw_input().split()

    if op[0] == 'pop':
        s.pop()
    elif op[0] == 'remove':
        s.remove(int(op[1]))
    elif op[0] == 'discard':
        s.discard(int(op[1]))

print sum(s)
