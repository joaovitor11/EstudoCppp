#include <iostream>
#include <string>
#include "Saxofonista.hpp"

using namespace std;

string Saxofonista::get_nome(){
	return Saxofonista::nome;
}

void Saxofonista::set_nome(std::string nome){
	this->nome = nome;
}

Baterista *Saxofonista::get_Baterista(){
	return Saxofonista::toca_com;
}

void Saxofonista::set_Baterista(Baterista *toca_com){
	this->toca_com = toca_com;
}