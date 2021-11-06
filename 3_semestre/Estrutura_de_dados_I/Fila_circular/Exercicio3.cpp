#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

#include "FilaCircular_char.hpp"
#include "pilha_dinamica_char.hpp"

main(){
    setlocale(LC_ALL, "Portuguese");
    bool palindromo = true;
    int tam;
    string frase;
    Pilha p1;
    Fila f1;
    char c1, c2;

    cout << "Informe uma frase para verificar se é um palíndromo: ";
    getline(cin, frase);
    system("cls");

    tam = frase.size();
    inicializaF(&f1, tam);

    for(int i=0; i<tam; i++){
        empilhar(&p1, frase[i]);
        enfileirarF(&f1, frase[i]);
    }
    for(int i=0; i<tam; i++){
        desempilhar(&p1, &c1);
        desenfileirarF(&f1, &c2);

        if(c2 != c1)
            palindromo = false;
    }

    cout << "Frase informada: " << frase;
    if(palindromo)
        cout << "\n\nA frase informada é um palíndromo!!\n";
    else
        cout << "\n\nA frase informada NÃO é um palíndromo!!\n";
}
