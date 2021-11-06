#include <iostream>
#include <ctime>
#include <cmath>

#define TAM 5

using namespace std;

void escreve(float m[TAM][TAM]);
void arredonda(float m[TAM][TAM]);
void diagonal(float m[TAM][TAM]);

main(){
    setlocale(LC_ALL,"Portuguese");
    float M[TAM][TAM];

    cout << fixed;
    cout.precision(2);

    srand(time(NULL));
    for(int l=0; l<TAM; l++){
        for(int c=0; c<TAM; c++){

            M[l][c] = rand() % 100 + 20;  // A divisão entre números inteiros aleatorios vai resultar em um float aleatorio.
            M[l][c] = rand() % 100 + 20 / M[l][c];
        }
    }

    escreve(M);
    arredonda(M);
    escreve(M);
    diagonal(M);
    escreve(M);
}

void escreve(float m[TAM][TAM]){
    for(int l=0; l<TAM; l++){
        for(int c=0; c<TAM; c++){
            cout << m[l][c] << "\t";
        }
        cout << endl;
    }
    cout << "\n\n\n";
}

void arredonda(float m[TAM][TAM]){

    for(int l=0; l<TAM; l++){
        for(int c=0; c<TAM; c++){
            if((int) m[l][c] % 2 == 0)
                m[l][c] = ceil(m[l][c]);
            else
                m[l][c] = floor(m[l][c]);
        }
    }
}

void diagonal(float m[TAM][TAM]){
    int maior, aux, coluna;

    for(int l=0; l<TAM; l++){
        maior = m[l][0];

        for(int c=0; c<TAM; c++){
            if(m[l][c] > maior){
                maior = m[l][c];
                coluna = c;
            }
        }
        aux = m[l][l];
        m[l][l] = maior;
        m[l][coluna] = aux;
    }
}
