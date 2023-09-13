#include <iostream>

int main(){

    int num, nPares=0, nImpares=0, nPositivos=0, nNegativos=0;

    for(int i = 0; i < 5; i++){
        std::cin >> num;

        if(num % 2 == 0){
            nPares++;
        } else{
            nImpares++;
        }

        if(num > 0){
            nPositivos++;
        } else if(num < 0){
            nNegativos++;
        }
    }

    std::cout << nPares << " valor(es) par(es)" << std::endl;
    std::cout << nImpares << " valor(es) impar(es)" << std::endl;
    std::cout << nPositivos << " valor(es) positivo(s)" << std::endl;
    std::cout << nNegativos << " valor(es) negativo(s)" << std::endl;


    return 0;
}