if __name__ == '__main__':
    s = raw_input()

    print True in [ch.isalnum() for ch in s]
    print True in [ch.isalpha() for ch in s]
    print True in [ch.isdigit() for ch in s]
    print True in [ch.islower() for ch in s]
    print True in [ch.isupper() for ch in s]
