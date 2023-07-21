animaisVertebrados = []
animaisInvertebrados = []

reinoAnimal = str(input()).strip()
classe = str(input()).strip()
tipo = str(input()).strip()

ave = {'carnivoro':'aguia',
       'onivoro':'pomba'}
mamifero = {'onivoro':'homem',
            'herbivoro':'vaca'}
inseto = {'hematofago':'pulga',
          'herbivoro':'lagarta'}
anelideo = {'hematofago':'sanguessuga',
            'onivoro':'minhoca'}

animaisVertebrados.append(ave)
animaisVertebrados.append(mamifero)
animaisInvertebrados.append(inseto)
animaisInvertebrados.append(anelideo)

if(reinoAnimal == 'vertebrado'):
    if(classe == 'ave'):
        print(animaisVertebrados[0][tipo])
    else:
        print(animaisVertebrados[1][tipo])
else:
    if(classe == 'inseto'):
        print(animaisInvertebrados[0][tipo])
    else:
        print(animaisInvertebrados[1][tipo])