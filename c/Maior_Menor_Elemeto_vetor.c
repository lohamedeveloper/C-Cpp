#include<stdio.h>

int maior_elemento(int v[], int n);

int main()
{
    int i, v[10], n;

    printf("Quantidade de numeros: ");
    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        scanf("%d",v[i]);
    }
    printf("Maior: %d", maior_elemento(v, n) );
    return 0;
}

int maior_elemento(int v[], int n)
{
    int i, maior = v[0];

    for(i = 1; i < n; i++)
    {
        if(v[i] > maior)
        {
            maior = v[i];
        }
    }
    return 1;
}
