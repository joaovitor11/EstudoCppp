#ifndef AdapterEntrada_hpp
#define AdapterEntrada_hpp
#include "EntradaPS2.hpp"
#include "EntradaUSB.hpp"

class AdapterEntrada : public EntradaUSB {

private:
  EntradaPS2 *_entradaPS2;

public:
  AdapterEntrada(EntradaPS2 *_entradaPS2);

  void conectarEntradaUSB();
};
#endif
