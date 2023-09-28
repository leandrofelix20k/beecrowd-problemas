#include <iostream>

int main(){

    int x, y;

    while(true){
        std::cin >> x >> y;

        if(x == y){
            break;
        } else if(x > y){
            std::cout << "Decrescente" << std::endl;
        } else if(x < y){
            std::cout << "Crescente" << std::endl;
        }
    }

    return 0;
}
