#include <iostream>
#include <stdlib.h>

using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");
    int tudo[20], par[20], impar[20];
    int p=0, im=0;

    for(int i=0; i < 20; i++){
        cout << "\nInforme o "<<i+1<<"� n�mero: ";
        cin >> tudo[i];
        if(tudo[i] % 2 == 0){
            par[p] = tudo[i];
            p++;
        }
        else{
            impar[im] = tudo[i];
            im++;
        }
    }
    system("cls");
    cout << "N�meros lidos:\n";
    for(int k=0; k<20; k++){
        cout << tudo[k] << endl;
    }
    cout << "N�meros pares:\n";
    for(int j=0; j<p; j++){
        cout << par[j]<<"\t";
    }
    cout << "\nN�meros �mpares:\n";
    for(int t=0; t<im; t++){
        cout << impar[t]<<"\t";
    }
}
