#ifndef Humano_HEADER
#define Humano_HEADER
#include "Animal.hpp"
#include <string>

using namespace std;

class Humano : Animal
{
public:
	Humano();
	~Humano();
	string emitir_som();

};
#endif