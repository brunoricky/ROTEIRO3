#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include <iostream>
#include <string>

using namespace std;

class FiguraGeometrica
{
    public:
        FiguraGeometrica();
        virtual double calcularArea()=0;

    private:
        std::string nome;

};

#endif // FIGURAGEOMETRICA_H
