/*Fa�a um programa que leia o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
a) A idade desta pessoa
b) Quantos anos ela ter� em 2050.*/
#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"portuguese");
    int anoatual, nascimento, idade, futuro;

    cout << "informe a seu ano de nascimento\n";
    cin >> nascimento;

    cout << "informe o ano atual\n";
    cin >> anoatual;

    idade = anoatual - nascimento;
    futuro = 2050 - nascimento;

    cout << "sua idade �: \n" << idade << endl;
    cout << "em 2050, voc� ter�: \n" << futuro << endl;
}
