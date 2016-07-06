#ifndef Baterista_h
#define Baterista_h

class Saxofonista;

#include <string>

using namespace std;

class Baterista {
private:
	Saxofonista *toca_com;
	string nome;

public:
	Saxofonista *get_Saxofonista();
	void set_Saxofonista(Saxofonista *sax);
	string get_nome();
	void set_nome(string nome);
};
#endif 