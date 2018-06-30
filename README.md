# Implementação: Casamento de Strings com Autômatos Finitos

## Introdução

Os algoritmos foram implementados em linguagem C utilizando a IDE [Code::Blocks](http://www.codeblocks.org/), como complemento parcial à aprovação na disciplina de Teoria da Computação do Curso de Ciência da Computação da Universidade Estadual do Norte do Paraná (UENP). Orientador: Wellington Aparecido Della Mura.

As funções implementadas têm como objetivo realizar a busca por Prefixo, Sufixo e Subpalavra, como as seguintes funções já implementadas (java.lang.String.contains()), prefixo(java.lang.String.startsWith()) e sufixo (java.lang.String.endsWith()), porém correlacionado com o formalismo Autômato Finito e as operações fechadas nas linguagens regulares como a concatenação e união.Tem-se aqui uma explicação prévia de seu funcionamento que será detalhado a seguir. Como base para o entendimento considere as posições do vetor, representadas por “n” | n pertence a N* , como os estados do autômato e tendo-se o tamanho da chave como representante do estado final.

## Funções

* Na função "comecaCom" tem-se um vetor "entrada" representando a fita do autômato e um vetor "chave" sendo o prefixo a ser buscado, após percorrer a fita ele retorna verdadeiro ou falso, se o tamanho da chave e o contador resultado forem iguais ou diferentes, para a função principal onde é verificado e exibido na tela.

![Exemplo "comecaCom" verdadeiro](/images/exemplo1.png)

![Exemplo "comecaCom" falso](/images/exemplo2.png)

* Na função "terminaCom" tem-se um vetor "entrada" representando a fita do autômato e um vetor "chave" sendo o sufixo a ser buscado, segue a mesma lógica da função “comecaCom”, porém percorrendo a partir do final da entrada, pois o começo pode ser qualquer caractere.

![Exemplo "terminaCom" verdadeiro](/images/exemplo3.png)

![Exemplo "terminaCom" falso](/images/exemplo4.png)

* Na função "possui" tem-se um vetor "entrada" representando a fita do autômato e um vetor "chave" sendo a subpalavra a ser buscada, após percorrer a fita é comparado o contador resultado com o tamanho da chave, como explicado acima sendo considerado como estado final do autômato,retornando verdadeiro ou falso para função principal, onde é verificado e exibido na tela.

![Exemplo "possui" verdadeiro](/images/exemplo5.png)

![Exemplo "possui" falso](/images/exemplo6.png)


## Como utilizar

* Primeiramente deve-se escolher uma opção no menu, caso não seja uma escoha válida, limpa a tela e retorna para função principal.

![Menu](/images/exemplo7.png)

* Após a escolha da opção, digita-se a chave a ser buscada (podendo variar entre Prefixo, Sufixo e Subpalavra), e então o texto onde será buscada a informação. Então o algoritmo retorna alguma das respostas demonstradas acima.

![Menu](/images/exemplo8.png)



