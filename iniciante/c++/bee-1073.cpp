#include <iostream>

int main(){

    int n;

    std::cin >> n;

    for(int i = 2; i < n+1; i = i + 2){
        std::cout << i << "^2 = " << i*i << std::endl;
    }

    return 0;
}