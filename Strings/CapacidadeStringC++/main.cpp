/*
Nome do programa: CapacidadeStringC++
Objetivo do programa: Mostrar a manipula��o de fun��es string que mostram tamanho, capacidade, redimensionamento, etc. 
Nome do programador: Jo�o
Data de cria��o: 13/07/2016
*/
#include <iostream>
#include <string>

using namespace std;

int main(){
	string nome = "joao";

	if (nome.empty()){ //Verifica se a string est� vazia. Retorna true ou false
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
	nome.shrink_to_fit(); //Solicita a remo��o de capacidade n�o utilizada. 
	cout << "Capacidade depois de solicitar shrink_to_fit(): " << nome.capacity() << endl;

	system("PAUSE");
	return 0;
}