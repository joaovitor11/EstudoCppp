/*
Nome do programa: AssociacaoC++
Objetivo do programa: Mostrar um exemplo de Associação Bidirecional e também as relações entre classes e objetos através de ponteiros.
Nome do programador: João
Data de criação: 05/07/2016
*/

#include <iostream>
#include "Saxofonista.hpp"
#include "Baterista.hpp"

using namespace std;

int main(){
	Saxofonista *s1 = new Saxofonista();
	Saxofonista *s2 = new Saxofonista();
	Baterista *b = new Baterista();

	//definindo nome para os músicos
	s1->set_nome("marcos");
	b->set_nome("joao");
	s2->set_nome("maria");

	//definindo quem é o saxofonista que toca com o baterista
	b->set_Saxofonista(s1);
	//definindo quem é o baterista que toca com o saxofonista
	s1->set_Baterista(b);

	//definindo quem é o baterista que toca com o saxofonista
	s2->set_Baterista(b);

	cout<< "Nome do baterista: "<<b->get_nome()<<endl;
	cout<<"Parceiro do baterista: "<<b->get_Saxofonista()->get_nome()<<endl; //se colocar apenas get_Saxofonista, retorna apenas o endereço de memória do objeto

	cout<< "\nNome do saxofonista 1: "<<s1->get_nome()<<endl;
	cout<<"Parceiro do saxofonista: "<<s1->get_Baterista()->get_nome()<<endl; 

	cout<< "\nNome do saxofonista 2: "<<s2->get_nome()<<endl;
	cout<<"Parceiro do saxofonista: "<<s2->get_Baterista()->get_nome()<<endl; 

	system("PAUSE");
	return 0;
}