# Agregação Em C++

  Antes de dizer como se implementa um exemplo de Agregação na linguagem C++. Antes de mais nada é necessário explicar sua definição e como esse tipo de relação é feita em um diagrama de classes.

## Definição de Agregação

Como foi dito anteriormente, uma Agregação é um tipo de relação. Ela é feita entre duas classes para mostrar quem é o todo e quem é a parte.

## Exemplo de Agregação em um diagrama de classes

Como podemos ver na imagem abaixo, a classe pedido é o todo da relação e o item é uma parte do pedido, sendo que para haver um pedido é necessário ter pelo menos um ou vários itens, porém os itens pertencem exclusivamente a um pedido.

<center>![Exemplo de Agregação](C:\Users\joao vitor\Desktop\exemplo de agregação.png)
<center> Imagem 1 - Exemplo de Agregação

## Devo usar Agregação ou Composição?

Antes de responder essa pergunta é necessário levantar outra: caso a classe que representa o "todo" na relação for destruída, a parte também será? Por exemplo, caso um notebook seja destruído, o seu teclado também será, assim como sua tela, sendo assim, não podemos usar agregação, mas sim composição nesse exemplo do notebook.
Outro exemplo que pode ser citado é: caso uma galinha morra, seus ovos também morrerão? A resposta é não nesse caso, sendo assim, podemos usar agregação para associar a classe galinha com a classe ovo.

## Exemplo de Agregação em C++

Observe o diagrama de classes a seguir:
<center> ![Exemplo de Agregação](http://github.com/joaovitor11/EstudoCppp/tree/master/AgregacaoCpp/Imagens/Classe.jpg)
<center> Imagem 2 - Outro de Agregação

Você deve estar se perguntando: ok, mas e agora? Como faço para implementar (programar) essas classes? Existe algum código no C++ para ilustrar que a ClasseParte se associa com a ClasseTodo? Respondendo a segunda pergunta, não, não existe algum código específico para demonstrar que as classes se associam, sejam por agregação ou composição. A forma que existe para demonstrar agregação entre duas classes no C++ é declarar uma variável do tipo ClasseParte dentro da ClasseTodo desta forma:

```CPP
#ifndef ClasseTodo_h
#define ClasseTodo_h

class ClasseParte;

class ClasseTodo{
  ClasseParte *parte; //essa é a forma de demonstrar uma agregação entre duas classes em C++
};

#endif
```
## Referências

[Conceito de Agregação](http://www.les.inf.puc-rio.br/wiki/images/7/7f/Aula1-diagrama_classes.pdf)

[UML: composição x agregação](http://imasters.com.br/artigo/18901/uml/uml-composicao-x-agregacao?trace=1519021197&source=single)

[Princípios de Análise e Projeto de Sistemas com UML - UFPR](http://www.inf.ufpr.br/silvia/ESNovo/UML/material/Diagrama_classe_Livro.pdf)

[Relacionamento entre classes com Java E C++](www.professorvida.com.br/if62c/material/relacionamentos.pdf)
