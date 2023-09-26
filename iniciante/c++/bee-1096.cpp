#include <iostream>

int main(){

    int i = 1, j = 7;

    do{
        std::cout << "I=" << i << " J=" << j << std::endl;
        std::cout << "I=" << i << " J=" << j-1 << std::endl;
        std::cout << "I=" << i << " J=" << j-2 << std::endl;

        i += 2;
    } while(i <= 9);

    return 0;
}