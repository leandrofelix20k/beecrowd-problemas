salario = float(input())

if(salario <= 400):
    percentualAjuste = 15
    ajusteSalarial = salario * (percentualAjuste / 100)
    novoSalario = salario + ajusteSalarial
elif(salario <= 800):
    percentualAjuste = 12
    ajusteSalarial = salario * (percentualAjuste / 100)
    novoSalario = salario + ajusteSalarial
elif(salario <= 1200):
    percentualAjuste = 10
    ajusteSalarial = salario * (percentualAjuste / 100)
    novoSalario = salario + ajusteSalarial
elif(salario <= 2000):
    percentualAjuste = 7
    ajusteSalarial = salario * (percentualAjuste / 100)
    novoSalario = salario + ajusteSalarial
else:
    percentualAjuste = 4
    ajusteSalarial = salario * (percentualAjuste / 100)
    novoSalario = salario + ajusteSalarial

print('Novo salario: {:.2f}'.format(novoSalario))
print('Reajuste ganho: {:.2f}'.format(ajusteSalarial))
print('Em percentual: {} %'.format(percentualAjuste))