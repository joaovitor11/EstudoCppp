#include <string>
#include "Cliente.h"

using namespace std;

string Cliente::getCpf(void){
	return this->cpf;
}

void Cliente::setCpf(std::string cpf){
	this->cpf=cpf;
}

string Cliente::getEndereco(void){
	return this->endereco;
}

void Cliente::setEndereco(std::string endereco){
	this->endereco=endereco;
}

string Cliente::getNome(void){
	return this->nome;
}

void Cliente::setNome(std::string nome){
	this->nome=nome;
}