#ifndef Ave_HEADER
#define Ave_HEADER
#include "Animal.hpp"
#include <string>

using namespace std;

class Ave : Animal
{
public:
	Ave();
	~Ave();
	void setTipo_som(string tipo_som);
	string emitir_som();

private:
	string tipo_som;
};


#endif