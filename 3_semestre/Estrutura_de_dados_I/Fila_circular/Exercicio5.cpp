#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cmath>

using namespace std;

#include "filacircular.hpp"
#include "pilha.hpp"

void InserePilha(Pilha *p);
bool VerificaPrimo(int valor);

main(){
    setlocale(LC_ALL, "Portuguese");
    Pilha numeros;
    Fila primos, par, impar;
    int menu, tam, valor;

    cout << "Informe um tamanho para a Pilha: ";
    cin >> tam;
    tam = fabs(tam);

    inicializa(&numeros, tam);
    inicializaF(&primos, tam);
    inicializaF(&par, tam);
    inicializaF(&impar, tam);

    do{
        do{
            system("cls");
            cout << "-------------------------------MENU---------------------------------";
            cout << "\n0 - Sair";
            cout << "\n1 - Incluir na pilha";
            cout << "\n2 - Remover da pilha";
            cout << "\n3 - Mostrar pilha";
            cout << "\n4 - Mostrar as filas (Primos/Pares/Ímpares)";
            cout << "\n---------------------------------------------------------------------";
            cout << "\n Sua escolha: ";
            cin >> menu;

            if(menu < 0 || menu > 4){
                cout << "\n\nEssa opcao nao consta no menu.";
                system("Pause");
            }
        }while(menu < 0 || menu > 4);
        system("cls");

        if(menu == 0)
            cout << "Programa finalizado.";
        else if(menu == 1)
            InserePilha(&numeros);
        else if(menu == 2){
            if(desempilhar(&numeros, &valor)){
                cout << "Um valor foi desempilhado e enfileirado adequadamente: " << valor;
                if(VerificaPrimo(valor))
                    enfileiraF(&primos, valor);
                if(valor % 2 == 0)
                    enfileiraF(&par, valor);
                else
                    enfileiraF(&impar, valor);
            }
            else
                cout << "Não foi possível desempilhar, a pilha está vazia.";
        }
        else if(menu == 3)
            mostrar(&numeros);
        else{
            cout << "Fila dos valores primos: ";
            mostraF(&primos);
            cout << "\n\nFila dos valores pares: ";
            mostraF(&par);
            cout << "\n\nFila dos valores ímpares: ";
            mostraF(&impar);
        }

        cout << "\n\n";
        system("Pause");
    }while(menu != 0);

    destroiF(&par);
    destroiF(&impar);
    desalocar(&numeros);
}

void InserePilha(Pilha *p){
    int valor;

    cout << "Informe um valor positivo para empilhar: ";
    cin >> valor;
    valor = fabs(valor);

    if(empilhar(p, valor))
        cout << "Valor empilhado com sucesso!";
    else
        cout << "Não foi possível empilhar o valor. A pilha está cheia";
}

bool VerificaPrimo(int valor){
    for(int i=valor-1; i>1; i--){
        if(valor % i == 0){
            return false;
        }
    }
    return true;
}
