var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

const pi = 3.14159
let raio = parseFloat(lines.shift())

let volume = (4/3.0) * pi * (raio**3)

console.log(`VOLUME = ${volume.toFixed(3)}`)