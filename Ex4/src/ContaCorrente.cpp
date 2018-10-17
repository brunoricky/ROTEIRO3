#include "ContaCorrente.h"

ContaCorrente::ContaCorrente()
{
    //ctor
}

ContaCorrente::ContaCorrente(std::string n , int c, double s, double sl, int li)
{
     nomeCliente = n;
     conta = c;
     saldo = s;
     salario = sl;
     limite = li;
}

double ContaCorrente::definirLimite()
{
    limite = salario*2;
    return limite;
}

void ContaCorrente::setSalario(double s)
{
    salario = s;
}

void ContaCorrente::setLimite(int li)
{
    limite = li;
}

double ContaCorrente::getSalario()
{
    return salario;
}

int ContaCorrente::getLimite()
{
    return limite;
}
