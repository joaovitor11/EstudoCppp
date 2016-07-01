#ifndef CONTA_HEADER
#define CONTA_HEADER

#include <string>
#include "Cliente.h"

using namespace std;


class Conta {
private:
    double saldo;
    double limite;
    int numero;
    Cliente dono; //é a mesma coisa que pegar tudo o que se definiu na classe Cliente e colocar na classe Conta
    static int totalContas; //passa a ter uma única referência, a da classe e não de cada objeto.
   
public:
    Conta();
    Conta(double saldo);
    Conta(double saldo, double limite);
    static int getTotalContas(); //agpra é possível acessar pelos objetos e também pela classe
    double getSaldo();
	double getLimite();
    void setLimite(double limite);
    int getNumero();
    void setNumero(int numero);
    Cliente getDono();
    void setDono(Cliente dono);
    bool saca(double valor);
    void deposita(double valor);
    void transfere(Conta *destino, double valor);
	
private:
    void setSaldo(double saldo);
};
#endif