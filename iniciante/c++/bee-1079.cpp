#include <iostream>
#include <iomanip>

int main(){

    std::cout << std::fixed << std::setprecision(1);

    int n;

    std::cin >> n;

    float valores[n][3], media[n];

    for(int i = 0; i < n; i++){
        std::cin >> valores[i][0] >> valores[i][1] >> valores[i][2];
        media[i] = ((valores[i][0] * 2) + (valores[i][1] * 3) + (valores[i][2]* 5)) / 10.0;
    }

    for(int i = 0; i < n; i++){
        std::cout << media[i] << std::endl;
    }

    return 0;
}