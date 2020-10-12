#include<stdio.h>

void fig1(int x);
void print(int x);

int main(){

	int x = 2;
	

	while( x%2 == 0 && x > 0 && x < 32){
		printf("informe um número impar entre >=1 e <=31: ");
		scanf("%d",&x);
	}

	print(x);
	

return 0;
}

void fig1(int x){

	int i, j, k, meio, y;

	meio = (x / 2) + 1;
	y = x;

	printf("\n\n");
	for(i = 1; i <= meio; i++){

		for(j = i; j <= y; j++){

			printf("%d ", j);

		}
		y--;
		printf("\n");
	}
}

void print(int x){

	char space[2] = {' ', ' '};
	int i, j, k, meio, y;

	//tratar entrada número negativo
	if( x < 0)
		x*= -1;

	meio = (x / 2) + 1;
	y = x;

	for(i = 1; i <= meio; i++){

		for(k = 1; k < i; k++)
			printf("%s", space);

		for(j = i; j <= y; j++)
			printf("%d ", j);

		y--;
		printf("\n");
	}
}