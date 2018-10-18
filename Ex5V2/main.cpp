#include <iostream>
#include "Funcionario.h"
#include "Horista.h"
#include "Assalariado.h"
#include "SistemaGerenciaFolha.h"
#include "Comissionado.h"

using namespace std;

int main()
{
    SistemaGerenciaFolha sistema;
    Funcionario *funcionario;

    cout << "Funcionario Assalariado: " << endl;
    funcionario = new Assalariado("Fulano", 2, 1500.30);
    sistema.setFuncionarios(funcionario);
    cout << "* Nome: " << funcionario->getNome() << endl;
    cout << "* Matricula: " << funcionario->getMatricula() << endl;
    cout << "* Salario: R$ " << funcionario->calcularSalario()<< endl << endl;;

    cout << "Funcionario Comissionado: " << endl;
    funcionario = new Comissionado("Beltrano", 3, 2000, 10);
    sistema.setFuncionarios(funcionario);
    cout << "* Nome: " << funcionario->getNome() << endl;
    cout << "* Matricula: " << funcionario->getMatricula() << endl;
    cout << "* Salario: R$ " << funcionario->calcularSalario() << endl << endl;

    cout << "Funcionario Horista: " << endl;
    funcionario = new Horista("Ciclano", 4, 900, 20, 45);
    sistema.setFuncionarios(funcionario);
    cout << "* Nome: " << funcionario->getNome() << endl;
    cout << "* Matricula: " << funcionario->getMatricula() << endl;
    cout << "* Salario: R$ " << funcionario->calcularSalario()<< endl;

    cout << endl;
    cout << "\nTotal da folha de pagamento: R$ "<< sistema.calculaValorTotalFolha()<< endl;

    cout << "O salario desse funcionario eh : " << sistema.consultaSalarioFuncionario() << endl;

    return 0;
}
