#include<stdio.h>

int main(){
    
    int numero;
    double salario, hora;

    
    scanf("%d",&numero);
    scanf("%lf", &hora);
    scanf("%lf", &salario);
    
    
    printf("NUMERO = %d\nSALARY = U$ %.2lf", numero, salario * hora);
    
    return 0;

}
