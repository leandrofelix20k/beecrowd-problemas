var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let idadeDias = parseInt(lines.shift())

let anos = parseInt(idadeDias / 365)
idadeDias = idadeDias % 365

let meses = parseInt(idadeDias / 30)
idadeDias = idadeDias % 30

let dias = idadeDias

console.log(`${anos} ano(s)\n${meses} mes(es)\n${dias} dia(s)`)
