#include <iostream>

int somaIntervalo(int x, int y);

int main(){

    int n, num1, num2, res;

    std::cin >> n;

    for(int i = 0; i < n; i++){
        std::cin >> num1 >> num2;

        res = somaIntervalo(num1, num2);
        std::cout << res << std::endl;
    }

    return 0;
}

int somaIntervalo(int x, int y){
    
    int soma = 0, maior, menor;

    if(x > y){
        maior = x;
        menor = y;
    } else if(y > x){
        maior = y;
        menor = x;
    } else{
        return 0;
    }

    for(int i = menor+1; i < maior; i++){
        if(i % 2){
            soma += i;
        }
    }

    return soma;
}