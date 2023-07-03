n = int(input())
l1 = []
qtd = 0
for i in range(n):
    x = int(input())
    l1.append(x)
media = sum(l1)//len(l1)
for i in range(len(l1)):
    prc = media*0.1
    acima = media + prc
    abaixo = media - prc
    if (l1[i]<acima) and (l1[i]>abaixo):
        qtd +=1
print(media)
print(qtd)