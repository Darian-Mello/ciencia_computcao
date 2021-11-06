#include <iostream>
#include <stdlib.h>
#include <ctime>
#define tam 3
using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");
    int ma[tam][tam], aux[tam][tam], h=0;

    srand(time(NULL));
    for(int l=0; l<tam; l++){
        for(int c=0; c<tam; c++){
            ma[l][c] = rand() % 10;
            cout << ma[l][c] << "\t";
        }
        cout << endl;
    }
    h=0;
    cout <<"\n\n";
    for(int c=tam-1; c>=0; c--){
        for(int l=0; l<tam; l++){
            aux[h][l] = ma[l][c];
        }
        h++;
    }

   cout <<"\n\n";
    for(int l=0; l<tam; l++){
        for(int c=0; c<tam; c++){
            ma[l][c] = aux[l][c];
            cout << ma[l][c] << "\t";
        }
        cout << endl;
    }
}
