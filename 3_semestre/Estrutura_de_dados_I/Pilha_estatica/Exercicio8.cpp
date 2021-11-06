#include <iostream>
#include <cstdlib>
#include <cctype>
#include <ctime>
using namespace std;

#include "pilha.hpp"

void  quantPar(Pilha *p1, Pilha *p2);

int main(){
    setlocale(LC_ALL, "Portuguese");
    Pilha p1, p2;
    int tam, n;

    cout << "Informe o tamanho que as pilhas terão: ";
    cin >> tam;

    inicializa(&p1, tam);
    inicializa(&p2, tam);

    srand(time(NULL));
    for(int i=0; i<tam; i++){
        n = rand() % 100;
        empilhar(&p1, n);
        n = rand() % 100;
        empilhar(&p2, n);
    }
    if(verifica_igualdade(&p1, &p2))
        cout << "\n\n as pilhas formadas são iguais: \n\n";
    else
        cout << "\n\nAs pilhas formadas são diferentes: \n\n";

    cout << "\nPilha 1:\n";
    mostrar(&p1);
    cout << "\n\nPilha 2:\n";
    mostrar(&p2);

    quantPar(&p1, &p2);

    desalocar(&p1);
    desalocar(&p2);
}
void  quantPar(Pilha *p1, Pilha *p2){
    int valor, np1=0, np2=0;

    while(desempilhar(p1, &valor)){
        if(valor % 2 == 0)
            np1++;
    }
    while(desempilhar(p2, &valor)){
        if(valor % 2 == 0)
            np2++;
    }

    cout << "\n\nQuantidade de valores pares na pilha 1: " << np1;
    cout << "\nQuantidade de valores pares na pilha 2: " << np2 << endl;

}

