# Enter your code here. Read input from STDIN. Print output to STDOUT

firstline = set(raw_input().split(" "))
secondline = set(raw_input().split(" "))
thirdline = set(raw_input().split(" "))
fourthline = set(raw_input().split(" "))

#print secondline & thirdline
#print secondline & fourthline
#def split_line (line):
#    return set([int(val) for val in line.split(" ")])

#n, m = split_line (firstline)
#array_n = split_line (secondline)
#A = split_line(thirdline)
#B = split_line(fourthline)

happiness = 0

#for num in array_n:
#    if num in A:
#        happiness += 1
#    elif num in B:
#        happiness -= 1

#print happiness

#happiness = 0
happiness += len(secondline & thirdline)
happiness -= len(secondline & fourthline)

print happiness
