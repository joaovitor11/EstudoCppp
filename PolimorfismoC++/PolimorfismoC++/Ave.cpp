#include "Ave.hpp"
#include <iostream>
#include <string>

using namespace std;

Ave::Ave(){
	cout << "Construtor Ave chamado" << endl;
}

Ave::~Ave(){
	cout << "Destrutor Ave chamado" << endl;
}

string Ave::emitir_som(){
	return Ave::tipo_som;
}

void Ave::setTipo_som(string tipo_som)
{
	this->tipo_som = tipo_som;
}
