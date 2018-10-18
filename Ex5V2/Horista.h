#ifndef HORISTA_H
#define HORISTA_H

#include "Funcionario.h"

class Horista : public Funcionario
{
    public:
        Horista();
        Horista(std::string, int, double, double, double);
        void setSalarioPorHora(double);
        void setHorasTrabalhadas(double);
        void setSalarioBase(double);
        double getSalarioPorHora();
        double getHorasTrabalhadas();
        double getSalarioBase();
        double calcularSalario();

    private:
        double salarioBase;
        double salarioPorHora;
        double horasTrabalhadas;
};

#endif // HORISTA_H
