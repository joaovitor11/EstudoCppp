/*
Nome do programa: AcessarPrimeiroUltimoCaractereStringC++
Objetivo do programa: Acessar o primeiro e último caracatere de uma string com front e back, os novos recursos do C++ 11.
Nome do programador: João
Data de criação: 13/07/2016
*/
#include <iostream>
#include <string>

using namespace std;

int main(){
	string nome = "joao";

	cout << "Acessando primeiro caracatere da string com front: " << nome.front() << endl;
	cout << "Acessando ultimo caracatere da string com back: " << nome.back() << endl;

	system("PAUSE");
	return 0;
}