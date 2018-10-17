#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H

#include <Conta.h>


class ContaCorrente : public Conta
{
    public:
        ContaCorrente();
        ContaCorrente(std::string,int,double,double,int); // Inicializa os 3 atributos da classe pai e os 2 da classe filha
        virtual double definirLimite();

        void setSalario(double s);
        void setLimite(int l);

        double getSalario();
        int getLimite();

    protected:
        double salario;
        int limite;

};

#endif // CONTACORRENTE_H
