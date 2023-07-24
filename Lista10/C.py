def contar_rep(texto):
    qtd = {}

    for letra in texto:
        if letra.isalpha():
            letra = letra.upper()
            qtd[letra] = qtd.get(letra, 0) + 1
    if not qtd:
        return 0
    max_rep = max(qtd.values())
    return max_rep

n = input()
print(contar_rep(n))