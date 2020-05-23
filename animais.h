#include <iostream>

using namespace std;

class Animal
{
    protected:
        string nome;
        int idade;
        string cor;
        bool dormindo;
};

class Cachorro: public Animal
{
    public:
        Cachorro();
        bool pelo;
        void mostrar()
        {
            cout << nome << endl;
            cout << idade << endl;
            cout << cor << endl;
            cout << dormindo << endl;
            cout << pelo << endl;
        }
};

Cachorro::Cachorro()
{
    nome = "rex";
    idade = 2;
    cor = "azul";
    dormindo = false;
    pelo = true;
}

