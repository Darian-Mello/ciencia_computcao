#include <iostream>
#include <stdlib.h>

using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");

    int v[15], recebe;
    int cont=0, aux;
    int p[15], par=0;

    bool repete;

    for(int i=0; i<15; i++){
        do{
            repete = false;
            cout << "Informe o " << i+1 << "º número(sem repetir!): ";
            cin >> recebe;
            if(i==0){
                v[i] = recebe;
                break;
            }
            for(int k=i; k>=0; k--){
                if(recebe == v[k])
                    repete = true;
            }
            if(repete == false)
                v[i] = recebe;
        }while(repete == true);
        if(v[i] > 60){
            cont++;
        }
        if(v[i] % 2 == 0){
            p[par] = v[i];
            par++;
        }
        system("cls");
    }
    for(int j=0; j < par; j++){
        for(int n=0; n < par-1; n++){
            if(p[n] < p[n+1]){
                aux = p[n];
                p[n] = p[n+1];
                p[n+1] = aux;
            }
        }
    }
    cout << "Total da números maiores que 60: " << cont;
    cout << "\nValores Pares: ";
    aux = 0;
    while(aux < par){
        cout << endl << p[aux];
        aux++;
    }
}
