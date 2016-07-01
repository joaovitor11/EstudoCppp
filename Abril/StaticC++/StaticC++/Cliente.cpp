#include "Cliente.h"
#include <string>

using namespace std;

//inicializar variável static
int Cliente::total_clientes=0;

Cliente::Cliente(){
	total_clientes++;
	setCodCliente(total_clientes);
	nome="";
}

Cliente::~Cliente(){

}

void Cliente::setCodCliente(int cod_cliente){
	this->cod_cliente = cod_cliente;
}

int Cliente::getCodCliente(){
	return this->cod_cliente;
}

string Cliente::getNome(){
	return this->nome;
}

void Cliente::setNome(std::string nome){
	this->nome=nome;
}