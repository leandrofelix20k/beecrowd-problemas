#include <iostream>
#include <iomanip>

int main(){

    std::cout << std::fixed << std::setprecision(1);

    float numeros, mediaPositivos = 0, somaPositivos = 0;
    int contPositivos = 0;

    for(int i = 0; i < 6; i++){
        std::cin >> numeros;

        if(numeros > 0){
            somaPositivos += numeros;
            contPositivos++;
        }
    }

    mediaPositivos = somaPositivos / contPositivos;

    std::cout << contPositivos << " valores positivos\n" << mediaPositivos << std::endl;

    return 0;
}