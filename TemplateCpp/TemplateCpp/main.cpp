#include <iostream>

using namespace std;
template <typename T> //declarando o template e o seu nome

T square(T x){ //tipo de retorno da fun��o e o tipo de vari�vel que ser� usada como par�metro
	return x*x;
}


int main(){
	/*n�o importa se o n�mero � inteiro ou double, a fun��o com o template ir� executar 
	normalmente retornando a fun��o do n�mero */
	cout<<square(5)<<endl;

	cout<<square(5.5)<<endl;

	system("PAUSE");
}