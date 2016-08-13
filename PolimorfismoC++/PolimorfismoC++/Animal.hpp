#ifndef Animal_HEADER
#define Animal_HEADER

#include <string>

using namespace std;

class Animal{
public:
		virtual string emitir_som()=0;
};
#endif