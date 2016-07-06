/*
Nome do programa: AgregacaoCpp
Objetivo do programa: Mostrar a relação de duas classes por meio de agregação e implementar seu funcionamento em C++ através do uso de ponteiros
Nome do programador: João
Data de criação: 06/07/2016
*/
#include <iostream>
#include "Aluno.hpp"
#include "Curso.hpp"

using namespace std;

int main(){
	Aluno *a1 = new Aluno();
	Curso *c1 = new Curso();

	a1->set_nome("joao");
	a1->set_ra("1111111");
	a1->set_semestre(3);

	c1->set_nome_curso("Analise e Desenvolvimento de Sistemas");
	c1->set_area("TI");
	c1->set_qtd_semestres(6);
	c1->set_aluno(a1);

	cout<<"Exibindo os dados do curso e do aluno matriculado:\n\n";
	cout<<"Nome do curso: "<<c1->get_nome_curso()<<endl;
	cout<<"Area do curso: "<<c1->get_area()<<endl;
	cout<<"Quantidade de semestres: "<<c1->get_qtd_semestres()<<endl;
	cout<<"Nome do aluno: "<<c1->get_aluno()->get_nome()<<endl;
	cout<<"RA do aluno: "<<c1->get_aluno()->get_ra()<<endl;
	cout<<"Semestre atual: "<<c1->get_aluno()->get_semestre()<<endl;

	system("PAUSE");
	return 0;
}