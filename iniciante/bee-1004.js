var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let numero1 = parseInt(lines.shift())
let numero2 = parseInt(lines.shift())

let produto = numero1 * numero2

console.log(`PROD = ${produto}`)
