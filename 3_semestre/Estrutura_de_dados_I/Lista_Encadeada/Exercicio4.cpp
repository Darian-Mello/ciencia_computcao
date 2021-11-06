#include <iostream>
#include <stdlib.h>
#include <cstring>
using namespace std;

#include "listaChar.hpp";

main(){
    setlocale(LC_ALL, "Portuguese");
    No* lista;
    char menu;
    string frase;

    inicializaL(&lista);

     do{
        system("cls");
        cout << "------------------------MENU------------------------";
        cout << "\n0 - Sair;";
        cout << "\n1 - Inserir uma nova frase;";
        cout << "\n2 - Mostrar list de caractere da frase;";
        cout << "\n3 - Mostrar lista de caractere da frase ao contrario;";
        cout << "\n----------------------------------------------------";
        cout << "\nSua escolha: ";
        cin >> menu;
        system("cls");

        if(menu == '0'){
            cout << "Programa finalizado.";
            destroiL(&lista);
        }
        else if(menu == '1'){
            destroiL(&lista);
            inicializaL(&lista);
            cout << "Informe uma frase: ";
            fflush(stdin);
            getline(cin, frase);

            for(int i=0; i<frase.size(); i++){
                insereFinal(&lista, frase[i]);
            }
            cout << "\nFrase atualizada com sucesso.";
        }
        else if(menu == '2'){
            mostraL(&lista);
        }
        else if(menu == '3'){
            No *aux;
            while(lista){
                insereL(&aux, lista->dado);
                lista = lista->prox;
            }
            //Optei em fazer dessa forma para aproveitar aformatação da lista na função mostraL();
            mostraL(&aux);
            destroiL(&aux);
        }
        else
            cout << "Essa opção não está presente no menu";

    cout << "\n\n";
    system("pause");
    }while(menu != '0');
}


