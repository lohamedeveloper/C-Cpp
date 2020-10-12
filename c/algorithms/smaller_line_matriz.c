/*
Create a program capable of reading data from a square matrix of integers. At the end of reading
the program should print the line number that contains the smallest of all the numbers read.
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct List{

	int  n;
	struct List *prox; 
}List;

List *list = NULL;

void insert(int n);
void print();
int LineValue(int i);
void liberyMemory();


int main(){

	int matriz[100][100];
	int length_matriz, i, j, k = 0, smaller;

	printf("Inform the size of the quadratic matrix: ");
	scanf("%d",&length_matriz);

	printf("Enter the matrix values\n\n");

	for(i=0; i< length_matriz; i++){
	
		printf("line: %d Enter the %d values: ",i+1, length_matriz);
		
		for(j =0; j < length_matriz; j++)
			scanf("%d",&matriz[i][j]);
	}

	

	smaller = matriz[0][0];
	insert(1);

	for(i = 0; i < length_matriz; i++){

		for(j = 0; j< length_matriz; j++){

			if(smaller > matriz[i][j]){
				smaller = matriz[i][j];
				insert(i+1);
			}
			//case of the previous line is in the current line
			else if(smaller == matriz[i][j]){
				
				if(LineValue(i+1) == -1){
					insert(i+1);
				}
			}
		}
	}

	print();
	printf("\nnumber smaller: %d\n\n", smaller);


	liberyMemory(list);

return 0;
}

int LineValue(int i){
	
	List *aux = list;

	while(aux != NULL){

		if(aux->n == i)
			return i;
		aux = aux->prox;
	}
	return -1;
}

//insert end
void insert(int n){

	List *aux = (List *)malloc(sizeof(List)), *aux2;

	aux->n = n;
	aux->prox = NULL;

	if(list == NULL){
		list = aux;
	}
	else{
		aux2 = list;

		while(aux2->prox != NULL)
			aux2 = aux2->prox;
		aux2->prox = aux;

	}
}


void print(){
	List *aux = list;
	printf("line smaller:");
	while(aux->prox != NULL || aux->n && aux->prox->n){
		printf(" %d",aux->n);
		aux = aux->prox;
	}

}

void liberyMemory(){

	List *p = list->prox;

	if(list != NULL){

		while(p != NULL){

			free(list);
			list = p;
			p = p->prox;
		}

		free(list);
	}
}