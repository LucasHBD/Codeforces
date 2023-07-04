n, k, l, r = map(int, input().split())

div = k/n

if (div < l) or (div > r):
    print("N")
else:
    print("S")