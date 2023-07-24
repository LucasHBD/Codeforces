n, p = map(int, input(). split())
qtd = 0

for i in range(n):
    a, b = map(int, input().split())
    if a+b >= p:
        qtd  += 1
print(qtd)
