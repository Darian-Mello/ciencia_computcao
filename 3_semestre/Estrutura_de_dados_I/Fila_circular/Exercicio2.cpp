#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

#include "FilaCircular_aviao.hpp"

void Cria_Fila(Fila *fi, bool *existe);
void Entrada(Fila *fi);
void decolagem(Fila *fi);
void listar(Fila *fi);
void proximo(Fila *fi);

main(){
    setlocale(LC_ALL, "Portuguese");
    Fila fi;
    int menu;
    bool existe = false;

    do{
        do{
            system("cls");
            cout << "-------------------------------MENU---------------------------------";
            cout << "\n0 - Sair";
            cout << "\n1 - Definir N� de avi�es � espera de decolar";
            cout << "\n2 - Entrada de um novo avi�o para decolar";
            cout << "\n3 - Descolagem de um avi�o ";
            cout << "\n4 - Listar todos os avi�es � espera para decolagem";
            cout << "\n5 - Listar as caracter�sticas do pr�ximo avi�o a decolar";
            cout << "\n---------------------------------------------------------------------";
            cout << "\n Sua escolha: ";
            cin >> menu;

            if(menu < 0 || menu > 5){
                cout << "\n\nEssa opcao nao consta no menu.";
                system("Pause");
            }
        }while(menu < 0 || menu > 5);
        system("cls");

        if(menu == 0)
            cout << "Programa finalizado.";
        else if(menu != 1 && existe == false)
            cout << "� necess�rio informar uma quantidade de avi�es!";
        else if(menu == 1)
            Cria_Fila(&fi, &existe);
        else if(menu == 2)
            Entrada(&fi);
        else if(menu == 3)
            decolagem(&fi);
        else if(menu == 4)
            listar(&fi);
        else
            proximo(&fi);

        cout << "\n\n";
        system("Pause");
    }while(menu != 0);

    destroiF(&fi);
}

void Cria_Fila(Fila *fi, bool *existe){
    int vai = 1, tam;

    if(*existe == true){
        cout << "Os avi�es antigos ser�o perdidos. Tem certeza que deseja informar outro n�mero de avi�es(1 - sim, 2- n�o)";
        cin >> vai;
        system("cls");
    }
    if(vai == 1){
        cout << "Informe a quantidade de avi�es que podem estar na fila: ";
        cin >> tam;

        inicializaF(fi, tam);
        cout << "\n\nO n�mero de avi�es foi definido.";
        *existe = true;
    }
}

void Entrada(Fila *fi){
    aviao av;

    cout << "Informe o c�digo do avi�o: ";
    cin >> av.cod;
    cout << "Informe a empresa do avi�o: ";
    fflush(stdin);
    getline(cin, av.empresa);
    cout << "Informe o n�mero de passageiros do avi�o: ";
    cin >> av.passageiros;

    if(enfileirarF(fi, av))
        cout << "\n\nO avi�o foi adicionado a fila";
    else
        cout << "\n\nN�o foi poss�vel adicionar o avi�o! A fila est� cheia.";
}

void decolagem(Fila *fi){
    aviao av;

    if(!desenfileirarF(fi, &av))
        cout << "Todos os avi�es j� decolaram.";
    else{
        cout << "Um avi�o decolou:\n";
        cout << "\nC�digo: " << av.cod;
        cout << "\nEmpresa: " << av.empresa;
        cout << "\nCapacidade de passageiros: " << av.passageiros;
    }
}

void listar(Fila *fi){
    if(vaziaF(fi))
        cout << "N�o h� nenhum avi�o na fila.";
    else
        mostraF(fi);
}

void proximo(Fila *fi){
    aviao av;

    if(espiarF(fi, &av)){
        cout << "Pr�ximo avi�o:\n";
        cout << "\nC�digo: " << av.cod;
        cout << "\nEmpresa: " << av.empresa;
        cout << "\nCapacidade de passageiros: " << av.passageiros;
    }
    else
        cout << "N�o h� nenhum avi�o na fila.";
}

