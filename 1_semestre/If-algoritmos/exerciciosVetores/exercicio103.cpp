#include <iostream>
#include <stdlib.h>
#include <vector>

using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");

    int v[15], recebe;
    int cont=0, aux;
    vector <int> p;

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
            p.push_back(v[i]);
        }
        system("cls");
    }
    for(int j=p.size(); j >= 0; j--){
        for(int n=p.size(); n > 0; n--){
            if(p[n] > p[n-1]){
                aux = p[n];
                p[n] = p[n-1];
                p[n-1] = aux;
            }
        }
    }
    cout << "Total da números maiores que 60: " << cont;
    cout << "\nValores Pares: ";
    aux = 0;
    while(aux < p.size()){
        cout << endl << p[aux];
        aux++;
    }
}
