#include<stdio.h>
#include<locale.h>

int fator(int n);
int main()
{
    int n;

    setlocale(LC_ALL,"");

    printf("Informe n: ");
    scanf("%d",&n);

    //caso número for negativo
    if(n < 0) n = n * (-1);

    printf("Soma dos fatoriais  de %d: %d\n\n", n, fator(n) );

    return 0;
}

int fator(int n)
{
    int i, soma = 0;
    printf("fatores de %d são: ", n);
    for(i = 1; i < n+1; i++)
    {
        if(n % i == 0)
        {
            printf("%d ",i);
            soma+=i;
        }
    }
    printf("\n\n");
    //returnando a soma de todos os factores de n
    return soma;
}
