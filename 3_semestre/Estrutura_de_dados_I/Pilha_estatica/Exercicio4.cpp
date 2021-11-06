#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

#include "pilha.hpp"

void inserir(Pilha *p1, int valor);
void mostrar_pilha(Pilha *p1);

int main(void){
    setlocale(LC_ALL, "Portuguese");
    Pilha P, Ppar, Pimpar;
    int menu, tam = 6, valor;

    inicializa(&P, tam);
    inicializa(&Ppar, tam);
    inicializa(&Pimpar, tam);
    do{
            do{
            system("cls");
            cout << "##############MENU##############";
            cout << "\n# 0 - Sair                   #";
            cout << "\n# 1 - Inserir                #";
            cout << "\n# 2 - Remover                #";
            cout << "\n# 3 - Mostrar Pilha inicial  #";
            cout << "\n# 4 - Mostrar Pilha par      #";
            cout << "\n# 5 - Mostrar Pilha ímpar    #";
            cout << "\n# 6 - Zerar as Pilhas        #";
            cout << "\n##############################";

            cout << "\nInforme a sua escolha: ";
            cin >> menu;
            if(menu < 0 || menu > 6){
                cout << "\nEssa opção não está presente no menu.\n";
                system("Pause");
            }
        }while(menu < 0 || menu > 6);

        system("cls");
        if(menu == 0){
            cout << "Programa Finalizado.\n";
            desalocar(&P);
            desalocar(&Ppar);
            desalocar(&Pimpar);
        }

        else if(menu == 1){
            cout << "Informe um valor a ser empilhado: ";
            cin >> valor;
            inserir(&P, valor);
        }

        else if(menu == 2){
            if(desempilhar(&P, &valor)){
                cout << "Um valor foi desempilhado e selecionado como par ou Impar: " << valor;
                if(valor % 2 == 0)
                    inserir(&Ppar, valor);
                else
                    inserir(&Pimpar, valor);
            }
            else{
                if(vazia(&P))
                    cout << "\n\nNão é possível desempilhar valores, a pilha está vazia.";
                else
                    cout << "\n\nA pilha não foi inicializada. ";
            }
        }

        else if(menu == 3){
            cout << "Pilha inicial: \n\n";
            mostrar_pilha(&P);
        }

        else if(menu == 4){
            cout << "Pilha dos pares: \n\n";
            mostrar_pilha(&Ppar);
        }
        else if(menu == 5){
            cout << "Pilha dos ímpares: \n\n";
            mostrar_pilha(&Pimpar);
        }
        else{
            inicializa(&P, tam);
            inicializa(&Ppar, tam);
            inicializa(&Pimpar, tam);
            cout << "As Pilhas foram zeradas.";
        }

        cout << "\n\n";
        system("Pause");
    }while(menu != 0);
}

void inserir(Pilha *p1, int valor){
        if(empilhar(p1, valor)){
            cout << "\n\nValor empilhado com sucesso.";
        }
        else{
            if(cheia(p1))
                cout << "\n\nNão é possível empilhar mais valores, a pilha em questão está cheia.";
            else
                cout << "\n\nA pilha não foi inicializada. ";
    }
}

void mostrar_pilha(Pilha *p1){
        if(vazia(p1)){
            cout << "A pilha não foi inicializada, ou está vazia.";
        }
        else{
            mostrar(p1);
        }
}
