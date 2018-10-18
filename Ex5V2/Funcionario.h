#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <iostream>
#include <string>


class Funcionario
{
    public:
        Funcionario();
        virtual double calcularSalario()=0;
        void setNome(std::string);
        void setMatricula(int);
        std::string getNome();
        int getMatricula();

    protected:
        std::string nome;
        int matricula;

};

#endif // FUNCIONARIO_H
