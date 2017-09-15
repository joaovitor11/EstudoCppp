#include <iostream>

using namespace std;
template <typename T> //declarando o template e o seu nome

T square(T x){ //tipo de retorno da função e o tipo de variável que será usada como parâmetro
	return x*x;
}


int main(){
	/*não importa se o número é inteiro ou double, a função com o template irá executar 
	normalmente retornando a função do número */
	cout<<square(5)<<endl;

	cout<<square(5.5)<<endl;

	system("PAUSE");
}