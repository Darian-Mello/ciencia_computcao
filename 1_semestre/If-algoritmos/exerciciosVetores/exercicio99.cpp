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
            cout << "Informe o " << i+1 << "� n�mero(sem repetir!): ";
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
    cout << "Foi digitado um total de " << cont << " n�meros.";
    cout << "\nOs n�meros aceitos foram: \n";
    for (int j=0; j<30; j++){
        cout << n[j] << "\n";
    }
}

