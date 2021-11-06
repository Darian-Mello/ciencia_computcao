#include <iostream>
#include <stdlib.h>

using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");

    float n[30], recebe;
    int cont=0;
    bool repete;

    for(int i=0; i<30; i++){
        do{
            repete = false;
            cout << "Informe o " << i+1 << "º número(sem repetir!): ";
            cin >> recebe;
            cont++;
            if(i==0){
                n[i] = recebe;
                break;
            }
            for(int k=i; k>=0; k--){
                if(recebe == n[k])
                    repete = true;
            }
            if(repete == false)
                n[i] = recebe;
        }while(repete == true);
        system("cls");
    }
    cout << "Foi digitado um total de " << cont << " números.";
    cout << "\nOs números aceitos foram: \n";
    for (int j=0; j<30; j++){
        cout << n[j] << "\n";
    }
}

