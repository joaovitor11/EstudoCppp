/*
Nome do programa : Classe Produto
Objetivo do programa : Mostrar como é feito uma classe em C++ seguindo um diagrama de classes
Nome do programador : João
Data de criação : 04/07/2016
*/
#include <iostream>
#include <string>
#include "Produto.h"

using namespace std;

int main(){
	Produto *p1 = new Produto();
	p1->set_descricao("melancia");
	p1->set_estoque(20);
	p1->set_preco(5.00);
	
	if(p1->venda(11)==true){
		cout<<"Venda Realizada com sucesso!"<<endl;
	}
	else{
		cout<<"Estoque insuficiente!"<<endl;
	}
	p1->aplica_aumento(10.0);
	if(p1->venda(10)==true){
		cout<<"Venda Realizada com sucesso!"<<endl;
	}
	else{
		cout<<"Estoque insuficiente!"<<endl;
	}
	
	cout<<"Exibindo dados do produto\n\n";
	cout<<"Nome do Produto: "<<p1->get_descricao()<<endl;
	cout<<"Preco: "<<p1->get_preco()<<endl;
	cout<<"Estoque: "<<p1->get_estoque()<<endl;
	cout<<"Quantidade Vendida: "<<p1->get_total_vendido()<<endl;
	cout<<"Quantidade Vendida R$: "<<p1->totalVendido()<<endl;
	
	system("PAUSE");
	return 0;
}