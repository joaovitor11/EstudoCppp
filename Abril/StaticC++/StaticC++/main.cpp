#include <iostream>
#include <locale.h>
#include "Cliente.h"

using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");
	Cliente *c1 = new Cliente();
	Cliente *c2 = new Cliente();
	Cliente *c3 = new Cliente();

	c1->setNome("jo�o");//atribuindo apenas o nome do cliente 1 porque o c�digo a classe gera

	c2->setNome("maria");//atribuindo apenas o nome do cliente 2 porque o c�digo a classe gera

	c3->setNome("jos�"); //atribuindo apenas o nome do cliente 3 porque o c�digo a classe gera
	
	//exibindo dados do cliente 1
	cout<<"C�digo do Cliente: "<<c1->getCodCliente()<<"\nNome do Cliente: "<<c1->getNome()<<endl;
	
	//exibindo dados do cliente 2
	cout<<"\nC�digo do Cliente: "<<c2->getCodCliente()<<"\nNome do Cliente: "<<c2->getNome()<<endl;

	//exibindo dados do cliente 3
	cout<<"\nC�digo do Cliente: "<<c3->getCodCliente()<<"\nNome do Cliente: "<<c3->getNome()<<endl;

	system("PAUSE");
}