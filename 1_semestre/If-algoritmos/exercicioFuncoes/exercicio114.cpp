#include <iostream>
#include <stdlib.h>
#include <ctime>
#define tam 5

using namespace std;

int maior(int m[tam][tam]);
bool contem(int m[tam][tam], int n);
void dp(int m[tam][tam]);

main(){
    setlocale(LC_ALL,"Portuguese");
    int m[tam][tam], n;

    srand(time(NULL));
    for(int l=0; l<tam; l++){
        for(int c=0; c<tam; c++){
            m[l][c] = rand() % 50;
        }
    }

    cout << "Informe um número para saber se ele existe na matriz(se existir o resultado será 1, se não será 0): ";
    cin >> n;
    cout << contem(m, n) << endl;
    cout  << "\nO maior elemento da matriz é: " << maior(m) << endl;
    dp(m);

}

int maior(int m[tam][tam]){
    int n;

    n = m[0][0];
    for(int l=0; l<tam; l++){
        for(int c=0; c<tam; c++){
            if(m[l][c] > n)
                n = m[l][c];
        }
    }
    return n;
}

bool contem(int m[tam][tam], int n){
    bool existe=false;

    for(int l=0; l<tam; l++){
        for(int c=0; c<tam; c++){
            if(m[l][c] ==  n)
                existe = true;
        }
    }
    return existe;
}

void dp(int m[tam][tam]){
    int i=0, vetor[tam];

    for(int l=0; l<tam; l++){
        for(int c=0; c<tam; c++){
            if(l == c){
                vetor[i] = m[l][c];
                i++;
            }
        }
    }
    cout << "\nOs elementos da diagonal principal da matriz são: \n";
    for(i = 0; i<tam; i++){
        cout << vetor[i] << "\t";
    }
    cout << endl;
}
