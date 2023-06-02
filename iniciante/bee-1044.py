valores = str(input()).split()
ehMultiplo = False

num1 = int(valores[0])
num2 = int(valores[1])

if(num1 > num2):
    if(num1 % num2 == 0):
        ehMultiplo = True
else:
    if(num2 % num1 == 0):
        ehMultiplo = True

if(ehMultiplo):
    print('Sao Multiplos')
else:
    print('Nao sao Multiplos')