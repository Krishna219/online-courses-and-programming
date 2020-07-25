# Enter your code here. Read input from STDIN. Print output to STDOUT

dist_countries = set()

num = int(raw_input())

for val in range(num):
    dist_countries.add(raw_input())

print len(dist_countries)
