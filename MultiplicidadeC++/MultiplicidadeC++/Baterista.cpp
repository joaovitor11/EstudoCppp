#include <iostream>
#include <string>
#include <vector>
#include "Baterista.hpp"
#include "Saxofonista.hpp"

using namespace std;

string Baterista::get_nome(){
	return Baterista::nome;
}

void Baterista::set_nome(std::string nome){
	this->nome=nome;
}

vector<Saxofonista *> Baterista::get_Saxofonista(){
	return Baterista::toca_com;
}

void Baterista::set_Saxofonista(Saxofonista *sax){
	//push_back insere o elemento para o final do vetor
	//pop_back insere o elemento para o final do vetor
	Baterista::toca_com.push_back(sax);
}
