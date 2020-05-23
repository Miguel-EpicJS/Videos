#include <iostream>

using namespace std;

class Automovel
{
    protected:
        int rodas;
        int janelas;
        float combustivel;
        float velocidade;
        bool ligado;
    public:
        

        void setRodas(int rodas)
        {
            this -> rodas = rodas;
        }
        void setJanelas(int janelas)
        {
            this -> janelas = janelas;
        }
        void setCombustivel(float cb)
        {
            this -> combustivel = cb;
        }
        void setVelocidade(float vel)
        {
            this -> velocidade = vel;
        }
        void setLigado(bool lig)
        {
            this -> ligado = lig; 
        }

        int getRodas()
        {
            return rodas;
        }
        int getJanelas()
        {
            return janelas;
        }
        float getCombustivel()
        {
            return combustivel;
        }
        float getVelocidade()
        {
            return velocidade;
        }
        bool getLigado()
        {
            return ligado;
        }

};


class Carro : public Automovel
{
    public:
        Carro();
        
};

Carro :: Carro()
{
    rodas =4;
    janelas = 4;
    combustivel = 10.0;
    velocidade = 0;
    ligado = false;
}

class Moto :public Automovel
{
    public:
        Moto();
};

Moto :: Moto()
{
    rodas =24;
    janelas = 36;
    combustivel = 0.0;
    velocidade = 1000000;
    ligado = ligado;
}

