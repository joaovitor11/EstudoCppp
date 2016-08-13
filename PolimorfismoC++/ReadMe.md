# Polimorfismo em C++

Neste tutorial irei abordar o que é e como deve ser implementado o polimorfismo na linguagem de programação C++.

## O que é Polimorfismo?

O significado da palavra "polimorfismo" remete a algo possuir vários comportamentos os várias formas. Em orientação a objetos, subclasses herdam método(s) da superclasse, porém eles possuem comportamentos distintos, mas usam a mesma assinatura (sem alterar o nome da função ou seus parametros, se houverem). Mas para isso é necessário declarar uma subclasse do tipo abastro (para saber se uma classe é abastrata ou não, note se seu nome está em itálico, se estiver, essa classe é abstrata).

Veja a imagem a seguir para compreender com mais clareza o que é uma classe abstrata e como modelar um exemplo de polimorfismo entre duas ou mais classes:

<center>![Exemplo Polimorfismo](C:\Users\joao vitor\Desktop\Exemplo_Polimorfismo.jpg) </center>

<center>Imagem 1 - Exemplo de Polimorfismo </center>

<p>
No exemplo anterior podemos notar que a classe animal é a classe abstrata, a classe que não gera instâncias, sendo que esta também possui um método também abstrato, chamado "emitir_som()" que retorna uma string. Em outras palavras, para que exista o polimorfismo entre duas ou mais classes é necessário que a superclasse seja do tipo abstrata e que essa classe possua um método também abstrato.

## Como implementar polimorfismo em C++?

Você deve estar se perguntando se a programação de uma classe abstrata é exatamente igual as linguagens de programação Java, C# ou PHP? A resposta é não. Veremos sua implemetação nas linguagens citadas:

* Java:
```java
public abstract class Animal
```

* C#:
```csharp
public abstract class Animal
```

* PHP:
```php
abstract class Animal
```

A forma de implementação nas três linguagens citadas é quase identica, não? Porém no C++ ele não usa esse esteriótipo "abstract", mas sim o "virtual", sem contar que para ser classificada como uma classe virtual, ela deverá ter pelo menos uma função virtual pura.

## O que é  uma função virtual pura?

Uma função virtual pura determina se a classe é ou não abstrata, sem isso não é possível realizar o polimorfismo, como dito anteriormente.

## Como programar uma função virtual pura?

Para isso é necessário declarar a função, fazendo esta receber 0. Essa é a diferença entre uma função virtual e uma função virtual pura. Veja o exemplo a seguir:

* Função Virtual:
```CPP
virtual void print();
```

* Função Virtual Pura:
```CPP
virtual void print()=0;
```

## Implementar a classe Animal e suas subclasses em C++

Primeiro iremos programar a classe Animal:

* Animal.hpp:

```CPP
#ifndef Animal_HEADER
#define Animal_HEADER

#include <string>

using namespace std;

class Animal{
public:
		virtual string emitir_som()=0;
};
#endif
```

Agora iremos programar a classe Humano que estende da classe Animal.

* Humano.hpp:

```CPP
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
```

Agora iremos implentar as funções dessa classe Humano:

* Humano.cpp:

```CPP
#include "Humano.hpp"
#include <iostream>
#include <string>

using namespace std;

Humano::Humano(){
	cout << "Construtor Humano chamado"<<endl;
}

Humano::~Humano(){
	cout << "Destrutor Humano chamado" << endl;
}

string Humano::emitir_som(){
	return "BIRRRRRL";
}
```

Agora iremos implementar a classe Ave. Como as aves emitem sons diferentes, iremos declarar uma variável para perguntar seu som especifico no método principal:

* Ave.hpp:

```CPP
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
```

Agora iremos programar a classe Ave:

* Ave.cpp:

```CPP
#include "Ave.hpp"
#include <iostream>
#include <string>

using namespace std;

Ave::Ave(){
	cout << "Construtor Ave chamado" << endl;
}

Ave::~Ave(){
	cout << "Destrutor Ave chamado" << endl;
}

string Ave::emitir_som(){
	return Ave::tipo_som;
}

void Ave::setTipo_som(string tipo_som)
{
	this->tipo_som = tipo_som;
}
```

Enfim iremos instanciar as classes no método principal:

* main.cpp:

```CPP
#include <iostream>
#include <string>
#include "Humano.hpp"
#include "Ave.hpp"

using namespace std;

int main(){
	Humano *joao = new Humano();
	Ave *sabia = new Ave();
	string tipo_som;

	cout << "Digite o som emitido pela ave: ";
	cin >> tipo_som;
	sabia->setTipo_som(tipo_som);

	cout << "Som emitido por Joao: " << joao->emitir_som() << endl;
	cout << "Som emitido pelo sabia: " << sabia->emitir_som() << endl;
	joao->~Humano();
	sabia->~Ave();
	system("PAUSE");
	return 0;
}
```

## Referências

[Abstração de Classes](http://php.net/manual/pt_BR/language.oop5.abstract.php)

[Polimorfismo em Java](http://www.dca.fee.unicamp.br/courses/PooJava/polimorf/polijex.html)

[Polimorfismo](http://www.dca.fee.unicamp.br/courses/PooJava/polimorf/index.html)

[Funções virtuais puras e classes abstratas](http://www.dca.fee.unicamp.br/cursos/POOCPP/node59.html)

[Funções virtuais](https://msdn.microsoft.com/pt-br/library/0y01k918.aspx)

[Classes abstratas (C++)](https://msdn.microsoft.com/pt-br/library/c8whxhf1.aspx)

[C# - Classes Abstratas (revisão)](http://www.macoratti.net/12/06/c_caip1.htm)

[Classes Abstratas](https://www.caelum.com.br/apostila-java-orientacao-objetos/classes-abstratas/)
