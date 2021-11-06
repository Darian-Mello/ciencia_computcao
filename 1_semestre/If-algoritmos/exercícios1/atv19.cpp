/*Pedrinho tem um cofrinho com muitas moedas e deseja saber quantos reais conseguiu poupar.
Faça um algoritmo para ler a quantidade de cada tipo de moeda e mostre o valor total economizado
em reais.
Considere que existam moedas de 1, 5, 10, 25 e 50 centavos e ainda moeda de 1 real. Não avendo
moeda de um destes tipos a quantidade respectiva é zero.*/
#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"portuguese");
    float n1, n2, n3, n4, n5, n6, total;

    cout << "informe a quantidade de moedas de 1 centavo:\n";
    cin >> n1;

    cout << "informe a quantidade de moedas de 5 centavo:\n";
    cin >> n2;

    cout << "informe a quantidade de moedas de 10 centavos:\n";
    cin >> n3;

    cout << "informe a quantidade de moedas de 20 centavos:\n";
    cin >> n4;

    cout << "informe a quantidade de moedas de 50 centavos:\n";
    cin >> n5;

    cout << "informe a quantidade de moedas de 1 real:\n";
    cin >> n6;

    n1 = n1 * 1;
    n2 = n2 * 5;
    n3 = n3 * 10;
    n4 = n4 * 20;
    n5 = n5 * 50;
    n6 = n6 * 100; // moeda de um real

    total = (n1 + n2 + n3 + n5 + n6) / 100;

    cout << "você possui R$" << (float)total << endl;
}
