def calculaImpostoRenda(x):
    resto = 0
    impostoTotal = 0
    
    if(x > 4500):
        resto = x - 4500
        impostoTotal = resto * 0.28
        x = x - resto
    if(x > 3000):
        resto = x - 3000
        impostoTotal = impostoTotal + (resto * 0.18)
        x = x - resto
    if(x > 2000):
        resto = x - 2000
        impostoTotal = impostoTotal + (resto * 0.08)
        x = x - resto

    return impostoTotal


renda = float(input())

if(renda <= 2000):
    print('Isento')
else:
    print(f'R$ {calculaImpostoRenda(renda):.2f}')
