var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let tempoGasto = parseInt(lines.shift())
let velocidadeMedia = parseInt(lines.shift())

let litros = (tempoGasto * velocidadeMedia) / 12

console.log(litros.toFixed(3))