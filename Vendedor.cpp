#include <string>
#include "Vendedor.hpp"

void Vendedor::setQuotaMensalVendas(double valor){
    quotaMensalVendas = valor;
}

double Vendedor::quotaTotalAnual(){
	  return quotaMensalVendas * MesesDoAno;
}