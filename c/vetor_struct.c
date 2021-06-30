#include<stdio.h>

typedef  struct Funcionario
{
  char nome[200];
  int idade;
  float salario;
} Funcionario;

int main()
{

  Funcionario funcionario;

  scanf(" %[^\n]s", funcionario.nome );
  scanf("%d", &funcionario.idade);
  scanf("%f", &funcionario.salario );

  printf("\n\n");

  printf(" Nome: %s\n Idade: %d\n Salario: %f\n\n" , funcionario.nome, funcionario.idade, funcionario.salario);

  if(1=1):

  endif


}
