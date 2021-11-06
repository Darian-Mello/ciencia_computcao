#include <iostream>
#include <stdlib.h>
#define tam 6
using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");
    int m[tam][tam], v[tam*6], cont=0;

    for(int l=0; l<tam; l++){
        for(int c=0; c<tam; c++){
            cout << "Informe o " << cont+1 << "º elemento: ";
            cin >> m[l][c];
            v[cont] = m[l][c];
            cont++;
        }
    }
    system("cls");
    cout << "\n\nMatriz M:\n";
    for(int l=0; l<tam; l++){
        for(int c=0; c<tam; c++){
            cout << m[l][c] << "\t";
        }
        cout << endl;
    }
    cout << "\n\nVetor V:\n";
    for(int i=0; i<tam*6; i++){
        cout << v[i] << " ";
    }
}
