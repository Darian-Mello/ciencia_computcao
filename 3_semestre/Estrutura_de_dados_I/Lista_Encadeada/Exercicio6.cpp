#include <iostream>
#include <stdlib.h>
#include <cstring>
using namespace std;

#include "listaString.hpp";

bool Insegura(No **lista, No **listaInsegura, string frase);

main(){
    setlocale(LC_ALL, "Portuguese");
    No *lista, *listaInsegura;
    char menu;
    string frase, teste;

    inicializaL(&lista);
    inicializaL(&listaInsegura);

     do{
        system("cls");
        cout << "------------------------MENU------------------------";
        cout << "\n0 - Sair;";
        cout << "\n1 - Inserir uma nova senha;";
        cout << "\n2 - Mostrar lista de senhas;";
        cout << "\n3 - Mostrar lista de senhas inseguras;";
        cout << "\n----------------------------------------------------";
        cout << "\nSua escolha: ";
        cin >> menu;
        system("cls");

        if(menu == '0'){
            cout << "Programa finalizado.";
            destroiL(&lista);
            destroiL(&listaInsegura);
        }
        else if(menu == '1'){
            cout << "Informe uma frase: ";
            fflush(stdin);
            getline(cin, frase);

            insereL(&lista, frase);
            cout << "\nSenha inserida com sucesso.";

            if(Insegura(&lista, &listaInsegura, frase)){
                cout << "\n\nA senha inserida é insegura;";
                if(!buscaL(&listaInsegura, frase))
                    insereL(&listaInsegura, frase);
            }
            else{
                cout << "\n\nA senha inserida é segura;";
            }
        }
        else if(menu == '2')
            mostraL(&lista);

        else if(menu == '3')
            mostraL(&listaInsegura);

        else
            cout << "Essa opção não está presente no menu";

    cout << "\n\n";
    system("pause");
    }while(menu != '0');
}

bool Insegura(No **lista, No **listaInsegura, string frase){
    if(frase.size()-1 < 4)
        return true;

    No *n = *lista;
    int cont = 1;
    while(n){
        if(frase == n->dado)
            cont++;

        n = n->prox;
    }

    if(cont > 5)
        return true;
    else
        return false;
}
