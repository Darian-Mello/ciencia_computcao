#include <iostream>
#include <vector>
#include <stdlib.h>

using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");
    int tudo[20];
    vector<int> par;
    vector<int> impar;

    for(int i=0; i < 20; i++){
        cout << "\nInforme o "<<i+1<<"º número: ";
        cin >> tudo[i];
        if(tudo[i] % 2 == 0)
            par.push_back(tudo[i]);
        else
            impar.push_back(tudo[i]);
    }
    system("cls");
    cout << "Números lidos:\n";
    for(int k=0; k<20; k++){
        cout << tudo[k] << endl;
    }
    cout << "Números pares:\n";
    for(int j=0; j<par.size(); j++){
        cout << par[j]<<"\t";
    }
    cout << "\nNúmeros ímpares:\n";
    for(int t=0; t<impar.size(); t++){
        cout << impar[t]<<"\t";
    }
}
