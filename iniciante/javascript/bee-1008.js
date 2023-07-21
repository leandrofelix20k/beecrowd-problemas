var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let numFuncionario = parseInt(lines.shift())
let horasTrabalhadas = parseInt(lines.shift())
let salario = parseFloat(lines.shift())

console.log(`NUMBER = ${numFuncionario}`)
console.log(`SALARY = U$ ${(salario * horasTrabalhadas).toFixed(2)}`)
