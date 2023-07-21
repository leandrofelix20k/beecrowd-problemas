var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let valores = lines.shift().split(' ')

let a = parseFloat(valores[0])
    b = parseFloat(valores[1])
    c = parseFloat(valores[2])

let discriminante = b**2 - 4*a*c

if (discriminante < 0 || a == 0){
    console.log('Impossivel calcular')
} else{
    let x1 = (-b + Math.sqrt(discriminante)) / (2*a)
    let x2 = (-b - Math.sqrt(discriminante)) / (2*a)

    console.log(`R1 = ${x1.toFixed(5)}`)
    console.log(`R2 = ${x2.toFixed(5)}`)
}
