#ifndef Pessoa_h
#define Pessoa_h

#include <string>
#include "Coracao.hpp"

using namespace std;

class Pessoa{
private:
	Coracao *c;
	string nome;
	float altura;
	float peso;
	int idade;

public:
	Pessoa(Coracao *c, string nome, float altura, float peso, int idade);
	Coracao *get_coracao();
	string get_nome();
	void set_nome(string nome);
	float get_altura();
	void set_altura(float altura);
	float get_peso();
	void set_peso(float peso);
	int get_idade();
	void set_idade(int idade);
};


#endif