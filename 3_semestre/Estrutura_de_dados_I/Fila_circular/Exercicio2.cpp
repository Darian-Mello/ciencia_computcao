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
            cout << "\n1 - Definir Nº de aviões à espera de decolar";
            cout << "\n2 - Entrada de um novo avião para decolar";
            cout << "\n3 - Descolagem de um avião ";
            cout << "\n4 - Listar todos os aviões à espera para decolagem";
            cout << "\n5 - Listar as características do próximo avião a decolar";
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
            cout << "É necessário informar uma quantidade de aviões!";
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
        cout << "Os aviões antigos serão perdidos. Tem certeza que deseja informar outro número de aviões(1 - sim, 2- não)";
        cin >> vai;
        system("cls");
    }
    if(vai == 1){
        cout << "Informe a quantidade de aviões que podem estar na fila: ";
        cin >> tam;

        inicializaF(fi, tam);
        cout << "\n\nO número de aviões foi definido.";
        *existe = true;
    }
}

void Entrada(Fila *fi){
    aviao av;

    cout << "Informe o código do avião: ";
    cin >> av.cod;
    cout << "Informe a empresa do avião: ";
    fflush(stdin);
    getline(cin, av.empresa);
    cout << "Informe o número de passageiros do avião: ";
    cin >> av.passageiros;

    if(enfileirarF(fi, av))
        cout << "\n\nO avião foi adicionado a fila";
    else
        cout << "\n\nNão foi possível adicionar o avião! A fila está cheia.";
}

void decolagem(Fila *fi){
    aviao av;

    if(!desenfileirarF(fi, &av))
        cout << "Todos os aviões já decolaram.";
    else{
        cout << "Um avião decolou:\n";
        cout << "\nCódigo: " << av.cod;
        cout << "\nEmpresa: " << av.empresa;
        cout << "\nCapacidade de passageiros: " << av.passageiros;
    }
}

void listar(Fila *fi){
    if(vaziaF(fi))
        cout << "Não há nenhum avião na fila.";
    else
        mostraF(fi);
}

void proximo(Fila *fi){
    aviao av;

    if(espiarF(fi, &av)){
        cout << "Próximo avião:\n";
        cout << "\nCódigo: " << av.cod;
        cout << "\nEmpresa: " << av.empresa;
        cout << "\nCapacidade de passageiros: " << av.passageiros;
    }
    else
        cout << "Não há nenhum avião na fila.";
}

