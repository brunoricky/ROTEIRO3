#include "Horista.h"

Horista::Horista()
{
    //ctor
}

Horista::Horista(std::string n, int m, double sb, double sph, double ht)
{
    nome = n;
    matricula = m;
    salarioBase = sb;
    salarioPorHora = sph;
    horasTrabalhadas = ht;
}

void Horista::setSalarioPorHora(double sph)
{
    salarioPorHora = sph;
}

void Horista::setHorasTrabalhadas(double ht)
{
    horasTrabalhadas = ht;
}

void Horista::setSalarioBase(double sl){
    salarioBase = sl;
}

double Horista::getSalarioBase(){
    return salarioBase;
}

double Horista::getSalarioPorHora()
{
    return salarioPorHora;
}

double Horista::getHorasTrabalhadas()
{
    return horasTrabalhadas;
}

double Horista::calcularSalario()
{
    int resto;

    if(horasTrabalhadas <= 40) return salarioBase;
    else if(horasTrabalhadas>40){
        resto = horasTrabalhadas-40;
        return salarioBase + resto*salarioPorHora;
    }
}
