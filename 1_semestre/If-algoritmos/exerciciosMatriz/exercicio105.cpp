#include <iostream>
#include <stdlib.h>
#include <ctime>
#define tam 3
using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");
    float ma[tam][tam], mb[tam][tam], produto[tam][tam], aux=0;
    int cont=0;

    srand(time(NULL));
    cout << "Matriz MA:\n";
    for(int l=0; l<tam; l++){
        for(int c=0; c<tam; c++){
            ma[l][c] = rand() % 10;
            cout << ma[l][c] << "\t";
        }
        cout << endl;
    }
    cout << "\nMatriz MB:\n";
    for(int l=0; l<tam; l++){
        for(int c=0; c<tam; c++){
            mb[l][c] = rand() % 10;
            cout << mb[l][c] << "\t";
        }
        cout << endl;
    }
    cout <<"\n\n Matriz produto: \n";
    while(cont<tam){
        for(int l=0; l<tam; l++){
            for(int c=0; c<tam; c++){
                aux+= ma[cont][c] * mb[c][l];
            }
           produto[cont][l] = aux;
           aux=0;
           cout << produto[cont][l] << "\t";
        }
        cout << endl;
        cont++;
    }
}

