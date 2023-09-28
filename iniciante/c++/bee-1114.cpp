#include <iostream>

int main(){

    std::string senha;

    do{
        getline(std::cin, senha);

        if(senha == "2002"){
            std::cout << "Acesso Permitido" << std::endl;
        } else{
            std::cout << "Senha Invalida" << std::endl;
        }
    }while(senha != "2002");

    return 0;
}