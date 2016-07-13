/*
Nome do programa: AcessarIndiceStringC++
Objetivo do programa: Acessar o indice de uma string para mostrar um caractere espec�fico e mostrar as formas poss�veis de se fazer isso.
Nome do programador: Jo�o
Data de cria��o: 12/07/2016
*/

#include <iostream>
#include <string>
#include <stdexcept> //para exce��es

using namespace std;

int main(){
	string nome = "joao";
	//existem duas formas de acessar um indice de uma string, com [] ou com at()
	cout << "Acessando o primeiro indice da string com []: " << nome[0] << endl;
	cout << "Acessando o primeiro indice da string com at(): " << nome.at(0) << endl;

	try {
		// lan�a uma exce��o caso o n�mero de �ndice selecionado for maior do que a capacidade da string
		nome.at(5) = 'x';
	}
	catch (out_of_range const& exc) {
		cout << exc.what() << '\n';
	}

	system("PAUSE");
	return 0;
}