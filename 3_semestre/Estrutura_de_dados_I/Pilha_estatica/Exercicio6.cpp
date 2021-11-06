#include <iostream>
#include <cstdlib>
#include <cctype>
#include <cstring>
using namespace std;

#include "pilha_char.hpp"

int main(){
    setlocale(LC_ALL, "Portuguese");
    Pilha p1;
    string frase, palindromo = "";
    char aux;
    int tam;

    cout << "Informe uma texto para verificar se é um palíndromo: ";
    getline(cin, frase);

    tam = frase.size();
    inicializa(&p1, tam);

    for(int i=0; i<tam; i++){
        empilhar(&p1, frase[i]);
    }
    for(int i=0; i<tam; i++){
        desempilhar(&p1, &aux);
        palindromo += aux;
    }

    system("cls");
    cout << "Texto original: \n" << frase;
    cout << "\n\nTexto ao contrario: \n" << palindromo;
    if(frase == palindromo)
        cout << "\n\nO texto é um palíndromo!\n";
    else
        cout << "\n\nO texto não é um palíndromo!\n";

    desalocar(&p1);
}
