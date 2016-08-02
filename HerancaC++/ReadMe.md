# Herança em C++

## Definição

A herança permite que classes se especializem, obtendo atributos e métodos de classes mais genéricas, permitindo assim o reaproveitamento de código, uma das ideias da Orientação a Objetos. Outro ponto positivo de usar herança a ser citado é o desempenho, se comparado com o uso da composição numa relação entre duas classes.

## Herança em C++

Considere as duas classes a seguir:

!["Exemplo de Herança"](C:\Users\joao vitor\Desktop\Herança em C++.jpg)

Imagem 1 - Classe Aluno estendendo de Pessoa

Traduzindo o diagrama para a linguagem escrita, toda pessoa dizendo de forma geral tem um nome, idade, altura e peso. Pode andar, falar e enxergar. O Aluno também é uma pessoa, porém além de conter as informações de uma pessoa comum, ele também contém um ra, ou número de matricula na instituição que ele estuda e também faz parte de um curso. Para não escrever novamente os atributos da classe Pessoa, utiliza-se uma flecha da cor branca apontando para a classe mais genérica, que no nosso caso é Pessoa.

Note que nos atributos da classe Pessoa possuem um jogo da velha. Sendo assim, toda classe que se entender da classe Pessoa irá obter esses atributos.

## Como implementar herança em C++?

Para se programar herança na linguagem C++, declare a classe mais especializada, utilize dois pontos, declare o tipo de acesso dos atributos e métodos estendidos (public, private ou protected) e por último escreva o nome da classe base.

Tipos de acesso:

* public - os métodos e atributos herdados com visibilidade public e protected serão publicos na classe derivada;

* private - os métodos e atributos herdados com visibilidade public e protected serão privados na classe derivada;

* private - os métodos e atributos herdados com visibilidade public e protected ficarão protegidos.

!["Exemplo de Herança"](C:\Users\joao vitor\Desktop\Extendendo classe em C++.jpg)

Imagem 2 - Forma de herança em C++

## Implementando o exemplo das classes Pessoa e Aluno

* Classe Pessoa:

```CPP
#ifndef Pessoa_hpp
#define Pessoa_hpp

#include <string>

using namespace std;

class Pessoa{
protected:
	string nome;
	int idade;
	float altura;
	float peso;

public:
	void andar();
	void falar();
	void enxergar();
};

#endif

```

* Classe Aluno:

```CPP
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
```

## Referências

[Herança C++ ](http://paginas.fe.up.pt/~lpreis/prog2_06_07/AulasTeoricas/9.heranca.pdf)

[POO e C++: Herança e
Polimorfismo](http://webserver2.tecgraf.puc-rio.br/ftp_pub/lfm/CIV2802-111-aula06.pdf)

[9. HERANÇA MÚLTIPLA
](http://www.inf.pucrs.br/manssour/LinguagemC++/HerancaMultipla.pdf)

[HERANÇA
](http://www.dei.isep.ipp.pt/~hleitao/EI/Heranca.pdf)


[Princípios de Análise
e Projeto de Sistemas
com UML
2ª edição
](http://www.inf.ufpr.br/silvia/ESNovo/UML/material/Diagrama_classe_Livro.pdf)
