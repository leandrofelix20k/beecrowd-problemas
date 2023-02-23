var input = require('fs').readFileSync('/home/lleandrok5/Documentos/MeusProjetos/beecrowd-problemas/iniciante/stdin', 'utf8');
var lines = input.split('\n');

let distancia = parseInt(lines.shift())

let diferençaMinutos = distancia * 2

console.log(`${diferençaMinutos} minutos`)
