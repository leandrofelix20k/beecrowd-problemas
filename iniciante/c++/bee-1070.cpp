#include <iostream>

int main(){

    int n, cont=0;

    std::cin >> n;

    while(cont < 6){
        if(n % 2 != 0){
            std::cout << n << std::endl;

            cont ++;
        }
        n++;
    }

    return 0;
}