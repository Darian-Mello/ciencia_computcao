#include <iostream>
#include <ctime>
#include <stdlib.h>

using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");
        int ma[3][4], aux;

        srand(time(NULL));
        for(int i=0; i<3; i++){
            for(int j=0; j<4; j++){
                ma[i][j] = rand() % 50;
                cout << ma[i][j] << "\t";
            }
            cout << endl;
        }
        cout << "\n\n";
        for(int i=0; i<3; i++){
            for(int j=0; j<4; j++){
                if (i==0){
                   aux = ma[i][j];
                   ma[i][j] = ma[2][j];
                   ma[2][j] = aux;
                }
                cout << ma[i][j] << "\t";

            }
            cout << endl;
        }
}
