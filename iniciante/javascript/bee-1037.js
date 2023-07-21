var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let numero = parseFloat(lines.shift())

if (numero >= 0.00 && numero <= 25.00){
    console.log('Intervalo [0,25]')
} else if (numero > 25.00 && numero <= 50.00){
    console.log('Intervalo (25,50]')
} else if (numero > 50.00 &&numero <= 75.00){
    console.log('Intervalo (50,75]')
} else if (numero > 75.00 &&numero <= 100.00){
    console.log('Intervalo (75,100]')
} else{
    console.log('Fora de intervalo')
}
