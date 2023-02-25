var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let valor = parseInt(lines.shift())
let valorPrint = valor

let cedulas = {cem: 0, cinquenta: 0, vinte: 0, dez: 0, cinco: 0, dois: 0, um: 0}

while(true){
    if (valor >= 100){
        cedulas.cem++
        valor -= 100
    } else if (valor >= 50){
        cedulas.cinquenta++
        valor -= 50
    } else if (valor >= 20){
        cedulas.vinte++
        valor -= 20
    } else if (valor >= 10){
        cedulas.dez++
        valor -= 10
    } else if (valor >= 5){
        cedulas.cinco++
        valor -= 5
    } else if (valor >= 2){
        cedulas.dois++
        valor -= 2
    } else if (valor >= 1){
        cedulas.um++
        valor -= 1
    } else{
        break
    }
}
console.log(valorPrint)
console.log(`${cedulas.cem} nota(s) de R$ 100,00`)
console.log(`${cedulas.cinquenta} nota(s) de R$ 50,00`)
console.log(`${cedulas.vinte} nota(s) de R$ 20,00`)
console.log(`${cedulas.dez} nota(s) de R$ 10,00`)
console.log(`${cedulas.cinco} nota(s) de R$ 5,00`)
console.log(`${cedulas.dois} nota(s) de R$ 2,00`)
console.log(`${cedulas.um} nota(s) de R$ 1,00`)
