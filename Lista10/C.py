def contar_rep(sequencia):
    maior_tamanho = 0
    tamanho_atual = 0
    letra_anterior = None

    for letra in sequencia:
        if letra == letra_anterior:
            tamanho_atual += 1
        else:
            if tamanho_atual > maior_tamanho:
                maior_tamanho = tamanho_atual
            tamanho_atual = 1
        letra_anterior = letra
    if tamanho_atual > maior_tamanho:
        maior_tamanho = tamanho_atual
    
    return maior_tamanho

n = input()
print(contar_rep(n))
