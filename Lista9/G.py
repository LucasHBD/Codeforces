def tautograma(f):
    f = f.lower()
    palavras = f.split()
    letra1 = palavras[0][0]
    for palavra in palavras:
        if palavra[0] != letra1:
            return False
    return True

while True:
    frase = str(input())
    if frase == "*":
        break
    if tautograma(frase):
        print("Y")
    else:
        print("N")
