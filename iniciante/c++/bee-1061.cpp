#include <iostream>
#include <string>

int main(){

    std::string str;
    int dI, dF, hI, hF, mI, mF, sI, sF, dT, hT, mT, sT;

    std::cin >> str >> dI;
    std::cin >> hI >> str >> mI >> str >> sI;
    std::cin >> str >> dF;
    std::cin >> hF >> str >> mF >> str >> sF;

    dT = dF - dI;
    hT = hF - hI;
    mT = mF - mI;
    sT = sF - sI;

    if(sT < 0){
        sT += 60;
        mT--;
    }

    if(mT < 0){
        mT += 60;
        hT--;
    }

    if(hT < 0){
        hT += 24;
        dT--;
    }

    std::cout << dT << " dia(s)" << std::endl;
    std::cout << hT << " hora(s)" << std::endl;
    std::cout << mT << " minuto(s)" << std::endl;
    std::cout << sT << " segundo(s)" << std::endl;

    return 0;
}

