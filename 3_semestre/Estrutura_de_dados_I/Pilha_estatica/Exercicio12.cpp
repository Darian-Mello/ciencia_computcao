#include <iostream>
#include <cstdlib>
#include <cctype>
#include <ctime>
#include <math.h>
using namespace std;

#include "pilha_caixa.hpp"

void cria_carga(Pilha *p, int *verifica);
void carregar(Pilha *p);
void descarregar(Pilha *p);
void mostrar_carga(Pilha *p);
void verificar(Pilha *p);

main(){
    setlocale(LC_ALL, "Portuguese");
    Pilha p;
    int verifica = 0;
    int menu, tam;

    do{
        do{
            system("cls");
            cout << "#################MENU################";
            cout << "\n# 0 - Sair                        #";
            cout << "\n# 1 - Definir uma carga           #";
            cout << "\n# 2 - Carregar caixa              #";
            cout << "\n# 3 - Descarregar caixa           #";
            cout << "\n# 4 - Mostar carga                #";
            cout << "\n# 5 - Consultar na carga          #";
            cout << "\n###################################";

            cout << "\nInforme a sua escolha: ";
            cin >> menu;
            if(menu < 0 || menu > 5){
                cout << "\nEssa op��o n�o est� presente no menu.\n";
                system("Pause");
            }
        }while(menu < 0 || menu > 5);
        system("cls");

        if(menu == 0){
            cout << "Programa finalizado.";
        }
        else if(verifica != 1 && menu != 1){
            cout << "\n� necess�rio definir uma carga!!";
        }
        else if(menu == 1){
            cria_carga(&p, &verifica);
        }
        else if(menu == 2){
            carregar(&p);
        }
        else if(menu == 3){
            descarregar(&p);
        }
        else if(menu == 4){
            mostrar_carga(&p);
        }
        else{
            verificar(&p);
        }

        cout << "\n\n";
        system("Pause");
    }while(menu != 0);

    desalocar(&p);
}

void cria_carga(Pilha *p, int *verifica){
    int tam;

    cout << "Os dados de cargas antigas ser�o perdidos. Tem certeza(0 - n�o, 1- sim)? ";
    cin >> *verifica;

    if(*verifica == 1){
        cout << "\nInforme a quantidade de caixas que ser�o carregadas: ";
        cin >> tam;

        desalocar(p);
        inicializa(p, tam);
    }
}

void carregar(Pilha *p){
    caixa c;
    string codi;
    float peso;

    cout << "Informe o c�digo da caixa: ";
    cin >> codi;
    cout << "\nInforme o peso da caixa: ";
    cin >> peso;

    c.cod = codi;
    c.peso = peso;

    if(empilhar(p, c))
        cout << "\n\nCarregamento efetuado.";
    else
        cout << "\n\nN�o � poss�vel carregar mais caixas. O carregamento deve estar cheio.";
}

void descarregar(Pilha *p){
    caixa c;
    if(desempilhar(p, &c)){
        cout << "Caixa desempilhada: ";
        cout << "\nC�digo: " << c.cod;
        cout << "\nPeso: " << c.peso;
    }
    else{
        cout << "\n\nO descarregamento ja est� completo. ";
    }
}

void mostrar_carga(Pilha *p){
    mostrar(p);
}

void verificar(Pilha *p){
    string cod;

    cout << "Informe o c�digo da caixa: ";
    cin >> cod;

    if(buscar(p, cod))
        cout << "\n\nEssa caixa est� no carregamento.";
    else
        cout << "\n\nEssa caixa n�o est� no carregamento.";
}
