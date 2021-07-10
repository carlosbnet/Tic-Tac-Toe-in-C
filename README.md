# Tic Tac Toe in C
#### Descrição geral

Este jogo foi inspirado no famoso "Jogo da Velha", o conceito principal foi alocar um espaço na memoria de 3x3 e setar cada valor com 1 (X) e -1 (O), e usar as função para calcular quando um jogador ganhar.



#### Descrição das funções criadas

**int *newGame()** - Aloca uma matriz com na quantidade de COL x LIN, e retorna como um ponteiro.

**void imprimeMatriz(int *mat)** - Recebe um ponteiro para matriz e imprime ela em tela

**void preencheMatriz(int value,int lin, int col, int *mat)** - seta o valor 1 ou -1 a uma determinada posição na matriz, faz isso recebendo o valor, a linha e coluna e a matriz para alteração

**int verificaVencendor(int *mat)** - Recebe uma matriz e atraves da soma das suas colunas, linhas e diagonais verifica se algum jogador ganhou



#### Considerações

Este jogo foi criado para exercitar assuntos como:

- Ponteiros
- Alocação de Memória
- Operações de ponteiros
- Matriz Unidimensional e Bidimensionais
