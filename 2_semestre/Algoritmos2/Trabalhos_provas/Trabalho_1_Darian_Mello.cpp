#include<iostream>
#include <stdlib.h>
#include <ctime>
#include <windows.h>

using namespace std;

#define TAM 7

void gera(int M[TAM][TAM]);
void leitura(int M[TAM][TAM]);
void troca(int M[TAM][TAM], int linha, int coluna);

main(){
    setlocale(LC_ALL,"Portuguese");
    int M[TAM][TAM], linha, coluna;;

    gera(M);
    cout << "\nMatriz gerada:\n\n";
    leitura(M);

    fflush(stdin);
    getchar();
    // do while para validar a entrada:
    do{
        system("cls");
        cout << "Informe a linha e a coluna que deseja trocar os elementos:";

        cout << "\n\nInforme a linha: ";
        cin >> linha;
        cout << "\n\nInforme a coluna: ";
        cin >> coluna;

        if((linha < 0 || linha > 6) || (coluna < 0 || coluna > 6)){
            MessageBox(NULL, "Como a matriz tem 7 posições, tanto a linha quanto a coluna devem estar entre 0 e 6", "Erro", MB_OK | MB_ICONEXCLAMATION);
        }

    }while((linha < 0 || linha > 6) || (coluna < 0 || coluna > 6));

    system("cls");
    cout << "\nMatriz gerada:\n\n";
    leitura(M);

    troca(M, linha, coluna);
    cout << "\nMatriz modificada na linha " << linha << " e coluna " << coluna << ":\n\n";
    leitura(M);
}

void gera(int M[7][7]){

    srand(time(NULL));
    for(int l=0; l<TAM; l++){
        for(int c=0; c<TAM; c++){
            M[l][c] = rand() % 100;
        }
    }
}

void leitura(int M[TAM][TAM]){
    for(int l=0; l<TAM; l++){
        for(int c=0; c<TAM; c++){
            cout << M[l][c] << "\t";
        }
        cout << endl;
    }
}

void troca(int M[TAM][TAM], int linha, int coluna){
    int auxl[TAM], auxc[TAM];

    cout << "\n\nValores na Intersecção: " << M[linha][linha] << " e " << M[coluna][coluna] << "\n\n";

    for(int i=0; i<TAM; i++){
        auxl[i] = M[linha][i];
        auxc[i] = M[i][coluna];
    }
    for(int i=0; i<TAM; i++){
        M[linha][i] = auxc[i];
        M[i][coluna] = auxl[i];
    }
    M[linha][coluna] = 0;
}

