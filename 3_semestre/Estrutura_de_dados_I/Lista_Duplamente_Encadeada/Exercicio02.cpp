#include <iostream>
#include <stdlib.h>
#include <cstring>

using namespace std;

#include "lista_dupla.hpp"

main(){
    setlocale(LC_ALL, "Portuguese");
    char menu;
    int aux;
    Lista *lista = new Lista();

    do{
        system("cls");
        cout << "--------------------MENU--------------------";
        cout << "\nA - Inserir no final da lista: ";
        cout << "\nB - Remover o primeiro elemento: ";
        cout << "\nC - Remover o último elemento: ";
        cout << "\nD - Mostrar lista";
        cout << "\nZ - SAIR";
        cout << "\n--------------------------------------------";
        cout << "\nSua escolha: ";
        cin >> menu;
        menu = toupper(menu);
        system("cls");

        if(menu == 'A'){
            cout << "Informe o valor que deseja inserir: ";
            cin >> aux;
            if(insereFinalL(lista, aux))
                cout << "\n\nValor inserido com sucesso.";
            else
                cout << "Não foi possível inserir o valor.";
        }
        else if(menu == 'B'){
            if(removerInicio(lista))
                cout << "Elemento removido com sucesso.";
            else{
                cout << "Não foi possível remover o elemento.";
            }
        }
        else if(menu == 'C'){
            if(removerFinal(lista))
                cout << "Elemento removido com sucesso.";
            else{
                cout << "Não foi possível remover o elemento.";
            }
        }
        else if(menu == 'D'){
            cout << "Elementos da lista:\n\n" << lista;
        }
        else if(menu == 'Z'){
            delete(lista);
            cout << "Programa finalizado.";
        }
        else
            cout << "Essa opção não está presente no menu.";

        cout << "\n\n";
        system("pause");
    }while(menu != 'Z');
}
