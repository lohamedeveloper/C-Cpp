#include<stdio.h>

void apagar(int v[], int n, int m);
int vencedor(int n, int k);
void imprimir(int v[], int n);

int main()
{

  int n, m, k, i = 0;

  scanf("%d",&n);

  while(i < n)
  {
    scanf("%d %d",&m,&k);
    i++;
    printf("Case %d: %d\n", i, vencedor(m,k));
  }

   return 0;
}
void apagar(int v[], int n, int m)
{
  int i, aux;
  for(i = m+1; i < n+1; i++)
  {
    v[i-1] = v[i];
  }
}
int vencedor(int n, int k)
{

  int atual, v[1000], i;

  for(i = 0; i < n; i++)
    v[i] = i+1;

    while(n != 0)
    {
      atual+=k;
      if(atual > n )
      {
        atual = atual - n;
        apagar(v,n,atual);
        n-=1;
      }
      else
      {
        apagar(v,n,atual);
        n-=1;
      }

      if(n == 0)
      {
        return v[atual];
      }
    }

}
void imprimir(int v[], int n)
{
  int i;
  printf("\n");
  for(i = 0; i < n; i++)
    printf("%d ",v[i]);
  printf("\n");
}
