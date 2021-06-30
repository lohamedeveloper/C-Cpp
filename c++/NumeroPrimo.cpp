#include<iostream>
#include<locale>

using namespace std;

int EntradaValidarNumero();
void CalculoNumeroPrimo(int n);

int main()
{
    int n;

    setlocale(LC_ALL, "portuguese");

    n = EntradaValidarNumero();
    CalculoNumeroPrimo(n);

return 0;
}


int EntradaValidarNumero()
{
    int n = -1;
    while( n < 1 )
    {
        cin >> n;
        if( n < 1)
        {
           cout << "Número inválido " << endl << "Favor informar um número natural diferente de 0 " << endl;;
        }
    }

    return n;
}

void CalculoNumeroPrimo(int n)
{
    int i;

    if( n == 1 || n == 2)
    {
        cout << "Número " << n << "é Primo" << endl;
    }
    else
    {
        for(i = 2; i < n-1; i++)
        {
            if(n % i == 0)
            {
                cout << "Número " << n << " não é Primo" << endl;
                break;
            }
        }
        if( i+1 == n)
        {
            cout << "Número " << n << "é Primo" <<endl;
        }
    }
}
