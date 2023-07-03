n, m = map(int, input().split())
ln = []
lm = []
while True:
    if (n == 0) and (m == 0):
        break
    for i in range(n):
        ln.append(n%10)
        soma_n = sum(ln)
        if soma_n > 9:
             ln.clear()
             ln.append(soma_n%10)
             soma_n = sum(ln)
    for i in range(m):
        lm.append(m%10)
        soma_m = sum(lm)
        if soma_m > 9:
             lm.clear()
             lm.append(soma_m%10)
             soma_m = sum(lm)
    if n>m:
        print(soma_n)
        break
    if m>n:
        print(soma_m)
        break