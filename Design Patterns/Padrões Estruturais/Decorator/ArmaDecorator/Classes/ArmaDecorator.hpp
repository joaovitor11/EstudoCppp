#ifndef ArmaDecorator_hpp
#define ArmaDecorator_hpp
#include "Arma.hpp"

class ArmaDecorator : public Arma{
private:
Arma *_arma;
public:
  ArmaDecorator(Arma *_arma);
  virtual void montar();
};

#endif
