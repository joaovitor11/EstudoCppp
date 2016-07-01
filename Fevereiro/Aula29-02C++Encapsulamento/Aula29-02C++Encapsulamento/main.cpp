#include <iostream>
#include "Cliente.h"
#include "Conta.h"

using namespace std;

int main(){
	Cliente c1;
	Conta *conta = new Conta(1000);
	Conta *conta2 = new Conta(500);

	c1.setNome("João");
	c1.setEndereco("Rua a");
	c1.setCpf("657.432.431-54");

	conta->setNumero(5466);
	conta->setDono(c1);
	conta->setLimite(400);
	
	if(conta->saca(400)){
		cout<<"Saque de 400 reais realizado com sucesso!"<<endl;
	}
	else{
		cout<<"Saldo insuficiente!"<<endl;
	}

	conta->transfere(conta2,400);

	cout<<"Nome do cliente: "<<c1.getNome()<<endl;
	cout<<"Saldo atual: "<<conta->getSaldo()<<endl;

	system("PAUSE");
}