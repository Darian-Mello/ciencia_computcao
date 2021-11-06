#include <iostream>
#include <cstdlib>
#include <cctype>
#include <cstring>
using namespace std;

#include "pilha_char.hpp"

int main(){
    setlocale(LC_ALL, "Portuguese");
    Pilha p1;
    int tam;
    bool certo=true;
    char c;
    string frase;

    cout << "Informe uma expressão matemática: ";
    getline(cin, frase);
    tam = frase.size();

    inicializa(&p1, tam);

    for(int i=(tam-1); i>=0; i--){
        if(frase[i] == '(' || frase[i] == ')')
            empilhar(&p1, frase[i]);
    }

    if(p1.topo % 2 == 0 && !vazia(&p1)){
        cout << "\n\nExpressão errada.\nO número de parênteses à esquerda e à direita são diferentes!\n";
        desalocar(&p1);
        return 0;
    }

    while(desempilhar(&p1, &c)){
        if((p1.topo+1) % 2 != 0 && c == ')'){
            certo = false;
            break;
        }
        if((p1.topo+1) % 2 == 0 && c == '('){
            certo = false;
            break;
        }
    }

    if(certo == false){
        cout << "\n\nExpressão errada.\nTodo parêntese aberto deve ser seguido posteriormente por um fechamento de parêntese!!\n";
    }
    else
        cout << "\n\nExpressão escrita corretamente.\n";

    desalocar(&p1);
}

