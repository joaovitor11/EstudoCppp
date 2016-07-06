#ifndef Curso_h
#define Curso_h
#include <string>

using namespace std;

class Aluno;

class Curso{
private:
	string nome_curso;
	string area;
	int qtd_semestres;
	Aluno *aluno; //o curso é o todo e o aluno é apenas uma parte do curso. sendo assim, apenas a variável aluno aparece do lado do curso, mas a variavel curso não aparece do lado do aluno

public:
	string get_nome_curso();
	void set_nome_curso(string nome_curso);
	string get_area();
	void set_area(string area);
	int get_qtd_semestres();
	void set_qtd_semestres(int qtd_semestres);
	Aluno *get_aluno();
	void set_aluno(Aluno *aluno);
};

#endif