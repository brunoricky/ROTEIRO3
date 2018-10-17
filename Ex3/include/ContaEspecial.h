#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H

#include <Conta.h>

class ContaEspecial : public Conta
{
    public:
        ContaEspecial();
        void definirLimite(double);
};

#endif // CONTAESPECIAL_H
