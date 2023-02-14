var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let raio  = parseFloat(lines.shift())
let area = 3.14159 * (raio * raio)

console.log(`A=${area.toFixed(4)}`)
