#ifndef POUPANCA_H
#define POUPANCA_H

#include <Conta.h>


class Poupanca : public Conta
{
    public:
        Poupanca();
        Poupanca(std::string,int,double,int,double);
        double render();
        void setVariacao(int);
        void setTaxa(int);
        int getVariacao();
        int getTaxa();

    private:
        int variacao;
        double taxa;
};

#endif // POUPANCA_H
