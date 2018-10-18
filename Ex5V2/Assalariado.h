#ifndef ASSALARIADO_H
#define ASSALARIADO_H

#include "Funcionario.h"

class Assalariado : public Funcionario
{
    public:
        Assalariado();
        Assalariado(std::string, int, double);
        void setSalario(double);
        double getSalario();
        double calcularSalario();

    private:
        double salario;
};

#endif // ASSALARIADO_H
