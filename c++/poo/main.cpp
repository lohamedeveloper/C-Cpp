#include "Conta.cpp"

int main()
{
    Conta MinhaConta;
    Conta *OutraConta;

    MinhaConta.saldo = 10; //erro

    MinhaConta.inicializa("Fulano", 10.25);
    OutraConta->inicializa("Beltrano", 220.00);

    MinhaConta.deposito(12.75);
    MinhaConta.consulta();
    MinhaConta.saque(15.00);
    MinhaConta.consulta();

    OutraConta->consulta();
}
//https://www.inf.pucrs.br/~pinho/PRGSWB/OO/oocpp.html
