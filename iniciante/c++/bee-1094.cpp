#include <iostream>
#include <iomanip>

int main(){

    int nCasos, quantidade;
    float qtCoelhos = 0, qtRatos = 0, qtSapos = 0, total = 0;
    float percentCoelhos, percentRatos, percentSapos;
    char tipoCobaia;

    std::cin >> nCasos;

    for(int i = 0; i < nCasos; i++){
        std::cin >> quantidade >> tipoCobaia;

        switch(tipoCobaia){
            case 'C':
                qtCoelhos += quantidade;
                break;
            case 'R':
                qtRatos += quantidade;
                break;
            case 'S':
                qtSapos += quantidade;
                break;
        }

        total += quantidade;
    }

    percentCoelhos = (qtCoelhos / total) * 100;
    percentRatos = (qtRatos / total) * 100;
    percentSapos = (qtSapos / total) * 100;

    std::cout << "Total: " << total << " cobaias" << std::endl;
    std::cout << "Total de coelhos: " << qtCoelhos << std::endl;
    std::cout << "Total de ratos: " << qtRatos << std::endl;
    std::cout << "Total de sapos: " << qtSapos << std::endl;

    std::cout << std::fixed << std::setprecision(2);

    std::cout << "Percentual de coelhos: " << percentCoelhos << " %" << std::endl;
    std::cout << "Percentual de ratos: " << percentRatos << " %" << std::endl;
    std::cout << "Percentual de sapos: " << percentSapos << " %" << std::endl;

    return 0;
}