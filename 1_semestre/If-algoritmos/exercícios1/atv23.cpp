/*Crie um algoritmo que leia um valor de um dep�sito e o valor da taxa de juros. Calcule e imprima o
valor do rendimento e o valor total ap�s o rendimento*/
#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"portuguese");
    float deposito, taxa, rendimento, total;

    cout << "informe o valor do deposito: \n";
    cin >> deposito;

    cout << "informe o valor da taxa de juros: \n";
    cin >> taxa;

    rendimento = deposito * (taxa / 100);
    total = rendimento + deposito;

    cout  << "o valor do rendimento �: \n" << rendimento << endl;
    cout << "o valor total �: \n" << total;
}
