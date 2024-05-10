#include <iostream>
#include <iomanip>

float calcularNotas(float m);
void verificarOpcao(int *op);

int main(){

    std::cout << std::fixed << std::setprecision(2);

    int op;
    float media;

    do{
        media = 0;
        media = calcularNotas(media);
        std::cout << "media = " << media << std::endl;

        std::cout << "novo calculo (1-sim 2-nao)" << std::endl;
        std::cin >> op;

        verificarOpcao(&op);

    } while(op == 1);

    return 0;
}

float calcularNotas(float m){
    int cont = 0;
    float notas;

    do{
        std::cin >> notas;

        if(notas >= 0 && notas <= 10){
            m += notas;
            cont++;
        } else{
            std::cout << "nota invalida" << std::endl;
        }
    } while(cont < 2);

    return m / 2;
}

void verificarOpcao(int *op){
    while(*op != 1 && *op != 2){
        std::cout << "novo calculo (1-sim 2-nao)" << std::endl;
        std::cin >> *op;
    }
}