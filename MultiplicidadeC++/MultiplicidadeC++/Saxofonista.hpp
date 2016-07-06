#ifndef Saxofonista_h
#define Saxofonista_h

#include <string>

using namespace std;

class Baterista;

class Saxofonista{
private:
	string nome;
	Baterista *toca_com;

public:
	string get_nome();
	void set_nome(string nome);
	Baterista *get_Baterista();
	void set_Baterista(Baterista *toca_com);
};

#endif