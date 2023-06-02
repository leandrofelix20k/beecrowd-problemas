tempos = str(input()).split()

horaIncial = int(tempos[0])
minutoInicial = int(tempos[1])
horaFinal = int(tempos[2])
minutoFinal = int(tempos[3])

duracaoHoras = 0
duracaoMinutos = 0

if(horaIncial == horaFinal):
    duracaoHoras = 24
elif(horaIncial > horaFinal):
    duracaoHoras = 24 - horaIncial + horaFinal
elif(horaIncial < horaFinal):
    duracaoHoras = horaFinal - horaIncial

if(minutoInicial == minutoFinal):
    duracaoMinutos = 0
elif(minutoInicial > minutoFinal):
    duracaoMinutos = 60 - (minutoInicial - minutoFinal)
    duracaoHoras = duracaoHoras - 1
elif(minutoInicial < minutoFinal):
    duracaoMinutos = minutoFinal - minutoInicial

print('O JOGO DUROU {} HORA(S) E {} MINUTO(S)'.format(duracaoHoras, duracaoMinutos))