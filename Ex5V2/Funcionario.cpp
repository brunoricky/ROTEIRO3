#include "Funcionario.h"

Funcionario::Funcionario()
{
    //ctor
}

void Funcionario::setNome(std::string n)
{
    nome = n;
}

void Funcionario::setMatricula(int m)
{
    matricula = m;
}

std::string Funcionario::getNome()
{
    return nome;
}

int Funcionario::getMatricula()
{
    return matricula;
}
