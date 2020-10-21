#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

const int HoraNormal = 8;
const int FatorCalculoHoraExtra = 2;

class Empregado {

  private:
    std::string nome;
    
    double salarioHora;   

  public:  
    void setNome(std::string texto);
    void setSalarioHora(double valor);

    std::string getNome();

    double pagamentoMes(double horasTrabalhadas);
};

#endif