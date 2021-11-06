#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void gerar_vetor(int *vet, int tam);
void mostra_vetor(int *vet, int tam);
void inverte_vetor(int *vet, int tam);

main(){
    setlocale(LC_ALL, "Portuguese");
    int tam;

    cout << "Informe o tamanho do vetor: ";
    cin >> tam;

    int *vetor = new int[tam];

    gerar_vetor(vetor, tam);
    mostra_vetor(vetor, tam);
    inverte_vetor(vetor, tam);
}

void gerar_vetor(int *vet, int tam){

    srand(time(NULL));
    for(int i=0; i<tam; i++){
        *vet = rand() % 100;
        vet++;
    }
}

void mostra_vetor(int *vet, int tam){

    cout << "Vetor gerado:\n";
    for(int i=0; i<tam; i++){
        cout << *vet << "\t";
        vet++;
    }

    vet--;

    cout << "\n\nVetor invertido:\n";
    for(int i=tam-1; i>=0; i--){
        cout << *vet << "\t";
        vet--;
    }
}

void inverte_vetor(int *vet, int tam){
    int aux[tam];

    for(int i=0, j=tam-1; i<tam; i++, j--){
        aux[i] = *(vet+j);
    }

    cout << "\n\nVetor com as posições trocadas:\n";
    for(int i=0; i<tam; i++){
        vet[i] = aux[i];
        cout << vet[i] << "\t";
    }

    cout << endl;
}


