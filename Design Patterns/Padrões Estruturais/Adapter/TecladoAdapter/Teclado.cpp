#include <iostream>
#include "EntradaPS2.cpp"
#include "EntradaUSB.cpp"
#include "AdapterEntrada.cpp"

using namespace std;

int main(int argc, char const *argv[]) {
  EntradaPS2 *ps2 = new EntradaPS2();
  AdapterEntrada *adaptador = new AdapterEntrada(ps2);
  adaptador->conectarEntradaUSB();
  return 0;
}
