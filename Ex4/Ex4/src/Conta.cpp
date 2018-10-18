#include "Conta.h"

Conta::Conta()
{

}

Conta::Conta(std::string n, int c, double s)
{
    nomeCliente = n;
    conta = c;
    saldo = s;
}

void Conta::sacar(double valor)
{
    if(valor>saldo) cout << "Saldo insuficiente" << endl;
    else{
        saldo = saldo-valor;
        cout << "Valor sacado: " << valor << endl;
        cout << "Saldo atual: " << saldo << endl;
    }
}

void Conta::depositar(double valor)
{
    saldo = saldo+valor;
    cout << "Saldo atual: " << saldo << endl;
}

void Conta::setNomeCliente(std::string n)
{
    nomeCliente = n;
}

void Conta::setConta(int c)
{
    conta = c;
}

void Conta::setSaldo(double s)
{
    saldo = s;
}

string Conta::getNomeCliente()
{
    return nomeCliente;
}

int Conta::getConta()
{
    return conta;
}

double Conta::getSaldo()
{
    return saldo;
}
