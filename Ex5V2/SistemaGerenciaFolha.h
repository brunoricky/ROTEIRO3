#ifndef SISTEMAGERENCIAFOLHA_H
#define SISTEMAGERENCIAFOLHA_H
#include "Funcionario.h"
#include "Assalariado.h"
#include "Comissionado.h"
#include "Horista.h"
#include <string>
#include <iostream>

using namespace std;

class SistemaGerenciaFolha{
    public:
        SistemaGerenciaFolha();
        void setFuncionarios(Funcionario *funcionario);
        double calculaValorTotalFolha();
        double consultaSalarioFuncionario();

    protected:
        Funcionario *funcionarios[10];
        int tipo[20];
        int indice=0;

};

#endif // SISTEMAGERENCIAFOLHA_H
