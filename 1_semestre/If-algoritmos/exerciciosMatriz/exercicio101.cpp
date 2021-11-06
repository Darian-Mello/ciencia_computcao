#include <iostream>
#include <stdlib.h>
#include <ctime>
#define tam 10
using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");
    int m[tam][tam], linha, maior=0, minimax, posi[2];

    srand(time(NULL));
    cout << "matriz: \n";
    for(int l=0; l<tam; l++){
        for(int c=0; c<tam; c++){
            m[l][c] = rand() % 100;
            if(m[l][c] > maior){
                maior = m[l][c];
                linha=l;            }
            cout << m[l][c] << "\t";
        }
        cout << endl;
    }
    minimax = m[linha][0];
    posi[0] = linha;
    for(int i=0; i<tam; i++){
        if(m[linha][i] < minimax){
            minimax = m[linha][i];
            posi[1] = i;
        }
    }

    cout << "\nO maior elemento da matriz é o número " << maior << ".\n";
    cout << "O mínimax da matriz é o número " << minimax << ", encontrado na posição " << posi[0] << "," << posi[1] <<".\n";
}

