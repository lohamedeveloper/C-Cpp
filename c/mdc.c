#include<stdio.h>

int mdc(int n1, int n2);
//int mmc(int n1, int n2);

int main(){

          int n1, n2;
          scanf("%d %d",&n1, &n2);
          printf(" mdc %d\n ", mdc(n1,n2));
          
return 0;

}

int mdc(int n1, int n2){

    int resultado;
    
    if(n1 < 1 || n2 < 1){
          if(n1 < 1)
             n1 = n1 * (-1);
          if(n2 < 1)
             n2 = n2 * (-1);
    }
   
    
    if( n1 !=  n2 ){

          while( n1 != n2 ){
       
                 if( n1 > n2 ){
                    
                    resultado  = n1 - n2;
                    n1 = resultado; 
                 }
                 else{
                    resultado = n2 - n1;
                    n2 = resultado;
                 }     
          }
    
    
    }
         
    return n1;
}
