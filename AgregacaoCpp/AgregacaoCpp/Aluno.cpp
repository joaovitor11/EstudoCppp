#include <iostream>
#include <string>
#include "Aluno.hpp"

using namespace std;

string Aluno::get_nome(){
	return Aluno::nome;
}

void Aluno::set_nome(std::string nome){
	this->nome = nome;
}

string Aluno::get_ra(){
	return Aluno::ra;
}

void Aluno::set_ra(std::string ra){
	this->ra = ra;
}

int Aluno::get_semestre(){
	return Aluno::semestre;
}

void Aluno::set_semestre(int semestre){
	this->semestre = semestre;
}