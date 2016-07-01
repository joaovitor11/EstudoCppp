#include <string>

using namespace std;

#ifndef CLIENTE_HEADER
#define CLIENTE_HEADER

class Cliente{
private:
	static int total_clientes;
	int cod_cliente;
	string nome;
	
	void setCodCliente(int cod_cliente);//privado, pois apenas a variável static irá inserir valor do código do cliente

public:
	
	//getter do cliente
	int getCodCliente(void);
		
	//getter e setter do nome
	string getNome(void);
	void setNome(string nome);

	//construtor
	Cliente();

	//destrutor
	~Cliente();
};
#endif