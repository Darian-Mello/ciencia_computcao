#include <iostream>
#include <stdlib.h>
using namespace std;

#include "lista.hpp";

main(){
    setlocale(LC_ALL, "Portuguese");
    int menu, valor, pos;
    bool inicializada = false, listaordenada = false;
    No *lista, *aux;
    No* lis; //evite usar "list", pois � uma palavra reservada

    inicializaL(&lis);

    mostraL(&lis);
    insereL(&lis, 10);
    insereL(&lis, 20);
    insereL(&lis, 30);
    insereL(&lis, 40);

    do{
        system("cls");
        cout << "------------------------MENU------------------------";
        cout << "\n0 - Sair;";
        cout << "\n1 - Inicializar a Lista;";
        cout << "\n2 - Verificar se a lista est� vazia;";
        cout << "\n3 - Destoir a lista;";
        cout << "\n4 - Inserir um valor;";
        cout << "\n5 - Inserir um valor em uma determinada posi��o;";
        cout << "\n6 - Remover um valor;";
        cout << "\n7 - Buscar um valor;";
        cout << "\n8 - Mostrar a lista;";
        cout << "\n9 - Verificar a igualdade de duas listas;";
        cout << "\n10 - Ordenar a lista;";
        cout << "\n11 - Inserir um valor ordenado na lista;";
        cout << "\n12 - Mostrar total de elementos na lista;";
        cout << "\n13 - Inserir um valor na �ltima posi��o da lista;";
        cout << "\n14 - Mostrar um valor em determinada posi��o da lista;";
        cout << "\n15 - Remover um valor de uma posi��o espec�fica;";
        cout << "\n16 - Unir duas listas;";
        cout << "\n----------------------------------------------------";
        cout << "\nSua escolha: ";
        cin >> menu;
        system("cls");

        if(!inicializada && menu != 0 && menu != 1){
            cout << "� nececess�rio inicializar a lista.";
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
            cout << "A lista est� vazia";
        else
            cout << "A lista N�O est� vazia";
        }
        else if(menu == 3){
            destroiL(&lista);
            inicializada = false;
            cout << "A lista foi destroida.";
        }
        else if(menu == 4){
            cout << "Informe um valor a ser inserido: ";
            cin >> valor;
            if(insereL(&lista, valor)){
                cout << "O valor " << valor << " foi inserido com sucesso.";
                 listaordenada = false;
            }
            else
                cout << "N�o foi poss�vel inserir um valor.\nA mem�ria est� cheia.";
        }
        else if(menu == 5){
            cout << "Informe um valor a ser inserido: ";
            cin >> valor;
            cout << "Informe a posi��o: ";
            cin >> pos;
            if(inserePosicaoL(&lista, valor, pos)){
                cout << "O valor " << valor << " foi inserido na posicao " << pos << ".";
                 listaordenada = false;
            }
            else
                cout << "N�o foi poss�vel inserir um valor.\nA mem�ria est� cheia, ou a posi��o especificada � inexistente.";
        }
        else if(menu == 6){
            cout << "Informe um valor a ser removido: ";
            cin >> valor;
            if(removeL(&lista, valor))
                cout << "Um valor foi removido: " << valor;
            else
                cout << "N�o foi poss�vel remover um valor.";
        }
        else if(menu == 7){
            cout << "Informe o valor que deseja buscar: ";
            cin >> valor;
            aux = buscaL(&lista, valor);
            if(aux)
                cout << "O valor " << valor << " foi encontrado.";
            else
                cout << "O valor " << valor << " N�O foi encontrado.";
        }
        else if(menu == 8){
            mostraL(&lista);
        }
        else if(menu == 9){
            if(igual(&lista, &lis))
                cout << "As listas s�o iguais!";
            else
                cout << "As listas N�O s�o iguais!";
        }
        else if(menu == 10){
            ordenaLista(&lista);
            cout << "A lista foi ordenada.";
            listaordenada = true;
        }
        else if(menu == 11){
            if(listaordenada){
                cout << "Informe o valor que deseja inserir de forma ordenada: ";
                cin >> valor;
                insereOrdenado(&lista, valor);
                cout << "O valor foi inserido de forma ordenada.";
            }
            else
                cout << "� necess�rio ordenar a lista!";
        }
        else if(menu == 12){
            total(&lista);
        }
        else if(menu == 13){
            cout << "Informe um valor a ser inserido nofinal da lista: ";
            cin >> valor;
            insereFinal(&lista, valor);
            cout << "\nO valor " << valor << " foi inserido no final da lista.";
        }
        else if(menu == 14){
            cout << "Informe a posi��o: ";
            cin >> pos;
            if(lePosicao(&lista, pos, &valor))
                cout << "\nValor da posi��o " << pos << ": " << valor;
            else
                cout << "\nN�o foi poss�vel ler o valor.\nA lista est� vazia, ou a posi��o especificada � inexistente.";
        }
        else if(menu == 15){
            cout << "Informe a posi��o em que deseja remover um valor: ";
            cin >> pos;
            if(removePosicao(&lista, pos)){
                cout << "Um valor foi removido da posi��o " << pos;
            }
            else
                cout << "\nN�o foi poss�vel remover um valor.\nA lista est� vazia, ou a posi��o especificada � inexistente.";
        }
        else if(menu == 16){
            No *saida;
            uniao(&lista, &lis, &saida);
            cout << "Uni�o das listas: ";
            mostraL(&saida);
        }
        else{
            cout << "A opcao " << menu << " n�o existe no menu.";
        }

        cout << "\n\n";
        system("pause");
    }while(menu != 0);
    destroiL(&lis);
}
