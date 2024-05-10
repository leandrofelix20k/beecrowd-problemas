#include <iostream>
#include <iomanip>

int main(){

    std::cout << std::fixed << std::setprecision(1);

    int n, num1, num2;
    float divisao;

    std::cin >> n;

    for(int i = 0; i < n; i++){
        std::cin >> num1 >> num2;

        if(num2 == 0){
            std::cout << "divisao impossivel" << std::endl;
        } else{
            divisao = static_cast<float>(num1) / static_cast<float>(num2);
            std::cout << divisao << std::endl;
        }
    }

    return 0;
}