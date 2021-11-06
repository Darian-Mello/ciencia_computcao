#include <iostream>
#include <cstdio>
#include <stdlib.h>
#include <windows.h>
using namespace std;

void valida();
void calcula(int valor);

main(){
    setlocale(LC_ALL,"Portuguese");
    int valor;

    cout << "Vamos realizar o saque!";
    getchar();

    valida();
}


void valida(){
    int valor;
    system("CLS");
    cout << "Não é possível sacar mais que R$1000.00;";
    cout << "\n\nInforme o valor que deseja sacar: ";
    do{
        cin >> valor;
        if(valor > 1000 || valor <= 3){
           MessageBox(NULL, "O valor permitido para saque é entre R$4.00 e R$1000.00!", "Erro", MB_OK | MB_ICONERROR);
           cout << "\nInforme um valor entre R$4.00 e R$1000.00: ";
        }
    }while(valor > 1000 || valor <= 3);

    calcula(valor);
}


void calcula(int valor){
    int notas[6] = {100, 50, 20, 10, 5, 2}, quantnotas[6] = {0, 0, 0, 0, 0, 0};
    int i=0, nvalor=0;

    system("CLS");

    while(i<6){
            // a condiçao com o +1 exixte para resolver os problemas dos números ímpares.
        if(nvalor + notas[i] <= valor && (nvalor + notas[i] + 1) != valor){
            nvalor += notas[i];
            quantnotas[i]++;
        }
        else
            i++;
    }

    cout << fixed;
    cout.precision(2);

    cout << "Para sacar o valor de R$" << (float)valor << ", são necessárias: \n\n";

    for(i=0; i<6; i++){
        if(quantnotas[i] > 0)
            cout << quantnotas[i] << " nota(s) de " << (float)notas[i] << "; \n" ;
    }
    cout << endl;
}



