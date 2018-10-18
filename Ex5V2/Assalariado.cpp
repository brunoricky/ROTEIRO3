#include "Assalariado.h"

Assalariado::Assalariado()
{
    //ctor
}

Assalariado::Assalariado(std::string n, int m, double s)
{
    nome = n;
    matricula = m;
    salario = s;
}

void Assalariado::setSalario(double s){
    salario = s;
}

double Assalariado::getSalario(){
    return salario;
}

double Assalariado::calcularSalario(){
    return salario;
}
