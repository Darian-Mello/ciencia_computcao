#include <iostream>
#include <cstring>
#include <ctime>
#include <stdlib.h>

using namespace std;

void verifica(int *posicao, int valor);

main(){
    setlocale(LC_ALL, "Portuguese");
    int vetor[10], valor;

    srand(time(NULL));
    for(int i=0; i<10; i++){
        vetor[i] = rand() % 20;
    }

    cout << "Informe um valor inteiro para saber se ele existe no vetor: ";
    cin >> valor;

    system("cls");

    verifica(vetor, valor);
}

void verifica(int *posicao, int valor){
    bool encontrou=false;

    cout << "Para o valor " << valor << " dentro do vetor: \n";
    for(int i=0; i<10; i++)
        cout << *(posicao+i) << "\t";

    for(int i=0; i<10; i++){
        if(*(posicao+i) == valor){
            cout << "\nO valor está presente na posição " << i;
            encontrou = true;
        }
    }

    if(encontrou == false)
        cout << "\n\nO valor não está presente.";

    cout << endl;
}
