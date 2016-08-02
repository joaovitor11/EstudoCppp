#ifndef Aluno_hpp
#define Aluno_hpp

#include <string>
#include "Pessoa.hpp"

using namespace std;

class Aluno : private Pessoa{
private:
	string ra;
	string curso;
};

#endif