#include <iostream>
#include <cstdlib>

using namespace std;

#include "fila-dinamica.hpp"

void inserir(Fila *f);
void remover(Fila *f);
void dividir(Fila *f1, Fila *f2);

main(){
    setlocale(LC_ALL, "Portuguese");
    int menu;
    Fila f1, f2;

    do{
        do{
            system("cls");
            cout << "-------------------------------MENU---------------------------------";
            cout << "\n0 - Sair";
            cout << "\n1 - Incluir na fila";
            cout << "\n2 - Remover da fila";
            cout << "\n3 - Dividir a fila";
            cout << "\n4 - Mostrar todas as filas";
            cout << "\n---------------------------------------------------------------------";
            cout << "\n Sua escolha: ";
            cin >> menu;

            if(menu < 0 || menu > 4){
                cout << "\n\nEssa opcao nao consta no menu.\n\n";
                system("Pause");
            }
        }while(menu < 0 || menu > 4);
        system("cls");

        if(menu == 0)
            cout << "Programa finalizado.";
        else if(menu == 1)
            inserir(&f1);
        else if(menu == 2)
            remover(&f1);
        else if(menu == 3)
            dividir(&f1, &f2);
        else{
            cout << "Fila 1: \n";
            mostraF(&f1);
            cout << "\n\nFila 2: \n";
            mostraF(&f2);
        }


        cout << "\n\n";
        system("Pause");
    }while(menu != 0);

    destroiF(&f1);
    destroiF(&f2);
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

void dividir(Fila *f1, Fila *f2){
    int n;

    cout << "Informe o valor que será o ponto da divisão: ";
    cin >> n;

    separaF(n, f1, f2);
    cout << "\n\nA fila foi separada  partir o numero " << n << ".";
}

