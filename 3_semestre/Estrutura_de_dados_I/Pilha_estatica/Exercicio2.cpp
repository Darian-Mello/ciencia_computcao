#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

#include "pilha.hpp"

int main(void){
    setlocale(LC_ALL, "Portuguese");
    Pilha pil;
    int menu, tam, valor;
    bool Existe_Pilha = false;

    do{
            do{
            system("cls");
            cout << "###########MENU###########";
            cout << "\n# 0 - Sair               #";
            cout << "\n# 1 - Criar pilhar       #";
            cout << "\n# 2 - Inserir            #";
            cout << "\n# 3 - Remover            #";
            cout << "\n# 4 - Consultar          #";
            cout << "\n# 5 - Mostrar            #";
            cout << "\n##########################";

            cout << "\nInforme a sua escolha: ";
            cin >> menu;
            if(menu < 0 || menu > 5){
                cout << "\nEssa opção não está presente no menu.\n";
                system("Pause");
            }
        }while(menu < 0 || menu > 5);

        system("cls");
        if(menu == 0){
            cout << "Programa Finalizado.\n";
            desalocar(&pil);
        }

        else if(Existe_Pilha == false && menu != 1){
            cout << "É necessário criar uma pilha!!";
        }

        else if(menu == 1){
            if(Existe_Pilha == true){
                desalocar(&pil);
            }
            cout << "Informe o tamanho da Pilha: ";
            cin >> tam;
            tam = fabs(tam);

            inicializa(&pil, tam);
            cout << "\n\nUma nova Pilha foi inicializada.";
            Existe_Pilha = true;
        }

        else if(menu == 2){
            cout << "Informe um valor a ser empilhado: ";
            cin >> valor;
            if(buscar(&pil, valor)){
                cout << "\n\nEsse valor já existe na pilha";
            }
            else{
                if(empilhar(&pil, valor)){
                    cout << "\n\nValor empilhado com sucesso.";
                }
                else{
                    if(cheia(&pil))
                        cout << "\n\nNão é possível empilhar mais valores, a pilha está cheia.";
                    else
                        cout << "\n\nA pilha não foi inicializada. ";
                }
            }
        }

        else if(menu == 3){
            if(desempilhar(&pil, &valor)){
                cout << "Um valor foi desempilhado: " << valor;
            }
            else{
                if(vazia(&pil))
                    cout << "\n\nNão é possível desempilhar valores, a pilha está vazia.";
                else
                    cout << "\n\nA pilha não foi inicializada. ";
            }
        }

        else if(menu == 4){
            cout << "Informe um valor a ser consultado: ";
            cin >> valor;
            if(buscar(&pil, valor))
                cout << "\n\nO valor existe na Pilha!!";
            else
                cout << "\n\nO valor não existe na Pilha!!";
        }

        else{
            if(vazia(&pil)){
                cout << "A pilha não foi inicializada, ou está vazia.";
            }
            else{
                mostrar(&pil);
            }
        }

        cout << "\n\n";
        system("Pause");
    }while(menu != 0);
}
