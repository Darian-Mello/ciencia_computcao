#include <iostream>
#include <cstdlib>
#include <cctype>
#include <ctime>
using namespace std;

#include "pilha-dinamica.hpp"

void  quantPar(Pilha *p1, Pilha *p2);
void gera_pilhas(int menu, Pilha *p1, Pilha *p2);

int main(){
    setlocale(LC_ALL, "Portuguese");
    Pilha p1, p2;
    int menu;

    inicializa(&p1);
    inicializa(&p2);

    do{
        system("cls");
        cout << "---------------MENU----------------";
        cout << "\n1 - Informar o os valores das pilhas";
        cout << "\n2 - Gerar as pilhas aleatoriamente";
        cout << "\n-----------------------------------";
        cout << "\nInforme sua escolha: ";
        cin >> menu;
        if(menu < 1 || menu > 2){
            cout << "\n\nEssa opção não existe no menu.\n\n";
            system("Pause");
        }
    }while(menu < 1 || menu > 2);
    system("cls");

    gera_pilhas(menu, &p1, &p2);

    system("cls");

    if(verifica_igualdade(&p1, &p2))
        cout << "As pilhas formadas são iguais: \n\n";
    else
        cout << "As pilhas formadas são diferentes: \n\n";

    cout << "\nPilha 1:\n";
    mostrar(&p1);
    cout << "\n\nPilha 2:\n";
    mostrar(&p2);

    quantPar(&p1, &p2);

    desalocar(&p1);
    desalocar(&p2);
}
void  quantPar(Pilha *p1, Pilha *p2){
    int valor, np1=0, np2=0;

    while(desempilhar(p1, &valor)){
        if(valor % 2 == 0)
            np1++;
    }
    while(desempilhar(p2, &valor)){
        if(valor % 2 == 0)
            np2++;
    }

    cout << "\n\nQuantidade de valores pares na pilha 1: " << np1;
    cout << "\nQuantidade de valores pares na pilha 2: " << np2 << endl;

}

void gera_pilhas(int menu, Pilha *p1, Pilha *p2){
    int n, tam;

    if(menu == 2){
        cout << "Informe o tamanho que as pilhas terão: ";
        cin >> tam;

        srand(time(NULL));
        for(int i=0; i<tam; i++){
            n = rand() % 10;
            empilhar(p1, n);
            n = rand() % 10;
            empilhar(p2, n);
        }
    }
    else{
        cout << "Preenchendo a pilha1: \n";
        do{
            cout << "\nInforme um valor inteiro(0 para parar): ";
            cin >> n;
            if(n != 0)
                empilhar(p1, n);
            if(vazia(p1))
                cout << "\nNão é possível deixar a pilha vazia!\n";
        }while(n!=0 || vazia(p1));

        system("cls");
        cout << "Preenchendo a pilha2: \n";
        do{
            cout << "\nInforme um valor inteiro(0 para parar): ";
            cin >> n;
            if(n != 0)
                empilhar(p2, n);

            if(vazia(p2))
                cout << "\nNão é possível deixar a pilha vazia!\n";
        }while(n!=0 || vazia(p2));
    }
}
