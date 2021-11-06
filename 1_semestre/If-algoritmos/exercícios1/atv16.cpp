/*Suponha que um caixa eletrônico disponha apenas de notas de 1, 2,5,10,20,50 e 100 reais .
Considerando que alguém está sacando um determinado valor, escreva um algoritmo que mostre a
quantidade de cada tipo de notas que o caixa deve fornecer. Suponha que o sistema monetário não
utilize centavos*/

#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL,"portuguese");
    int valor, n1, n2, n3, n4, n5, n6, n7;

    cout << "informe o valor que deseja sacar: \n";
    cin >> valor;

    n1 = valor / 100;
    valor = valor % 100; // mesmo princípio do exercício número 3.
    n2 = valor / 50;
    valor = valor % 50;
    n3 = valor / 20;
    valor = valor % 20;
    n4 = valor / 10;
    valor = valor % 10;
    n5 = valor / 5;
    valor = valor % 5;
    n6 = valor / 2;
    valor = valor % 2;
    n7 = valor / 1;

    cout << "você vai reeceber o valor na seguinte quantidade de cédulas: (enumeradas com o valor de 100, 50, 20, 10, 5, 2, 1)\n";
    cout << "você vai receber " << n1 << " notas de 100\n";
    cout << "você vai receber " << n2 << " notas de 50\n";
    cout << "você vai receber " << n3 << " notas de 20\n";
    cout << "você vai receber " << n4 << " notas de 10\n";
    cout << "você vai receber " << n5 << " notas de 5\n";
    cout << "você vai receber " << n6 << " notas de 2\n";
    cout << "você vai receber " << n7 << " notas de 1\n";
}


