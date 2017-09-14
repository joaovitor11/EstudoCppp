#include "AdapterEntrada.hpp"


AdapterEntrada::AdapterEntrada(EntradaPS2 *_entradaPS2) {
  this->_entradaPS2 = _entradaPS2;
  }

void AdapterEntrada::conectarEntradaUSB() {
  _entradaPS2->conectarEntradaPS2();
 }
