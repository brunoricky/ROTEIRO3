#include "Retangulo.h"

Retangulo::Retangulo()
{

}

double Retangulo::calcularArea(){
    cout << "Digite o valor da base: " << endl;
    cin >> base;
    cout << "Digite o valor da altura: " << endl;
    cin >> altura;
    cout << "A area e: " << base*altura << endl;
}
