#include <iostream>

int main(){

    int n, valor, inItervalo = 0, outIntervalo = 0;

    std::cin >> n;

    for(int i = 0; i < n; i++){
        std::cin >> valor;

        if(valor >= 10 && valor <=20){
            inItervalo++;
        } else{
            outIntervalo++;
        }
    }

    std::cout << inItervalo << " in" << std::endl;
    std::cout << outIntervalo << " out" << std::endl;

    return 0;
}