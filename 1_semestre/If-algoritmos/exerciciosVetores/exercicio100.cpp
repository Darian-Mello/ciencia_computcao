#include <iostream>
#include <stdlib.h>

using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");
    float n[10];
    int cont=0;
    bool repete = false;

    for(int i=0; i<10; i++){
        cout << "Informe o " << i+1 << "º número: ";
        cin >> n[i];
        system("cls");
    }
    cout << "Os números digitados foram :";
    for(int k=0; k<10; k++){
        for(int h=k; h>=0; h--){
            if(n[h] == n[k] && h < k)
                repete = true;
        }
        if(repete == false){
            cout << "\nNúmero " << n[k];
            for(int j=0; j<10; j++){
                if(n[j] == n[k])
                    cont++;
            }
            cout << ": se repete " << cont << " vez(es).";
            cont = 0;
        }
        repete = false;
    }
}
