var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let linha1 = lines.shift().split(' ')
let linha2 = lines.shift().split(' ')

let codPeca1 = Number(linha1[0])
    numPecas1 = Number(linha1[1])
    valorPeca1 = Number(linha1[2])

let codPeca2 = Number(linha2[0])
    numPecas2 = Number(linha2[1])
    valorPeca2 = Number(linha2[2])

let valorTotal = (numPecas1 * valorPeca1) + (numPecas2 * valorPeca2)

console.log(`VALOR A PAGAR: R$ ${valorTotal.toFixed(2)}`)