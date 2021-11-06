#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

#include "pilha_dinamica_char.hpp"


int main(){
    setlocale(LC_ALL, "Portuguese");
    string frase;
    char c;
    Pilha p;

    cout << "Informe uma frase: ";
    getline(cin, frase);
    frase += " ";

    system("cls");
    cout << "Frase original:\n" << frase;
    cout << "\n\nFrase infertida:\n";

    for(int i=0; i<frase.size(); i++){
        if(isspace(frase.at(i))){
            while(desempilhar(&p, &c)){
                cout << c;
            }
            cout << ' ';
        }
        else
            empilhar(&p, frase.at(i));
    }
    cout << endl;
    desalocar(&p);

}
