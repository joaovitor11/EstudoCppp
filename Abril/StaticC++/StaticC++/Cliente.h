#include <string>

using namespace std;

#ifndef CLIENTE_HEADER
#define CLIENTE_HEADER

class Cliente{
private:
	static int total_clientes;
	int cod_cliente;
	string nome;
	
	void setCodCliente(int cod_cliente);//privado, pois apenas a vari�vel static ir� inserir valor do c�digo do cliente

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