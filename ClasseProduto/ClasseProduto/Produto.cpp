#include <iostream>
#include <string>
#include "Produto.h"

using namespace std;

Produto::Produto(){
	Produto::set_descricao("");
	Produto::set_estoque(0);
	Produto::set_preco(0.0);
	Produto::set_total_vendido(0);
}

Produto::~Produto(){
	
}

void Produto::set_descricao(string descricao){
	this->descricao = descricao;
}

string Produto::get_descricao(){
	return this->descricao;
}

void Produto::set_preco(float preco){
	this->preco = preco;
}

float Produto::get_preco(){
	return this->preco;
}

void Produto::set_estoque(int estoque){
	this->estoque = estoque;
}

int Produto::get_estoque(){
	return this->estoque;
}

void Produto::set_total_vendido(int total_vendido){
	this->total_vendido = total_vendido;
}

//retorna apenas a quantidade que foi vendida
int Produto::get_total_vendido(){
	return this->total_vendido;
}

//método aplica aumento recebe uma porcentagem como parâmetro
void Produto::aplica_aumento(float porcentagem){
	Produto::set_preco(Produto::get_preco() + ((Produto::get_preco() * porcentagem)/100))  ;
}

//método retorna true se houver estoque para realizar a venda e false se não houver
bool Produto::venda(int qtdVendida){
	if(Produto::get_estoque()>=qtdVendida){
		Produto::set_estoque(Produto::get_estoque() - qtdVendida);
		Produto::set_total_vendido(Produto::get_total_vendido() + qtdVendida);
		return true;
	}
	else{
		return false;
	}
}

float Produto::totalVendido(){
	return Produto::get_total_vendido() * Produto::get_preco();
}