#ifndef CLIENTE_HEADER
#define CLIENTE_HEADER
#include <string>

using namespace std;




class Cliente{
private:
	string nome;
	string endereco;
	string cpf;

public: 
	void setNome(string nome);
	string getNome();
	void setEndereco(string endereco);
	string getEndereco();
	void setCpf(string cpf);
	string getCpf();
};
#endif