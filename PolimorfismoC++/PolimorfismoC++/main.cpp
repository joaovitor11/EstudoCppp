#include <iostream>
#include <string>
#include "Humano.hpp"
#include "Ave.hpp"

using namespace std;

int main(){
	Humano *joao = new Humano();
	Ave *sabia = new Ave();
	string tipo_som;

	cout << "Digite o som emitido pela ave: ";
	cin >> tipo_som;
	sabia->setTipo_som(tipo_som);
	
	cout << "Som emitido por Joao: " << joao->emitir_som() << endl;
	cout << "Som emitido pelo sabia: " << sabia->emitir_som() << endl;
	joao->~Humano();
	sabia->~Ave();
	system("PAUSE");
	return 0;
}