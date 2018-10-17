#ifndef CONTA_H
#define CONTA_H
#include "string"
#include "IConta.h"
#include <iostream>

using namespace std;

class Conta : public IConta
{
    public:
        Conta();
        Conta(std::string ,double ,int ,double );
        void sacar(double valor);
        void depositar(double valor);
        void setNomeCliente(std::string);
        void setSalarioMensal(double);
        void setNumeroConta(int);
        void setSaldo(double);
        void setLimite(double);
        void defLimite(double);
        std::string getNomeCliente();
        double getSalarioMensal();
        int getNumeroConta();
        double getSaldo();
        double getLimite();

    protected:
        std::string nomeCliente;
        double salarioMensal;
        int numeroConta;
        double saldo;
        double limite;
};

#endif // CONTA_H
