var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let nota1 = parseFloat(lines.shift())
let nota2 = parseFloat(lines.shift())

let media = (nota1 * 3.5 + nota2 * 7.5) / 11

console.log(`MEDIA = ${media.toFixed(5)}`)
