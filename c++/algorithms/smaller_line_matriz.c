/*
Create a program capable of reading data from a square matrix of integers. At the end of reading
the program should print the line number that contains the smallest of all the numbers read.
*/

#include<stdio.h>

int main(){

	int length_matriz, matriz[100][100];
	int i, j, menor, linha;

	printf("informe o tamanho da matriz quadatica: ");
	scanf("%d",&length_matriz);

	printf("Informe os valores da matriz\n");

	for(i=0; i< length_matriz; i++){
	
		printf("linha: %d informe os %d valores: ",i, length_matriz);
		
		for(j =0; j < length_matriz; j++)
			scanf("%d",&matriz[i][j]);
	}

	menor = matriz[0][0];

	for(i = 0; i < length_matriz; i++){

		for(j = 0; j< length_matriz; j++){

			if(menor >= matriz[i][j]){
				menor = matriz[i][j];
				linha = i;
			}
		}
	}

	printf("linha: %d, menor %d\n\n",linha, menor);

return 0;
}