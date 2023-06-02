valores = str(input()).split()
ehTriangulo = False
lados = []

for i in range(0, 3):
    lados.append(float(valores[i]))

lados = sorted(lados)

ladoA = lados[2]
ladoB = lados[1]
ladoC = lados[0]

if(ladoA >= (ladoB + ladoC)):
    print('NAO FORMA TRIANGULO')
else:
    if(ladoA**2 == ladoB**2 + ladoC**2):
        print('TRIANGULO RETANGULO')
    if(ladoA**2 > ladoB**2 + ladoC**2):
        print('TRIANGULO OBTUSANGULO')
    if(ladoA**2 < ladoB**2 + ladoC**2):
        print('TRIANGULO ACUTANGULO')
    if(ladoA == ladoB == ladoC):
        print('TRIANGULO EQUILATERO')
    elif(ladoA == ladoB or ladoB == ladoC):
        print('TRIANGULO ISOSCELES')

    