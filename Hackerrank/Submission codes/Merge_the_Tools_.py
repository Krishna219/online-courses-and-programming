def merge_the_tools(string, k):
    # your code goes here
    num_sub_strings = len(string)/k
    #print num_sub_strings

    for idx in range(num_sub_strings):
        print "".join(set(list(string[idx * k : (idx + 1) * k])))

