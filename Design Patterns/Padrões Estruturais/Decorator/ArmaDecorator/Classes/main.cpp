#include <iostream>
#include "Arma.hpp"
#include "ArmaBase.cpp"
#include "Silenciador.cpp"
#include "ArmaDecorator.cpp"
#include "Mira.cpp"

using namespace std;

int main(int argc, char const *argv[]) {
  Arma *arma = new Silenciador(new Mira(new ArmaBase()));
  arma->montar();
  return 0;
}
