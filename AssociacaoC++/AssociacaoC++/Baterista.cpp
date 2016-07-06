#include "Baterista.hpp"
#include <string>

using namespace std;

Saxofonista *Baterista::get_Saxofonista(){
	return Baterista::toca_com;
}

void Baterista::set_Saxofonista(Saxofonista *sax){
	this->toca_com = sax;
}

string Baterista::get_nome(){
	return Baterista::nome;
}

void Baterista::set_nome(std::string nome){
	this->nome=nome;
}
