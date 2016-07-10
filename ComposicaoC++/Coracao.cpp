#include "Coracao.hpp"

int Coracao::get_qtd_arterias(){
	return Coracao::qtd_arterias;
}

void Coracao::set_qtd_arterias(int qtd_arterias){
	this->qtd_arterias = qtd_arterias;
}

int Coracao::get_qtd_veias(){
	return Coracao::qtd_veias;
}

void Coracao::set_qtd_veias(int qtd_veias){
	this->qtd_veias = qtd_veias;
}