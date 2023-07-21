numeros = []
numerosPositivos = 0

for i in range(0, 6):
    num = float(input())
    numeros.append(num)

    if(numeros[i] > 0):
        numerosPositivos += 1

print(f'{numerosPositivos} valores positivos')