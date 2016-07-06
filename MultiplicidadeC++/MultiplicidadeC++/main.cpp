/*
Nome do programa: Multiplicidade C++
Objetivo do programa: Mostrar um exemplo de um relação de um para muitos entre duas relações através de diagrama de classes. Para isso foi utilizado a Classe Vector da Biblioteca STL.
Nome do programador: João
Data de criação: 06/07/2016
*/
#include <iostream>
#include <string>
#include <vector>
#include "Saxofonista.hpp"
#include "Baterista.hpp"

using namespace std;

int main(){
	//instanciando objetos das classes Baterista e Saxofonista
	Baterista *b = new Baterista();
	Saxofonista *s1 = new Saxofonista();
	Saxofonista *s2 = new Saxofonista();
	Saxofonista *s3 = new Saxofonista();

	//instanciando um vetor STL de Saxofonista
	vector<Saxofonista *> saxofonistas;
		
	//inserindo nome aos músicos
	b->set_nome("maria");
	s1->set_nome("jose");
	s2->set_nome("carlos");
	s3->set_nome("lucas");

	//adicionando os saxofonistas que tocam com o baterista
	b->set_Saxofonista(s1);
	b->set_Saxofonista(s2);
	b->set_Saxofonista(s3);

	saxofonistas=b->get_Saxofonista(); //recebe o vetor retornado do objeto da classe baterista 

	cout<<b->get_nome()<<endl;
	//exibir valores
	for(int i = 0; i< saxofonistas.size(); ++i){
		cout<<saxofonistas[i]->get_nome()<<endl;
	}
	
	system("PAUSE");
	return 0;
}