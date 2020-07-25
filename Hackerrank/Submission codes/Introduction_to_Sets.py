

def average(array):
    # your code goes here
    distinct_array = set(array)
    len_distinct = len(distinct_array)

    return float(sum(distinct_array))/len_distinct


