#include "Conta.h"

Conta::Conta(std::string nomc, double sm, int numc, double s)
{
    nomeCliente = nomc;
    salarioMensal = sm;
    numeroConta = numc;
    saldo = s;
}

Conta::Conta()
{
    //ctor
}

void Conta::sacar(double valor)
{
    saldo = saldo-valor;
    cout << "Seu novo saldo e: " << saldo << endl;
}

void Conta::depositar(double valor)
{
    saldo = saldo+valor;
    cout << "Seu novo saldo e: " << saldo << endl;
}

void Conta::setNomeCliente(std::string nomc)
{
    nomeCliente = nomc;
}

void Conta::setSalarioMensal(double sm)
{
    salarioMensal = sm;
}

void Conta::setNumeroConta(int numc)
{
    numeroConta = numc;
}

void Conta::setSaldo(double s)
{
    saldo = s;
}

void Conta::setLimite(double sl)
{
    limite = sl;
}

string Conta::getNomeCliente()
{
    return nomeCliente;
}

double Conta::getSalarioMensal()
{
    return salarioMensal;
}

void Conta::defLimite(double salario){

    double lmt;
    limite = lmt;
    salarioMensal = salario;
    limite = 2*salario;
    cout << limite << endl;
}

int Conta::getNumeroConta()
{
    return numeroConta;
}

double Conta::getSaldo()
{
    return saldo;
}

double Conta::getLimite()
{
    return saldo;
}
