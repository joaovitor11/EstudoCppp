#include <string>
using std::string; //para abreviar e usar s� a palavra string
 
class Pessoa{
private:
	string nome;
	int idade;
	char sexo;

public:
	void SetNome(string nome); //set insere na vari�vel privada
	string GetNome(); //get retorna o valor da vari�vel privada
	
	void SetIdade(int idade);
	int GetIdade();
	
	void SetSexo(char sexo);
	char GetSexo();

	Pessoa();
};
