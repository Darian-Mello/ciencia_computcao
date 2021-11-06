#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

main(){
    setlocale(LC_ALL,"Portuguese");
    int A[5], aux, h=0;
    bool repetiu = false;

    cout << "Vetor gerado: \n";
    srand(time(NULL));
    do{
        aux = rand() % 100;
        for(int i=0; i<h; i++){
            if(A[i] == aux)
                repetiu = true;
        }
        if(repetiu == false){
            A[h] = aux;
            cout << A[h] << "\t";
            h++;
        }
        repetiu = false;
    }while(h<5);

    for (int j = 0; j < 5; j++){
        for (int i = 0; i < 5; i++){
            if (A[i] > A[i+1]){
                aux = A[i];
                A[i] = A[i+1];
                A[i+1] = aux;
            }
        }
    }
    cout << "\n\nVetor ordenado em ordem crescente: \n";
    for(int i=0; i<5; i++){
        cout << A[i] << "\t";
    }
    cout << endl;
}


