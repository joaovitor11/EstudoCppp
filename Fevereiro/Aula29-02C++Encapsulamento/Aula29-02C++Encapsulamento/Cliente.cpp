#include <string>
#include "Cliente.h"

using namespace std;

void Cliente::setNome(string nome){
	this->nome=nome;
}

string Cliente::getNome(){
	return nome;
}

void Cliente::setEndereco(string endereco){
	this->endereco=endereco;
}

string Cliente::getEndereco(){
	return endereco;
}

void Cliente::setCpf(string cpf){
	this->cpf=cpf;
}

string Cliente::getCpf(){
	return cpf;
}