

def wrap(string, max_width):
    num_subs = len(string)/max_width

    wrap_str = ""

    for val in range(num_subs):
        wrap_str += string[val * max_width : (val+1) * max_width] + "\n"
        #print wrap_str

    if num_subs * max_width < len(string):
        wrap_str += string[num_subs * max_width : ] + "\n"
    return wrap_str

