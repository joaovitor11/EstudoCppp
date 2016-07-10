#ifndef Coracao_h
#define Coracao_h

class Coracao{
private:
	int qtd_veias;
	int qtd_arterias;

public:
	int get_qtd_veias();
	void set_qtd_veias(int qtd_veias);
	int get_qtd_arterias();
	void set_qtd_arterias(int qtd_arterias);
};

#endif