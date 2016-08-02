#include "Carro.hpp"
#include <string>

using namespace std;

int Carro::getAno(){
	return Carro::ano;
}

void Carro::setAno(int ano){
	this->ano = ano;
}

int Carro::getChassi(){
	return Carro::chassi;
}

void Carro::setChassi(int chassi){
	this->chassi=chassi;
}

string Carro::getModelo(){
	return Carro::modelo;
}

void Carro::setModelo(std::string modelo){
	this->modelo = modelo;
}

string Carro::getPlaca(){
	return Carro::placa;
}

void Carro::setPlaca(std::string placa){
	this->placa = placa;
}
