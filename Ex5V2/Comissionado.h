#ifndef COMISSIONADO_H
#define COMISSIONADO_H

#include "Funcionario.h"

class Comissionado : public Funcionario
{
    public:
        Comissionado();
        Comissionado(std::string, int, double, double);
        double calcularSalario();
        void setVendasSemanais(double);
        void setPercentualComissao(double);
        void setSalarioBase(double);
        double getSalarioBase();
        double getVendasSemanais();
        double getPercentualComissao();

    private:
        double salarioBase;
        double vendasSemanais;
        double percentualComissao;
};

#endif // COMISSIONADO_H
