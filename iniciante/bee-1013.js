var input = require('fs').readFileSync('/home/lleandrok5/Documentos/MeusProjetos/beecrowd-problemas/iniciante/stdin', 'utf8');
var lines = input.split('\n');

let linha = lines.shift().split(' ')
let numeros = []

for(i=0; i<3; i++){
    numeros.push(Number(linha[i]))
}

let maiorAB = (numeros[0] + numeros[1] + Math.abs(numeros[0] - numeros[1])) / 2
let maiorFinal = (maiorAB + numeros[2] + Math.abs(maiorAB - numeros[2])) / 2

console.log(`${maiorFinal} eh o maior`)
