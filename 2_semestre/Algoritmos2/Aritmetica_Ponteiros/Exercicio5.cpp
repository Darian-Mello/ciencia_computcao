#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>

using namespace std;
void recebe(int *quant);
void verifica_aposta(int *valores, int *aposta, int **quant);
void imprime(int **valores, int **aposta, int ***quant, int *acertos, int *quant_acertos);

main(){
    setlocale(LC_ALL, "Portuguese");
    int quantidade;

    do{
        cout << "Informe a quantidade de números que deseja apostar: ";
        cin >> quantidade;

        if(quantidade < 1 || quantidade > 20)
            MessageBox(NULL, "A quantidade de números apostados deve ser entre 1 e 20!", "Erro", MB_OK | MB_ICONEXCLAMATION);

        system("cls");
    }while(quantidade < 1 || quantidade > 20);

    recebe(&quantidade);
}

void recebe(int *quant){
    int ex=0, numero, valores[20], aposta[*quant]; // ex é uma variável de controle.

    srand(time(NULL));
    for(int i=0; i<20; i++){
        numero = rand() % 100;
        for(int j=0; j<i; j++){
            if(numero == valores[j])     //o segundo laço controla o vetor para que não haja números repetidos.
                ex = 1;
        }
        if(ex==1)
            i--;
        else
            valores[i] = numero;
        ex=0;
    }

    for(int i=0; i<(*quant); i++){
        cout << "Informe o " << i+1 << "º número: ";
        cin >> numero;
        for(int j=0; j<i; j++){
            if(numero == aposta[j])
                ex = 1;
        }
        if(ex==1){
            i--;
            MessageBox(NULL, "Esse número já foi inserido! Informe números diferentes para que seja possível obter um número maior de acertos.", "Alerta", MB_OK | MB_ICONEXCLAMATION);

        }
        else
            aposta[i] = numero;

        ex=0;
        system("cls");
    }

    verifica_aposta(valores, aposta, &quant);
}

void verifica_aposta(int *valores, int *aposta, int **quant){
    int quant_acertos=0, acertos[**quant];

    for(int j=0; j<(**quant); j++){
        for(int i=0; i<20; i++){
            if(aposta[j] == valores[i]){
                acertos[quant_acertos] = aposta[j];
                quant_acertos++;
            }
        }
    }

    imprime(&valores, &aposta, &quant, acertos, &quant_acertos);
}

void imprime(int **valores, int **aposta, int ***quant, int *acertos, int *quant_acertos){
    cout << "Valores sorteados: \n";
    for(int i=0; i<20; i++){
        cout << *(*valores + i) << "\t";
    }

    cout << "\n\nValores da aposta: \n";
    for(int i=0; i<(***quant); i++){
        cout << *(*aposta + i) << "\t";
    }

    if(*quant_acertos != 0){
        cout << "\n\nAcertos: \n";
        for(int i=0; i<(*quant_acertos); i++){
            cout << *(acertos + i) << "\t";
        }
    }

    cout << "\n\nTotal de acertos: " << *quant_acertos << ".\n";
}
