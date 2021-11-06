#include <iostream>
#include <stdlib.h>

using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");
    int A[10], B[10];
    int fat;

    for(int i=0; i < 10; i++){
        cout << "\nInforme o "<<i+1<<"º número: ";
        cin >> A[i];
        fat = 1;
        for(int k=A[i]; k>0; k--){
            fat = fat * k;
        }
        B[i] = fat;
    }
    system("cls");
    for(int j=0; j<10; j++){
        cout << "Valor: " << A[j] << endl;
        cout << "Fatorial: " << B[j] << "\n\n";
    }
}
