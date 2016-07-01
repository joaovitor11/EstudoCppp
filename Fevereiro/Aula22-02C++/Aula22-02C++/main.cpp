#include <iostream>
#include <string>
#include "Produtos.h"
#include <iomanip> //para usar setprecision


using namespace std;

int main(){
	Produtos *p1 = new Produtos();
	Produtos *p2 = new Produtos();
	
	p1->setDescricao("morango");
	p1->setPreco(10);
	p1->setEstoque(10);
	p1->setTotVendido(1);
	
	cout<<"Produto: "<<p1->getDescricao()<<endl<<"Total vendido: "<< setprecision(2) << fixed <<p1->totalVendido()<<endl;
	
	p1->aplicamento(0.50); //aumentando o valor
	p1->venda(5); //realizando a venda

	cout<<"Produto: "<<p1->getDescricao()<<endl<<"Total vendido: "<< setprecision(2) << fixed <<p1->totalVendido()<<endl;

	system("PAUSE");
}