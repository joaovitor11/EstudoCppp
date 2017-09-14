#ifndef Mira_hpp
#define Mira_hpp
#include "ArmaDecorator.hpp"
#include "Arma.hpp"

class Mira : public ArmaDecorator{

public:
  Mira(Arma *_arma) : ArmaDecorator(_arma){}
  virtual void montar();
};
#endif
