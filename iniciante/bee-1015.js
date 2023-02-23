var input = require('fs').readFileSync('/home/lleandrok5/Documentos/MeusProjetos/beecrowd-problemas/iniciante/stdin', 'utf8');
var lines = input.split('\n');

let linha1 = lines.shift().split(' ')
let linha2 = lines.shift().split(' ')

let x1 = parseFloat(linha1[0])
    y1 = parseFloat(linha1[1])
    x2 = parseFloat(linha2[0])
    y2 = parseFloat(linha2[1])

let distancia = Math.sqrt((x2 - x1)**2 + (y2 - y1)**2)

console.log(distancia.toFixed(4))
