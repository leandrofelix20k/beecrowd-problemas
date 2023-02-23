var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let distanciaTotal = parseInt(lines.shift())
let combustivelGasto = parseFloat(lines.shift())

let consumoMedio = distanciaTotal / combustivelGasto

console.log(`${consumoMedio.toFixed(3)} km/l`)
