var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let valores = lines.shift().split(' ')

let a = parseInt(valores[0])
    b = parseInt(valores[1])
    c = parseInt(valores[2])
    d = parseInt(valores[3])

if (b > c && d > a && c + d > a + b && c > 0 && d > 0 && a % 2 === 0){
    console.log('Valores aceitos')
} else{
    console.log('Valores nao aceitos')
}
