# Composição em C++

## Definição

Composição é outra forma de associação que permite unir duas classes, exatamente como a agregação que consiste em uma classe que é o todo e outra classe que é a parte da relação. Porém quando usamos relação de composição, estamos dizendo que caso a classe todo seja destruída a parte também será.

## Exemplo de Composição

Observe a seguir a relação de composição entre a classe ContaBancária (todo) e HistóricoTransações(parte):

!["composição"](C:\Users\joao vitor\Desktop\Imagens\composicao.png)
Imagem 1 - Exemplo de Composição

A imagem anterior do diagrama de classes representa uma relação com a classe ContaBancária e HistóricoTransações, sendo assim, caso a classe ContaBancária seja destruída, a classe HistóricoTransações também deixará de existir.
Note que a classe ContaBancária está escrita com uma fonte itálica, isso significa que esta é uma classe abstrata, ou seja, uma classe que não gera instâncias (objetos).

 ## Herança VS Composição

 Sempre que possível use composição invés de herança. Para reforçar essa tese, veja o exemplo logo abaixo da Classe Pilha sendo subclasse da Classe Vetor:

 !["herança classe vetor e Pilha"](C:\Users\joao vitor\Desktop\Imagens\herança.png)

 Imagem 2 - Classe Pilha estendendo da classe Vetor

 O exemplo anterior existem pontos negativos a serem citados:

 * A Classe pilha está obtendo recursos que não deveriam pertencer a ela (adicionar e remover). Apenas o obter deveria ser estendido da classe vetor para pilha.

 * Violação de um dos pilares da orientação a objetos, pelo fato de   que todos os métodos e atributos estendidos da classe Vetor ficarão expostos na classe Pilha (ficarão com a visibilidade pública).


 Agora observe as mesmas classes sendo mostradas com a composição:

 !["composição"](C:\Users\joao vitor\Desktop\Imagens\composicao2.png)

 Imagem 3 - Classe Pilha e Vetor com a relação de composição

 Da forma implementada com composição, a classe Pilha usa métodos e atributos (se houvessem), apenas que deveriam usar, no caso apenas obter() que pertence à classe Vetor.

 ## Como implementar uma relação de Composição em C++?

 Assim como a agregação, não existe um código na linguagem C++ que determine que duas classes estão associadas através da composição.
Para isso, necessário instanciar um objeto da classe parte no construtor da classe todo.

Considere o diagrama de Classes abaixo:

!["Composição C++"](C:\Users\joao vitor\Desktop\Imagens\Composicao3.jpg)

Imagem 4 - Classe Pessoa faz o papel de classe todo e Coracao faz o papel de parte na composição

A seguir veja o exemplo de como implementar as classes do diagrama. Primeiro será programada a classe Pessoa:

```CPP
#ifndef Pessoa_h
#define Pessoa_h

#include <string>
#include "Coracao.hpp"

using namespace std;

class Pessoa{
private:
	Coracao *c;
	string nome;
	float altura;
	float peso;
	int idade;

public:
	Pessoa(Coracao *c, string nome, float altura, float peso, int idade);
	Coracao *get_coracao();
	string get_nome();
	void set_nome(string nome);
	float get_altura();
	void set_altura(float altura);
	float get_peso();
	void set_peso(float peso);
	int get_idade();
	void set_idade(int idade);
};


#endif
```

Veja como programar a classe Coracao:

```CPP
#ifndef Coracao_h
#define Coracao_h

class Coracao{
private:
	int qtd_veias;
	int qtd_arterias;

public:
	int get_qtd_veias();
	void set_qtd_veias(int qtd_veias);
	int get_qtd_arterias();
	void set_qtd_arterias(int qtd_arterias);
};

#endif
```

## Referências

[Princípios de Análise e Projeto de Sistemas com UML - UFPR - Capítulo 5](www.inf.ufpr.br/silvia/ESNovo/UML/material/Diagrama_classe_Livro.pdf)

[modelo de classes de projeto - Capítulo 8](https://sistemas.riopomba.ifsudestemg.edu.br/dcc/materiais/49664274_Aula%2006%20-%20Daves%20Diagrama%20de%20Classes%20de%20Projeto.pdf)

[OOP - Herança x Composição](http://www.macoratti.net/11/05/oop_cph1.htm)

[Composing an Object](http://www.functionx.com/cpp/Lesson27.htm)

[10.2 — Composition](http://www.learncpp.com/cpp-tutorial/102-composition/)
