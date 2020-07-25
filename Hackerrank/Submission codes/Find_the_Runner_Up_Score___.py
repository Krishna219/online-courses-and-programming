if __name__ == '__main__':
    n = int(input())
    arr = map(int, input().split())

    arr = set(arr)
    m1 = max(arr)

    arr.remove(m1)
    print (max(arr))
    #print (max(set(arr).remove(max(set(arr)))))
