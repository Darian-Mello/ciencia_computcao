#include <iostream>
#include <stdlib.h>
using namespace std;

#include "lista.hpp";

main(){
    setlocale(LC_ALL, "Portuguese");
    No* lista;
    int menu, valor;

    inicializaL(&lista);

     do{
        system("cls");
        cout << "------------------------MENU------------------------";
        cout << "\n0 - Sair;";
        cout << "\n1 - Inserir um valor;";
        cout << "\n2 - Ordenar a lista;";
        cout << "\n3 - Verificar se a lista está ordenada;";
        cout << "\n4 - Mostrar lista;";
        cout << "\n----------------------------------------------------";
        cout << "\nSua escolha: ";
        cin >> menu;
        system("cls");

        if(menu == 0){
            cout << "Programa finalizado.";
            destroiL(&lista);
        }
        else if(menu == 1){
            cout << "Informe um valor a ser inserido: ";
            cin >> valor;
            if(insereL(&lista, valor)){
                cout << "O valor " << valor << " foi inserido com sucesso.";
            }
            else
                cout << "Não foi possível inserir um valor.\nA memória está cheia.";
        }
        else if(menu == 2){
            ordenaLista(&lista);
            cout << "A lista foi ordenada.";
        }
        else if(menu == 3){
            if(VerificaListaOrdenada(&lista))
                cout << "A lista está ordenada.";
            else
                cout << "A lista NÃO está ordenada";
        }
        else if(menu == 4)
            mostraL(&lista);
        else
            cout << "Essa opção não está presente no menu";

    cout << "\n\n";
    system("pause");
     }while(menu != 0);
}

