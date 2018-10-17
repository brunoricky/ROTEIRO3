#include "Poupanca.h"

Poupanca::Poupanca()
{

}

Poupanca::Poupanca(std::string n, int c, double s, int v, double t)
{
    nomeCliente = n;
    conta = c;
    saldo = s;
    variacao = v;
    taxa = t;
}

double Poupanca::render()
{
    if(variacao==51) saldo = saldo + (saldo*taxa);
    else if(variacao==1) saldo = saldo + (saldo*(taxa+(0.005*taxa)));
}

void Poupanca::setVariacao(int v)
{
    variacao = v;
}

void Poupanca::setTaxa(int t)
{
    taxa = t;
}

int Poupanca::getVariacao()
{
    return variacao;
}

int Poupanca::getTaxa()
{
    return taxa;
}
