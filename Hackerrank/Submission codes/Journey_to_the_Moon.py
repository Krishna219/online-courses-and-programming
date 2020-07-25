import math
# Enter your code here. Read input from STDIN. Print output to STDOUT
N,l = map(int,raw_input().split())

pairs = []
teams = []

for i in xrange(l):
    a,b = map(int,raw_input().split())
    # Store a and b in an appropriate data structure
    pair = [a, b]
    pairs.append(pair)
    if len(teams) == 0:
        teams.append(pair)
    else:
        team_index = 0
        pair_in_teams = False
        for team in list(teams):
            pair_in_teams = pair_in_teams or (pair[0] in team) or (pair[1] in team)
            #print (pair[0] in team) or (pair[1] in team)
            #print teams.index(team)
            if (pair[0] in team) or (pair[1] in team):
                team_index = teams.index(team)
                #print pair[0] in team
                if (pair[0] in team):
                    teams[team_index].append(pair[1])
                elif (pair[1] in team):
                    teams[team_index].append(pair[0])
                break
        #print pair_in_teams
        #print
        if not pair_in_teams:
            teams.append(pair)

#print pairs, teams
result = 0
# Compute the final result using the inputs from above
product = 1
s = 0
for team in teams:
    s = s + len(team)
    product = product * len(team)
#print s
if s == N:
    result = product
else:
    diff = N - s
    result = product * diff + math.factorial(diff)/(math.factorial(2)*math.factorial(diff - 2))

print result
