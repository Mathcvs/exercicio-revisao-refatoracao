#ifndef ENGENHEIRO_HPP
#define ENGENHERIO_HPP

#include "Empregado.hpp"


class Engenheiro : public Empregado {

  private:
    int projetos;

  public:

	void setProjetos(int numero);

    int getProjetos(); 

	
};

#endif