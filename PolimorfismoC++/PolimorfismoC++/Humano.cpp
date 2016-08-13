#include "Humano.hpp"
#include <iostream>
#include <string>

using namespace std;

Humano::Humano(){
	cout << "Construtor Humano chamado"<<endl;
}

Humano::~Humano(){
	cout << "Destrutor Humano chamado" << endl;
}

string Humano::emitir_som(){
	return "BIRRRRRL";
}


