#include <iostream>
#include <cstdlib>
#include <cctype>
#include <cstring>
using namespace std;

#include "pilha_char.hpp"

// Todas as pilhas geradas nesse programa serão do tipo char !!!!

int main(){
    setlocale(LC_ALL, "Portuguese");
    Pilha numeros, caracteres;
    string frase;
    char valor;
    int tam;

    cout << "Informe uma string qualquer: ";
    getline(cin, frase);
    tam = frase.size();

    inicializa(&numeros, tam);
    inicializa(&caracteres, tam);

    for(int i=0; i<tam; i++){
        if(isdigit(frase[i]))
            empilhar(&numeros, frase[i]);
        else if(isalpha(frase[i]))
            empilhar(&caracteres, frase[i]);
    }

    system("cls");
    cout << "Pilha dos números: \n\n";
    mostrar(&numeros);
    system("Pause");
    system("cls");
    cout << "Pilha dos caracteres: \n\n";
    mostrar(&caracteres);
    system("Pause");
    system("cls");

    cout << "String original: ";
    cout << frase;
    cout << "\n\nValores retirados das pilhas: \n\n";
    cout << "Pilha dos números:\n";
    while(numeros.topo >= 0){
        desempilhar(&numeros, &valor);
        cout << valor;
    }
    cout << "\n\nPilha dos caracteres: \n";
    while(caracteres.topo >= 0){
        desempilhar(&caracteres, &valor);
        cout << valor;
    }
    cout << endl;

    desalocar(&numeros);
    desalocar(&caracteres);
}
