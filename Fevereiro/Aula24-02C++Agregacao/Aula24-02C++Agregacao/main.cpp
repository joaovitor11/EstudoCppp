#include <iostream>
#include "Cliente.h"
#include "Conta.h"

using namespace std;

int main(){
	Cliente cli;
	Conta *c1 = new Conta();
	Conta *c2 = new Conta();
	
	cli.setNome("joão");
	cli.setCpf("436.797.431-78");
	cli.setEndereco("Rua a");
	
	c1->setDono(cli); //associa cliente a conta
	c1->setSaldo(1000);
	c1->setLimite(100);
	c1->setNumero(1900);

	c2->setDono(cli);
	c2->setSaldo(2000);
	c2->setLimite(200);
	c2->setNumero(1200);

	cout<<"Sacando da conta 1: "<<endl;
	c1->saca(50);

	cout<<"Depositando da conta 1: "<<endl;
	c1->deposita(200);

	cout<<"Tranferindo..."<<endl;
	c1->transfere(c2,40);

	cout<<"Saldo da conta 1: "<<c1->getSaldo()<<endl;
	cout<<"Saldo da conta 2: "<<c2->getSaldo()<<endl;

	system("PAUSE");
}