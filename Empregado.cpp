#include "Empregado.hpp"

void Empregado::setNome(std::string texto){
    nome = texto;
}

void Empregado::setSalarioHora(double valor){
    salarioHora = valor;
}

std::string Empregado::getNome(){
    return nome;
}

double Empregado::pagamentoMes(double horasTrabalhadas){
        
    double totalDeHoras = horasTrabalhadas;
	  
	  //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
      if (horasTrabalhadas > HoraNormal) {
        double horaExtra = horasTrabalhadas - HoraNormal;
        
        totalDeHoras += horaExtra / FatorCalculoHoraExtra;
      }
	  return totalDeHoras * salarioHora;
}