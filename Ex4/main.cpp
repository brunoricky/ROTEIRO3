#include <iostream>
#include <string>
#include "Conta.h"
#include "ContaCorrente.h"
#include "ContaEspecial.h"
#include "Poupanca.h"

using namespace std;

int main()
{
    Conta conta1 = Conta("Fulano", 1, 1000);
    ContaCorrente contacorrente1 = ContaCorrente("Beltrano", 2, 0, 9550, 1000);
    ContaEspecial contaespecial1 = ContaEspecial("Ciclano", 3, 900, 900, 1000);

    cout << "Conta normal" << endl;
    cout << "Nome: " << conta1.getNomeCliente() << endl;
    cout << "Numero: "<< conta1.getConta() << endl;
    cout << "Saldo: "<< conta1.getSaldo() << endl;
    cout << "Deposito de R$ 500!" << endl;
    conta1.depositar(500);
    cout << "Saque de 1000!" << endl;
    conta1.sacar(1000);
    cout << endl << endl;

    cout << "Conta corrente" << endl;
    cout << "Nome: " << conta1.getNomeCliente() << endl;
    cout << "Numero: "<< contacorrente1.getConta() << endl;
    cout << "Saldo: "<< contacorrente1.getSaldo() << endl;
    cout << "Salario: "<< contacorrente1.getSalario() << endl;
    contacorrente1.definirLimite();
    cout << "Limite: "<< contacorrente1.getLimite() << endl;
    cout << "Deposito de R$ 500!" << endl;
    contacorrente1.depositar(500);
    cout << "Saque de 1000!" << endl;
    contacorrente1.sacar(1000);
    cout << endl << endl;

    cout << "Conta especial" << endl;
    cout << "Nome: " << contaespecial1.getNomeCliente() << endl;
    cout << "Numero: "<< contaespecial1.getConta() << endl;
    cout << "Saldo: "<< contaespecial1.getSaldo() << endl;
    cout << "Salario: "<< contaespecial1.getSalario() << endl;
    contaespecial1.definirLimite();
    cout << "Limite: "<< contaespecial1.getLimite() << endl;
    cout << "Deposito de R$ 500!" << endl;
    contaespecial1.depositar(500);
    cout << "Saque de 1000!" << endl;
    contaespecial1.sacar(1000);
    cout << endl << endl;

    return 0;

}
