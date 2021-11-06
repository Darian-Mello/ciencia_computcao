#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

#include "pilha_dinamica_char.hpp"

bool verifica_balanceamento(string expressao);

int main(){
    setlocale(LC_ALL, "Portuguese");
    int menu;
    string expressao;

    do{
        do{
            system("cls");
            cout << "---------------MENU----------------------------------------";
            cout << "\n0 - Sair";
            cout << "\n1 - verificar o balanceamento de uma expressão";
            cout << "\n-----------------------------------------------------------";
            cout << "\nInforme sua esclha: ";
            cin >> menu;
            if(menu < 0 || menu > 1){
                cout << "\n\nEssa opção não existe no menu.\n\n";
                system("Pause");
            }
        }while(menu < 0 || menu > 1);
        system("cls");

        switch(menu){
        case 0:
            cout << "Programa finalizado!";
            break;
        default:
            fflush(stdin);
            cout << "Informe uma expressão: ";
            getline(cin, expressao);

            if(verifica_balanceamento(expressao))
                cout << "\n\nA expressão informada está balanceada!!";
            else
                 cout << "\n\nA expressão informada NÃO está balanceada!!";
        }

        cout << "\n\n";
        system("Pause");
    }while(menu!=0);
}

bool verifica_balanceamento(string expressao){
    Pilha p;
    char aux, c;
    bool correta = true;

    for(int i=0; i<expressao.size(); i++){
        if(expressao[i] == '{' || expressao[i] == '[' || expressao[i] == '('){
            empilhar(&p, expressao[i]);
        }
        else if(expressao[i] == '}' || expressao[i] == ']' || expressao[i] == ')'){
            c = expressao[i];
            desempilhar(&p, &aux);
            if(c == '}' && aux != '{'){
                correta = false;
                break;
            }
            else if(c == ']' && aux != '['){
                correta = false;
                break;
            }
            else if(c == ')' && aux != '('){
                correta = false;
                break;
            }
        }
    }

    desalocar(&p);
    return correta;
}
