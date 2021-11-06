/*Um plano de fidelidade acumula 1 ponto a cada R$ 5,00 gastos em compras nas lojas afiliadas. Faça
um algoritmo para ler o valor de 4 compras feitas por um cliente e exibir quantos pontos ele acumulou
no total.
Considere que o cliente pode acumular pontos fracionários.*/
#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"portuguese");
    float c1, c2, c3, c4, valor, pontos;

    cout <<"Digite o valor da primeira compra: \n";
    cin >> c1;

    cout <<"Digite o valor da segunda compra: \n";
    cin >> c2;

    cout <<"Digite o valor da terceira compra: \n";
    cin >> c3;

    cout <<"Digite o valor da quarta compra: \n";
    cin >> c4;

    valor = c1 + c2 + c3 + c4;
    pontos = valor / 5;

    cout << "você acumulou" << pontos << " pontos!\n";
}
