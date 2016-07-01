#include "Cliente.h"
class Conta{
private:
	double saldo;
	double limite;
	int numero;
	Cliente dono;

public:
	Cliente getDono(void);
	void setDono(Cliente dono);

	double getSaldo(void);
	void setSaldo(double saldo);

	double getLimite(void);
	void setLimite(double limite);

	int getNumero(void);
	void setNumero(int numero);

	bool saca(double valor);
	void deposita(double valor);
	void transfere(Conta *destino, double valor);

};
