def print_formatted(number):
    # your code goes here
    width = len(bin(number)) - 2
    for num in range(1,number+1):
        for base in 'doXb':
            print '{0:{width}{base}}'.format(num, base=base, width=width),
        print

