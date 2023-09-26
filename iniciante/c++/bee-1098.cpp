#include <iostream>

int main(){

    float i = 0, j = 1;

    do{
        std::cout << "I=" << i << " J=" << j << std::endl;
        std::cout << "I=" << i << " J=" << j+1 << std::endl;
        std::cout << "I=" << i << " J=" << j+2 << std::endl;

        i += 0.2;
        j += 0.2;
    } while(i < 2.2);

    return 0;
}