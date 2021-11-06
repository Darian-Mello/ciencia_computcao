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
        cout << "\n3 - Verificar se a lista est� ordenada;";
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
                cout << "N�o foi poss�vel inserir um valor.\nA mem�ria est� cheia.";
        }
        else if(menu == 2){
            ordenaLista(&lista);
            cout << "A lista foi ordenada.";
        }
        else if(menu == 3){
            if(VerificaListaOrdenada(&lista))
                cout << "A lista est� ordenada.";
            else
                cout << "A lista N�O est� ordenada";
        }
        else if(menu == 4)
            mostraL(&lista);
        else
            cout << "Essa op��o n�o est� presente no menu";

    cout << "\n\n";
    system("pause");
     }while(menu != 0);
}

