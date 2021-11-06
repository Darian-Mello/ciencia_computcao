#include <iostream>
#include <stdlib.h>
#include <ctime>
#define tam 3
using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");
    int ma[tam][tam], aux[tam][tam];

    srand(time(NULL));
    for(int l=0; l<tam; l++){
        for(int c=0; c<tam; c++){
            ma[l][c] = rand() % 10;
            cout << ma[l][c] << "\t";
        }
        cout << endl;
    }

   cout <<"\n\n";
    for(int l=0, linha=tam-1; l<tam; l++, linha--){
        for(int c=0, coluna=tam-1; c<tam; c++, coluna--){
            aux[l][c] = ma[linha][coluna];
            cout << aux[l][c] << "\t";
        }
        cout << endl;
    }
}
