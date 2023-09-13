#include <iostream>

int somaImparesIntervalo(int x, int y);

int main(){

    int num1, num2, soma=0;

    std::cin >> num1 >> num2;

    if(num1 > num2){
        soma = somaImparesIntervalo(num1, num2);
    } else if(num2 > num1){
        soma = somaImparesIntervalo(num2, num1);
    } else{
        soma = 0;
    }

    std::cout << soma << std::endl;

    return 0;
}

int somaImparesIntervalo(int x, int y){
    int s = 0;

    for(int i = y+1; i < x; ++i){
        if(i % 2 != 0){
            s += i;
        }
    }

    return s;
}