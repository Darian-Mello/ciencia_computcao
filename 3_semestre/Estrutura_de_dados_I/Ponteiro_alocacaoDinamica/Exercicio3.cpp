#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <ctime>
using namespace std;

void gera_vetor(int * vetor, int tam);

main(){
    setlocale(LC_ALL, "Portuguese");
    int tam;
    float media=0;

    do{
        system("cls");
        cout << "Informe a quantidade de elementos no vetor: ";
        cin >> tam;
            if(tam < 2){
                MessageBox(NULL,"O tamanho do vetor deve ser maior ou igual a 2", "Erro", MB_OK | MB_ICONEXCLAMATION);;
            }
    }while(tam < 2);
    int *vetor = new int[tam];

    gera_vetor(vetor, tam);

    system("cls");
    cout << "Vetor gerado: \n\n";
    for(int i=0; i<tam; i++){
        cout << vetor[i] << "\t";
    }
    cout << endl;

    delete[] vetor;
}

void gera_vetor(int * vetor, int tam){
    srand(time(NULL));
    for(int i=0; i<tam; i++){
        vetor[i] = rand() % 100;
    }
}

