#ifndef Aluno_h
#define Aluno_h

#include <string>

using namespace std;

class Aluno{
private:
	string nome;
	string ra;
	int semestre;

public:
	string get_nome();
	void set_nome(string nome);
	string get_ra();
	void set_ra(string ra);
	int get_semestre();
	void set_semestre(int semestre);
};

#endif