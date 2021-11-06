#include <iostream>
#include <stdlib.h>
using namespace std;

#include "lista.hpp";

main(){
    setlocale(LC_ALL, "Portuguese");
    int menu, valor, pos;
    bool inicializada = false, listaordenada = false;
    No *lista, *aux;
    No* lis; //evite usar "list", pois é uma palavra reservada

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
        cout << "\n2 - Verificar se a lista está vazia;";
        cout << "\n3 - Destoir a lista;";
        cout << "\n4 - Inserir um valor;";
        cout << "\n5 - Inserir um valor em uma determinada posição;";
        cout << "\n6 - Remover um valor;";
        cout << "\n7 - Buscar um valor;";
        cout << "\n8 - Mostrar a lista;";
        cout << "\n9 - Verificar a igualdade de duas listas;";
        cout << "\n10 - Ordenar a lista;";
        cout << "\n11 - Inserir um valor ordenado na lista;";
        cout << "\n12 - Mostrar total de elementos na lista;";
        cout << "\n13 - Inserir um valor na última posição da lista;";
        cout << "\n14 - Mostrar um valor em determinada posição da lista;";
        cout << "\n15 - Remover um valor de uma posição específica;";
        cout << "\n16 - Unir duas listas;";
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
            cout << "A lista está vazia";
        else
            cout << "A lista NÃO está vazia";
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
                cout << "Não foi possível inserir um valor.\nA memória está cheia.";
        }
        else if(menu == 5){
            cout << "Informe um valor a ser inserido: ";
            cin >> valor;
            cout << "Informe a posição: ";
            cin >> pos;
            if(inserePosicaoL(&lista, valor, pos)){
                cout << "O valor " << valor << " foi inserido na posicao " << pos << ".";
                 listaordenada = false;
            }
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
        else if(menu == 9){
            if(igual(&lista, &lis))
                cout << "As listas são iguais!";
            else
                cout << "As listas NÃO são iguais!";
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
                cout << "É necessário ordenar a lista!";
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
            cout << "Informe a posição: ";
            cin >> pos;
            if(lePosicao(&lista, pos, &valor))
                cout << "\nValor da posição " << pos << ": " << valor;
            else
                cout << "\nNão foi possível ler o valor.\nA lista está vazia, ou a posição especificada é inexistente.";
        }
        else if(menu == 15){
            cout << "Informe a posição em que deseja remover um valor: ";
            cin >> pos;
            if(removePosicao(&lista, pos)){
                cout << "Um valor foi removido da posição " << pos;
            }
            else
                cout << "\nNão foi possível remover um valor.\nA lista está vazia, ou a posição especificada é inexistente.";
        }
        else if(menu == 16){
            No *saida;
            uniao(&lista, &lis, &saida);
            cout << "União das listas: ";
            mostraL(&saida);
        }
        else{
            cout << "A opcao " << menu << " não existe no menu.";
        }

        cout << "\n\n";
        system("pause");
    }while(menu != 0);
    destroiL(&lis);
}
