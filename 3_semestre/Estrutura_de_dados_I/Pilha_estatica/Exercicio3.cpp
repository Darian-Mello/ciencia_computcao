#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

#include "pilha.hpp"

int main(void){
    setlocale(LC_ALL, "Portuguese");
    Pilha p1, p2;
    int menu, tam = 5, valor;
    int vetor[tam] = {NULL};

    inicializa(&p1, tam);
    inicializa(&p2, tam);
    do{
            do{
            system("cls");
            cout << "###########MENU###########";
            cout << "\n# 0 - Sair               #";
            cout << "\n# 1 - Inserir pilha 1    #";
            cout << "\n# 2 - Inserir pilha 2    #";
            cout << "\n# 3 - Remover pilha 1    #";
            cout << "\n# 4 - Remover pilha 2    #";
            cout << "\n# 5 - Mostrar Pilhas     #";
            cout << "\n##########################";

            cout << "\nInforme a sua escolha: ";
            cin >> menu;
            if(menu < 0 || menu > 7){
                cout << "\nEssa opção não está presente no menu.\n";
                system("Pause");
            }
        }while(menu < 0 || menu > 7);

        system("cls");
        if(menu == 0){
            cout << "Programa Finalizado.\n";
            desalocar(&p1);
            desalocar(&p2);
        }

        else if(menu == 1){
            if((p1.topo + p2.topo) == (tam-2)){
                cout << "As pilhas estão cheias.";
            }
            else{
                cout << "Informe um valor a ser empilhado na Pilha 1: ";
                cin >> valor;
                empilhar(&p1, valor);
                vetor[p1.topo] = valor;
                cout << "\n\nValor empilhado com sucesso.";
            }
        }

        else if(menu == 2){
            if((p1.topo + p2.topo) == (tam-2)){
                cout << "As pilhas estão cheias.";
            }
            else{
                cout << "Informe um valor a ser empilhado na Pilha 2: ";
                cin >> valor;
                empilhar(&p2, valor);
                vetor[((tam-1)  - p2.topo)] = valor;
                cout << "\n\nValor empilhado com sucesso.";
            }
        }

        else if(menu == 3){
            if(desempilhar(&p1, &valor)){
                cout << "Um valor na pilha 1 foi desempilhado: " << valor;
                vetor[p1.topo+1] = NULL;
            }
            else{
                if(vazia(&p1))
                    cout << "\n\nNão é possível desempilhar valores, a pilha 1 está vazia.";
                else
                    cout << "\n\nA pilha não foi inicializada. ";
            }
        }

        else if(menu == 4){
            if(desempilhar(&p2, &valor)){
                cout << "Um valor na pilha 2 foi desempilhado: " << valor;
                vetor[((tam-1) - p2.topo) - 1] = NULL;
            }
            else{
                if(vazia(&p1))
                    cout << "\n\nNão é possível desempilhar valores, a pilha 2 está vazia.";
                else
                    cout << "\n\nA pilha não foi inicializada. ";
            }
        }

        else{
            cout << "Listando a Pilha 1: ";
            mostrar(&p1);
            cout << "\n\nListando a Pilha 2: ";
            mostrar(&p2);
            cout << "\n\nListando o vetor: \n";
            for(int i=0; i<tam; i++){
                cout << vetor[i] << "\t";
            }
            cout << endl;
        }

        cout << "\n\n";
        system("Pause");
    }while(menu != 0);
}

