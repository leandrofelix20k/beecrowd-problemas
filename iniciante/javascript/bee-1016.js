var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let distancia = parseInt(lines.shift())

let diferençaMinutos = distancia * 2

console.log(`${diferençaMinutos} minutos`)
