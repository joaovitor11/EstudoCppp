#ifndef Produto_h
#define Produto_h

#include <iostream>
#include <string>

using namespace std;

class Produto{
private:
	string descricao;
	float preco;
	int estoque;
	int total_vendido;
	void set_total_vendido(int total_vendido); //método privado porque ele será usado apenas dentro do método venda();

public:
	Produto(); //construtor
	~Produto(); //destrutor
	
	//getters e setters
	void set_descricao(string descricao);
	string get_descricao();
	void set_preco(float preco); 
	float get_preco();
	void set_estoque(int estoque);
	int get_estoque();
	int get_total_vendido(); 
	
	//ações da classe
	void aplica_aumento(float porcentagem);
	bool venda(int qtdVendida);
	float totalVendido();	
};

#endif