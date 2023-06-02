valores = str(input()).split()
ehTriangulo = False

ladoA = float(valores[0])
ladoB = float(valores[1])
ladoC = float(valores[2])

if(ladoA < (ladoB + ladoC)):
    if(ladoB < (ladoA + ladoC)):
        if(ladoC < (ladoA + ladoB)):
            ehTriangulo = True

if(ehTriangulo):
    perimetroTriangulo = ladoA + ladoB + ladoC
    print('Perimetro = {:.1f}'.format(perimetroTriangulo))
else:
    areaTrapezio = ((ladoA + ladoB) * ladoC) / 2
    print('Area = {:.1f}'.format(areaTrapezio))
