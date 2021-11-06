#include <iostream>
#include <stdlib.h>

using namespace std;
#include "lista_descritor.hpp"

main(){
    setlocale(LC_ALL, "Portuguese");
    char menu;
    int aux;
    Lista *lista = new Lista();

    do{
        system("cls");
        cout << "--------------------MENU--------------------";
        cout << "\nA - Inserir um elemento na lista;";
        cout << "\nB - Descrever lista;";
        cout << "\nC - SAIR";
        cout << "\n--------------------------------------------";
        cout << "\nSua escolha: ";
        cin >> menu;
        menu = toupper(menu);
        system("cls");

        if(menu == 'A'){
            cout << "Informe um valor inteiro: ";
            cin >> aux;
            if(insereInicioL(lista, aux))
                cout << "\n\nValor inserido com sucesso!\n\n";
            else
                cout << "\n\nNão foi possível inserir o valor. Não há espaço na memória!";
        }
        else if(menu == 'B'){
            if(vaziaL(lista))
                cout << "A lista está vazia.";
            else
                cout << "Lista: {" << lista << "}";

            DescreveL(lista);
        }
        else if(menu == 'C'){
            delete(lista);
            cout << "Programa finalizado.";
        }
        else
            cout << "Essa opção não existe no menu.";

        cout << "\n\n";
        system("pause");
    }while(menu != 'C');
}

