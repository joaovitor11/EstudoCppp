#include <string>

using namespace std;

class Produtos{
private:
	string descricao;
	float preco;
	int estoque;
	int totVendido;

public:
	void setDescricao(string descricao);
	string getDescricao(void);

	void setPreco(float preco);
	float getPreco(void);

	void setEstoque(int estoque);
	int getEstoque(void);

	void setTotVendido(int totVendido);
	int getTotVendido(void);

	void aplicamento(float porcentagem);
	void venda(int qtdeVendida);
	float totalVendido(void);

};