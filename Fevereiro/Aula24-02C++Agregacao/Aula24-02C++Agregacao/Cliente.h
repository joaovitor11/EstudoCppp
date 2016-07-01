#ifndef Cliente_HEADER 
#define Cliente_HEADER
#include <string>

using namespace std;

class Cliente{
private:
	string nome;
	string endereco;
	string cpf;

public:
	string getNome(void);
	void setNome(string nome);

	string getEndereco(void);
	void setEndereco(string endereco);

	string getCpf(void);
	void setCpf(string cpf);
};
#endif