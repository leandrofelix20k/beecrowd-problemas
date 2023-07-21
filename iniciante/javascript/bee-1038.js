var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let valores = lines.shift().split(' ')

let codigo = parseInt(valores[0])
let quantidade = parseInt(valores[1])

let produtos = [[1, 4.00], [2, 4.50], [3, 5.00], [4, 2.00], [5, 1.50]]

let total = produtos[codigo-1][1] * quantidade

console.log(`Total: R$ ${total.toFixed(2)}`)
