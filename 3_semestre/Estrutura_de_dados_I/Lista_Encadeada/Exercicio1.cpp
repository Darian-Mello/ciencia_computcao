#include <iostream>
#include <stdlib.h>
using namespace std;

#include "lista.hpp";

main(){
    setlocale(LC_ALL, "Portuguese");
    int menu, valor, pos;
    bool inicializada = false;
    No *lista, *aux;

    do{
        system("cls");
        cout << "------------------------MENU------------------------";
        cout << "\n0 - Sair;";
        cout << "\n1 - Inicializar a Lista;";
        cout << "\n2 - Verificar se a lista está vazia;";
        cout << "\n3 - Destoir a lista;";
        cout << "\n4 - Inserir um valor;";
        cout << "\n5 - Inserir um valor em uma determinada posição;";
        cout << "\n6 - Remover um valor;";
        cout << "\n7 - Buscar um valor;";
        cout << "\n8 - Mostrar a lista;";
        cout << "\n----------------------------------------------------";
        cout << "\nSua escolha: ";
        cin >> menu;
        system("cls");

        if(!inicializada && menu != 0 && menu != 1){
            cout << "É nececessário inicializar a lista.";
        }
        else if(menu == 0){
            cout << "Programa finalizado.";
            destroiL(&lista);
        }
        else if(menu == 1){
            inicializaL(&lista);
            inicializada = true;
            cout << "A lista foi inicializada!";
        }
        else if(menu == 2){
            if(vaziaL(&lista))
                cout << "A lista está vazia\n";
            else
                cout << "A lista NÃO está vazia\n";
        }
        else if(menu == 3){
            destroiL(&lista);
            inicializada = false;
            cout << "A lista foi destroida.";
        }
        else if(menu == 4){
            cout << "Informe um valor a ser inserido: ";
            cin >> valor;
            if(insereL(&lista, valor))
                cout << "O valor " << valor << " foi inserido com sucesso.";
            else
                cout << "Não foi possível inserir um valor.\nA memória está cheia.";
        }
        else if(menu == 5){
            cout << "Informe um valor a ser inserido: ";
            cin >> valor;
            cout << "Informe a posição: ";
            cin >> pos;
            if(inserePosicaoL(&lista, valor, pos))
                cout << "O valor " << valor << " foi inserido na posicao " << pos << ".";
            else
                cout << "Não foi possível inserir um valor.\nA memória está cheia, ou a posição especificada é inexistente.";
        }
        else if(menu == 6){
            cout << "Informe um valor a ser removido: ";
            cin >> valor;
            if(removeL(&lista, valor))
                cout << "Um valor foi removido: " << valor;
            else
                cout << "Não foi possível remover um valor.";
        }
        else if(menu == 7){
            cout << "Informe o valor que deseja buscar: ";
            cin >> valor;
            aux = buscaL(&lista, valor);
            if(aux)
                cout << "O valor " << valor << " foi encontrado.";
            else
                cout << "O valor " << valor << " NÃO foi encontrado.";
        }
        else if(menu == 8){
            mostraL(&lista);
        }
        else{
            cout << "A opcao " << menu << " não existe no menu.";
        }

        cout << "\n\n";
        system("pause");
    }while(menu != 0);
}
