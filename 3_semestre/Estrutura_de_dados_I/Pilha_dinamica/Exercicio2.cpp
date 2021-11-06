#include <iostream>
#include <cstdlib>
using namespace std;

#include "pilha-dinamica.hpp"

void inserir(Pilha *ord, Pilha *aux, int cont);
void exibir(Pilha *ord);

int main(){
    setlocale(LC_ALL, "Portuguese");
    int menu, cont=1;
    Pilha ord, aux;

    do{
        do{
            system("cls");
            cout << "---------------MENU----------------";
            cout << "\n0 - Sair";
            cout << "\n1 - Informar o " << cont << "º valor";
            cout << "\n2 - Exibir valores";
            cout << "\n-----------------------------------";
            cout << "\nInforme sua esclha: ";
            cin >> menu;
            if(menu < 0 || menu > 2){
                cout << "\n\nEssa opção não existe no menu.\n\n";
                system("Pause");
            }
        }while(menu < 0 || menu > 2);
        system("cls");

        switch(menu){
        case 0:
            cout << "Programa finalizado!";
            desalocar(&ord);
            desalocar(&aux);
            break;
        case 1:
            inserir(&ord, &aux, cont);
            cont++;
            break;
        default:
            exibir(&ord);
        }

        cout << "\n\n";
        system("Pause");
    }while(menu!=0);
}

void inserir(Pilha *ord, Pilha *aux, int cont){
    int valor, valor2;
    bool empilhou = false;

    cout << "Informe um valor inteiro: ";
    cin >> valor;

    if(cont == 1){
        empilhar(ord, valor);
    }
    else{
        while((empilhou == false) && (!vazia(ord))){
            espiar(ord, &valor2);

            if(valor <= valor2){
                empilhar(ord, valor);
                empilhou = true;
            }
            else{
                desempilhar(ord, &valor2);
                empilhar(aux, valor2);
            }
        }
        if(empilhou == false)
            empilhar(ord, valor);
        while(desempilhar(aux, &valor2)){
            empilhar(ord, valor2);
        }
    }

    cout << "\n\nValor adicionado!";
}

void exibir(Pilha *ord){
    int valor;

    cout << "Exibindo de forma ordenada todos valores informados: \n\n";
    mostrar(ord);
}
