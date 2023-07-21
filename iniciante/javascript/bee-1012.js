var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let valores = lines.shift().split(' ')

const pi = 3.14159
let a = parseFloat(valores[0])
    b = parseFloat(valores[1])
    c = parseFloat(valores[2])

let areaTriangulo = (a * c) / 2
    areaCirculo = pi * (c**2)
    areaTrapezio = ((a + b) * c) / 2
    areaQuadrado = b**2
    areaRetangulo = a * b

console.log(`TRIANGULO: ${areaTriangulo.toFixed(3)}`)
console.log(`CIRCULO: ${areaCirculo.toFixed(3)}`)
console.log(`TRAPEZIO: ${areaTrapezio.toFixed(3)}`)
console.log(`QUADRADO: ${areaQuadrado.toFixed(3)}`)
console.log(`RETANGULO: ${areaRetangulo.toFixed(3)}`)
