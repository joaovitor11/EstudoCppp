#include <iostream>
#include <string>
#include "Pessoa.hpp"
#include "Coracao.hpp"

using namespace std;

Pessoa::Pessoa(Coracao *c, string nome, float altura, float peso, int idade){
	this->c = c;
	this->nome = nome;
	this->altura = altura;
	this->peso = peso;
	this->idade = idade;
}

Coracao *Pessoa::get_coracao(){
	return Pessoa::c;
}

string Pessoa::get_nome(){
	return Pessoa::nome;
}

void Pessoa::set_nome(std::string nome){
	this->nome = nome;
}

float Pessoa::get_altura(){
	return Pessoa::altura;
}

void Pessoa::set_altura(float altura){
	this->altura = altura;
}

float Pessoa::get_peso(){
	return Pessoa::peso;
}

void Pessoa::set_peso(float peso){
	this->peso = peso;
}

int Pessoa::get_idade(){
	return Pessoa::idade;
}

void Pessoa::set_idade(int idade){
	this->idade = idade;
}