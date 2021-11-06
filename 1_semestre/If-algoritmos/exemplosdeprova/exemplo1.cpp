//Construa um algoritmo que leia 10 números e identifique:
//a) a quantidade de números entre os 10 que estão na faixa de 1 e 30
//d) a soma de números que estão na faixa de 1 e 30;
//c) a quantidade de números divisíveis por 2 e por 3;
//b) a média nos números lidos;
//e) O percentual de números ímpares em relação aos números lidos;
#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"Portuguese");
    int cont, n;
    float total1e30 = 0, soma1e30 = 0, totalimpar=0, totalpar=0, imparepar=0, soma=0;

    for(cont=0; cont<10; cont++){
        cout << "\nDigite um número(Você digitou:"<<cont<<" de um total de 10): ";
        cin >> n;
        if (n <= 30 && n >= 1){
            total1e30++;
            soma1e30 = soma1e30 + n;
        }
        if (n % 2 == 0){
            totalpar++;
        }
        if (n % 3 == 0){
            totalimpar++;
        }
        if (n % 2 == 0 && n % 3 == 0){
            imparepar++;
        }
        soma = soma + n;
    }
    cout << "\nA quantidade dos dúmeros digitados que estão na faixa de 1 e 30 é: " << total1e30;
    cout << "\nA quantidade de números divisíveis por 2 é: " << totalpar;
    cout << "\nA quantidade de números divisíveis por 3 é: " << totalimpar;
    cout << "\nA quantidade de números divisíveis tanto por 2 quanto por 3 é: " << imparepar;
    cout << "\nA média dos números digitados é: " << soma / 10;
    cout << "\nO percentual de números ímpares em relação aos números lidos é: " << (totalimpar * 100) / cont << "%";
}
