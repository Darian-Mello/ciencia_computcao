#include <iostream>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <string>

using namespace std;

void cadastrar();
void mostrar();
void consultar();

main(){
    setlocale(LC_ALL, "Portuguese");
    int menu;

    do{
        do{
            system("cls");
            cout << "MENU" << endl;
            cout << "0 - Sair" << endl;
            cout << "1 – Cadastrar" << endl;
            cout << "2 – Mostrar" << endl;
            cout << "3 – Consultar" << endl;
            cout << "\nSua escolha: ";
            cin >> menu;
            fflush(stdin);
        }while(menu < 0 || menu > 3);

        system("cls");

        if(menu == 0)
            cout << "Programa finalizado.";
        else if(menu == 1){
            cadastrar();
        }
        else if(menu == 2){
            mostrar();
        }
        else{
            consultar();
        }

        fflush(stdin);
        getchar();
    }while(menu != 0);
}

void cadastrar(){
    ofstream cadastro("cadastro.txt", ios::app);
    string nome;

    cout << "*****Adição de nomes ao arquivo*****\n\n";
    cout << "Informe o nome completo de uma pessoa: ";
    getline(cin, nome);

    cadastro << nome << endl;

    system("cls");
    cout << "Nome adicionado!";

    cadastro.close();
}

void mostrar(){
    ifstream cadastro("cadastro.txt");
    string nome;

    if(!cadastro.is_open()){
        cout << "Erro ao abrir o arquivo.";
    }
    else{
        cout << "Nomes presentes no arquivo: \n\n";
        while(getline(cadastro, nome)){
            cout << nome << endl;
        }
        cadastro.close();
    }
}

void consultar(){
    ifstream cadastro("cadastro.txt");
    string nome, consulta;
    bool achou = false;
    int repete = 0;

    if(!cadastro.is_open()){
        cout << "Erro ao abrir o arquivo.";
    }
    else{
        cout << "Informe o nome que deseja verificar: ";
        getline(cin, consulta);

        while(getline(cadastro, nome)){
            if(nome == consulta){
                repete++;
                achou = true;
            }
        }

        if(achou == true){
            cout << "\n\nO nome informado está presente no arquivo.\n";
            cout << "Se repete " << repete << " vez(es).";
        }
        else
            cout << "\n\nO nome informado não está presente no arquivo.\n";

        cadastro.close();
    }
}


