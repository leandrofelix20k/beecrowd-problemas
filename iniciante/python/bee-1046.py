tempos = str(input()).split()

horaIncial = int(tempos[0])
horaFinal = int(tempos[1])

duracao = 0

if(horaIncial == horaFinal):
    duracao = 24
elif(horaIncial > horaFinal):
    duracao = 24 - horaIncial + horaFinal
elif(horaIncial < horaFinal):
    duracao = horaFinal - horaIncial

print('O JOGO DUROU {} HORA(S)'.format(duracao))