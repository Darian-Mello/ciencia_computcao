#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <windows.h>
#include <algorithm>

#define tam 10
using namespace std;

void geravetor(int v[]);
void trocaordem(int v[]);
void calculamedia(int v[]);
void maiormenor(int v[]);
void ordenar(int v[]);

main(){
    setlocale(LC_ALL,"Portuguese");
    int vetor[tam], opcao=0;

    geravetor(vetor);

    do{
        system("cls");
        cout << "Vetor atual: \n";
        for(int i=0; i<tam; i++){
            cout << vetor[i] << "\t";
        }

        cout << "\n\n##########################################\n";
        cout << "# 0 – Sair                               #\n";
        cout << "# 1 – Trocar os elementos de ordem       #\n";
        cout << "# 2 – Mostra a média dos elementos       #\n";
        cout << "# 3 – Mostrar o maior e o menor elemento #\n";
        cout << "# 4 - Ordenar o vetor em ordem crescente #\n";
        cout << "##########################################\n";
        cout << "\nO que deseja realizar: ";
        cin >> opcao;

        if(opcao < 0 || opcao > 4){
            MessageBox(NULL, "Essa opção não está presente no Menu!", "Erro", MB_OK | MB_ICONINFORMATION);
            continue;
        }

        switch(opcao){
        case 0:
            system("cls");
            cout << "Programa finalizado!";
            break;

        case 1:
            trocaordem(vetor);
            break;

        case 2:
            calculamedia(vetor);
            break;

        case 3:
            maiormenor(vetor);
            break;

        case 4:
            ordenar(vetor);
            break;
        }

        fflush(stdin);
        getchar();
    }while(opcao != 0);
}

void geravetor(int v[]){
    srand(time(NULL));
    for(int i=0; i<tam; i++){
        v[i] = rand() % 100;
    }
}

void trocaordem(int v[]){
    int aux[tam];

    for(int i=0, q=9; i<tam; i++, q--){
        aux[i] = v[q];
    }
    for(int i=0; i<tam; i++){
        v[i] = aux[i];
    }
}

void calculamedia(int v[]){
    float media=0;

    for(int i=0; i<tam; i++){
        media += v[i];
    }
    media = media / tam;

    cout << "\n\nA média entre os valores do vetor é: " << media;
}

void maiormenor(int v[]){
    int maior = v[0], menor = v[0];

    for(int i=1; i<tam; i++){
        if(v[i] < menor)
            menor = v[i];
        else if(v[i] > maior)
            maior = v[i];
    }

    cout << "\n\nO maior número do vetor é: " << maior;
    cout << "\nO menor número do vetor é: " << menor;
}

void ordenar(int v[]){
    sort(&v[0], &v[tam-1]);
}

