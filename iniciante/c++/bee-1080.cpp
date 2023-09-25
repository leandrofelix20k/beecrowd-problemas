#include <iostream>

int main(){

    int n, maior, pos;

    for(int i = 1; i <= 100; i++){
        std::cin >> n;

        if(i == 1){
            maior = n;
            pos = n;
        } else{
            if(n > maior){
                maior = n;
                pos = i;
            }
        }
    }

    std::cout << maior << std::endl << pos << std::endl;

    return 0;
}