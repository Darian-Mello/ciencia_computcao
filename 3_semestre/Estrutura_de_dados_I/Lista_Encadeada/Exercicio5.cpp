#include <iostream>
#include <stdlib.h>
#include <cstring>
using namespace std;

#include "listaChar.hpp";

main(){
    setlocale(LC_ALL, "Portuguese");
    No* lista;
    char menu;
    int x;
    string frase;

    inicializaL(&lista);

     do{
        system("cls");
        cout << "------------------------MENU------------------------";
        cout << "\n0 - Sair;";
        cout << "\n1 - Inserir uma nova cadeia de valores;";
        cout << "\n2 - Mostrar lista de caracteres;";
        cout << "\n3 - Mostrar lista de caracteres ao contrario;";
        cout << "\n----------------------------------------------------";
        cout << "\nSua escolha: ";
        cin >> menu;
        system("cls");

        if(menu == '0'){
            cout << "Programa finalizado.";
            destroiL(&lista);
        }
        else if(menu == '1'){
            destroiL(&lista);
            inicializaL(&lista);
            cout << "Informe uma frase: ";
            fflush(stdin);
            getline(cin, frase);

            for(int i=0; i<frase.size(); i++){
                insereFinal(&lista, frase[i]);
            }
            cout << "\nFrase atualizada com sucesso.";
        }
        else if(menu == '2'){
            mostraL(&lista);
        }
        else if(menu == '3'){
            cout << "Informe a quantidade de caracteres que deseja realocar: ";
            cin >> x;

            for(int i=0; i<x; i++){
                insereFinal(&lista, lista->dado);
                removePosicao(&lista, 0);
            }
            cout << "\nFrase atualizada com sucesso.";
        }
        else
            cout << "Essa opção não está presente no menu";

    cout << "\n\n";
    system("pause");
    }while(menu != '0');
}
