#include <iostream>
#include <cstdlib>
#include <cstring>
#include <fstream>

using namespace std;

void leitura();

main(){
    setlocale(LC_ALL, "Portuguese");
    int menu;

    do{
        system("cls");
        cout << "MENU" << endl;
        cout << "0 - Sair" << endl;
        cout << "1 - Ler arquivo" << endl;
        cout << "Sua escolha: ";
        cin >> menu;
        fflush(stdin);
    }while(menu < 0 || menu > 1);

    system("cls");

    if(menu == 0)
        cout << "Programa finalizado.";
    else {
        leitura();
    }

    fflush(stdin);
    getchar();
}

void leitura(){
    ifstream arquivo;
    string nome;
    char c;
    int cont = 0;

    cout << "\nInforme o endereço do arquivo que deseja abrir: ";
    getline(cin, nome);

    arquivo.open(nome);
    if(!arquivo.is_open()){
        cout << "\n\nO arquivo não pode ser encontrado!";
    }
    else{
        system("cls");
        cout << "Conteúdo do arquivo informado: \n\n";

        while(arquivo.get(c)){
            cout << c;
            if(c != '\n')
                cont++;
        }

        cout << "\n\nEste arquivo possui " << cont << " caracteres.";
    }

    arquivo.close();
}
