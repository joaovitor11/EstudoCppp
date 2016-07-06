#include "Saxofonista.hpp"
#include <string>

using namespace std;

Baterista *Saxofonista::get_Baterista(){
	return Saxofonista::toca_com;
}
void Saxofonista::set_Baterista(Baterista *btr){
	this->toca_com = btr;
}

string Saxofonista::get_nome(){
	return Saxofonista::nome;
}

void Saxofonista::set_nome(std::string nome){
	this->nome=nome;
}