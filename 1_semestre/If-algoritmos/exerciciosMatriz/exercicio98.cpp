#include <iostream>
#include <stdlib.h>
#include <ctime>
#define tam 5
using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");
    int m[tam][tam], cont=0, sc[tam], scTot=0, sl[tam], slTot=0;

    srand(time(NULL));
    for(int l=0; l<tam; l++){
        for(int c=0; c<tam; c++){
            m[l][c] = rand() % 20;
            //cout << "Informe o " << cont+1 << "º elemento: ";
            //cin >> m[l][c];
            cont++;
        }
    }
    system("cls");

    cout << "A matriz inserida foi: \n";
    for(int l=0; l<tam; l++){
        for(int c=0; c<tam; c++){
            cout << m[l][c] << "\t";
        }
        cout << endl;
    }
    cont = 0;
    for(int l=0; l<tam; l++){
        for(int c=0; c<tam; c++){
            slTot+= m[l][c];
        }
        sl[cont] = slTot;
        cont++;
        slTot = 0;
    }
    cout << endl;
    cont = 0;
    for(int c=0; c<tam; c++){
        for(int l=0; l<tam; l++){
            scTot+= m[l][c];
        }
        sc[cont] = scTot;
        cont++;
        scTot = 0;
    }
    cout << "A soma das linhas é: \n";
    for(int i=0; i<tam; i++){
        cout << sl[i] << "\t";
    }
    cout << "\nA soma das colunas é: \n";
    for(int i=0; i<tam; i++){
        cout << sc[i] << "\t";
    }
}
