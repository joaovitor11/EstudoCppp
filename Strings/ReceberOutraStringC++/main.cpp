/*
Nome do programa: ReceberOutraStringC++
Objetivo do programa: Fazer uma string vazia receber uma string com conte�do 
Nome do programador: Jo�o
Data de cria��o: 12/07/2016
*/
#include <iostream>
#include <string>

using namespace std;

int main(){
	string nome = "joao"; //inicializa vari�vel nome
	string nome_vazio; //declara vari�vel nome_vazio sem inicializar
	nome_vazio = nome; //faz a string nome_vazio receber nome

	//exibe as duas strings
	cout << "Nome: " << nome << endl;
	cout << "Nome Vazio: " << nome_vazio << endl;

	system("PAUSE");
	return 0;
}
