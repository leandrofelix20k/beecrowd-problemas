#include <iostream>
#include <iomanip>

int main(){
    std::cout << std::fixed << std::setprecision(2);

    float notas, media = 0;
    int cont = 0;

    while(cont < 2){
        std::cin >> notas;

        if(notas >= 0 && notas <= 10){
            media += notas;

            cont ++;
        } else{
            std::cout << "nota invalida" << std::endl;
        }
    }

    media /= 2;

    std::cout << "media = " << media << std::endl;

    return 0;
}