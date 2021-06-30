#include<stdio.h>

int main()
{
	
	if(remove("t") == 0)	
		
		printf("Arquivo removido com sucesso! ");
	
	else printf(" Erro ao remover arquivo\n Por favor verifica o nome\n");
	
	return 0;
}