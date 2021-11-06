#include <cstring>
#include <stdlib.h>
#include <iostream>
using namespace std;

void excluir(string texto, char letra, int test);
main(){
    setlocale(LC_ALL,"Portuguese");
    string texto;
    char letra;
    int test;

    cout << "Informe um texto: ";
    getline(cin, texto);
    cout << "\nInforme um caracter que deseja remover do seu texto: ";
    cin >> letra;
    cout << "\nDeseja remover tanto os caracteres maiúsculos quanto os minúsculos?(1 = sim / 2 = não): ";
    cin >> test;

    excluir(texto, letra, test);
}
void excluir(string texto, char letra, int test){

    system("cls");
    cout << "Texto normal:\n" << texto;

    for(int i=0; i<texto.size(); i++){
        if(texto[i] == letra){
            texto.erase(i, 1);
            i--;
        }
        else if(toupper(texto[i]) == toupper(letra) && test == 1){
            texto.erase(i, 1);
            i--;
        }
    }
    cout << "\n\nTexto sem o caracter " << letra << ":\n" << texto << endl;
}
