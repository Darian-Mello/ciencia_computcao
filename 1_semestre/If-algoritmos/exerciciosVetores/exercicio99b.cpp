#include <iostream>
#include <stdlib.h>
//#include <time.h>

using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");

    int n[30], recebe, i=0;
    int cont=0;
    bool repete;

    //srand(time(NULL));

    while (i < 30){
        do{
            repete = false;
            cout << "Informe o " << cont+1 << "º número(sem repetir!): ";
            cin >> recebe;
           //recebe = rand() % 100;
            cont++;
            if(i==0){
                n[i] = recebe;
                i++;
                break;
            }
            for(int k=i; k>=0; k--){
                if(recebe == n[k])
                    repete = true;
            }
            if(repete == false){
                n[i] = recebe;
                i++;
            }
            system("cls");
        }while(repete == true);
    }
    cout << "Foi digitado um total de " << cont << " números.";
    cout << "\nOs números aceitos foram: \n";
    for (int j=0; j<30; j++){
        cout << n[j] << "\n";
    }
}
