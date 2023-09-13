#include <iostream>

int main(){

    int num;

    std::cin >> num;

    for(int i = 1; i < num+1; i++){
        if(i % 2 != 0){
            std::cout << i << std::endl;
        }
    }

    return 0;
}