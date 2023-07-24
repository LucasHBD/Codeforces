n = int(input())
l1 = []
p = int(input())
l2 = []
qtd = 0

for i in range(n):
    x = int(input())
    l1.append(x)
for j in range(p):
    y = int(input())
    l2.append(y)

for a in range(len(l1)):
    for b in range(len(l2)):
        if l1[i] > 0:
            valor = l1[l2[i-1]] - 1
            qtd +=1
        if l1[i] == 0:
            qtd == qtd
print(qtd)