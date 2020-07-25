

# Complete the solve function below.
def solve(s):
    #print map(lambda x: x[0].upper() + x[1:], s.split())
    return " ".join(map(lambda x: x[0].upper() + x[1:], s.split()))

