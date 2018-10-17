#include "Circulo.h"

Circulo::Circulo()
{

}

double Circulo::calcularArea()
{
    cout << "Digite o raio do circulo: " << endl;
    cin >> raio;
    cout << "A area e: " << (raio*raio)*3.14 << endl;
}

