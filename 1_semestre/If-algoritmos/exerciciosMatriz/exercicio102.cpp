#include <iostream>
#include <stdlib.h>
#include <ctime>
#define tam 7
using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");
    int m[tam][tam], par[4*tam], impar[4*tam], p=0, i=0;

    srand(time(NULL));
    cout << "matriz: \n";
    for(int l=0; l<tam; l++){
        for(int c=0; c<tam; c++){
            m[l][c] = rand() % 50;
            if(l % 2 == 0){
                par[p] = m[l][c];
                p++;
            }
            else{
                impar[i] = m[l][c];
                i++;
            }
            cout << m[l][c] << "\t";
        }
        cout << endl;
    }
    cout << "\n Vetor PAR:\n";
    for(int j=0; j<p; j++){
        cout << par[j] << " ";
    }
    cout << "\n Vetor IMPAR:\n";
    for(int j=0; j<i; j++){
        cout << impar[j] << " ";
    }
}
