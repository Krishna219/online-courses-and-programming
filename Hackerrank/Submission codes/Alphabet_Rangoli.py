from string import ascii_lowercase


def print_rangoli(size):
    # your code goes here
    #print ascii_lowercase

    LETTERS = ascii_lowercase

    #for index, letter in enumerate(ascii_lowercase, start=1):
    #    LETTERS[index] = letter
    
    #print LETTERS
    s = LETTERS[0:size]
    s = s[::-1]

    #for val in range(size):
    #    l = (s[val:] + '-').rjust(2 * (size - 1),'-')
    #    c = s[val]
    #    r = ('-' + s[val:]).ljust(2 * (size - 1),'-')

        #print l + c + r
    #print size, size-1, 2*size, 2*(size-1)

    for val in range(size):
        temps = s[0:val+1]
        #print temps, temps[:-1], temps[:-1][::-1]
        ls = "-".join(list(temps[:-1])).rjust(2*size - 3,'-')
        c = "-" + temps[val] + "-"
        rs = "-".join(list(temps[:-1][::-1])).ljust(2*size - 3,'-')
        print ls + c + rs

    for val in range(size - 1, 0, -1):
        temps = s[0:val]
        #print temps, temps[:-1], temps[:-1][::-1]
        ls = "-".join(list(temps[:-1])).rjust(2*size - 3,'-')
        c = "-" + temps[val-1] + "-"
        rs = "-".join(list(temps[:-1][::-1])).ljust(2*size - 3,'-')
        print ls + c + rs

