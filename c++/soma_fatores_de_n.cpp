#include<iostream>
#include<locale>

using namespace std;

int fator( int n);

int main()
{
    int n;

    setlocale(LC_ALL, "portuguese");

    cout << "Informe o n�mero: ";
    cin >> n;

    //caso n negativo
    if(n < 0) n = n * (-1);

    cout << endl << endl << "Soma dos fatoriais  de " << n << " s�o: " << fator(n) << endl;


return 0;
}
int fator( int n)
{
    int i, fator = 1, soma = 0;

    cout << "Fatores  de " << n << " s�o: ";
    for(i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            cout << i << " ";
            soma+=i;
        }
    }
    return soma;
}
