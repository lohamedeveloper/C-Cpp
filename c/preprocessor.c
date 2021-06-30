#include<stdio.h>
#include<string.h>

#define compare(compfunc, ...) compfunc(__VA_ARGS__) 

int main(){

	//returna o tamanho da string
	printf("Tamanho da string: %lu\n", 
		compare(strlen, "um"));
	/* 	compara argumentos de variáveis, 
		return 0 se igual
		return -1 se a primeira é maior
		caso contrario 1
	*/
	printf("Resultado de comparação de strings: %d\n", 
			compare(strcmp, "um", "dois"));

	return 0;
}