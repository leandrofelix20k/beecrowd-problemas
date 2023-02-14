var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let nome = lines.shift()
let salarioFixo = parseFloat(lines.shift())
let totalVendas = parseFloat(lines.shift())

let salarioTotal = salarioFixo + totalVendas * 0.15

console.log(`TOTAL = R$ ${salarioTotal.toFixed(2)}`)
