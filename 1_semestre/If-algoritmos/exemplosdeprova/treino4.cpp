#include <iostream>
#include <ctype.h>

using namespace std;
main(){
    setlocale(LC_ALL,"Portuguese");
    float vetor[10];
    int i;

    for(i= 0; i < 10; i++){
        cout << "\nInforme O valor da posição " << i << ": ";
        cin >> vetor[i];
    }
    do{
        cout << "\nInforme um índice a ser consultado: ";
        cin >> i;
        if(i > 10 || i < 0){
            cout << "\nO indice informado não existe.";
        }
        else
            cout << endl << "O volor é: "<< vetor[i];
    }while(i < 10 && i >= 0);

    float valorbusca;
    cout << "\nInforme um vaor a ser buscado no vetor: ";
    cin>>valorbusca;
    for (i=0; i < 10; i++){
        if(i == vetor[i]){
            cout << "\nO valor existe na posição: "<<i;
        }
    }
}
