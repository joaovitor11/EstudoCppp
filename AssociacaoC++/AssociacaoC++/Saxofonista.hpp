#ifndef Saxofonista_h
#define Saxofonista_h
class Baterista;

#include <string>

using namespace std;

class Saxofonista {
private:
	string nome;
	Baterista *toca_com;

public:
	Baterista *get_Baterista();
	void set_Baterista(Baterista *btr);
	string get_nome();
	void set_nome(string nome);
};
#endif 