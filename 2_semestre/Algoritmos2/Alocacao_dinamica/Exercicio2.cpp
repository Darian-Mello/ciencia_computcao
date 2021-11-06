#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>

using namespace std;

// NA descreção do exercicio, fica em evidência que tudo deve ser em uma única função;
void func_geral(int *v1, int *v2);

main(){
    setlocale(LC_ALL, "Portuguese");
    int i, numero;
    int *x1 = new int[5];
    int *x2 = new int[5];

    srand(time(NULL));
    for(i=0; i<10; i++){
        *x1 = rand() % 100;
        x1++;
    }
    x1 -= i;

    for(i=0; i<10; i++){
        numero = rand() % 100;
        for(int j=0; j<5; j++){
            if(numero == *(x1 + j)){
                numero = -1;
                i--;
            }
        }
        if(numero != -1){
            *x2 = numero;
            *x2++;
        }
    }

    x2 -= i;

    func_geral(x1, x2);

    delete []x1;
    delete []x2;
}

void func_geral(int *v1, int *v2){
    int *x3 = new int[10];
    int *soma = new int(0);
    int i, aux;

    for(i=0; i<5; i++){
        *x3 = v1[i];
        *(x3 + 5) = v2[i];  // essa loop adicioa os valores de v1 e v2 ao vetor v3.
        x3++;
    }
    x3 -= i;

    cout << "Os elementos de x3:\n";
    for(i=0; i<10; i++){
        cout << *x3 << "\t";
        x3++;
    }
    x3 -= i;

    cout << "\n\nOs elementos ímpares de x3:\n";
    for(i=0; i<10; i++){
        if(*x3 % 2 != 0)
            cout << *x3 << "\t";

        x3++;
    }
    x3 -= i;

    cout << "\n\nOs elementos pares de x3:\n";
    for(i=0; i<10; i++){
        if(*x3 % 2 == 0)
            cout << *x3 << "\t";

        x3++;
    }
    x3 -= i;

    for(i=0; i<10; i++){
       for(int j=i; j<10; j++){
            if(x3[j] < x3[i]){
                aux = x3[j];         // ordenação dos valores de v3 em ordem crescente.
                x3[j] = x3[i];
                x3[i] = aux;
            }
       }
    }

    cout << "\n\nOs elementos de x3 em ordem crescente:\n";
    for(i=0; i<10; i++){
        cout << *x3 << "\t";
        *soma += *x3;
        x3++;
    }

    cout << "\n\nSoma dos valores de x3: " << *soma << ".\n";

    delete soma;
    delete []x3;
}
