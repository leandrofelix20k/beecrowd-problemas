var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let duracaoSegundos = parseInt(lines.shift())

let horas = parseInt(duracaoSegundos / (60 * 60))
duracaoSegundos = duracaoSegundos % (60 * 60)

let minutos = parseInt(duracaoSegundos / 60)
duracaoSegundos = duracaoSegundos % 60

let segundos = duracaoSegundos

console.log(`${horas}:${minutos}:${segundos}`)
