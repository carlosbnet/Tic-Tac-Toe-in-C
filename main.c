#include <stdio.h>
#include <stdlib.h>


#define LIN 3
#define COL 3

int *newGame();
void imprimeMatriz(int *mat);
void preencheMatriz(int value,int lin, int col,int *mat);
int verificaVencendor(int *mat);

int main(void) {

  int *mat;
	int lin,col,value;
	int jogadorAtual;
	int jogador1;
	int jogador2;
	int jogadorVez = 0;

	mat = newGame();

	//A ideia é escolher entre -1 e 1
	printf("Escolha seu player, jogador 1: ");
	scanf("%d",&jogador1);

	printf("Escolha seu player, jogador 1 ");
	scanf("%d",&jogador2);

	
	while(1){


		if(jogadorVez%2==0){

			printf("É sua vez, jogador 1: \n");
			jogadorAtual = jogador1;//-1

		}else if(jogadorVez%2==1){

			printf("É sua vez, jogador 2: \n");
			jogadorAtual = jogador2;//1

		}
		
		printf("\n");
		
		
		printf("Digite sua posição: ");

		scanf("%d %d",&lin,&col);
		
		preencheMatriz(jogadorAtual, lin, col, mat);


		if(verificaVencendor(mat) == 1){

			printf("Jogador 1 ganhou!! \n");

			break;

		}else if (verificaVencendor(mat) == 2){

			printf("Jogador 2 ganhou!! \n");

			break;
		}

		jogadorVez++;

	}

	

  return 0;
}

int verificaVencendor(int *mat){


int valorColuna = 0;
int valorLinha = 0 ;
int valorDiagonal1 = 0;
int valorDiagonal2 = 0;
int ganhou;


//Captura coluna
		for(int i = 0, d = 2; i< LIN;i++, d--){
					
					valorDiagonal1 += mat[(i*LIN) + i];
					valorDiagonal2 += mat[(i*LIN) + d];

				for(int j = 0; j < COL;j++){

						valorLinha  += mat[(i*COL) + j];
 					  valorColuna += mat[(j * COL) + i];

				}

				if(valorDiagonal1 == 3 || valorDiagonal2 == 3 || valorLinha == 3){

					return 1;

				}else if (valorDiagonal1 == -3 || valorDiagonal2 == -3 || valorColuna == -3){
		
				return 2;
		
				}

			valorLinha = 0;
			valorColuna = 0;

		}

	return 0;
}


//Preenche a matriz com os valores
void preencheMatriz(int value,int lin, int col,int *mat){

			mat[(lin*COL)+col] = value;

			imprimeMatriz(mat);

}



//Imprime matriz

void imprimeMatriz(int *mat){

printf("\n");

for(int i = 0; i < LIN;i++){
    for(int j = 0; j < COL;j++){
      printf("  %d  ", mat[(i*COL)+j]);
    }
    printf("\n");
  }
printf("\n");

}



//Inicia novo jogo
int *newGame(){

int *mat;

mat = malloc(COL * LIN * sizeof(int));

 for(int i = 0; i < LIN;i++){
    for(int j = 0; j < COL;j++){
      mat[(i*COL)+j] = 0;
    }
    
  }

	imprimeMatriz(mat);

return mat;

}
