#include "Comissionado.h"

Comissionado::Comissionado()
{
    //ctor
}

Comissionado::Comissionado(std::string n, int m, double vs, double pc){
    nome = n;
    matricula = m;
    vendasSemanais = vs;
    percentualComissao = pc;
 }

 void Comissionado::setSalarioBase(double sl){
    salarioBase = sl;
 }

 void Comissionado::setPercentualComissao(double pc){
    percentualComissao = pc;
 }

 void Comissionado::setVendasSemanais(double vs){
    vendasSemanais = vs;
 }

 double Comissionado::getSalarioBase(){
    return salarioBase;
 }

 double Comissionado::getPercentualComissao(){
    return percentualComissao;
 }

 double Comissionado::getVendasSemanais(){
    return vendasSemanais;
 }

 double Comissionado::calcularSalario(){
    return salarioBase+(percentualComissao*vendasSemanais);
 }
