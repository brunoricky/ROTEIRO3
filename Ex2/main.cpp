#include <iostream>
#include <FiguraGeometrica.h>
#include <Circulo.h>
#include <Retangulo.h>
#include <Triangulo.h>

using namespace std;

int main()
{
    FiguraGeometrica *figura[10]; // Cria um vetor de ponteiros do tipo FiguraGeometrica

    figura[0] = new Circulo();
    figura[1] = new Retangulo();
    figura[2] = new Triangulo();

    cout << "Digite o(s) valor(es) do circulo" << endl;
    figura[0]->calcularArea();
    cout << endl;

    cout << "Digite o(s) valor(es) do retangulo" << endl;
    figura[1]->calcularArea();
    cout << endl;

    cout << "Digite o(s) valor(es) do triangulo" << endl;
    figura[2]->calcularArea();
    cout << endl;
}
