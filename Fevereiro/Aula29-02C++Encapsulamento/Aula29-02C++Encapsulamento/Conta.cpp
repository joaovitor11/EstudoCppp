#include <iostream>
#include <string>
#include "Conta.h"
#include "Cliente.h"

using namespace std;

int Conta::totalContas=0; //inicializando uma variável static 

Conta::Conta(){
	totalContas++;
	cout<<"Construindo uma conta!"<<endl;
}

Conta::Conta(double saldo){
	totalContas++;
	Conta::setSaldo(saldo);
}

Conta::Conta(double saldo, double limite){
	totalContas++;
	Conta::setSaldo(saldo);
	Conta::setLimite(limite);
}

int Conta::getTotalContas(){
	return totalContas;
}

double Conta::getSaldo(){
	return saldo;
}

void Conta::setSaldo(double saldo){
	this->saldo=saldo;
}

double Conta::getLimite(){
	return limite;
}

void Conta::setLimite(double limite){
	this->limite=limite;
}

void Conta::setNumero(int numero){
	this->numero=numero;
}

int Conta::getNumero(){
	return numero;
}

Cliente Conta::getDono(){
	return dono;
}

void Conta::setDono(Cliente dono){
	this->dono=dono;
}

bool Conta::saca(double valor){
	if(saldo + limite < valor){
		return false;
    }
    else{
		saldo -=valor;
        return true;
    }
}

void Conta::deposita(double valor){
	saldo += valor;
}

void Conta::transfere(Conta *destino, double valor){
	if(Conta::saca(valor)){ //se a função saca retornar true, 
            destino->deposita(valor); //deposita o valor na conta de destino.
        }
}