#ifndef RETANGULO_H
#define RETANGULO_H

#include <FiguraGeometrica.h>


class Retangulo : public FiguraGeometrica
{
    public:
        Retangulo();
        double calcularArea();

    protected:
        double base, altura;
};

#endif // RETANGULO_H
