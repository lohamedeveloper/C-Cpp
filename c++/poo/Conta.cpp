#include<iostream>

using namespace std;

class Conta
{
    //atributos privados default
    int numero;
    string nome;
    float saldo;

public:
    void inicializar(string n, float s);
    void deposito(float valor);
    void consulta();
    int saque(float valor);

};


void Conta::inicializar(string n, float s)
{
    nome = n;
    saldo = s;
    if(saldo < 0)
        cout << "Erro na criação da conta!!" << endl;
}

void Conta::deposito(float valor)
{
    saldo = saldo + valor;
}

void Conta::consulta()
{
    cout << "Cliente: " << nome << endl;
    cout << "Saldo Atual: " << saldo << endl;
    cout << "Número da canta: " << numero << endl;
}
int Conta::saque(float valor)
{

    if(saldo < valor)
        return 0;
    else
    {
        saldo = saldo - valor;
        return 1;
    }
}

