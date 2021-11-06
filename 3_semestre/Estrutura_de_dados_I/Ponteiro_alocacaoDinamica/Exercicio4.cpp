#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <ctime>
using namespace std;

void gera_matrizes(float *mat1, float *mat2, int tam, int coluna);

main(){
    setlocale(LC_ALL, "Portuguese");
    int linha, coluna, tam, cont=0;

    cout << "informe a quantidade de linhas que as matries terão: ";
    cin >> linha;
    cout << "informe a quantidade de colunas que as matries terão: ";
    cin >> coluna;

    system("cls");
    tam = linha * coluna;
    float *mat1 = new float[tam];
    float *mat2 = new float[tam];
    float soma[linha][coluna];

    gera_matrizes(mat1, mat2, tam, coluna);

    cout << "\n\nSoma das matrizes geradas:\n";
    for(int l=0; l<linha; l++){
        for(int c=0; c<coluna; c++){
            soma[l][c] = mat1[cont] + mat2[cont];
            cout << soma[l][c] << "\t";
            cont++;
        }
        cout << endl;
    }

    delete[] mat1;
    delete[] mat2;
}

void gera_matrizes(float *mat1, float *mat2, int tam, int coluna){
    srand(time(NULL));

    for(int i=0; i<tam; i++){
        mat1[i] = rand() % 100;
        mat2[i] = rand() % 100;
    }

    cout << "Matrizes geradas\n";
    cout << "\nMat1: \n";
    for(int i=0; i<tam; i++){
        if(i!=0 && i % coluna == 0)
            cout << endl;
        cout << mat1[i] << "\t";

    }
    cout << "\n\nMat2: \n";
    for(int i=0; i<tam; i++){
        if(i!=0 && i % coluna == 0)
            cout << endl;
        cout << mat2[i] << "\t";
    }
}
