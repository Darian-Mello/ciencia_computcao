#include <iostream>
#include <stdlib.h>
#define tam 10

using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");
    int x[tam], y[tam], z[20], aux;

    cout << "Primeiro vetor: ";
    for(int i=0; i<tam; i++){
        cout << "\nInforme o "<<i+1<<"º número: ";
        cin >> x[i];
    }
    system("cls");
    cout << "Segundo vetor: ";
    for(int j=0; j<tam; j++){
        cout << "\nInforme o "<<j+1<<"º número: ";
        cin >> y[j];
    }
    system("cls");
    for(int k=0; k < tam; k++){
        for(int n=0; n < tam-1; n++){
            if(x[n] > x[n+1]){
                aux = x[n];
                x[n] = x[n+1];
                x[n+1] = aux;
            }
            if(y[n] > y[n+1]){
                aux = y[n];
                y[n] = y[n+1];
                y[n+1] = aux;
            }
        }
    }
    int i=0, j=0, k=0;
    while(i < tam || j < tam){
        if(i==tam){
            z[k] = y[j];
            j++;
        }
        else if(j==tam){
            z[k] = x[i];
            i++;
        }
        else if(x[i]<y[j]){
            z[k] = x[i];
            i++;
        }
        else if(y[j] < x[i]){
            z[k] = y[j];
            j++;
        }
        else if(y[j] == x[i]){
            z[k] = x[i];
            z[k] = y[j];
            i++;
            j++;
        }
        k++;
    }
    cout << "Vetor z:\n";
    for(int mostra = 0; mostra < 20; mostra++){
        cout << z[mostra] << endl;
    }
}
