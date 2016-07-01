#include "Produtos.h"
#include <string>

using namespace std;

void Produtos::setDescricao(string descricao){
	this->descricao=descricao;
}

string Produtos::getDescricao(){
	return this->descricao;
}

void Produtos::setPreco(float preco){
	this->preco=preco;
}

float Produtos::getPreco(){
	return this->preco;
}

void Produtos::setEstoque(int estoque){
	this->estoque=estoque;
}

int Produtos::getEstoque(){
	return this->estoque;
}

void Produtos::setTotVendido(int totVendido){
	this->totVendido=totVendido;
}

int Produtos::getTotVendido(void){
	return this->totVendido;
}

void Produtos::aplicamento(float porcentagem){
	this->preco=this->preco+(this->preco*porcentagem);
}

void Produtos::venda(int qtdeVendida){
	if(this->estoque >=qtdeVendida){
		this->estoque -= qtdeVendida;
		this->totVendido += qtdeVendida;
	}
}

float Produtos::totalVendido(){
	return this->totVendido * this->preco;
}
