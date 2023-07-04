x, y, z = map(int, input().split())

if (x>0) and (y<0):
    print(abs(x))
elif (x>0) and (y>0):
    if(x<y):
        print(abs(x))
    else:
        if (z<y) and (z>x):
            print(abs(x))
        if (z<y) and (z<x):
            d = abs(((x+z)+x)+y)
            print(d)
        if (z>y):
            print(-1)
elif (x<0) and (y<0):
    if(x>y):
        print(abs(x))
    else:
        if (z<y):
            print(-1)
        if (z>y) and (z>x):
            print(abs(x))
        if (z>0):
            d = abs(((x+z)+x)+y)
            print(d)
if (x<0) and (y>0):
    print(abs(x))