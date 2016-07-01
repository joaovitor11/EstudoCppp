#include "Pessoa.h"

Pessoa::Pessoa(){
	nome="";
	idade=0;
	sexo=' ';
}

int Pessoa::GetIdade(){
	return this->idade;	
}

void Pessoa::SetIdade(int idade){
	this->idade = idade;
}

string Pessoa::GetNome(){
	return this->nome;
}

void Pessoa::SetNome(string nome){
	this->nome=nome;
}

char Pessoa::GetSexo(){
	return this->sexo;
}

void Pessoa::SetSexo(char sexo){
	this->sexo=sexo;
}

