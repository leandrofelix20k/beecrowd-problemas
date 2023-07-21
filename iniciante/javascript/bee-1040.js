var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let notas = lines.shift().split(' ')

let pesos = [2, 3, 4, 1]

let soma = 0
for (i = 0; i < 4; i++){
    soma += (parseFloat(notas[i]) * pesos[i])
}

let media = soma / 10

if (media >= 7.0){
    console.log(`Media: ${media.toFixed(1)}\nAluno aprovado.`)
} else if(media < 5.0){
    console.log(`Media: ${media.toFixed(1)}\nAluno reprovado.`)
} else if (media >= 5.0 && media <= 6.9){
    console.log(`Media: ${media.toFixed(1)}\nAluno em exame.`)

    let notaExame = parseFloat(lines.shift())
    media = (media + notaExame) / 2
    console.log(`Nota do exame: ${notaExame.toFixed(1)}`)

    if (media >= 5.0){
        console.log('Aluno aprovado.')
    } else{
        console.log('Aluno reprovado.')
    }
    console.log(`Media final: ${media.toFixed(1)}`)
}
