#include <iostream>
#include <stdlib.h>

using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");
    int aux, num, i, k, j;
    int vetor[30];
    for(i=0; i<20; i++){
        cout << "Informe o " << i+1 << "º número: ";
        cin >> vetor[i];
    }
    for(int k=0; k < 20; k++){
        for(int n=0; n < 19; n++){
            if(vetor[n] > vetor[n+1]){
                aux = vetor[n];
                vetor[n] = vetor[n+1];
                vetor[n+1] = aux;
            }
        }
    }
    system("cls");
    i=0;
    while(i<10){
        cout << "Informe o " << i+1 << "º número: ";
        cin >> num;
        for(k=0; k<(20+i); k++){ // 20+i é o tamanho do vetor.
            if(num <= vetor[k]){
                aux = vetor[k];
                vetor[k] = num;
                for(j=(19+i); j>k; j--){
                    vetor[j+1] = vetor[j]; // este for muda as posiçoes do veror.
                }
                vetor[k+1] = aux;
                break;
            }
            else if(k==19+i)
                vetor[20+i] = num;
        }
        for(int h = 0; h<21+i; h++){ //21 por  que foi adicionado um numero.
            cout << "  " << vetor[h];
        }
        cout << "\n";
        i++;
    }
}
