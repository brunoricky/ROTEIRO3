#include "SistemaGerenciaFolha.h"

int i=0;

SistemaGerenciaFolha::SistemaGerenciaFolha()
{
    //ctor
}

void SistemaGerenciaFolha::setFuncionarios(Funcionario *funcionario)
{
    funcionarios[i] = funcionario;
    i++;
}

double SistemaGerenciaFolha::calculaValorTotalFolha()
{

    double valorTotal = 0;

    for(int i = 0; i < 3; i++){
        cout << i << "o  Funcionario - "<< " Salario: " << funcionarios[i]->calcularSalario() << endl;
        valorTotal = valorTotal + funcionarios[i]->calcularSalario();
    }

    return valorTotal;
}

double SistemaGerenciaFolha::consultaSalarioFuncionario()
{
    std::string n, n2;
    double s;

    std::cout << "\nDigite o nome do funcionario que deseja saber o salario: ";
    std::cin >> n;

   for(int i = 0; i < 3; i++){
       n2 = funcionarios[i]->getNome();
        if(n == n2){
            s = funcionarios[i]->calcularSalario();
        }
    }

    return s;
}
