#include <iostream>
#include "automovel.h"

using namespace std;

int main()
{  
    
    Carro *carro = new Carro();

    carro -> setJanelas(10);
    cout << carro -> getJanelas() << endl;

    Moto *moto = new Moto();

    cout << moto -> getJanelas() << endl;

    return 0;
}
