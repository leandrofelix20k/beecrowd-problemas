#include <iostream>

void exibeIntervalo(int x, int y);

int main(){

    int m, n;

    while(true){
        std::cin >> m >> n;

        if(m <= 0 || n <= 0){
            break;
        }
         exibeIntervalo(m, n);
    }

    return 0;
}

void exibeIntervalo(int x, int y){

    int maior, menor, soma = 0;

    if(x > y){
        maior = x;
        menor = y;
    } else if(y > x){
        maior = y;
        menor = x;
    }

    for(int i = menor; i <= maior; i++){
        std::cout << i << " ";

        soma += i;
    }

    std::cout << "Sum=" << soma << std::endl;
}