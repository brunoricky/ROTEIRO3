#ifndef CONTA_H
#define CONTA_H
#include <string>
#include <iostream>
#include <stdio.h>

using namespace std;

class Conta
{
    public:
        Conta();
        Conta(std::string, int, double);
        void sacar(double valor);
        void depositar(double valor);
        void setNomeCliente(std::string);
        void setConta(int);
        void setSaldo(double);
        std::string getNomeCliente();
        int getConta();
        double getSaldo();

    protected:
        std::string nomeCliente;
        int conta;
        double saldo;
};

#endif // CONTA_H
