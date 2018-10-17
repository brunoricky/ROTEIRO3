#include <iostream>
#include "Conta.h"
#include "IConta.h"
#include "ContaEspecial.h"

using namespace std;

int main()
{

    Conta *conta1;
    ContaEspecial *contaespecial1;

    double dinheiro;

    cout << "Conta normal 1" << endl;
    conta1 = new Conta("Bruno", 2000, 30000, 210);

    cout << "Saque realizado!" << endl << endl;
    conta1->sacar(42);

    cout << "Deposito realizado!"  << endl << endl;
    conta1->depositar(233);
    cout << endl;

    cout << "Limite definido"  << endl << endl;
    cout << "O seu limite e: ";
    conta1->defLimite(1500.0);

    cout << "\nCLIENTE #2\n";
    contaespecial1 = new ContaEspecial();
    cout << endl;

    cout << "Limite definido"  << endl << endl;
    cout << "O seu limite e: ";
    contaespecial1->defLimite(5000.0);

}
