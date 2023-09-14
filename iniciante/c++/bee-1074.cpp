#include <iostream>

int main(){

    int quantidade, numeros;

    std::cin >> quantidade;

    for(int i = 0; i < quantidade; i++){
        std::cin >> numeros;

        if(numeros == 0){
            std::cout << "NULL" << std::endl;
        } else{
            if(numeros % 2 == 0){
            std::cout << "EVEN ";
            } else{
                std::cout << "ODD ";
            }

            if(numeros > 0){
                std::cout << "POSITIVE" << std::endl;
            } else{
                std::cout << "NEGATIVE" << std::endl;
            }
        }
    }

    return 0;
}