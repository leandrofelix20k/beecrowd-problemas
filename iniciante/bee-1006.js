var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let nota1 = parseFloat(lines.shift())
let nota2 = parseFloat(lines.shift())
let nota3 = parseFloat(lines.shift())

let media = (nota1 * 2 + nota2 * 3 + nota3 * 5) / 10

console.log(`MEDIA = ${media.toFixed(1)}`)
