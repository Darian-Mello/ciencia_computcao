#include <iostream>
#include <cstdlib>

using namespace std;

#include "fila-dinamica.hpp"

void inserir(Fila *f);
void remover(Fila *f);

main(){
    setlocale(LC_ALL, "Portuguese");
    int menu;
    Fila f1, f2, fConcatenada;

    do{
        do{
            system("cls");
            cout << "-------------------------------MENU---------------------------------";
            cout << "\n0 - Sair";
            cout << "\n1 - Incluir na fila 1";
            cout << "\n2 - Incluir na fila 2";
            cout << "\n3 - Remover da fila 1";
            cout << "\n4 - Remover da fila 2";
            cout << "\n5 - Concatenar a fila 1 com a fila 2";
            cout << "\n6 - Mostrar todas as filas";
            cout << "\n---------------------------------------------------------------------";
            cout << "\n Sua escolha: ";
            cin >> menu;

            if(menu < 0 || menu > 6){
                cout << "\n\nEssa opcao nao consta no menu.";
                system("Pause");
            }
        }while(menu < 0 || menu > 6);
        system("cls");

        if(menu == 0)
            cout << "Programa finalizado.";
        else if(menu == 1)
            inserir(&f1);
        else if(menu == 2)
            inserir(&f2);
        else if(menu == 3)
            remover(&f1);
        else if(menu == 4)
            remover(&f2);
        else if(menu == 5){
            concatenaF(&f1, &f2, &fConcatenada);
            cout << "As filas foram concatenadas!";
        }
        else{
            cout << "Fila 1: \n";
            mostraF(&f1);
            cout << "\n\nFila 2: \n";
            mostraF(&f2);
            cout << "\n\nFila Concatenada: \n";
            mostraF(&fConcatenada);
        }


        cout << "\n\n";
        system("Pause");
    }while(menu != 0);

    destroiF(&f1);
    destroiF(&f2);
    destroiF(&fConcatenada);
}

void inserir(Fila *f){
    int valor;

    system("cls");
    cout << "Informe um valor para inserir na fila: ";
    cin >> valor;

    if(enfileiraF(f, valor))
        cout << "O valor foi adicionado a fila.";
    else
        cout << "Não foi possível inserir o valor na fila. A memória está cheia.";
}

void remover(Fila *f){
    int valor;

    if(desenfileiraF(f, &valor)){
        cout << "Valor desenfileirado: " << valor;
    }
    else
        cout << "Não foi possível desenfineirar. A fila está vazia.";
}
