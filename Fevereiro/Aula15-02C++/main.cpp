#include <iostream>
#include "Pessoa.h"
#include <string>

using namespace std;

int main(int argc, char** argv) {
	Pessoa p;
	string nome;
	int idade;
	char sexo;
	
	cout<<"Digite o nome: ";
	cin>>nome;
	p.SetNome(nome);
	
	cout<<"Digite a idade: ";
	cin>>idade;
	p.SetIdade(idade);
	
	cout<<"Digite o sexo: ";
	cin>>sexo;
	p.SetSexo(sexo);
	
	cout<<"Nome: "<<p.GetNome()<<endl<<"Idade: "<<p.GetIdade()<<endl<<"Sexo: "<<p.GetSexo()<<endl;
	
	system("PAUSE");
	return 0;
	
}
