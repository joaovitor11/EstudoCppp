#ifndef Silenciador_hpp
#define Silenciador_hpp
#include "ArmaDecorator.hpp"
#include "Arma.hpp"

class Silenciador : public ArmaDecorator{

public:
  Silenciador(Arma *_arma) : ArmaDecorator(_arma){}
  virtual void montar();
};
#endif
