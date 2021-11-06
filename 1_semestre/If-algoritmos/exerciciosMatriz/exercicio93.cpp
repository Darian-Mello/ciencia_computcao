#include <iostream>
#include <ctime>
#include <stdlib.h>

using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");
        int ma[5][5], soma=0, somatudo=0;

        srand(time(NULL));
        for(int i=0; i<5; i++){
            for(int j=0; j<5; j++){
                ma[i][j] = rand() % 50;
                cout << ma[i][j] << "\t";
                somatudo+= ma[i][j];
            }
            cout << endl;
        }
        for(int i=0; i<5; i++){
            soma+= ma[4][i];
        }
        cout << "\n\nSoma da linha 4: " << soma;
        soma = 0;
        for(int i=0; i<5; i++){
            soma+= ma[1][i];
        }
        cout << "\nSoma da linha 2: " << soma;
        soma = 0;
        for(int i=0; i<5; i++){
            soma+= ma[i][i];
        }
        cout << "\nSoma da diagonal principal: " << soma;
        soma = 0;
        int j=0;
        for(int i=4; i>=0; i--){
            soma+= ma[j][i];
            j++;
        }
        cout << "\nSoma da diagonal secundária: " << soma;
        cout << "\nSoma de toda a matriz: " << somatudo << "\n";
}

