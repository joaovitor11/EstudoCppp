#include <iostream>
#include "Mira.hpp"
#include "ArmaDecorator.hpp"

void Mira::montar(){
  ArmaDecorator::montar();
  std::cout << "Arma equipada com Mira" << '\n';
}
