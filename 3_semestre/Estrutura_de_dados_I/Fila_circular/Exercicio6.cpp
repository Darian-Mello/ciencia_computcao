#include <iostream>
#include <cstdlib>
#include <cstring>
#include <string>
#include <fstream>

using namespace std;

#include "FilaCircular_float.hpp"
#define tam 8

void inserir(Fila *f);
void remover(Fila *f);
void mostraArquivo();

main(){
    setlocale(LC_ALL, "Portuguese");
    int menu;
    Fila f;

    inicializaF(&f, tam);
    do{
        do{
            system("cls");
            cout << "-------------------------------MENU---------------------------------";
            cout << "\n0 - Sair";
            cout << "\n1 - Incluir na fila";
            cout << "\n2 - Mostrar a fila";
            cout << "\n3 - Remover da fila";
            cout << "\n4 - Mostrar dados do arquivo e a soma";
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
            mostraF(&f);
        else if(menu == 3)
            remover(&f);
        else
            mostraArquivo();

        cout << "\n\n";
        system("Pause");
    }while(menu != 0);

    destroiF(&f);
}

void inserir(Fila *f){
    float valor;

    do{
        system("cls");
        cout << "Informe um número real menor que 50: ";
        cin >> valor;
    }while(valor > 50);

    if(enfileiraF(f, valor)){
        cout << "O valor foi adicionado a fila e ao arquivo texto.";
    }
    else
        cout << "Não foi possível inserir o valor. A Fila está cheia.";

}

void remover(Fila *f){
    ofstream arquivo("revisa.txt", ios::app);
    float valor;

    if(desenfileiraF(f, &valor)){
        arquivo << valor << "\n";
        cout << "Valor desenfileirado e adicionado ao arquivo: " << valor;
    }
    else
        cout << "Não foi possível desenfineirar. A fila está vazia.";

    arquivo.close();
}

void mostraArquivo(){
    ifstream arquivo("revisa.txt");

    string valor;
    float soma=0, numero;

    cout << "Valores do arquivo:\n\n";
    while(arquivo >> numero){
        soma += numero;
        cout << numero << endl;
    }
    cout << "\n\nA soma dos valores é igual a " << soma << endl;

    arquivo.close();
}
