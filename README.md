# Implementação: Casamento de Strings com Autômatos Finitos


Os algoritmos foram implementados em linguagem C, como complemento parcial à aprovação na disciplina de Teoria da Computação do Curso de Ciência da Computação da Universidade Estadual do Norte do Paraná (UENP). Orientador: Wellington Aparecido Della Mura.

As funções implementadas têm como objetivo realizar a busca por Sufixo, Prefixo e Subpalavra, como as seguintes funções já implementadas (java.lang.String.contains()), prefixo(java.lang.String.startsWith()) e sufixo (java.lang.String.endsWith()), porém correlacionado com o formalismo Autômato Finito e as operações fechadas nas linguagens regulares como a concatenação e união.Tem-se aqui uma explicação prévia de seu funcionamento que será detalhado a seguir. Como base para o entendimento considere as posições do vetor, representadas por “n” | n pertence a N* , como os estados do autômato e tendo-se o tamanho da chave como representante do estado final.

Na função "possui" tem-se um vetor "entrada" representando a fita do autômato e um vetor "chave" sendo a subpalavra a ser buscada, após percorrer a fita ele retorna o contador resultado para função principal onde é comparado o tamanho armazenado no contador resultado e o tamanho da chave, como explicado acima sendo considerado como estado final do autômato, caso sejam iguais, indicam que possui subpalavra.

Na função "comecaCom" tem-se um vetor "entrada" representando a fita do autômato e um vetor "chave" sendo o prefixo a ser buscado, após percorrer a fita ele retorna o tamanho do resultado para a função principal onde é verificado se o tamanho da chave é o mesmo do resultado retornado pela função se for o mesmo significa que a entrava começa com o prefixo buscado.

Na função "terminaCom" tem-se um vetor "entrada" representando a fita do autômato e um vetor "chave" sendo o sufixo a ser buscado, segue a mesma lógica da função “comecaCom”, porém percorrendo a partir do final da entrada, pois o começo pode ser qualquer caractere.


