#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");
    int n1, n2, soma, user;
    bool invalido=false;

    srand(time(NULL));
    do{
        if(invalido == false){
            cout << "Vamos sortear 2 n�meros de 1 a 6! Qual ser� o resultado da soma entre os 2? ";
            cin >> user;
        }
        else{
            cout << "\n\nA soma n�o poder� ser menor que 2 nem maior que 12! Por favor, informe um valor v�lido: ";
            cin >> user;
        }
        invalido = true;
    }while(user<2 || user > 12);
    system("cls");

    do{
        n1 = rand() % 7;
        n2 = rand() % 7;
    }while(n1==0 || n2==0);

    soma = n1 + n2;
    cout << "Os n�meros sorteados foram: " << n1 << " e " << n2;
    cout << "\nA soma entre eles �: " << soma;
    cout << "\nVo�� informou: " << user << ", ";
    if(user == soma){
        cout << "Parab�ns, voc� acertou! ";
    }
    else
        cout << "Voc� errou!\n";
}
