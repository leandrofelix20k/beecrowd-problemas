peca1 = str(input()).split()
peca2 = str(input()).split()

numPeca1 = float(peca1[1])
valorPeca1 = float(peca1[2])
numPeca2 = float(peca2[1])
valorPeca2 = float(peca2[2])

total = (numPeca1 * valorPeca1) + (numPeca2 * valorPeca2)

print('VALOR A PAGAR: R$ {:.2f}'.format(total))
