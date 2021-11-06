#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");
    int v[50], x[50], cont=0, soma=0, aux;

    srand(time(NULL));
    cout << "Vetor gerado: \n";
    for(int i = 0; i < 50; i++){
        v[i] = rand() % 50; //optei por 50... Já que o enunciado não determinou o intervalo dos números.
        cout << v[i] << " "; // mostrei o vetor v no mesmo for para o código ficar mais legível.
    }

    for(int i=0; i<50; i++){
        for(int k=0; k<50; k++){
            if(i != k && v[i] == v[k]){
                soma+= v[i];
                break;
            }
        }
    }
    cout << "\n\nA soma dos números repetidos é: " << soma << endl;

    for(int i=0; i<50; i++){
        if(v[i] < soma){
            x[cont] = v[i];
            cont++;
        }
    }
    cout << "\nVetor x: \n";
    for(int i=0; i<cont; i++){
        cout << x[i] << " ";
    }

    for(int i=0; i < cont; i++){
        for(int k=0; k < cont-1; k++){
            if(x[k] < x[k+1]){
                aux = x[k];
                x[k] = x[k+1];
                x[k+1] = aux;
            }
        }
    }
    cout << "\n\nVetor x em ordem decrescente: \n";
    for(int i=0; i<cont; i++){
        cout << x[i] << " ";
    }
    cout << endl;
}
