/*
Nome do programa: ReceberOutraStringC++
Objetivo do programa: Fazer uma string vazia receber uma string com conteúdo 
Nome do programador: João
Data de criação: 12/07/2016
*/
#include <iostream>
#include <string>

using namespace std;

int main(){
	string nome = "joao"; //inicializa variável nome
	string nome_vazio; //declara variável nome_vazio sem inicializar
	nome_vazio = nome; //faz a string nome_vazio receber nome

	//exibe as duas strings
	cout << "Nome: " << nome << endl;
	cout << "Nome Vazio: " << nome_vazio << endl;

	system("PAUSE");
	return 0;
}
