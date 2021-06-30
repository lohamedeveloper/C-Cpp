#include<stdio.h>
#include<locale.h>

#define NumeroPrimo "N�mero %d � Primo"
#define NumeroNaoPrimo "N�mero %d n�o � Primo"

int EntradaValidarNumero();
void CalculoNumeroPrimo(int n);

int main()
{
    int n;
    setlocale(LC_ALL,"Portuguese");


    n = EntradaValidarNumero(n);
    CalculoNumeroPrimo(n);

return 0;
}
int EntradaValidarNumero()
{
    int n = -1;
    while( n < 1 )
    {
        scanf("%d",&n);
        if( n < 1)
        {
            printf("\nN�mero inv�lido\n\nFavor informar um n�mero natural diferente de 0");
        }
    }

    return n;
}

void CalculoNumeroPrimo(int n)
{
    int i;

    if( n == 1 || n == 2)
    {
        printf( NumeroPrimo , n );
    }
    else
    {
        for(i = 2; i < n-1; i++)
        {
            if(n % i == 0)
            {
                printf(NumeroNaoPrimo, n);
                break;
            }
        }
        if( i+1 == n)
        {
            printf(NumeroPrimo, n);
        }
    }
}
