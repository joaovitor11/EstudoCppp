/*
Nome do programa: CapacidadeStringC++
Objetivo do programa: Mostrar a manipulação de funções string que mostram tamanho, capacidade, redimensionamento, etc. 
Nome do programador: João
Data de criação: 13/07/2016
*/
#include <iostream>
#include <string>

using namespace std;

int main(){
	string nome = "joao";

	if (nome.empty()){ //Verifica se a string está vazia. Retorna true ou false
		cout << "A string esta vazia!" << endl;
	}
	else{
		cout << "A string nao esta vazia!" << endl;
	}

	cout << "Quantidade de caracteres da string: " << nome.size() << endl;
	cout << "Quantidade maxima de caracteres que a string pode ter: " << nome.max_size() << endl;
	cout << "A capacidade de caracteres afetados: " << nome.capacity() << endl;
	nome.resize(20); //redimensiona a capacidade da string
	cout << "Capacidade depois de solicitar resize(): " << nome.capacity() << endl;
	nome.clear();
	cout << "Capacidade depois de solicitar clear(): " << nome.capacity() << endl;
	nome.shrink_to_fit(); //Solicita a remoção de capacidade não utilizada. 
	cout << "Capacidade depois de solicitar shrink_to_fit(): " << nome.capacity() << endl;

	system("PAUSE");
	return 0;
}