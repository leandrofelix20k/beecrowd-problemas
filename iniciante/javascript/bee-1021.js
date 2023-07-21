var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let valor = parseFloat(lines.shift())

let quantidadeNotas = 0
let notas = [100, 50, 20, 10, 5, 2]

let quantidadeMoedas = 0
let moedas = [1., 0.50, 0.25, 0.10, 0.05, 0.01]

console.log('NOTAS:')
let i = 0
while (true){
    while (valor >= notas[i]){
        valor -= notas[i]
        quantidadeNotas++
    }

    console.log(`${quantidadeNotas} nota(s) de R$ ${notas[i].toFixed(2)}`)
    quantidadeNotas = 0
    i++

    if (i > 5){
        break
    }
}

console.log('MOEDAS:')
let j = 0
while (true){
    while (valor >= moedas[j]){
        valor = (valor - moedas[j]) + 0.00001
        quantidadeMoedas++
    }

    console.log(`${quantidadeMoedas} moeda(s) de R$ ${moedas[j].toFixed(2)}`)
    quantidadeMoedas = 0
    j++

    if (j > 5){
        break
    }
}
