#ifndef VENDEDOR_HPP
#define VENDEDOR_HPP

#include"Empregado.hpp"


class Vendedor : public Empregado{
const int MesesDoAno = 12;

  private:
    double quotaMensalVendas;

  public:
    void setQuotaMensalVendas(double valor);
  	  
	
	double quotaTotalAnual();
	
};

#endif