#include "ContaEspecial.h"

ContaEspecial::ContaEspecial()
{
    //ctor
}

ContaEspecial::ContaEspecial(std::string n, int c, double s, double sl, int li)
{
    nomeCliente = n;
    conta = c;
    saldo = s;
    salario = sl;
    limite = li;
}

double ContaEspecial::definirLimite()
{
    limite = salario*4;
    return limite;
}
