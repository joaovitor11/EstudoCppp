#ifndef Carro_hpp
#define Carro_hpp

#include <string>

using namespace std;

class Carro{
private:
	string modelo;
	int ano;
	int chassi;
	string placa;

public:
	void setModelo(string modelo);
	string getModelo();
	void setAno(int ano);
	int getAno();
	void setChassi(int chassi);
	int getChassi();
	void setPlaca(string placa);
	string getPlaca();
};

#endif