#include "ArmaDecorator.hpp"

ArmaDecorator::ArmaDecorator(Arma *_arma){
  this->_arma = _arma;
}

void ArmaDecorator::montar(){
  _arma->montar();
}
