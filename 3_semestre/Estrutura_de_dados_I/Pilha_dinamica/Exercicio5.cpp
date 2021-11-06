#include <iostream>
#include <cstdlib>
#include <cctype>
#include <ctime>
#include <math.h>
using namespace std;

#include "pilha_dinamica_caixa.hpp"

void carregar(Pilha *p);
void descarregar(Pilha *p);
void mostrar_carga(Pilha *p);
void mostra_peso(Pilha *p);
void quant(Pilha *p);

main(){
    setlocale(LC_ALL, "Portuguese");
    Pilha p;
    int verifica = 0;
    int menu, tam;

    do{
        do{
            system("cls");
            cout << "##################MENU##################";
            cout << "\n# 0 - Sair                           #";
            cout << "\n# 1 - Carregar caixa                 #";
            cout << "\n# 2 - Descarregar caixa              #";
            cout << "\n# 3 - Mostar carga                   #";
            cout << "\n# 4 - Mostrar a quantidade de caixas #";
            cout << "\n# 5 - Mostrar peso total da carga    #";
            cout << "\n######################################";

            cout << "\nInforme a sua escolha: ";
            cin >> menu;
            if(menu < 0 || menu > 5){
                cout << "\nEssa opção não está presente no menu.\n";
                system("Pause");
            }
        }while(menu < 0 || menu > 5);
        system("cls");

        if(menu == 0){
            cout << "Programa finalizado.";
        }
        else if(menu == 1){
            carregar(&p);
        }
        else if(menu == 2){
            descarregar(&p);
        }
        else if(menu == 3){
            mostrar_carga(&p);
        }
        else if(menu == 4){
            quant(&p);
        }
        else{
            mostra_peso(&p);
        }

        cout << "\n\n";
        system("Pause");
    }while(menu != 0);

    desalocar(&p);
}

void carregar(Pilha *p){
    string codi;
    float peso;

    cout << "Informe o código da caixa: ";
    cin >> codi;
    cout << "\nInforme o peso da caixa: ";
    cin >> peso;

    if(empilhar(p, codi, peso))
        cout << "\n\nCarregamento efetuado.";
    else
        cout << "\n\nNão é possível carregar mais caixas. O carregamento deve estar cheio.";
}

void descarregar(Pilha *p){
    string cod;
    float peso;

    if(desempilhar(p, &cod, &peso)){
        cout << "Caixa desempilhada: ";
        cout << "\nCódigo: " << cod;
        cout << "\nPeso: " << peso;
    }
    else{
        cout << "\n\nO descarregamento ja está completo. ";
    }
}

void mostrar_carga(Pilha *p){
    mostrar(p);
}

void mostra_peso(Pilha *p){
    No *no = p->topo;
    float peso=0;

    while (no != NULL){
        peso += no->peso;
        no = no->ant;
    }

    cout << "O peso total da carga é igual à: " << peso;
}

void quant(Pilha *p){
    No *no = p->topo;
    int cont=0;

    while (no != NULL){
        cont++;
        no = no->ant;
    }

    cout << "O total de caixas empilhada é: " << cont;
}

