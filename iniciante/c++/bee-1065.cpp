#include <iostream>

int main(){

    int num, nPares = 0;

    for(int i = 0; i < 5; i++){
        std::cin >> num;

        if(num % 2 == 0){
            nPares++;
        }
    }

    std::cout << nPares << " valores pares" << std::endl;

    return 0;
}