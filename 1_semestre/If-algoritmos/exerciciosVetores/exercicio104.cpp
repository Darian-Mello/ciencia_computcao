#include <iostream>
#include <stdlib.h>

using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");
        int vetor[20], aux, k;
        for(int i=0; i<20; i++){
            cout << "Informe o " << i+1 << "º número: ";
            cin >> vetor[i];
        }
        system("cls");
        cout << "Antes: \n";
        for(k=0; k<20; k++){
            cout << "  "<<vetor[k];
        }
        aux = vetor[0];
        for(int j=1; j<20; j++){
            vetor[j-1] = vetor[j];
        }
        vetor[19] = aux;
        cout << "\nDepois: \n";
        for(k=0; k<20; k++){
            cout << "  "<<vetor[k];
        }
}
