#include "Conta.h"
#include "Cliente.h"

Cliente Conta::getDono(void){
	return dono;
}

void Conta::setDono(Cliente dono){
	this->dono = dono;
}

double Conta::getSaldo(void){
	return this->saldo;
}

void Conta::setSaldo(double saldo){
	this->saldo=saldo;
}

double Conta::getLimite(void){
	return this->limite;
}

void Conta::setLimite(double limite){
	this->limite=limite;
}

int Conta::getNumero(void){
	return this->numero;
}

void Conta::setNumero(int numero){
	this->numero=numero;
}

bool Conta::saca(double valor){
	if(saldo+limite>=valor){
		saldo = saldo - valor;
		return true;
	}
	else{
		return false;
	}
}

void Conta::deposita(double valor){
	saldo = saldo + valor;
}

void Conta::transfere(Conta *destino, double valor){
	if(&Conta::saca){
		destino->deposita(valor);
	}
}