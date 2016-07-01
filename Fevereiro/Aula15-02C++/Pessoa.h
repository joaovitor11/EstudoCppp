#include <string>
using std::string; //para abreviar e usar só a palavra string
 
class Pessoa{
private:
	string nome;
	int idade;
	char sexo;

public:
	void SetNome(string nome); //set insere na variável privada
	string GetNome(); //get retorna o valor da variável privada
	
	void SetIdade(int idade);
	int GetIdade();
	
	void SetSexo(char sexo);
	char GetSexo();

	Pessoa();
};
