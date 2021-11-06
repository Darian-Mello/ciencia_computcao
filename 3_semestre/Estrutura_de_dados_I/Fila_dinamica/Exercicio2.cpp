#include <iostream>
#include <cstdlib>

using namespace std;

#include "fila-dinamica.hpp"
#include "pilha-dinamica.hpp"

void inserir(Fila *f);
void remover(Fila *f);
void inverterFila(Fila *f);

main(){
    setlocale(LC_ALL, "Portuguese");
    int menu;
    Fila f;

    do{
        do{
            system("cls");
            cout << "-------------------------------MENU---------------------------------";
            cout << "\n0 - Sair";
            cout << "\n1 - Incluir na fila";
            cout << "\n2 - Remover da fila";
            cout << "\n3 - Mostrar a fila";
            cout << "\n4 - Inverter fila";
            cout << "\n---------------------------------------------------------------------";
            cout << "\n Sua escolha: ";
            cin >> menu;

            if(menu < 0 || menu > 4){
                cout << "\n\nEssa opcao nao consta no menu.";
                system("Pause");
            }
        }while(menu < 0 || menu > 4);
        system("cls");

        if(menu == 0)
            cout << "Programa finalizado.";
        else if(menu == 1)
            inserir(&f);
        else if(menu == 2)
            remover(&f);
        else if(menu == 3)
            mostraF(&f);
        else
            inverterFila(&f);

        cout << "\n\n";
        system("Pause");
    }while(menu != 0);

    destroiF(&f);
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

void inverterFila(Fila *f){
    if(vaziaF(f)){
        cout << "A fila está vazia.";
        return;
    }

    Pilha p;
    int valor;

    while(desenfileiraF(f, &valor)){
        empilhar(&p, valor);
    }
    while(desempilhar(&p, &valor)){
        enfileiraF(f, valor);
    }
    cout << "A fila foi invertida com sucesso.";

    desalocar(&p);
}
