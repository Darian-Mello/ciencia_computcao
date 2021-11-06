#include <iostream>
#include <cstdlib>
#include <cctype>
#include <ctime>
#include <math.h>
using namespace std;

#include "pilha_string.hpp"

main(){
    setlocale(LC_ALL, "Portuguese");
    Pilha p, aux;
    int tam, menu;
    string valor, valor_aux;

    cout << "Informe a quantidade de cidades a serem cadastradas: ";
    cin >> tam;
    tam = fabs(tam);

    inicializa(&p, tam);
    inicializa(&aux, tam);

    for(int i=0; i<tam; i++){
        system("cls");
        cout << "Informe o código da primeira cidade: ";
        cin >> valor;

        empilhar(&p, valor);
    }

    do{
            do{
            system("cls");
            cout << "###########MENU###########";
            cout << "\n# 0 - Sair             #";
            cout << "\n# 1 - Mostrar          #";
            cout << "\n# 2 - Remover          #";
            cout << "\n########################";

            cout << "\nInforme a sua escolha: ";
            cin >> menu;
            if(menu < 0 || menu > 2){
                cout << "\nEssa opção não está presente no menu.\n";
                system("Pause");
            }
        }while(menu < 0 || menu > 2);
        system("cls");

        switch(menu){
        case 0:
            cout << "Programa finalizado!";
            break;
        case 1:
            mostrar(&p);
            break;
        default:
            cout << "Informe o codigo da cidade que deseja remover: ";
            cin >> valor;
            if(buscar(&p, valor)){
                do{
                    desempilhar(&p, &valor_aux);
                    empilhar(&aux, valor_aux);
                }while(valor_aux != valor);
                cout << "\n\nA cidade '" << valor << "' foi removida da pilha. ";
                desempilhar(&aux, &valor);

                while(desempilhar(&aux, &valor)){
                    empilhar(&p, valor);
                }
            }
            else
                cout << "Esse código não consta na lista.";
        }

        cout << "\n\n";
        system("Pause");
    }while(menu != 0);

    desalocar(&p);
    desalocar(&aux);
}


