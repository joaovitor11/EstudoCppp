/*
Nome do programa: ComposicaoC++
Objetivo do programa: Mostrar a implementação de um exemplo de composição entre duas classes, Pessoa e Coração.
Nome do programador: João
Data de criação: 10/07/2016
*/
#include <iostream>
#include <string>
#include "Pessoa.hpp"
#include "Coracao.hpp"

using namespace std;

int main(){
	Coracao *c = new Coracao();
	c->set_qtd_arterias(5);
	c->set_qtd_veias(3);
	Pessoa *p = new Pessoa(c, "joao", 1.66,56.9,20);

	cout<<"Exibindo os dados da Pessoa:"<<endl;
	cout<<"Nome da pessoa: "<<p->get_nome()<<endl;
	cout<<"Altura: "<<p->get_altura()<<endl;
	cout<<"Peso: "<<p->get_peso()<<endl;
	cout<<"Idade: "<<p->get_idade()<<endl;
	cout<<"Dados do coracao"<<endl;
	cout<<"Quantidade de Arterias: "<<p->get_coracao()->get_qtd_arterias()<<endl;
	cout<<"Quantidade de Veias: "<<p->get_coracao()->get_qtd_veias()<<endl;
	
	system("PAUSE");
	return 0;
}