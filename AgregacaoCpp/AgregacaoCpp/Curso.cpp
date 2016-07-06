#include <iostream>
#include <string>
#include "Curso.hpp"

using namespace std;

string Curso::get_nome_curso(){
	return Curso::nome_curso;
}

void Curso::set_nome_curso(std::string nome_curso){
	this->nome_curso = nome_curso;
}

string Curso::get_area(){
	return Curso::area;
}

void Curso::set_area(std::string area){
	this->area = area;
}

int Curso::get_qtd_semestres(){
	return Curso::qtd_semestres;
}

void Curso::set_qtd_semestres(int qtd_semestres){
	this->qtd_semestres = qtd_semestres;
}

Aluno *Curso::get_aluno(){
	return Curso::aluno;
}

void Curso::set_aluno(Aluno *aluno){
	this->aluno = aluno;
}