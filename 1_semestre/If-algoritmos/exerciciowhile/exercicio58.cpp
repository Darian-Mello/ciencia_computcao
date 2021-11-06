/*Escrever um algoritmo e um programa que lê um número não determinado de valores
inteiros e positivos, maiores que 0 e menores que 5.000. A cada número lido, mostrar
a quantidade de números lidos, juntamente com a média destes. Parar de informar
quando o valor informado seja igual a “ 0 ”.*/
#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"Portuguese");
    int n = 1, quantia;
    float media, soma;

    quantia = 0;
    soma = 0;

    while(n != 0){
        cout  << "\nInforme um valor entre 0 e 5000: ";
        cin >> n;
        if(n < 0 || n > 5000){
            continue;
        }
        if(n !=0){
            quantia ++;
            soma = soma + n;
            media = soma / quantia;
        }
        cout << "O total de números digitados foi:" << quantia << endl;
        cout << "A média dos números digitados foi:" << media << endl;
    }
}
