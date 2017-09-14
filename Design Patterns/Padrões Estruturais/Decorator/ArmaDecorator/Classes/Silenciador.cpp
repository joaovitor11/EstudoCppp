#include <iostream>
#include "Silenciador.hpp"
#include "ArmaDecorator.hpp"

void Silenciador::montar(){
  ArmaDecorator::montar();
  std::cout << "Arma equipada com silenciador" << '\n';
}
