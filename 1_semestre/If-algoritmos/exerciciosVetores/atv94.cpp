#include <iostream>
#include <stdlib.h>
#define tam 10
using namespace std;

main(){
    float a[tam], b[tam], y[20];

    cout << "preenchendo o primeiro vetor:\n";
    for(int i=0; i<tam; i++){
        cout << "\ndigiteo " << i + 1 << " numero: ";
        cin >> a[i];
    }
    system("cls");
    cout << "\npreenchendo o segundo vetor:\n";
    for(int k=0; k<tam; k++){
        cout << "\ndigiteo " << k + 1 << " numero: ";
        cin >> b[k];
    }
    system("cls");
    cout << "A juncao dos 2 vetores resulta em:\n";
    for(int j=0; j<tam; j++){
        y[j] = a[j];
        y[j + 10] = b[j];
    }
    for(int t=0; t<20; t++)
        cout << y[t] << endl;
}
