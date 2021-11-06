#include <iostream>
#include <stdlib.h>
#include <ctime>
#define tam 10

using namespace std;

int fatorial(int n);
main(){
    setlocale(LC_ALL,"Portuguese");
    int A[tam], B[tam];

    srand(time(NULL));

    cout << "Vetor A:\n";
    for(int i=0; i<tam; i++){
        A[i] = rand() % 10;
        B[i] = fatorial(A[i]);
        cout << A[i] << "\t";
    }

    cout << "\nVetor B:\n";
    for(int i=0; i<tam; i++){
        cout << B[i] << "\t";
    }
    cout << endl;
}

int fatorial(int n){
    for(int i = n-1; i>0; i--){
        n = n * i;
    }
    if(n == 0)
        n = 1;
    return n;
}
