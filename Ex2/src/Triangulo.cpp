#include "Triangulo.h"

Triangulo::Triangulo()
{

}

double Triangulo::calcularArea()
{
    cout << "Digite o valor da base: " << endl;
    cin >> base;
    cout << "Digite o valor da altura: " << endl;
    cin >> altura;
    cout << "A area e: " << (base*altura)/2 << endl;
}
