#include <iostream>
#include <string>

using namespace std;

int main(){

    string str;
    int dI, dF, hI, hF, mI, mF, sI, sF, dT, hT, mT, sT;

    cin >> str >> dI;
    cin >> hI >> str >> mI >> str >> sI;
    cin >> str >> dF;
    cin >> hF >> str >> mF >> str >> sF;

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

    cout << dT << " dia(s)" << endl;
    cout << hT << " hora(s)" << endl;
    cout << mT << " minuto(s)" << endl;
    cout << sT << " segundo(s)" << endl;

    return 0;
}

