#ifndef CIRCULO_H
#define CIRCULO_H
#include "FiguraGeometrica.h"

class Circulo : public FiguraGeometrica
{
    public:
        Circulo();
        double calcularArea();

    protected:
        double raio;
};

#endif // CIRCULO_H
