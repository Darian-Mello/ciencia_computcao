//Construa um algoritmo que leia 10 n�meros e identifique:
//a) a quantidade de n�meros entre os 10 que est�o na faixa de 1 e 30
//d) a soma de n�meros que est�o na faixa de 1 e 30;
//c) a quantidade de n�meros divis�veis por 2 e por 3;
//b) a m�dia nos n�meros lidos;
//e) O percentual de n�meros �mpares em rela��o aos n�meros lidos;
#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"Portuguese");
    int cont, n;
    float total1e30 = 0, soma1e30 = 0, totalimpar=0, totalpar=0, imparepar=0, soma=0;

    for(cont=0; cont<10; cont++){
        cout << "\nDigite um n�mero(Voc� digitou:"<<cont<<" de um total de 10): ";
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
    cout << "\nA quantidade dos d�meros digitados que est�o na faixa de 1 e 30 �: " << total1e30;
    cout << "\nA quantidade de n�meros divis�veis por 2 �: " << totalpar;
    cout << "\nA quantidade de n�meros divis�veis por 3 �: " << totalimpar;
    cout << "\nA quantidade de n�meros divis�veis tanto por 2 quanto por 3 �: " << imparepar;
    cout << "\nA m�dia dos n�meros digitados �: " << soma / 10;
    cout << "\nO percentual de n�meros �mpares em rela��o aos n�meros lidos �: " << (totalimpar * 100) / cont << "%";
}
