#include <iostream>
#include <cstring>

using namespace std;

void tamanho_letra(char *posicao, int tamanho);
void maiuscula(char *posicao, int tamanho);

main(){
    setlocale(LC_ALL, "Portuguese");
    string texto;

    cout << "Informe um texto qualquer: ";
    getline(cin, texto);

    tamanho_letra(&texto[0], texto.size());
    maiuscula(&texto[0], texto.size());
}

void tamanho_letra(char *posicao, int tamanho){
    int maiusculas, minusculas, i=0;

    while(i < tamanho){
        if(isupper(*(posicao+i)))
            maiusculas++;

        else if(islower(*(posicao+i)))
            minusculas++;

        i++;
    }
    cout << "\n\nA string informada pussui " << maiusculas << " letras maiúsculas, e " << minusculas << " letras minúsculas.\n";
}

void maiuscula(char *posicao, int tamanho){
    cout << "\nString com todos os caracteres maiúsculos:\n";
    for(int i=0; i<tamanho; i++){
        *(posicao+i) = toupper(*(posicao+i));
        cout << *(posicao+i);
    }

    cout << "\n\nSring invertida:\n";
    for(int i=tamanho-1; i>=0; i--){
        cout << *(posicao+i);
    }
}
