#ifndef Baterista_h
#define Baterista_h

#include <string>
#include <vector>

using namespace std;

class Saxofonista;

class Baterista{

private:
	string nome;
	vector<Saxofonista *> toca_com;

public:
	string get_nome();
	void set_nome(string nome);
	vector<Saxofonista *> get_Saxofonista(); //a parte multipla, no caso Saxofonista do diagrama de classes, está na parte única, no caso Baterista
	void set_Saxofonista(Saxofonista *sax);
};

#endif