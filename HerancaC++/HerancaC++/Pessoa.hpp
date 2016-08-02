#ifndef Pessoa_hpp
#define Pessoa_hpp

#include <string>

using namespace std;

class Pessoa{
protected:
	string nome;
	int idade;
	float altura;
	float peso;

public:
	void andar();
	void falar();
	void enxergar();
};

#endif