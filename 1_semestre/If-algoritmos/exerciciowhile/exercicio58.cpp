/*Escrever um algoritmo e um programa que l� um n�mero n�o determinado de valores
inteiros e positivos, maiores que 0 e menores que 5.000. A cada n�mero lido, mostrar
a quantidade de n�meros lidos, juntamente com a m�dia destes. Parar de informar
quando o valor informado seja igual a � 0 �.*/
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
        cout << "O total de n�meros digitados foi:" << quantia << endl;
        cout << "A m�dia dos n�meros digitados foi:" << media << endl;
    }
}
