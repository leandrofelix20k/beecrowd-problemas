#include <iostream>

void indentificaQuadrante(int x, int y);

int main(){

    int x, y;

    while(true){
        std::cin >> x >> y;

        if(x == 0 || y == 0){
            break;
        }

        indentificaQuadrante(x, y);
    }

    return 0;
}

void indentificaQuadrante(int x, int y){
    
    if(x > 0 && y > 0){
        std::cout << "primeiro" << std::endl;
    } else if(x < 0 && y > 0){
        std::cout << "segundo" << std::endl;
    } else if( x < 0 && y < 0){
        std::cout << "terceiro" << std::endl;
    } else if(x > 0 && y < 0){
        std::cout << "quarto" << std::endl;
    }
}