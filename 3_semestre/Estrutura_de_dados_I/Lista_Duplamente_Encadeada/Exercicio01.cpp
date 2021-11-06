#include <iostream>
#include <stdlib.h>
#include <cstring>

using namespace std;

#include "lista_animais.hpp"

void InsereAnimal(Lista *lista);
void RemoveAnimal(Lista *lista);

main(){
    setlocale(LC_ALL, "Portuguese");
    char menu;
    Lista *lista = new Lista();

    do{
        system("cls");
        cout << "--------------------MENU--------------------";
        cout << "\nA - Inserir um animal: ";
        cout << "\nB - Mostrar animais da lista: ";
        cout << "\nC - Descrever lista de animais: ";
        cout << "\nD - Remover um animal da lista: ";
        cout << "\nE - Mostrar os animais por ordem de chegada: ";
        cout << "\nF - Mostrar os tres ultimos animais da lista: ";
        cout << "\nG - Fun��o para separar a lista em duas novas listas, com base no peso do animal: ";
        cout << "\nZ - SAIR";
        cout << "\n--------------------------------------------";
        cout << "\nSua escolha: ";
        cin >> menu;
        menu = toupper(menu);
        system("cls");

        if(menu == 'A'){
            InsereAnimal(lista);
        }
        else if(menu == 'B'){
            cout << "Todos os animais cadastrados:\n\n" << lista;
        }
        else if(menu == 'C'){
            DescreveL(lista);
        }
        else if(menu == 'D'){
            RemoveAnimal(lista);
        }
        else if(menu == 'E'){
            mostrarInversoL(lista);
        }
        else if(menu == 'E'){
            mostrarInversoL(lista);
        }
        else if(menu == 'F'){
            if(vaziaL(lista))
                cout << "A lista est� vazia.";
            else {
                cout << "Os �ltimos animais da lista: \n\n";
                mostrarTresUltimos(lista);
            }
        }
        else if(menu == 'G'){
            SeparaLista(lista);
        }
        else if(menu == 'Z'){
            delete(lista);
            cout << "Programa finalizado.";
        }
        else
            cout << "Essa op��o n�o est� presente no menu.";

        cout << "\n\n";
        system("pause");
    }while(menu != 'Z');
}

void InsereAnimal(Lista *lista){
    Animal a;

    cout << "Informe o peso do animal: ";
    cin >> a.peso;
    cout << "Informe a idade do animal: ";
    cin >> a.idade;

    if(vaziaL(lista))
        a.codigo = 1;
    else{
        int cod = lista->inicio->dado.codigo;
        a.codigo = ++cod;
    }

    if(insereInicioL(lista, a))
        cout << "\n\nAnimal inserido com sucesso!";
    else
        cout << "\n\nN�o foi poss�vel inserir o animal. N�o h� espa�o na mem�ria!";
}

void RemoveAnimal(Lista *lista){
    int valor;

    cout << "Informe o codigo do aniomal que deseja remover: ";
    cin >> valor;

    if(removeL(lista, valor))
        cout << "\n\nO animal foi removido com sucesso.";
    else
        cout << "\n\nO c�digo informado n�o foi encontrado.";
}
